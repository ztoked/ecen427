#include "xgpio.h"          // Provides access to PB GPIO driver.
#include <stdio.h>          // xil_printf and so forth.
#include "platform.h"       // Enables caching and other system stuff.
#include "mb_interface.h"   // provides the microblaze interrupt enables, etc.
#include "xintc_l.h"        // Provides handy macros for the interrupt controller.
#include <stdint.h>

#define MAX_MINUTES 59 //Max minutes a clock can show
#define MIN_MINUTES 0 //Min minutes a clock can show
#define MIN_HOURS 1 //Min hours a clock can show
#define MAX_HOURS 12 //Max hours a clock can show
#define MAX_SECONDS 59//Max seconds a clock can show
#define MIN_SECONDS 0//The min seconds a clock can show
#define BASE_FOR_TIME 60//The base used for telling time
#define BASE_FOR_HOURS 13//The base used for tracking hours
#define DEBOUNCE_TICKS 5//Number of ticks to debounce for
#define TICKS_PER_SECOND 100//Number of times the timer isr is called per second
#define AUTO_INCREMENT_DELAY_TICKS 50//Ticks between auto increments when holding button down
#define PENULTIMATE_DEBOUNCE_COUNT 1//The second to last count of the debounce counter
#define INCREMENT_BUTTON_MASK 0x10//Mask for inc button
#define DECREMENT_BUTTON_MASK 0x04//Mask for dec button
#define ONLY_HOUR_MIN_SEC_MASK 0x0b//Mask to get only the hours min sec buttons
#define MINUTES_BIT 0x01//Value of the minutes bit
#define SECONDS_BIT 0x02//Value of the seconds bit
#define HOURS_BIT 0x08//Value of the hours bit
#define TIME_FORMAT_STRING "\r%02d:%02d:%02d"//Format string for time

XGpio gpLED;  // This is a handle for the LED GPIO block.
XGpio gpPB;   // This is a handle for the push-button GPIO block.

static uint16_t countBeforeAutoIncrement = 0;//Countup before starting to auto increment
static uint16_t countBetweenAutoIncrements = 0;//Countup between auto increments

static uint16_t hours = MIN_HOURS;//Store current hours
static uint16_t minutes = 0;//Store current minutes
static uint16_t seconds = 0;//Store current seconds

static uint16_t timerCount = 0;//Countup before incrementing the clock's second position

static uint32_t currentButtonState = 0;//Current state of the buttons
static uint32_t currentButtonStateDebounced = 0;//Current state of the buttons after debouncing

static uint8_t debounceCount = DEBOUNCE_TICKS;//Countdown before button input is considered debounced

//Helper function for inc/dec minutes
static void updateMinutes()
{
	//If inc button is pressed
	if(currentButtonStateDebounced & INCREMENT_BUTTON_MASK)
	{
		minutes++;//Inc minutes
		minutes = (minutes) %BASE_FOR_TIME;//Mod to get in appropriate range
	}
	else if(currentButtonStateDebounced & DECREMENT_BUTTON_MASK)//If dec button is pressed
	{
		if(minutes > MIN_MINUTES)//If we're not at the lowest possible value
		{
			minutes--;//Just decrement
		}
		else
		{
			minutes = MAX_MINUTES;//Otherwise jump back up to the maximum value
		}
	}
}

//Helper function for inc/dec hours
static void updateHours()
{
	//If inc button is pressed
	if(currentButtonStateDebounced & INCREMENT_BUTTON_MASK)
	{
		hours++;
		hours = (hours % BASE_FOR_HOURS);//Mod to get in appropriate range
		if(!hours)
			hours = MIN_HOURS;
	}
	else if(currentButtonStateDebounced & DECREMENT_BUTTON_MASK)//If dec button is pressed
	{
		if(hours > MIN_HOURS)//If we're not at the lowest possible value
		{
			hours--;//Just decrement
		}
		else
		{
			hours = MAX_HOURS;//Otherwise jump back up to the maximum value
		}
	}
}

//Helper function for inc/dec seconds
static void updateSeconds()
{
	//If inc button is pressed
	if(currentButtonStateDebounced & INCREMENT_BUTTON_MASK)
	{
        //increment seconds
		seconds++;
		seconds = (seconds) %BASE_FOR_TIME;//Mod to get in appropriate range
	}
	else if(currentButtonStateDebounced & DECREMENT_BUTTON_MASK)//If dec button is pressed
	{
		if(seconds > MIN_MINUTES)//If we're not at the lowest possible value
		{
			seconds--;//Just decrement
		}
		else
		{
			seconds = MAX_MINUTES;//Otherwise jump back up to the maximum value
		}
	}
}

//This function determines which set button is being held and calls the appropriate helper function
//This function should be called every time you want the users input to set the time to take effect
static void updateTime()
{
	//Determine if minutes button is being pressed
	if(currentButtonStateDebounced & MINUTES_BIT)
	{
		updateMinutes();//Call corresponding helper function
	}
    //Determine if seconds button is being pressed
	if(currentButtonStateDebounced & SECONDS_BIT)
	{
		updateSeconds();//Call corresponding helper function
	}
    //Determine if hours button is being pressed
	if(currentButtonStateDebounced & HOURS_BIT)
	{
		updateHours();//Call corresponding helper function
	}
}

//This function simply increments the time by one second
//This function is meant to be called every 10ms and will
//handle dividing 10ms to get one second internally.
static void incrementTime()
{
	//First increment the timer count. If it's not expired yet then it has not been a whole second so
	//do nothing.
	timerCount++;
	//If the counter has expired...
	if(timerCount == TICKS_PER_SECOND)
	{
		//Reset the timer
		timerCount = 0;
		//Increment the time by one second
		seconds++;
	}
	//Now deal with rolling over
	if(seconds == BASE_FOR_TIME)//If seconds rolled over
	{
		minutes++;//Increment the minutes by one
		seconds = MIN_SECONDS;//Reset the seconds back to the bottom
	}
	if(minutes == BASE_FOR_TIME)//If minutes rolled over
	{
		hours++;//Increment the hours by one
		minutes = MIN_MINUTES;//Reset the minutes back to the bottom
	}
	if(hours == BASE_FOR_HOURS)//If hours rolled over
	{
		hours = MIN_HOURS;//Just reset the hours (sec and min were already reset in previous two if blocks)
	}
}

// This is invoked in response to a timer interrupt.
// It does 2 things: 1) debounce switches, and 2) advances the time.
void timer_interrupt_handler() {
	xil_printf(TIME_FORMAT_STRING, hours, minutes, seconds);

	//If none of the buttons are pressed then we are ok to increment the time.
	if(!currentButtonStateDebounced)
	{
        //This function will increment time depending on how many hours and minutes and seconds there already are
		incrementTime();
	}

	//If the debounce counter is running
	if(debounceCount != 0)
	{
		//If the denounce counter is on the last count.
		if(debounceCount == PENULTIMATE_DEBOUNCE_COUNT)
		{
			currentButtonStateDebounced = currentButtonState;//Set the switched debounce state
			updateTime();//Update the time
			//Note: we only do this once per button press (which is why it is only done on the last count of the debounce count)
		}
		//Otherwise just decrement the debounce counter
		debounceCount--;
	}

	//This is the code for auto incrementing.
	//If any button is pressed and the decounce counter is done running...
	if(currentButtonStateDebounced != 0 && debounceCount == 0)
	{
		//If it has not been a full second
		if(countBeforeAutoIncrement < TICKS_PER_SECOND)
		{
			countBeforeAutoIncrement++;//Don't start the auto increment proccess yet, keep counting
		}
		else//It's been a full second - start the auto increment proccess
		{
			if(countBetweenAutoIncrements < AUTO_INCREMENT_DELAY_TICKS)//If it has not been half a second
			{
				countBetweenAutoIncrements++;//We can not auto increment yet, just keep counting
			}
			else//It's been a half second so perform an auto increment
			{
				countBetweenAutoIncrements = 0;//Reset the timer
				updateTime();//Perform auto increment
			}
		}
	}
	else//If we're not auto incrementing
	{
		countBeforeAutoIncrement = 0;//Reset the auto increment timer
	}

}

// This is invoked each time there is a change in the button state (result of a push or a bounce).
void pb_interrupt_handler() {
	// Clear the GPIO interrupt.
	XGpio_InterruptGlobalDisable(&gpPB);                // Turn off all PB interrupts for now.
	currentButtonState = XGpio_DiscreteRead(&gpPB, 1);  // Get the current state of the buttons.

	debounceCount = DEBOUNCE_TICKS;//Set the debounce counter

	XGpio_InterruptClear(&gpPB, 0xFFFFFFFF);            // Ack the PB interrupt.
	XGpio_InterruptGlobalEnable(&gpPB);                 // Re-enable PB interrupts.
}

// Main interrupt handler, queries the interrupt controller to see what peripheral
// fired the interrupt and then dispatches the corresponding interrupt handler.
// This routine acks the interrupt at the controller level but the peripheral
// interrupt must be ack'd by the dispatched interrupt handler.
// Question: Why is the timer_interrupt_handler() called after ack'ing the interrupt controller
// but pb_interrupt_handler() is called before ack'ing the interrupt controller?
void interrupt_handler_dispatcher(void* ptr)
{
	int intc_status = XIntc_GetIntrStatus(XPAR_INTC_0_BASEADDR);
	// Check the FIT interrupt first.
	if (intc_status & XPAR_FIT_TIMER_0_INTERRUPT_MASK){
		XIntc_AckIntr(XPAR_INTC_0_BASEADDR, XPAR_FIT_TIMER_0_INTERRUPT_MASK);
		timer_interrupt_handler();
	}
	// Check the push buttons.
	if (intc_status & XPAR_PUSH_BUTTONS_5BITS_IP2INTC_IRPT_MASK){
		pb_interrupt_handler();
		XIntc_AckIntr(XPAR_INTC_0_BASEADDR, XPAR_PUSH_BUTTONS_5BITS_IP2INTC_IRPT_MASK);
	}
}

//This is the main function that the system will call first
int main (void)
{
    init_platform();
    // Initialize the GPIO peripherals.
    int success;
    success = XGpio_Initialize(&gpPB, XPAR_PUSH_BUTTONS_5BITS_DEVICE_ID);
    // Set the push button peripheral to be inputs.
    XGpio_SetDataDirection(&gpPB, 1, 0x0000001F);
    // Enable the global GPIO interrupt for push buttons.
    XGpio_InterruptGlobalEnable(&gpPB);
    // Enable all interrupts in the push button peripheral.
    XGpio_InterruptEnable(&gpPB, 0xFFFFFFFF);

    microblaze_register_handler(interrupt_handler_dispatcher, NULL);
    XIntc_EnableIntr(XPAR_INTC_0_BASEADDR,
    		(XPAR_FIT_TIMER_0_INTERRUPT_MASK | XPAR_PUSH_BUTTONS_5BITS_IP2INTC_IRPT_MASK));
    XIntc_MasterEnable(XPAR_INTC_0_BASEADDR);
    microblaze_enable_interrupts();

    while(1);  // Program never ends.

    cleanup_platform();

    return 0;
}

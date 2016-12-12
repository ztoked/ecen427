#include "stdint.h"

//Initializes the PIT driver
void thePITS_init();

//Sets the value that the PIT timer counts down from
void thePITS_setTicksCountDownFrom(uint32_t tickToCountDownFrom);

//Sets/Clears the counter enable bit in the PIT
void thePITS_setCountEnableDisable(uint8_t enabled);

//Sets/Clears the interrupt enable bit in the PIT
void thePITS_setInterruptsEnableDisable(uint8_t enabled);

//Sets/Clears the reload enable bit in the PIT
void thePITS_setReloadEnableDisable(uint8_t enabled);


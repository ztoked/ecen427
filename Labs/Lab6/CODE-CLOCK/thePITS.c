#include "thePITS.h"
#include "xparameters.h"
#include "xil_io.h"
#define ONCE_SECOND 100000000

#define COUNT_UP_TO_REGISTER XPAR_PIT_0_BASEADDR
#define CONFIG_REGISTER XPAR_PIT_0_BASEADDR + 4


void thePITS_init(){
	Xil_Out32(COUNT_UP_TO_REGISTER, ONCE_SECOND);
	Xil_Out32(CONFIG_REGISTER, 0xffffffff);
}

void thePITS_setTicksCountDownFrom(uint32_t tickToCountDownFrom){
	Xil_Out32(COUNT_UP_TO_REGISTER, tickToCountDownFrom );
}

void thePITS_setCountEnableDisable(uint8_t enabled){
	uint32_t prevRegVal = Xil_In32(CONFIG_REGISTER);
	if(enabled){
		Xil_Out32(CONFIG_REGISTER, prevRegVal | 1 );
	}else{
		Xil_Out32(CONFIG_REGISTER, prevRegVal & ~1 );
	}
}

void thePITS_setInterruptsEnableDisable(uint8_t enabled){
	uint32_t prevRegVal = Xil_In32(CONFIG_REGISTER);
	if(enabled){
		Xil_Out32(CONFIG_REGISTER, prevRegVal | (1 << 1) );
	}else{
		Xil_Out32(CONFIG_REGISTER, prevRegVal & ~(1 << 1) );
	}
}

void thePITS_setReloadEnableDisable(uint8_t enabled){
	uint32_t prevRegVal = Xil_In32(CONFIG_REGISTER);
	if(enabled){
		Xil_Out32(CONFIG_REGISTER, prevRegVal | (1 << 2) );
	}else{
		Xil_Out32(CONFIG_REGISTER, prevRegVal & ~(1 << 2) );
	}
}

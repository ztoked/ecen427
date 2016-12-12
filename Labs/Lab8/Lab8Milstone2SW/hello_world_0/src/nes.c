#include "nes.h"
#include "xparameters.h"
#include "xil_io.h"

//Reads the buttons register of the NES controller
uint32_t nes_readButtons(){
	return Xil_In32(XPAR_NES_CONTROLLER_0_BASEADDR);
}

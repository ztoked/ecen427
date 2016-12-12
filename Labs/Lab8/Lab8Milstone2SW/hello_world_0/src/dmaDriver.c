#include "dmaDriver.h"
#include "xparameters.h"

//Init called before anything else
void dmaDriver_setReadAddr(uint32_t addr) {
	Xil_Out32(XPAR_DMA_0_BASEADDR + 4, addr);//Init called before anything else
}

//Sets address to write to
void dmaDriver_setWriteAddr(uint32_t addr){
	Xil_Out32(XPAR_DMA_0_BASEADDR + 8, addr);//Sets address to write to
}

//Sets the length of the buffer to copy
void dmaDriver_setDataLength32Bit(uint32_t addr){
	Xil_Out32(XPAR_DMA_0_BASEADDR, addr);//Sets the length of the buffer to copy
}


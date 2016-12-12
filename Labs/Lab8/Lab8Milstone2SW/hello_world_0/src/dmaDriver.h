#include "xil_io.h"
#include <stdint.h>
//Init called before anything else
void dmaDriver_setReadAddr(uint32_t addr);

//Sets address to write to
void dmaDriver_setWriteAddr(uint32_t addr);

//Sets the length of the buffer to copy
void dmaDriver_setDataLength32Bit(uint32_t addr);

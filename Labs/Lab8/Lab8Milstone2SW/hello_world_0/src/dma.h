/*****************************************************************************
* Filename:          E:\427\Lab8\HardWare/drivers/dma_v1_00_a/src/dma.h
* Version:           1.00.a
* Description:       dma Driver Header File
* Date:              Mon Dec 05 15:24:10 2016 (by Create and Import Peripheral Wizard)
*****************************************************************************/

#ifndef DMA_H
#define DMA_H

/***************************** Include Files *******************************/

#include "xbasic_types.h"
#include "xstatus.h"
#include "xil_io.h"

/************************** Constant Definitions ***************************/


/**
 * User Logic Slave Space Offsets
 * -- SLV_REG0 : user logic slave module register 0
 * -- SLV_REG1 : user logic slave module register 1
 * -- SLV_REG2 : user logic slave module register 2
 * -- SLV_REG3 : user logic slave module register 3
 */
#define DMA_USER_SLV_SPACE_OFFSET (0x00000000)
#define DMA_SLV_REG0_OFFSET (DMA_USER_SLV_SPACE_OFFSET + 0x00000000)
#define DMA_SLV_REG1_OFFSET (DMA_USER_SLV_SPACE_OFFSET + 0x00000004)
#define DMA_SLV_REG2_OFFSET (DMA_USER_SLV_SPACE_OFFSET + 0x00000008)
#define DMA_SLV_REG3_OFFSET (DMA_USER_SLV_SPACE_OFFSET + 0x0000000C)

/**
 * User Logic Master Space Offsets
 * -- MST_CNTL_REG : user logic master module control register
 * -- MST_STAT_REG : user logic master module status register
 * -- MST_ADDR_REG : user logic master module address register
 * -- MST_BE_REG   : user logic master module byte enable register
 * -- MST_LEN_REG  : user logic master module length (data transfer in bytes) register
 * -- MST_GO_PORT  : user logic master module go bit (to start master operation)
 */
#define DMA_USER_MST_SPACE_OFFSET (0x00000100)
#define DMA_MST_CNTL_REG_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x00000000)
#define DMA_MST_STAT_REG_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x00000001)
#define DMA_MST_ADDR_REG_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x00000004)
#define DMA_MST_BE_REG_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x00000008)
#define DMA_MST_LEN_REG_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x0000000C)
#define DMA_MST_GO_PORT_OFFSET (DMA_USER_MST_SPACE_OFFSET + 0x0000000F)

/**
 * User Logic Master Module Masks
 * -- MST_RD_MASK   : user logic master read request control
 * -- MST_WR_MASK   : user logic master write request control
 * -- MST_BL_MASK   : user logic master bus lock control
 * -- MST_BRST_MASK : user logic master burst assertion control
 * -- MST_DONE_MASK : user logic master transfer done status
 * -- MST_BSY_MASK  : user logic master busy status
 * -- MST_BRRD      : user logic master burst read request
 * -- MST_BRWR      : user logic master burst write request
 * -- MST_SGRD      : user logic master single read request
 * -- MST_SGWR      : user logic master single write request
 * -- MST_START     : user logic master to start transfer
 */
#define MST_RD_MASK (0x00000001UL)
#define MST_WR_MASK (0x00000002UL)
#define MST_BL_MASK (0x00000004UL)
#define MST_BRST_MASK (0x00000008UL)
#define MST_DONE_MASK (0x01)
#define MST_BSY_MASK (0x00000020UL)
#define MST_ERROR_MASK (0x00000040UL)
#define MST_TIMEOUT_MASK (0x00000080UL)
#define MST_BRRD (0x09)
#define MST_BRWR (0x0A)
#define MST_SGRD (0x01)
#define MST_SGWR (0x02)
#define MST_START (0x0A)

/**************************** Type Definitions *****************************/


/***************** Macros (Inline Functions) Definitions *******************/

/**
 *
 * Write a value to a DMA register. A 32 bit write is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is written.
 *
 * @param   BaseAddress is the base address of the DMA device.
 * @param   RegOffset is the register offset from the base to write to.
 * @param   Data is the data written to the register.
 *
 * @return  None.
 *
 * @note
 * C-style signature:
 * 	void DMA_mWriteReg(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Data)
 *
 */
#define DMA_mWriteReg(BaseAddress, RegOffset, Data) \
 	Xil_Out32((BaseAddress) + (RegOffset), (Xuint32)(Data))

/**
 *
 * Read a value from a DMA register. A 32 bit read is performed.
 * If the component is implemented in a smaller width, only the least
 * significant data is read from the register. The most significant data
 * will be read as 0.
 *
 * @param   BaseAddress is the base address of the DMA device.
 * @param   RegOffset is the register offset from the base to write to.
 *
 * @return  Data is the data from the register.
 *
 * @note
 * C-style signature:
 * 	Xuint32 DMA_mReadReg(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define DMA_mReadReg(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (RegOffset))


/**
 *
 * Write/Read 32 bit value to/from DMA user logic slave registers.
 *
 * @param   BaseAddress is the base address of the DMA device.
 * @param   RegOffset is the offset from the slave register to write to or read from.
 * @param   Value is the data written to the register.
 *
 * @return  Data is the data from the user logic slave register.
 *
 * @note
 * C-style signature:
 * 	void DMA_mWriteSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset, Xuint32 Value)
 * 	Xuint32 DMA_mReadSlaveRegn(Xuint32 BaseAddress, unsigned RegOffset)
 *
 */
#define DMA_mWriteSlaveReg0(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (DMA_SLV_REG0_OFFSET) + (RegOffset), (Xuint32)(Value))
#define DMA_mWriteSlaveReg1(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (DMA_SLV_REG1_OFFSET) + (RegOffset), (Xuint32)(Value))
#define DMA_mWriteSlaveReg2(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (DMA_SLV_REG2_OFFSET) + (RegOffset), (Xuint32)(Value))
#define DMA_mWriteSlaveReg3(BaseAddress, RegOffset, Value) \
 	Xil_Out32((BaseAddress) + (DMA_SLV_REG3_OFFSET) + (RegOffset), (Xuint32)(Value))

#define DMA_mReadSlaveReg0(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (DMA_SLV_REG0_OFFSET) + (RegOffset))
#define DMA_mReadSlaveReg1(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (DMA_SLV_REG1_OFFSET) + (RegOffset))
#define DMA_mReadSlaveReg2(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (DMA_SLV_REG2_OFFSET) + (RegOffset))
#define DMA_mReadSlaveReg3(BaseAddress, RegOffset) \
 	Xil_In32((BaseAddress) + (DMA_SLV_REG3_OFFSET) + (RegOffset))

/**
 *
 * Check status of DMA user logic master module.
 *
 * @param   BaseAddress is the base address of the DMA device.
 *
 * @return  Status is the result of status checking.
 *
 * @note
 * C-style signature:
 * 	bool DMA_mMasterDone(Xuint32 BaseAddress)
 * 	bool DMA_mMasterBusy(Xuint32 BaseAddress)
 * 	bool DMA_mMasterError(Xuint32 BaseAddress)
 * 	bool DMA_mMasterTimeout(Xuint32 BaseAddress)
 *
 */
#define DMA_mMasterDone(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(DMA_MST_STAT_REG_OFFSET))) & MST_DONE_MASK) == MST_DONE_MASK)
#define DMA_mMasterBusy(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(DMA_MST_STAT_REG_OFFSET))) & MST_BUSY_MASK) == MST_BUSY_MASK)
#define DMA_mMasterError(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(DMA_MST_STAT_REG_OFFSET))) & MST_ERROR_MASK) == MST_ERROR_MASK)
#define DMA_mMasterTimeout(BaseAddress) \
 	((((Xuint32) Xil_In8((BaseAddress)+(DMA_MST_STAT_REG_OFFSET))) & MST_TIMEOUT_MASK) == MST_TIMEOUT_MASK)

/************************** Function Prototypes ****************************/


/**
 *
 * User logic master module to send/receive word to/from remote system memory.
 * While sending, one word is read from user logic local FIFO and written to remote system memory.
 * While receiving, one word is read from remote system memory and written to user logic local FIFO.
 *
 * @param   BaseAddress is the base address of the DMA device.
 * @param   Src/DstAddress is the destination system memory address from/to which the data will be fetched/stored.
 *
 * @return  None.
 *
 * @note    None.
 *
 */
void DMA_MasterSendWord(Xuint32 BaseAddress, Xuint32 DstAddress);
void DMA_MasterRecvWord(Xuint32 BaseAddress, Xuint32 SrcAddress);

/**
 *
 * Run a self-test on the driver/device. Note this may be a destructive test if
 * resets of the device are performed.
 *
 * If the hardware system is not built correctly, this function may never
 * return to the caller.
 *
 * @param   baseaddr_p is the base address of the DMA instance to be worked on.
 *
 * @return
 *
 *    - XST_SUCCESS   if all self-test code passed
 *    - XST_FAILURE   if any self-test code failed
 *
 * @note    Caching must be turned off for this function to work.
 * @note    Self test may fail if data memory and device are not on the same bus.
 *
 */
XStatus DMA_SelfTest(void * baseaddr_p);
/**
*  Defines the number of registers available for read and write*/
#define TEST_AXI_LITE_USER_NUM_REG 4


#endif /** DMA_H */

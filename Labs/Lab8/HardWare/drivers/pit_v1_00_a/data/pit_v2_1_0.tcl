##############################################################################
## Filename:          C:\git\ECEN427\lab5\SpaceInvadersHW/drivers/pit_v1_00_a/data/pit_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Tue Nov 01 18:27:22 2016 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "pit" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}

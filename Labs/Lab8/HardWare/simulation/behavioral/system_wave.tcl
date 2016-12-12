#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     system_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  ISE Simulator Trace Script File
#
#  Trace script files specify signals to save for later
#  display when viewing results of the simulation a graphic
#  format. Comment or uncomment commands to change the set of
#  signals viewed.
#
puts  "Setting up signal tracing ..."

if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

#
#  Trace top-level ports
#
set id [group add "Top level ports"]
source top_level_ports_wave.tcl


#
#  Trace Bus signal ports
#
set id [group add "Bus signal ports" ]
source microblaze_0_ilmb_wave.tcl

source microblaze_0_dlmb_wave.tcl

source axi4lite_0_wave.tcl

source axi4_0_wave.tcl

#
#  Trace Processor ports
#
set id [group add "Processor ports" ]
source microblaze_0_wave.tcl

#
#  Trace processor registers
#

set id [group add "Processor registers"]
#  Processor registers cannot be displayed for:
#  Module   microblaze_0_wrapper
#  Instance microblaze_0
#  Register display support will be added in a future EDK release

#
#  Trace IP and peripheral ports
#
set id [group add "IP and peripheral ports" ]
source proc_sys_reset_0_wave.tcl

source pit_0_wave.tcl

source microblaze_0_i_bram_ctrl_wave.tcl

source microblaze_0_d_bram_ctrl_wave.tcl

source microblaze_0_bram_block_wave.tcl

source fit_timer_1_wave.tcl

source fit_timer_0_wave.tcl

source debug_module_wave.tcl

source clock_generator_0_wave.tcl

source axi_vdma_0_wave.tcl

source axi_timer_0_wave.tcl

source axi_intc_0_wave.tcl

source axi_hdmi_0_wave.tcl

source axi_ac97_0_wave.tcl

source RS232_Uart_1_wave.tcl

source Push_Buttons_5Bits_wave.tcl

source MCB_DDR2_wave.tcl

source nes_controller_0_wave.tcl

#
#  Trace setup complete. Start tracing the signals.
#

puts  "Signal tracing setup completed."

puts  "Simulate the design with the 'run' command."

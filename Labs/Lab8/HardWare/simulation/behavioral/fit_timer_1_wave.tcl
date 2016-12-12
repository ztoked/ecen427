#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     fit_timer_1_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  Module   fit_timer_1_wrapper
#  Instance fit_timer_1
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

  wave add $tbpath${ps}fit_timer_1${ps}Clk -into $id
  wave add $tbpath${ps}fit_timer_1${ps}Rst -into $id
# wave add $tbpath${ps}fit_timer_1${ps}Interrupt -into $id


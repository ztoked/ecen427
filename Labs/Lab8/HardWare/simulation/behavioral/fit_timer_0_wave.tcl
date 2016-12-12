#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     fit_timer_0_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  Module   fit_timer_0_wrapper
#  Instance fit_timer_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

  wave add $tbpath${ps}fit_timer_0${ps}Clk -into $id
  wave add $tbpath${ps}fit_timer_0${ps}Rst -into $id
  wave add $tbpath${ps}fit_timer_0${ps}Interrupt -into $id


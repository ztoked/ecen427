#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     microblaze_0_bram_block_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  Module   microblaze_0_bram_block_wrapper
#  Instance microblaze_0_bram_block
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Rst_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Clk_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_EN_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_WEN_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Addr_A -into $id
  wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Din_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Dout_A -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Rst_B -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Clk_B -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_EN_B -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_WEN_B -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Addr_B -into $id
  wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Din_B -into $id
# wave add $tbpath${ps}microblaze_0_bram_block${ps}BRAM_Dout_B -into $id


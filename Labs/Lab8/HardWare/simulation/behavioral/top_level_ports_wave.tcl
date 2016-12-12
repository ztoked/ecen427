#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Tue Nov 15 13:33:38 2016)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

wave add $tbpath${ps}zio -into $id 
wave add $tbpath${ps}rzq -into $id 
wave add $tbpath${ps}mcbx_dram_we_n -into $id 
wave add $tbpath${ps}mcbx_dram_udqs_n -into $id 
wave add $tbpath${ps}mcbx_dram_udqs -into $id 
wave add $tbpath${ps}mcbx_dram_udm -into $id 
wave add $tbpath${ps}mcbx_dram_ras_n -into $id 
wave add $tbpath${ps}mcbx_dram_odt -into $id 
wave add $tbpath${ps}mcbx_dram_ldm -into $id 
wave add $tbpath${ps}mcbx_dram_dqs_n -into $id 
wave add $tbpath${ps}mcbx_dram_dqs -into $id 
wave add $tbpath${ps}mcbx_dram_dq -into $id 
wave add $tbpath${ps}mcbx_dram_clk_n -into $id 
wave add $tbpath${ps}mcbx_dram_clk -into $id 
wave add $tbpath${ps}mcbx_dram_cke -into $id 
wave add $tbpath${ps}mcbx_dram_cas_n -into $id 
wave add $tbpath${ps}mcbx_dram_ba -into $id 
wave add $tbpath${ps}mcbx_dram_addr -into $id 
wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}GCLK -into $id 
wave add $tbpath${ps}axi4lite_0_M_AXI_ACLK_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_CLK_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_CLK_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_2_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_2_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_1_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_1_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_0_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_0_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_SCL_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_RX_SDA_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_CLK_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_CLK_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_2_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_2_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_1_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_1_N_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_0_P_pin -into $id 
wave add $tbpath${ps}axi_hdmi_0_TMDS_TX_0_N_pin -into $id 
wave add $tbpath${ps}axi_ac97_0_SData_In_pin -into $id 
wave add $tbpath${ps}axi_ac97_0_Bit_Clk_pin -into $id 
wave add $tbpath${ps}axi_ac97_0_Sync_pin -into $id 
wave add $tbpath${ps}axi_ac97_0_SData_Out_pin -into $id 
wave add $tbpath${ps}axi_ac97_0_AC97Reset_n_pin -into $id 
wave add $tbpath${ps}Push_Buttons_5Bits_TRI_I -into $id 
wave add $tbpath${ps}nes_controller_0_PULSE_pin -into $id 
wave add $tbpath${ps}nes_controller_0_LATCH_pin -into $id 
wave add $tbpath${ps}nes_controller_0_DATA_pin -into $id 


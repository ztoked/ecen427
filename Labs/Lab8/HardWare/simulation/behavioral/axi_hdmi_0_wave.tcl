#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     axi_hdmi_0_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  Module   axi_hdmi_0_wrapper
#  Instance axi_hdmi_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

  wave add $tbpath${ps}axi_hdmi_0${ps}ACLK -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}MM2S_FSYNC_IN -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}MM2S_BUFFER_ALMOST_EMPTY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S2MM_FSYNC_IN -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_ACLK -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_ARESETN -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_TREADY -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_TDATA -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_TKEEP -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_TLAST -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXIS_MM2S_TVALID -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_ACLK -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_ARESETN -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_TVALID -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_TDATA -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_TKEEP -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_TLAST -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}M_AXIS_S2MM_TREADY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_CLK_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_CLK_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_2_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_2_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_1_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_1_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_0_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_0_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_SCL -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_CLK_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_CLK_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_2_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_2_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_1_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_1_N -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_0_P -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_TX_0_N -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_ACLK -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_ARESETN -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_AWADDR -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_AWVALID -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_WDATA -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_WSTRB -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_WVALID -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_BREADY -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_ARADDR -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_ARVALID -into $id
# wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_RREADY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_ARREADY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_RDATA -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_RRESP -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_RVALID -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_WREADY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_BRESP -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_BVALID -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}S_AXI_AWREADY -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_SDA_I -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_SDA_O -into $id
  wave add $tbpath${ps}axi_hdmi_0${ps}TMDS_RX_SDA_T -into $id


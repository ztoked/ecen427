#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     axi_vdma_0_wave.tcl (Tue Nov 15 13:33:38 2016)
#
#  Module   axi_vdma_0_wrapper
#  Instance axi_vdma_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "${ps}system_tb${ps}dut" }

# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_aclk -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_aclk -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_aclk -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_aclk -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_aclk -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_aclk -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}axi_resetn -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_awvalid -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_awready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_awaddr -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_wvalid -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_wready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_wdata -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_bresp -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_bvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_bready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_arvalid -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_arready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_araddr -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_rvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_rready -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_rdata -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s_axi_lite_rresp -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_araddr -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arlen -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arsize -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arburst -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arprot -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arcache -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_arready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_rdata -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_rresp -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_rlast -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_rvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_sg_rready -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_araddr -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arlen -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arsize -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arburst -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arprot -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arcache -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_arready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_rdata -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_rresp -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_rlast -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_rvalid -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axi_mm2s_rready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}mm2s_prmry_reset_out_n -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tdata -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tkeep -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tready -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tlast -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axis_mm2s_tuser -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awaddr -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awlen -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awsize -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awburst -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awprot -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awcache -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_awready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_wdata -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_wstrb -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_wlast -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_wvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_wready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_bresp -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_bvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}m_axi_s2mm_bready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_prmry_reset_out_n -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tdata -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tkeep -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tvalid -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tready -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tlast -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s_axis_s2mm_tuser -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}mm2s_fsync -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}mm2s_frame_ptr_in -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}mm2s_frame_ptr_out -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}mm2s_fsync_out -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}mm2s_prmtr_update -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}mm2s_buffer_empty -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}mm2s_buffer_almost_empty -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s2mm_fsync -into $id
  wave add $tbpath${ps}axi_vdma_0${ps}s2mm_frame_ptr_in -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_frame_ptr_out -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_fsync_out -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_buffer_full -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_buffer_almost_full -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_prmtr_update -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}mm2s_introut -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}s2mm_introut -into $id
# wave add $tbpath${ps}axi_vdma_0${ps}axi_vdma_tstvec -into $id


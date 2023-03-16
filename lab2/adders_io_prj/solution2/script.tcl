############################################################
## This file is generated automatically by Vitis HLS.
## Please DO NOT edit it.
## Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
############################################################
open_project adders_io_prj
set_top adders_io
add_files adders_io.c
add_files -tb adders_io_test.c -cflags "-Wno-unknown-pragmas" -csimflags "-Wno-unknown-pragmas"
open_solution "solution2" -flow_target vivado
set_part {xcvu9p-flgb2104-1-e}
create_clock -period 2 -name default
config_interface -m_axi_latency 0
source "./adders_io_prj/solution2/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level all
export_design -format ip_catalog

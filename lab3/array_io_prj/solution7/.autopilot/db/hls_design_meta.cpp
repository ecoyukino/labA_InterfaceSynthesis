#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("d_o_0_din", 16, hls_out, 0, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_0_full_n", 1, hls_in, 0, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_0_write", 1, hls_out, 0, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_1_din", 16, hls_out, 1, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_1_full_n", 1, hls_in, 1, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_1_write", 1, hls_out, 1, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_2_din", 16, hls_out, 2, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_2_full_n", 1, hls_in, 2, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_2_write", 1, hls_out, 2, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_3_din", 16, hls_out, 3, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_3_full_n", 1, hls_in, 3, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_3_write", 1, hls_out, 3, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_4_din", 16, hls_out, 4, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_4_full_n", 1, hls_in, 4, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_4_write", 1, hls_out, 4, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_5_din", 16, hls_out, 5, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_5_full_n", 1, hls_in, 5, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_5_write", 1, hls_out, 5, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_6_din", 16, hls_out, 6, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_6_full_n", 1, hls_in, 6, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_6_write", 1, hls_out, 6, "ap_fifo", "fifo_data", 4),
	Port_Property("d_o_7_din", 16, hls_out, 7, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_o_7_full_n", 1, hls_in, 7, "ap_fifo", "fifo_status", 4),
	Port_Property("d_o_7_write", 1, hls_out, 7, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_0_dout", 16, hls_in, 8, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_0_empty_n", 1, hls_in, 8, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_0_read", 1, hls_out, 8, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_1_dout", 16, hls_in, 9, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_1_empty_n", 1, hls_in, 9, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_1_read", 1, hls_out, 9, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_2_dout", 16, hls_in, 10, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_2_empty_n", 1, hls_in, 10, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_2_read", 1, hls_out, 10, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_3_dout", 16, hls_in, 11, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_3_empty_n", 1, hls_in, 11, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_3_read", 1, hls_out, 11, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_4_dout", 16, hls_in, 12, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_4_empty_n", 1, hls_in, 12, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_4_read", 1, hls_out, 12, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_5_dout", 16, hls_in, 13, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_5_empty_n", 1, hls_in, 13, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_5_read", 1, hls_out, 13, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_6_dout", 16, hls_in, 14, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_6_empty_n", 1, hls_in, 14, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_6_read", 1, hls_out, 14, "ap_fifo", "fifo_data", 4),
	Port_Property("d_i_7_dout", 16, hls_in, 15, "ap_fifo", "fifo_port_we", 4),
	Port_Property("d_i_7_empty_n", 1, hls_in, 15, "ap_fifo", "fifo_status", 4),
	Port_Property("d_i_7_read", 1, hls_out, 15, "ap_fifo", "fifo_data", 4),
};
const char* HLS_Design_Meta::dut_name = "array_io";
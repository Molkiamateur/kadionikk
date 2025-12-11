vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/xil_defaultlib
vlib questa_lib/msim/lib_cdc_v1_0_2
vlib questa_lib/msim/proc_sys_reset_v5_0_13

vmap xpm questa_lib/msim/xpm
vmap xil_defaultlib questa_lib/msim/xil_defaultlib
vmap lib_cdc_v1_0_2 questa_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 questa_lib/msim/proc_sys_reset_v5_0_13

vlog -work xpm -64 -sv "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/4fba" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/1b7e/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/122e/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/b205/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/8f82/hdl/verilog" \
"/opt/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"/opt/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm -64 -93 \
"/opt/Xilinx/Vivado/2019.2/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_1/ip/design_1_master_IA_0_0/sim/design_1_master_IA_0_0.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/Block_proc.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config2_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config2_s_outbkb.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config2_s_w2_V.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config5_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config5_s_outcud.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config5_s_w5_V.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config8_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config8_s_outdEe.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config8_s_w8_V.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/fifo_w14_d2_A.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/fifo_w32_d2_A.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_entry3.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_entry95.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_layer2_out_V.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_layer2_out_V_memcore.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_layer4_out_V.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_layer4_out_V_memcore.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_11s_16s_24_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_13ns_8s_21_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_13ns_14s_23_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_14s_9s_23_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_14s_13ns_23_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mul_mul_14s_14s_23_3_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_83_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_164_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_506_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_646_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_1007_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_1287_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5_mux_2008_14_1_1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/relu_ap_fixed_ap_fixed_14_5_5_3_0_relu_config4_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/relu_ap_fixed_ap_fixed_14_5_5_3_0_relu_config7_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/relu_ap_fixed_ap_fixed_14_5_5_3_0_relu_config10_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/sigmoid_ap_fixed_ap_fixed_sigmoid_config13_s.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/sigmoid_ap_fixed_ap_fixed_sigmoid_config13_s_sigmoid_table1.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/start_for_dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_confYi.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/start_for_model_nexys_pruned_5_hls4ml_prj_5_entry95_U0.vhd" \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/dd27/hdl/vhdl/model_nexys_pruned_5_hls4ml_prj_5.vhd" \
"../../../bd/design_1/ip/design_1_model_nexys_pruned_5_0_0/sim/design_1_model_nexys_pruned_5_0_0.vhd" \
"../../../bd/design_1/ip/design_1_ila_0_0/sim/design_1_ila_0_0.vhd" \

vlog -work xil_defaultlib -64 "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/4fba" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/1b7e/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/122e/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/b205/hdl/verilog" "+incdir+../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/8f82/hdl/verilog" \
"../../../bd/design_1/ip/design_1_clk_wiz_0/design_1_clk_wiz_0_clk_wiz.v" \
"../../../bd/design_1/ip/design_1_clk_wiz_0/design_1_clk_wiz_0.v" \

vcom -work lib_cdc_v1_0_2 -64 -93 \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13 -64 -93 \
"../../../../mon_ia_2.srcs/sources_1/bd/design_1/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../bd/design_1/ip/design_1_rst_clk_wiz_1_100M_0/sim/design_1_rst_clk_wiz_1_100M_0.vhd" \
"../../../bd/design_1/sim/design_1.vhd" \

vlog -work xil_defaultlib \
"glbl.v"


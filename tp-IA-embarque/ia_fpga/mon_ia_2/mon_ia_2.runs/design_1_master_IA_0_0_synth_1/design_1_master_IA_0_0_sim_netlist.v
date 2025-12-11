// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Nov 14 16:55:15 2025
// Host        : fedora running 64-bit unknown
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_master_IA_0_0_sim_netlist.v
// Design      : design_1_master_IA_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "design_1_master_IA_0_0,master_IA,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* ip_definition_source = "module_ref" *) 
(* x_core_info = "master_IA,Vivado 2019.2" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (clk,
    btnr,
    btnc,
    btnl,
    LEDS,
    ap_done,
    ap_ready,
    ap_idle,
    o_valid,
    o_data,
    state_machine_data,
    rst_out,
    ap_start,
    i_data,
    i_valid);
  (* x_interface_info = "xilinx.com:signal:clock:1.0 clk CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME clk, FREQ_HZ 200000000, PHASE 0.0, CLK_DOMAIN /clk_wiz_clk_out1, INSERT_VIP 0" *) input clk;
  input btnr;
  input btnc;
  input btnl;
  output [1:0]LEDS;
  input ap_done;
  input ap_ready;
  input ap_idle;
  input o_valid;
  input [13:0]o_data;
  output [7:0]state_machine_data;
  output rst_out;
  output ap_start;
  output [31:0]i_data;
  output i_valid;

  wire \<const0> ;
  wire [1:0]LEDS;
  wire btnc;
  wire btnl;
  wire btnr;
  wire [25:25]\^i_data ;
  wire [13:0]o_data;
  wire rst_out;

  assign ap_start = \^i_data [25];
  assign i_data[31] = \<const0> ;
  assign i_data[30] = \<const0> ;
  assign i_data[29] = \<const0> ;
  assign i_data[28] = \<const0> ;
  assign i_data[27] = \<const0> ;
  assign i_data[26] = \<const0> ;
  assign i_data[25] = \^i_data [25];
  assign i_data[24] = \<const0> ;
  assign i_data[23] = \<const0> ;
  assign i_data[22] = \<const0> ;
  assign i_data[21] = \<const0> ;
  assign i_data[20] = \<const0> ;
  assign i_data[19] = \<const0> ;
  assign i_data[18] = \<const0> ;
  assign i_data[17] = \<const0> ;
  assign i_data[16] = \<const0> ;
  assign i_data[15] = \<const0> ;
  assign i_data[14] = \<const0> ;
  assign i_data[13] = \<const0> ;
  assign i_data[12] = \<const0> ;
  assign i_data[11] = \<const0> ;
  assign i_data[10] = \<const0> ;
  assign i_data[9] = \<const0> ;
  assign i_data[8] = \^i_data [25];
  assign i_data[7] = \<const0> ;
  assign i_data[6] = \<const0> ;
  assign i_data[5] = \<const0> ;
  assign i_data[4] = \<const0> ;
  assign i_data[3] = \<const0> ;
  assign i_data[2] = \<const0> ;
  assign i_data[1] = \<const0> ;
  assign i_data[0] = \<const0> ;
  assign i_valid = \^i_data [25];
  GND GND
       (.G(\<const0> ));
  LUT6 #(
    .INIT(64'h0000000000000001)) 
    \LEDS[1]_INST_0 
       (.I0(o_data[12]),
        .I1(o_data[11]),
        .I2(o_data[8]),
        .I3(o_data[13]),
        .I4(o_data[9]),
        .I5(o_data[10]),
        .O(LEDS[1]));
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_master_IA U0
       (.LEDS(LEDS[0]),
        .btnc(btnc),
        .btnl(btnl),
        .btnr(btnr),
        .i_data(\^i_data ),
        .o_data(o_data[13:8]),
        .rst_out(rst_out));
endmodule

module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_master_IA
   (rst_out,
    i_data,
    LEDS,
    btnl,
    btnc,
    o_data,
    btnr);
  output rst_out;
  output [0:0]i_data;
  output [0:0]LEDS;
  input btnl;
  input btnc;
  input [5:0]o_data;
  input btnr;

  wire [0:0]LEDS;
  wire btnc;
  wire btnl;
  wire btnr;
  wire [0:0]i_data;
  wire i_valid_reg_i_1_n_0;
  wire [5:0]o_data;
  wire rst_out;
  wire rst_out2_out;

  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    LEDS1
       (.I0(o_data[2]),
        .I1(o_data[1]),
        .I2(o_data[5]),
        .I3(o_data[0]),
        .I4(o_data[3]),
        .I5(o_data[4]),
        .O(LEDS));
  (* XILINX_LEGACY_PRIM = "LDP" *) 
  LDPE #(
    .INIT(1'b1)) 
    i_valid_reg
       (.D(1'b0),
        .G(i_valid_reg_i_1_n_0),
        .GE(1'b1),
        .PRE(btnc),
        .Q(i_data));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'h2)) 
    i_valid_reg_i_1
       (.I0(btnr),
        .I1(btnl),
        .O(i_valid_reg_i_1_n_0));
  (* XILINX_LEGACY_PRIM = "LD" *) 
  LDCE #(
    .INIT(1'b0)) 
    rst_out_reg
       (.CLR(1'b0),
        .D(btnl),
        .G(rst_out2_out),
        .GE(1'b1),
        .Q(rst_out));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h0E)) 
    rst_out_reg_i_1
       (.I0(btnr),
        .I1(btnl),
        .I2(btnc),
        .O(rst_out2_out));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif

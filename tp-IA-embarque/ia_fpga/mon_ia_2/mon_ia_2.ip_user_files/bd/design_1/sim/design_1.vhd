--Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
--Date        : Fri Nov 14 16:43:10 2025
--Host        : fedora running 64-bit unknown
--Command     : generate_target design_1.bd
--Design      : design_1
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1 is
  port (
    BTNC : in STD_LOGIC;
    BTNL : in STD_LOGIC;
    BTNR : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    clk : in STD_LOGIC
  );
  attribute CORE_GENERATION_INFO : string;
  attribute CORE_GENERATION_INFO of design_1 : entity is "design_1,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=design_1,x_ipVersion=1.00.a,x_ipLanguage=VHDL,numBlks=5,numReposBlks=5,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=1,numHdlrefBlks=1,numPkgbdBlks=0,bdsource=USER,da_board_cnt=8,da_clkrst_cnt=3,synth_mode=OOC_per_IP}";
  attribute HW_HANDOFF : string;
  attribute HW_HANDOFF of design_1 : entity is "design_1.hwdef";
end design_1;

architecture STRUCTURE of design_1 is
  component design_1_model_nexys_pruned_5_0_0 is
  port (
    input_1_V_ap_vld : in STD_LOGIC;
    const_size_in_1_ap_vld : out STD_LOGIC;
    const_size_out_1_ap_vld : out STD_LOGIC;
    layer13_out_0_V_ap_vld : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    input_1_V : in STD_LOGIC_VECTOR ( 31 downto 0 );
    layer13_out_0_V : out STD_LOGIC_VECTOR ( 13 downto 0 );
    const_size_in_1 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    const_size_out_1 : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );
  end component design_1_model_nexys_pruned_5_0_0;
  component design_1_ila_0_0 is
  port (
    clk : in STD_LOGIC;
    probe0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe1 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe2 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe3 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe4 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe5 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe6 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe7 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe8 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe9 : in STD_LOGIC_VECTOR ( 0 to 0 );
    probe10 : in STD_LOGIC_VECTOR ( 15 downto 0 );
    probe11 : in STD_LOGIC_VECTOR ( 31 downto 0 );
    probe12 : in STD_LOGIC_VECTOR ( 7 downto 0 )
  );
  end component design_1_ila_0_0;
  component design_1_clk_wiz_0 is
  port (
    reset : in STD_LOGIC;
    clk_in1 : in STD_LOGIC;
    locked : out STD_LOGIC;
    clk_out_100 : out STD_LOGIC;
    clk_out_200 : out STD_LOGIC;
    clk_out_400 : out STD_LOGIC
  );
  end component design_1_clk_wiz_0;
  component design_1_rst_clk_wiz_1_100M_0 is
  port (
    slowest_sync_clk : in STD_LOGIC;
    ext_reset_in : in STD_LOGIC;
    aux_reset_in : in STD_LOGIC;
    mb_debug_sys_rst : in STD_LOGIC;
    dcm_locked : in STD_LOGIC;
    mb_reset : out STD_LOGIC;
    bus_struct_reset : out STD_LOGIC_VECTOR ( 0 to 0 );
    peripheral_reset : out STD_LOGIC_VECTOR ( 0 to 0 );
    interconnect_aresetn : out STD_LOGIC_VECTOR ( 0 to 0 );
    peripheral_aresetn : out STD_LOGIC_VECTOR ( 0 to 0 )
  );
  end component design_1_rst_clk_wiz_1_100M_0;
  component design_1_master_IA_0_0 is
  port (
    clk : in STD_LOGIC;
    btnr : in STD_LOGIC;
    btnc : in STD_LOGIC;
    btnl : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_done : in STD_LOGIC;
    ap_ready : in STD_LOGIC;
    ap_idle : in STD_LOGIC;
    o_valid : in STD_LOGIC;
    o_data : in STD_LOGIC_VECTOR ( 13 downto 0 );
    state_machine_data : out STD_LOGIC_VECTOR ( 7 downto 0 );
    rst_out : out STD_LOGIC;
    ap_start : out STD_LOGIC;
    i_data : out STD_LOGIC_VECTOR ( 31 downto 0 );
    i_valid : out STD_LOGIC
  );
  end component design_1_master_IA_0_0;
  signal BTNC_1 : STD_LOGIC;
  signal BTNL_1 : STD_LOGIC;
  signal BTNR_1 : STD_LOGIC;
  signal clk_1 : STD_LOGIC;
  signal clk_wiz_clk_out_100 : STD_LOGIC;
  signal clk_wiz_clk_out_200 : STD_LOGIC;
  signal clk_wiz_clk_out_400 : STD_LOGIC;
  signal clk_wiz_locked : STD_LOGIC;
  signal master_IA_0_LEDS : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal master_IA_0_ap_start : STD_LOGIC;
  signal master_IA_0_i_data : STD_LOGIC_VECTOR ( 31 downto 0 );
  signal master_IA_0_i_valid : STD_LOGIC;
  signal master_IA_0_rst_out : STD_LOGIC;
  signal master_IA_0_state_machine_data : STD_LOGIC_VECTOR ( 7 downto 0 );
  signal model_nexys_pruned_5_0_ap_done : STD_LOGIC;
  signal model_nexys_pruned_5_0_ap_idle : STD_LOGIC;
  signal model_nexys_pruned_5_0_ap_ready : STD_LOGIC;
  signal model_nexys_pruned_5_0_layer13_out_0_V : STD_LOGIC_VECTOR ( 13 downto 0 );
  signal model_nexys_pruned_5_0_layer13_out_0_V_ap_vld : STD_LOGIC;
  signal rst_clk_wiz_1_100M_peripheral_aresetn : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_model_nexys_pruned_5_0_const_size_in_1_ap_vld_UNCONNECTED : STD_LOGIC;
  signal NLW_model_nexys_pruned_5_0_const_size_out_1_ap_vld_UNCONNECTED : STD_LOGIC;
  signal NLW_model_nexys_pruned_5_0_const_size_in_1_UNCONNECTED : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal NLW_model_nexys_pruned_5_0_const_size_out_1_UNCONNECTED : STD_LOGIC_VECTOR ( 15 downto 0 );
  signal NLW_rst_clk_wiz_1_100M_mb_reset_UNCONNECTED : STD_LOGIC;
  signal NLW_rst_clk_wiz_1_100M_bus_struct_reset_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_rst_clk_wiz_1_100M_interconnect_aresetn_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_rst_clk_wiz_1_100M_peripheral_reset_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of clk : signal is "xilinx.com:signal:clock:1.0 CLK.CLK CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of clk : signal is "XIL_INTERFACENAME CLK.CLK, CLK_DOMAIN design_1_clk, FREQ_HZ 100000000, INSERT_VIP 0, PHASE 0.000";
begin
  BTNC_1 <= BTNC;
  BTNL_1 <= BTNL;
  BTNR_1 <= BTNR;
  LEDS(1 downto 0) <= master_IA_0_LEDS(1 downto 0);
  clk_1 <= clk;
clk_wiz: component design_1_clk_wiz_0
     port map (
      clk_in1 => clk_1,
      clk_out_100 => clk_wiz_clk_out_100,
      clk_out_200 => clk_wiz_clk_out_200,
      clk_out_400 => clk_wiz_clk_out_400,
      locked => clk_wiz_locked,
      reset => BTNR_1
    );
ila_0: component design_1_ila_0_0
     port map (
      clk => clk_wiz_clk_out_400,
      probe0(0) => model_nexys_pruned_5_0_ap_done,
      probe1(0) => model_nexys_pruned_5_0_ap_ready,
      probe10(15 downto 14) => B"00",
      probe10(13 downto 0) => model_nexys_pruned_5_0_layer13_out_0_V(13 downto 0),
      probe11(31 downto 0) => master_IA_0_i_data(31 downto 0),
      probe12(7 downto 0) => master_IA_0_state_machine_data(7 downto 0),
      probe2(0) => model_nexys_pruned_5_0_ap_idle,
      probe3(0) => master_IA_0_ap_start,
      probe4(0) => model_nexys_pruned_5_0_layer13_out_0_V_ap_vld,
      probe5(0) => master_IA_0_i_valid,
      probe6(0) => clk_wiz_clk_out_100,
      probe7(0) => master_IA_0_rst_out,
      probe8(0) => BTNC_1,
      probe9(0) => BTNL_1
    );
master_IA_0: component design_1_master_IA_0_0
     port map (
      LEDS(1 downto 0) => master_IA_0_LEDS(1 downto 0),
      ap_done => model_nexys_pruned_5_0_ap_done,
      ap_idle => model_nexys_pruned_5_0_ap_idle,
      ap_ready => model_nexys_pruned_5_0_ap_ready,
      ap_start => master_IA_0_ap_start,
      btnc => BTNC_1,
      btnl => BTNL_1,
      btnr => BTNR_1,
      clk => clk_wiz_clk_out_200,
      i_data(31 downto 0) => master_IA_0_i_data(31 downto 0),
      i_valid => master_IA_0_i_valid,
      o_data(13 downto 0) => model_nexys_pruned_5_0_layer13_out_0_V(13 downto 0),
      o_valid => model_nexys_pruned_5_0_layer13_out_0_V_ap_vld,
      rst_out => master_IA_0_rst_out,
      state_machine_data(7 downto 0) => master_IA_0_state_machine_data(7 downto 0)
    );
model_nexys_pruned_5_0: component design_1_model_nexys_pruned_5_0_0
     port map (
      ap_clk => clk_wiz_clk_out_100,
      ap_done => model_nexys_pruned_5_0_ap_done,
      ap_idle => model_nexys_pruned_5_0_ap_idle,
      ap_ready => model_nexys_pruned_5_0_ap_ready,
      ap_rst => master_IA_0_rst_out,
      ap_start => master_IA_0_ap_start,
      const_size_in_1(15 downto 0) => NLW_model_nexys_pruned_5_0_const_size_in_1_UNCONNECTED(15 downto 0),
      const_size_in_1_ap_vld => NLW_model_nexys_pruned_5_0_const_size_in_1_ap_vld_UNCONNECTED,
      const_size_out_1(15 downto 0) => NLW_model_nexys_pruned_5_0_const_size_out_1_UNCONNECTED(15 downto 0),
      const_size_out_1_ap_vld => NLW_model_nexys_pruned_5_0_const_size_out_1_ap_vld_UNCONNECTED,
      input_1_V(31 downto 0) => master_IA_0_i_data(31 downto 0),
      input_1_V_ap_vld => master_IA_0_i_valid,
      layer13_out_0_V(13 downto 0) => model_nexys_pruned_5_0_layer13_out_0_V(13 downto 0),
      layer13_out_0_V_ap_vld => model_nexys_pruned_5_0_layer13_out_0_V_ap_vld
    );
rst_clk_wiz_1_100M: component design_1_rst_clk_wiz_1_100M_0
     port map (
      aux_reset_in => '1',
      bus_struct_reset(0) => NLW_rst_clk_wiz_1_100M_bus_struct_reset_UNCONNECTED(0),
      dcm_locked => clk_wiz_locked,
      ext_reset_in => BTNR_1,
      interconnect_aresetn(0) => NLW_rst_clk_wiz_1_100M_interconnect_aresetn_UNCONNECTED(0),
      mb_debug_sys_rst => '0',
      mb_reset => NLW_rst_clk_wiz_1_100M_mb_reset_UNCONNECTED,
      peripheral_aresetn(0) => rst_clk_wiz_1_100M_peripheral_aresetn(0),
      peripheral_reset(0) => NLW_rst_clk_wiz_1_100M_peripheral_reset_UNCONNECTED(0),
      slowest_sync_clk => clk_wiz_clk_out_100
    );
end STRUCTURE;

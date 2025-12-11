
################################################################
# This is a generated script based on design: design_1
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2019.2
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   catch {common::send_msg_id "BD_TCL-109" "ERROR" "This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."}

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source design_1_script.tcl


# The design that will be created by this Tcl script contains the following 
# module references:
# master_IA

# Please add the sources of those modules before sourcing this Tcl script.

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set list_projs [get_projects -quiet]
if { $list_projs eq "" } {
   create_project project_1 myproj -part xc7a100tcsg324-1
   set_property BOARD_PART digilentinc.com:nexys4_ddr:part0:1.1 [current_project]
}


# CHANGE DESIGN NAME HERE
variable design_name
set design_name design_1

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      common::send_msg_id "BD_TCL-001" "INFO" "Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   common::send_msg_id "BD_TCL-002" "INFO" "Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   common::send_msg_id "BD_TCL-003" "INFO" "Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   common::send_msg_id "BD_TCL-004" "INFO" "Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

common::send_msg_id "BD_TCL-005" "INFO" "Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   catch {common::send_msg_id "BD_TCL-114" "ERROR" $errMsg}
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_msg_id "BD_TCL-100" "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_msg_id "BD_TCL-101" "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports

  # Create ports
  set BTNC [ create_bd_port -dir I BTNC ]
  set BTNL [ create_bd_port -dir I BTNL ]
  set BTNR [ create_bd_port -dir I BTNR ]
  set LEDS [ create_bd_port -dir O -from 1 -to 0 LEDS ]
  set clk [ create_bd_port -dir I -type clk -freq_hz 100000000 clk ]

  # Create instance: clk_wiz, and set properties
  set clk_wiz [ create_bd_cell -type ip -vlnv xilinx.com:ip:clk_wiz:6.0 clk_wiz ]
  set_property -dict [ list \
   CONFIG.CLKOUT1_JITTER {144.719} \
   CONFIG.CLKOUT1_PHASE_ERROR {114.212} \
   CONFIG.CLKOUT1_USED {true} \
   CONFIG.CLKOUT2_JITTER {126.455} \
   CONFIG.CLKOUT2_PHASE_ERROR {114.212} \
   CONFIG.CLKOUT2_REQUESTED_OUT_FREQ {200.000} \
   CONFIG.CLKOUT2_USED {true} \
   CONFIG.CLKOUT3_JITTER {111.164} \
   CONFIG.CLKOUT3_PHASE_ERROR {114.212} \
   CONFIG.CLKOUT3_REQUESTED_OUT_FREQ {400.000} \
   CONFIG.CLKOUT3_USED {true} \
   CONFIG.CLK_IN1_BOARD_INTERFACE {sys_clock} \
   CONFIG.CLK_OUT1_PORT {clk_out_100} \
   CONFIG.CLK_OUT2_PORT {clk_out_200} \
   CONFIG.CLK_OUT3_PORT {clk_out_400} \
   CONFIG.MMCM_CLKFBOUT_MULT_F {8.000} \
   CONFIG.MMCM_CLKOUT0_DIVIDE_F {8.000} \
   CONFIG.MMCM_CLKOUT1_DIVIDE {4} \
   CONFIG.MMCM_CLKOUT2_DIVIDE {2} \
   CONFIG.NUM_OUT_CLKS {3} \
   CONFIG.RESET_BOARD_INTERFACE {reset} \
   CONFIG.USE_BOARD_FLOW {true} \
 ] $clk_wiz

  # Create instance: ila_0, and set properties
  set ila_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:ila:6.2 ila_0 ]
  set_property -dict [ list \
   CONFIG.C_ENABLE_ILA_AXI_MON {false} \
   CONFIG.C_MONITOR_TYPE {Native} \
   CONFIG.C_NUM_OF_PROBES {13} \
   CONFIG.C_PROBE10_WIDTH {16} \
   CONFIG.C_PROBE11_WIDTH {32} \
   CONFIG.C_PROBE12_WIDTH {8} \
 ] $ila_0

  # Create instance: master_IA_0, and set properties
  set block_name master_IA
  set block_cell_name master_IA_0
  if { [catch {set master_IA_0 [create_bd_cell -type module -reference $block_name $block_cell_name] } errmsg] } {
     catch {common::send_msg_id "BD_TCL-105" "ERROR" "Unable to add referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   } elseif { $master_IA_0 eq "" } {
     catch {common::send_msg_id "BD_TCL-106" "ERROR" "Unable to referenced block <$block_name>. Please add the files for ${block_name}'s definition into the project."}
     return 1
   }
  
  # Create instance: model_nexys_pruned_5_0, and set properties
  set model_nexys_pruned_5_0 [ create_bd_cell -type ip -vlnv xilinx.com:hls:model_nexys_pruned_5_hls4ml_prj_5:1.0 model_nexys_pruned_5_0 ]

  # Create instance: rst_clk_wiz_1_100M, and set properties
  set rst_clk_wiz_1_100M [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_clk_wiz_1_100M ]
  set_property -dict [ list \
   CONFIG.RESET_BOARD_INTERFACE {reset} \
   CONFIG.USE_BOARD_FLOW {true} \
 ] $rst_clk_wiz_1_100M

  # Create port connections
  connect_bd_net -net BTNC_1 [get_bd_ports BTNC] [get_bd_pins ila_0/probe8] [get_bd_pins master_IA_0/btnc]
  connect_bd_net -net BTNL_1 [get_bd_ports BTNL] [get_bd_pins ila_0/probe9] [get_bd_pins master_IA_0/btnl]
  connect_bd_net -net BTNR_1 [get_bd_ports BTNR] [get_bd_pins clk_wiz/reset] [get_bd_pins master_IA_0/btnr] [get_bd_pins rst_clk_wiz_1_100M/ext_reset_in]
  connect_bd_net -net clk_1 [get_bd_ports clk] [get_bd_pins clk_wiz/clk_in1]
  connect_bd_net -net clk_wiz_clk_out_100 [get_bd_pins clk_wiz/clk_out_100] [get_bd_pins ila_0/probe6] [get_bd_pins model_nexys_pruned_5_0/ap_clk] [get_bd_pins rst_clk_wiz_1_100M/slowest_sync_clk]
  connect_bd_net -net clk_wiz_clk_out_200 [get_bd_pins clk_wiz/clk_out_200] [get_bd_pins master_IA_0/clk]
  connect_bd_net -net clk_wiz_clk_out_400 [get_bd_pins clk_wiz/clk_out_400] [get_bd_pins ila_0/clk]
  connect_bd_net -net clk_wiz_locked [get_bd_pins clk_wiz/locked] [get_bd_pins rst_clk_wiz_1_100M/dcm_locked]
  connect_bd_net -net master_IA_0_LEDS [get_bd_ports LEDS] [get_bd_pins master_IA_0/LEDS]
  connect_bd_net -net master_IA_0_ap_start [get_bd_pins ila_0/probe3] [get_bd_pins master_IA_0/ap_start] [get_bd_pins model_nexys_pruned_5_0/ap_start]
  connect_bd_net -net master_IA_0_i_data [get_bd_pins ila_0/probe11] [get_bd_pins master_IA_0/i_data] [get_bd_pins model_nexys_pruned_5_0/input_1_V]
  connect_bd_net -net master_IA_0_i_valid [get_bd_pins ila_0/probe5] [get_bd_pins master_IA_0/i_valid] [get_bd_pins model_nexys_pruned_5_0/input_1_V_ap_vld]
  connect_bd_net -net master_IA_0_rst_out [get_bd_pins ila_0/probe7] [get_bd_pins master_IA_0/rst_out] [get_bd_pins model_nexys_pruned_5_0/ap_rst]
  connect_bd_net -net master_IA_0_state_machine_data [get_bd_pins ila_0/probe12] [get_bd_pins master_IA_0/state_machine_data]
  connect_bd_net -net model_nexys_pruned_5_0_ap_done [get_bd_pins ila_0/probe0] [get_bd_pins master_IA_0/ap_done] [get_bd_pins model_nexys_pruned_5_0/ap_done]
  connect_bd_net -net model_nexys_pruned_5_0_ap_idle [get_bd_pins ila_0/probe2] [get_bd_pins master_IA_0/ap_idle] [get_bd_pins model_nexys_pruned_5_0/ap_idle]
  connect_bd_net -net model_nexys_pruned_5_0_ap_ready [get_bd_pins ila_0/probe1] [get_bd_pins master_IA_0/ap_ready] [get_bd_pins model_nexys_pruned_5_0/ap_ready]
  connect_bd_net -net model_nexys_pruned_5_0_layer13_out_0_V [get_bd_pins ila_0/probe10] [get_bd_pins master_IA_0/o_data] [get_bd_pins model_nexys_pruned_5_0/layer13_out_0_V]
  connect_bd_net -net model_nexys_pruned_5_0_layer13_out_0_V_ap_vld [get_bd_pins ila_0/probe4] [get_bd_pins master_IA_0/o_valid] [get_bd_pins model_nexys_pruned_5_0/layer13_out_0_V_ap_vld]
  connect_bd_net -net rst_clk_wiz_1_100M_peripheral_aresetn [get_bd_pins rst_clk_wiz_1_100M/peripheral_aresetn]

  # Create address segments


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""



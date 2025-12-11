// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_H__
#define __dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 6;
  static const unsigned AddressRange = 50;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_ram) {
        ram[0] = "0b110011";
        ram[1] = "0b011110";
        ram[2] = "0b111111";
        ram[3] = "0b100001";
        ram[4] = "0b100101";
        ram[5] = "0b100101";
        ram[6] = "0b110000";
        ram[7] = "0b100010";
        ram[8] = "0b110001";
        ram[9] = "0b100001";
        ram[10] = "0b101111";
        ram[11] = "0b101100";
        ram[12] = "0b000100";
        ram[13] = "0b100000";
        ram[14] = "0b110100";
        ram[15] = "0b010000";
        ram[16] = "0b011110";
        ram[17] = "0b000110";
        ram[18] = "0b001010";
        ram[19] = "0b000001";
        ram[20] = "0b101011";
        ram[21] = "0b110010";
        ram[22] = "0b110001";
        ram[23] = "0b001101";
        ram[24] = "0b001110";
        ram[25] = "0b101001";
        ram[26] = "0b101110";
        ram[27] = "0b101110";
        ram[28] = "0b010111";
        ram[29] = "0b110011";
        ram[30] = "0b000100";
        ram[31] = "0b001010";
        ram[32] = "0b110100";
        ram[33] = "0b111101";
        ram[34] = "0b010100";
        ram[35] = "0b110001";
        ram[36] = "0b000010";
        ram[37] = "0b010100";
        ram[38] = "0b001011";
        ram[39] = "0b100111";
        ram[40] = "0b010111";
        ram[41] = "0b000100";
        ram[42] = "0b001101";
        ram[43] = "0b001010";
        ram[44] = "0b101000";
        ram[45] = "0b100011";
        ram[46] = "0b110001";
        ram[47] = "0b110000";
        ram[48] = "0b110101";
        ram[49] = "0b000101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V) {


static const unsigned DataWidth = 6;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V) {
meminst = new dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_ram("dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V() {
    delete meminst;
}


};//endmodule
#endif

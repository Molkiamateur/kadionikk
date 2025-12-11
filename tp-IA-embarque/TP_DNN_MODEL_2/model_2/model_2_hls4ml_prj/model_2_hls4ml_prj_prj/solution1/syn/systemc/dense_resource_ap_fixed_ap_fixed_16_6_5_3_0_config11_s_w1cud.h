// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_H__
#define __dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
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


   SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_ram) {
        ram[0] = "0b0101110111111000";
        ram[1] = "0b0101100000100011";
        ram[2] = "0b0000000000000000";
        ram[3] = "0b0110000101011011";
        ram[4] = "0b0000000000000000";
        ram[5] = "0b0101011010111001";
        ram[6] = "0b0000000000000000";
        ram[7] = "0b1011110001110110";
        for (unsigned i = 8; i < 14 ; i = i + 1) {
            ram[i] = "0b0000000000000000";
        }
        ram[14] = "0b0101010000001100";
        ram[15] = "0b0000000000000000";
        ram[16] = "0b0000000000000000";
        ram[17] = "0b0100111001000000";
        ram[18] = "0b1010111101110011";
        ram[19] = "0b1010100000011111";
        ram[20] = "0b0000000000000000";
        ram[21] = "0b0000000000000000";
        ram[22] = "0b0000000000000000";
        ram[23] = "0b0000000000000000";
        ram[24] = "0b1010111000110110";
        for (unsigned i = 25; i < 32 ; i = i + 1) {
            ram[i] = "0b0000000000000000";
        }
        ram[32] = "0b1010101101000101";
        for (unsigned i = 33; i < 41 ; i = i + 1) {
            ram[i] = "0b0000000000000000";
        }
        ram[41] = "0b0101100100111001";
        for (unsigned i = 42; i < 50 ; i = i + 1) {
            ram[i] = "0b0000000000000000";
        }


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


SC_MODULE(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 50;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_ram* meminst;


SC_CTOR(dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud) {
meminst = new dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_ram("dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_s_w1cud() {
    delete meminst;
}


};//endmodule
#endif

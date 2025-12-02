/*
 * File: sim.cpp
 * Created Date: 2025-02-24 04:09:17 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2025-04-14 04:40:42 pm
 * Modified By: Mathieu Escouteloup
 * Email: mathieu.escouteloup@enseirb-matmeca.fr
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2025 ENSEIRB-MATMECA
 * -----
 * Description: 
 */

#include <stdlib.h>
#include <stdio.h>
#include "VSim.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "svdpi.h"
#include <time.h>

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

#define TRIGGER_DELAY 10

int clk_cnt = 1;   

int main(int argc, char **argv) {
  // ******************************
  //           ARGUMENTS
  // ******************************
  char* ramfile;    // .hex format
  char* bootfile;   // .hex format
  char* vcdfile;    // .vcd format

  int ntrigger = 0;

  bool use_boot = false;
  bool use_ram = false;
  bool use_vcd = false;
  bool use_trigger = false;

  for (int a = 1; a < argc; a++) {
    string cmd = argv[a];
    char* val = argv[a + 1];

    if (cmd == "--ram") {
      use_ram = true;
      ramfile = val;
      a++;
    }
    if (cmd == "--ntrigger") {
      use_trigger = true;
      ntrigger = atoi(val);
      if (ntrigger == 0) {
        use_trigger = false;
      }
      a++;
    }
    if (cmd == "--vcd") {
      use_vcd = true;
      vcdfile = val;
      a++;
    }
    if (cmd == "--boot") {
      use_boot = true;
      bootfile = val;
      a++;
    }
  }

  // ******************************
  //    SIMULATION CONFIGURATION
  // ******************************
  time_t test_time = time(NULL);

	// Initialize Verilators variables
	Verilated::commandArgs(argc, argv);

  // Create an instance of our module under test
	VSim *dut = new VSim;

  // Generate VCD
  Verilated::traceEverOn(true);
  VerilatedVcdC* dut_trace = new VerilatedVcdC;
  dut->trace(dut_trace, 99);
  if (use_vcd) {
    dut_trace->open(vcdfile);
  }

	// Test variables
  bool end = false;   // Test end 
  
  // ******************************
  //             MEMORY
  // ******************************
  Verilated::scopesDump();
  
  if (use_ram) {
    // Call task to initialize memory
    svSetScope(svGetScopeFromName("TOP.Sim.m_sys.m_ram.m_ram"));
    dut->ext_readmemh_data(ramfile);
  }

  // ******************************
  //           BOOTLOADER
  // ******************************
  dut->io_i_uart_valid = 0;
  dut->io_i_uart_data = 0;

  ifstream f_boot; 
  f_boot.open(bootfile); 

  // ******************************
  //           RESET LOOP
  // ****************************** 
  if (use_boot) {
    dut->io_i_boot = 1;
  }

  dut->reset = 1;
  while (clk_cnt < 5) {
    dut->clock = 0;
    dut->eval();
    if (use_vcd) {
      dut_trace->dump(clk_cnt * 10);
    }

    dut->clock = 1;
    dut->eval();
    if (use_vcd) {
      dut_trace->dump(clk_cnt * 10 + 5);
    }
    clk_cnt = clk_cnt + 1;
  }

  // ******************************
  //           MAIN LOOP
  // ****************************** 
  dut->reset = 0;
  while (end == false) {
    dut->clock = 0;
    dut->eval();
    if (use_vcd) {
      dut_trace->dump(clk_cnt * 10);
    }

    // ------------------------------
    //           BOOTLOADER
    // ------------------------------
    if (use_boot) {    
      dut->io_i_uart_valid = 0;

      if (dut->io_o_uart_ready) {
        string boot_swbyte;
        uint8_t boot_wbyte;

        f_boot >> boot_swbyte;

        if (!f_boot.eof()) {
          boot_wbyte = stoul(boot_swbyte, nullptr, 16);
          dut->io_i_uart_valid = 1;
          dut->io_i_uart_data = boot_wbyte;
        }
      }
    }

    dut->clock = 1;
    dut->eval();
    if (use_vcd) {
      dut_trace->dump(clk_cnt * 10 + 5);
    }

    clk_cnt = clk_cnt + 1;
    if (clk_cnt >= ntrigger) {
      end = true;
    }
  }

  // ******************************
  //             CLOSE
  // ******************************
  if (use_vcd) {
    cout << "VCD file: " << vcdfile << endl;
  }
  if (use_boot) {
    f_boot.close();
  }

  dut_trace->close();
  exit(EXIT_SUCCESS);
}

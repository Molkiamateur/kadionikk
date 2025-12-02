/*
 * File: top.sv
 * Created Date: 2025-04-09 08:39:05 am
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2025-04-24 01:46:20 pm
 * Modified By: Mathieu Escouteloup
 * Email: mathieu.escouteloup@enseirb-matmeca.fr
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2025 ENSEIRB-MATMECA
 * -----
 * Description: 
 */

`timescale 1 ns / 1 ns

module Top (
//  input logic           i_clk_pll1,
  input logic           i_clk_hs2,
  input logic           i_reset_n,

  output logic  [2:0]   o_led,
  output logic          o_gpio, 
  output logic          o_trigger,
  input logic           i_uart_rx,
  output logic          o_uart_tx
);

  logic         w_clock_50MHz;
  logic         w_reset_50MHz;
  logic         w_reset_n_50MHz;

  logic [7:0]   w_gpio_eno;
  logic [7:0]   w_gpio_in;
  logic [7:0]   w_gpio_out;

  // ******************************
  //             CLOCK
  // ******************************
  assign w_clock_50MHz = i_clk_hs2;

  // ******************************
  //             RESET
  // ******************************
  // ------------------------------
  //        SLOWEST COUNTER
  // ------------------------------
  logic [5:0] r_reset_count;
  logic       w_reset_a;
  logic       w_reset_n_a;

  always_ff @(posedge w_clock_50MHz, negedge i_reset_n) begin
    if (!i_reset_n) begin
      r_reset_count <= 'h3f;
    end
    else begin
      if (r_reset_count != 6'h0) begin
        r_reset_count <= r_reset_count - 1'b1;
      end
    end
  end 

  // ------------------------------
  //            50 MHZ
  // ------------------------------
  logic r_reset_50MHz;

  always_ff @(posedge w_clock_50MHz) begin
    if (!i_reset_n) begin
      r_reset_50MHz <= 1'b1;
    end
    else begin
      r_reset_50MHz <= (r_reset_count != 6'h0);
    end
  end
  
  assign w_reset_50MHz = r_reset_50MHz;
  assign w_reset_n_50MHz = !r_reset_50MHz;   

  assign w_reset_a = r_reset_50MHz;
  assign w_reset_n_a = !r_reset_50MHz; 

  // ******************************
  //            PLATFORM
  // ******************************
  Sys m_sys (
    .clock              ( w_clock_50MHz    ),
    .reset              ( w_reset_50MHz    ),
    .io_i_boot          ( 1'b0             ),
    .io_b_gpio_eno      ( w_gpio_eno       ),
    .io_b_gpio_in       ( w_gpio_in        ),
    .io_b_gpio_out      ( w_gpio_out       ),
    .io_b_uart_rx       ( i_uart_rx        ),
    .io_b_uart_tx       ( o_uart_tx        )
  );
  
  // ******************************
  //              I/O
  // ******************************
  // ------------------------------
  //        BUTTON / SWITCH
  // ------------------------------
  assign w_gpio_in = 8'h00;

  // ------------------------------
  //           LED / RGB
  // ------------------------------
  assign o_led[2:0] = i_reset_n ? (w_gpio_eno[2:0] & w_gpio_out[2:0]): 3'b111;

  // ------------------------------
  //            TRIGGER
  // ------------------------------
  assign o_trigger = (w_gpio_eno[3] & w_gpio_out[3]);

  // ------------------------------
  //              GPIO
  // ------------------------------
  assign o_gpio = (w_gpio_eno[7] & w_gpio_out[7]);
  
  // ------------------------------
  //              UART
  // ------------------------------
  assign o_uart_ctsn = 1'b1;
endmodule

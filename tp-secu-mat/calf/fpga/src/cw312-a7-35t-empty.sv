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

  logic [31:0]  r_cnt;
  logic [2:0]   r_led;

  always_ff @(posedge i_clk_hs2) begin
    if (!i_reset_n) begin
      r_cnt <= 32'h00000000;
      r_led <= 3'b000;
    end
    else begin
      if (r_cnt == 32'h017d7840) begin
        r_cnt <= 32'h00000000;
        r_led <= r_led + 3'b001;
      end
      else begin
        r_cnt <= r_cnt + 1;
      end
    end
  end

  assign o_led = i_reset_n ? r_led : 3'b111;
  assign o_gpio = 1'b0;
  assign o_uart_tx = i_uart_rx;
  assign o_trigger = 1'b1;
endmodule

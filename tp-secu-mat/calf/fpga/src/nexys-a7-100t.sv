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
  input logic           i_clock_100MHz,
  input logic           i_reset_n,

  input logic  [15:0]   i_sw,
  input logic  [4:0]    i_btn,
  output logic  [15:0]  o_led,
  input logic           i_uart_rx,
  output logic          o_uart_tx,
  output logic          o_uart_ctsn,
  input logic           i_uart_rtsn,

  output logic  [7:0]   o_dbg
);

  logic         r_boot;

  logic         w_clock_25MHz;
  logic         w_reset_25MHz;
  logic         w_reset_n_25MHz;

  logic         w_clock_50MHz;
  logic         w_reset_50MHz;
  logic         w_reset_n_50MHz;

  logic         w_clock_100MHz;
  logic         w_reset_100MHz;
  logic         w_reset_n_100MHz;
  
  logic [7:0]   w_gpio_eno;
  logic [7:0]   w_gpio_in;
  logic [7:0]   w_gpio_out;

  // ******************************
  //             CLOCK
  // ******************************
  // ------------------------------
  //           GENERATION
  // ------------------------------
  logic w_clock_fb;
  logic w_clock_vga_fb;

  BUFG m_BUFG_clock_100MHz (
    .O                  ( w_clock_100MHz),
    .I                  ( i_clock_100MHz) 
  );

  MMCME2_BASE #(
    .BANDWIDTH          ( "OPTIMIZED"   ),  
    .CLKFBOUT_MULT_F    ( 10.0          ), 
    .CLKFBOUT_PHASE     ( 0.0           ), 
    .CLKIN1_PERIOD      ( 10.0          ), 
    .CLKOUT1_DIVIDE     ( 40            ),
    .CLKOUT2_DIVIDE     ( 20            ),
    .CLKOUT3_DIVIDE     ( 1             ),
    .CLKOUT4_DIVIDE     ( 1             ),
    .CLKOUT5_DIVIDE     ( 1             ),
    .CLKOUT6_DIVIDE     ( 1             ),
    .CLKOUT0_DIVIDE_F   ( 1.0           ),
    .CLKOUT0_DUTY_CYCLE ( 0.5           ),
    .CLKOUT1_DUTY_CYCLE ( 0.5           ),
    .CLKOUT2_DUTY_CYCLE ( 0.5           ),
    .CLKOUT3_DUTY_CYCLE ( 0.5           ),
    .CLKOUT4_DUTY_CYCLE ( 0.5           ),
    .CLKOUT5_DUTY_CYCLE ( 0.5           ),
    .CLKOUT6_DUTY_CYCLE ( 0.5           ),
    .CLKOUT0_PHASE      ( 0.0           ),
    .CLKOUT1_PHASE      ( 0.0           ),
    .CLKOUT2_PHASE      ( 0.0           ),
    .CLKOUT3_PHASE      ( 0.0           ),
    .CLKOUT4_PHASE      ( 0.0           ),
    .CLKOUT5_PHASE      ( 0.0           ),
    .CLKOUT6_PHASE      ( 0.0           ),
    .CLKOUT4_CASCADE    ( "FALSE"       ), 
    .DIVCLK_DIVIDE      ( 1             ),         
    .REF_JITTER1        ( 0.0           ),         
    .STARTUP_WAIT       ( "FALSE"       )     
  ) m_MMCME2_BASE (
    .CLKOUT0            (               ),    
    .CLKOUT0B           (               ),   
    .CLKOUT1            ( w_clock_25MHz ),     
    .CLKOUT1B           (               ),   
    .CLKOUT2            ( w_clock_50MHz ),   
    .CLKOUT2B           (               ),   
    .CLKOUT3            (               ),     
    .CLKOUT3B           (               ),   
    .CLKOUT4            (               ),     
    .CLKOUT5            (               ),     
    .CLKOUT6            (               ),     
    .CLKFBOUT           ( w_clock_fb    ),   
    .CLKFBOUTB          (               ),
    .LOCKED             (               ),      
    .CLKIN1             ( w_clock_100MHz),      
    .PWRDWN             ( 1'b0          ),       
    .RST                (               ),        
    .CLKFBIN            ( w_clock_fb    )     
  );

  // ******************************
  //             RESET
  // ******************************
  // ------------------------------
  //        SLOWEST COUNTER
  // ------------------------------
  logic [5:0] r_reset_count;
  logic       w_reset_a;
  logic       w_reset_n_a;

  always_ff @(posedge w_clock_25MHz, negedge i_reset_n) begin
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
  //            25 MHZ
  // ------------------------------
  logic r_reset_25MHz;

  always_ff @(posedge w_clock_25MHz) begin
    if (!i_reset_n) begin
      r_reset_25MHz <= 1'b1;
    end
    else begin
      r_reset_25MHz <= (r_reset_count != 6'h0);
    end
  end
  
  assign w_reset_25MHz = r_reset_25MHz;
  assign w_reset_n_25MHz = !r_reset_25MHz;   

  assign w_reset_a = r_reset_25MHz;
  assign w_reset_n_a = !r_reset_25MHz; 

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

  // ------------------------------
  //            100 MHZ
  // ------------------------------
  logic r_reset_100MHz;

  always_ff @(posedge w_clock_100MHz) begin
    if (!i_reset_n) begin
      r_reset_100MHz <= 1'b1;
    end
    else begin
      r_reset_100MHz <= (r_reset_count != 6'h0);
    end
  end
  
  assign w_reset_100MHz = r_reset_100MHz;
  assign w_reset_n_100MHz = !r_reset_100MHz;   

  // ******************************
  //            PLATFORM
  // ******************************
  always_ff @(posedge w_clock_50MHz) begin
    if (!i_reset_n) begin
      r_boot <= i_sw[0];
    end
  end

  Sys m_sys (
    .clock              ( w_clock_50MHz    ),
    .reset              ( w_reset_50MHz    ),
    .io_i_boot          ( r_boot           ),
    .io_b_gpio_eno      ( w_gpio_eno       ),
    .io_b_gpio_in       ( w_gpio_in        ),
    .io_b_gpio_out      ( w_gpio_out       ),
    .io_b_uart_rx       ( i_uart_rx        ),
    .io_b_uart_tx       ( o_uart_tx        )
  );
  
  // ******************************
  //              I/Os
  // ******************************
  // ------------------------------
  //       BUTTONS & SWITCHES
  // ------------------------------
  assign w_gpio_in = (w_gpio_eno & {i_sw[2:0], i_btn[4:0]}) | (!w_gpio_eno & w_gpio_out);

  // ------------------------------
  //          LEDs & RGBs
  // ------------------------------
  assign o_led[7:0] = i_reset_n ? (w_gpio_eno & w_gpio_out): 8'hff;
  assign o_led[15:8] = i_reset_n ? 8'h00: 8'hff;
  
  // ------------------------------
  //             UART
  // ------------------------------
  assign o_uart_ctsn = 1'b1;
                      
  // ******************************
  //             DEBUG
  // ******************************
  assign o_dbg = {6'h00, o_uart_tx, i_uart_rx};

//  dbg_ila m_dbg_ila (
//    .clk        ( w_clock_100MHz   ),
//    .probe0     ( w_clock_50MHz    ),
//    .probe1     ( w_reset_50MHz    ),
//    .probe2     ( w_dbg_valid      ),
//    .probe3     ( w_dbg_addr       ),
//    .probe4     ( w_dbg_wen        ),
//    .probe5     ( w_dbg_wdata      ),
//    .probe6     ( w_dbg_ready      ),
//    .probe7     ( w_dbg_rdata      ),
//    .probe8     ( w_gpio_eno       ),
//    .probe9     ( w_gpio_in        ),
//    .probe10    ( w_gpio_out       ),
//    .probe11    ( w_dbg_pc         )
//  );
endmodule

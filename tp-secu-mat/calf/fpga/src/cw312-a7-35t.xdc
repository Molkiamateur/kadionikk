
## ******************************
##              I/O
## ******************************
## ------------------------------
##              USED
## ------------------------------
## Customizable clocks
##set_property CLOCK_DEDICATED_ROUTE FALSE [get_nets i_clk_pll1_IBUF]
##set_property -dict { PACKAGE_PIN V12 IOSTANDARD LVCMOS33 } [get_ports { i_clk_pll1 }];
set_property -dict { PACKAGE_PIN D15    IOSTANDARD LVCMOS33 } [get_ports { i_clk_hs2 }];

## Reset
set_property -dict { PACKAGE_PIN A16    IOSTANDARD LVCMOS33 } [get_ports { i_reset_n }]; 

## LEDs
set_property DRIVE 8 [get_ports { o_led[0] }];
set_property -dict { PACKAGE_PIN R1     IOSTANDARD LVCMOS33 } [get_ports { o_led[0] }]; 
set_property DRIVE 8 [get_ports { o_led[1] }];
set_property -dict { PACKAGE_PIN V2     IOSTANDARD LVCMOS33 } [get_ports { o_led[1] }]; 
set_property DRIVE 8 [get_ports { o_led[2] }];
set_property -dict { PACKAGE_PIN V5     IOSTANDARD LVCMOS33 } [get_ports { o_led[2] }]; 

## UART
set_property -dict { PACKAGE_PIN V10    IOSTANDARD LVCMOS33 } [get_ports { o_uart_tx }];
set_property -dict { PACKAGE_PIN V11    IOSTANDARD LVCMOS33 } [get_ports { i_uart_rx }];

## Trigger
set_property -dict { PACKAGE_PIN V14    IOSTANDARD LVCMOS33 } [get_ports { o_trigger }];

## GPIO
set_property -dict { PACKAGE_PIN V12    IOSTANDARD LVCMOS33 } [get_ports { o_gpio }];

## ------------------------------
##             UNUSED
## ------------------------------

## ******************************
##             CLOCK
## ******************************
# create_clock -period 40.000 -name CLK_PLL1 -waveform {0.000 20.000} [get_ports { i_clk_pll1 }];
create_clock -period 40.000 -name CLK_HS2 -waveform {0.000 20.000} [get_ports { i_clk_hs2 }];
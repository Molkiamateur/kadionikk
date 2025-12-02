--
-- File: tb_sys.vhd
-- Created Date: 2024-10-15 01:58:44 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:45:29 pm
-- Modified By: Mathieu Escouteloup
-- Email: mathieu.escouteloup@enseirb-matmeca.fr
-- -----
-- License: See LICENSE.md
-- Copyright (c) 2025 ENSEIRB-MATMECA
-- -----
-- Description: 
--


library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

library vunit_lib;
context vunit_lib.vunit_context;

library emmk;
use emmk.C_TB_CONSTS.all;

entity tb_Sys is
  generic (runner_cfg : string);
end entity;

architecture tb of tb_Sys is
	constant N_UART_CYCLE: integer := 100;
	constant N_BL_BYTE: integer := 16;

  component Sys
    generic (
      N_UART_CYCLE: integer := 10
    );
  	port (
  		clock : in std_logic;	
  		reset : in std_logic;

  		io_i_boot : in std_logic;
  
  		io_b_gpio_eno : out std_logic_vector(7 downto 0);
  		io_b_gpio_in : in std_logic_vector(7 downto 0);
  		io_b_gpio_out : out std_logic_vector(7 downto 0);

      io_b_uart_rx : in std_logic;
      io_b_uart_tx : out std_logic
  	);
  end component;

  component UartRx
  	port (
  		i_clock : in std_logic;	
  		i_reset : in std_logic;	

  		i_ncycle : in std_logic_vector(15 downto 0);

  		o_valid : out std_logic;
  		o_data : out std_logic_vector(7 downto 0);

  		i_rx : in std_logic
  	);	
  end component;

  component UartTx
  	port (
  		i_clock : in std_logic;	
  		i_reset : in std_logic;	

  		i_ncycle : in std_logic_vector(15 downto 0);

  		o_ready : out std_logic;
  		i_valid : in std_logic;
  		i_data : in std_logic_vector(7 downto 0);

  		o_tx : out std_logic
  	);	
  end component;

  type bl_array_type is array (0 to N_BL_BYTE - 1) of std_logic_vector(7 downto 0);
  
	signal s_clock : std_logic := '0';	
	signal s_reset : std_logic := '0';
  signal s_boot : std_logic := '1';
  signal s_gpio_eno : std_logic_vector(7 downto 0);
  signal s_gpio_in : std_logic_vector(7 downto 0) := "10101010";
  signal s_gpio_out : std_logic_vector(7 downto 0);
	signal s_uart_rx : std_logic;	
  signal s_uart_rx_valid : std_logic;
  signal s_uart_rx_data : std_logic_vector(7 downto 0);
	signal s_uart_tx : std_logic;	
  signal s_uart_tx_ready : std_logic;
  signal s_uart_tx_valid : std_logic := '0';
  signal s_uart_tx_data : std_logic_vector(7 downto 0);

  begin
    s_clock <= not (s_clock) after HALF_PERIOD;

    m_sys: Sys 
      generic map (
        N_UART_CYCLE => N_UART_CYCLE
      )
      port map (
        clock         => s_clock,   
        reset         => s_reset,
        io_i_boot     => s_boot,
        io_b_gpio_eno => s_gpio_eno,
        io_b_gpio_in  => s_gpio_in,
        io_b_gpio_out => s_gpio_out,
        io_b_uart_rx  => s_uart_rx,
        io_b_uart_tx  => s_uart_tx
      );

    m_uart_rx: UartRx
      port map (
        i_clock => s_clock,	
        i_reset => s_reset,	
        i_ncycle => std_logic_vector(to_unsigned(N_UART_CYCLE, 16)),
        o_valid => s_uart_rx_valid,
        o_data => s_uart_rx_data,
        i_rx => s_uart_tx
      );

    m_uart_tx: UartTx
      port map (
        i_clock => s_clock,	
        i_reset => s_reset,	
        i_ncycle => std_logic_vector(to_unsigned(N_UART_CYCLE, 16)),
        o_ready => s_uart_tx_ready,
        i_valid => s_uart_tx_valid,
        i_data => s_uart_tx_data,
        o_tx => s_uart_rx
      );

    main: process
      variable v_bl_array : bl_array_type := (
        x"03",
        x"02",
        x"01", x"04", x"00", x"04", x"00", x"94", x"00", x"10", x"00",
        x"03", x"00", x"00", x"10", x"00"
      );
      variable v_bl_cnt : integer := 0;
      begin
        -- TEST: START
        test_runner_setup(runner, runner_cfg);
        wait for PERIOD;

        -- TEST: RESET
        s_reset <= '1';
        wait for PERIOD*5;
        s_reset <= '0';

        -- TEST: BODY
        s_uart_tx_valid <= '1';
        for I in 0 to 60000 loop
          s_uart_tx_data <= v_bl_array(v_bl_cnt);
          wait for HALF_PERIOD;
          if (s_uart_tx_ready = '1') then
            if (v_bl_cnt = N_BL_BYTE - 1) then
              v_bl_cnt := 0;
              s_uart_tx_valid <= '0';
            else
              v_bl_cnt := v_bl_cnt + 1;
              s_uart_tx_valid <= s_uart_tx_valid;
            end if;
          end if;
          wait for HALF_PERIOD;
        end loop;

--        assert true report "End of the simulation.";
        test_runner_cleanup(runner); -- Simulation ends here
    end process;
end tb;
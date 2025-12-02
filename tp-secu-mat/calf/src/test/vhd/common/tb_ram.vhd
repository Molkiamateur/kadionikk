--
-- File: tb_ram.vhd
-- Created Date: 2024-10-15 01:58:44 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:12:30 pm
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
use ieee.math_real.all;

library vunit_lib;
context vunit_lib.vunit_context;

library emmk;
use emmk.C_TB_CONSTS.all;

entity tb_Ram is
  generic (runner_cfg : string);
end entity;

architecture tb of tb_Ram is
  constant N_DATA_BYTE: integer := 4;
  constant N_DATA: integer := 64;

  component Ram 
    generic (
		  INIT_FILE: string;
		  N_DATA: integer := 64;
		  N_DATA_BYTE: integer := 4
	  );
	  port (
		i_clock : in std_logic;	
		i_reset : in std_logic;

		i_en : in std_logic;
		i_addr : in std_logic_vector((integer(ceil(log2(real(N_DATA)))) - 1) downto 0);
		i_wen : in std_logic_vector(N_DATA_BYTE - 1 downto 0);
		i_wdata : in std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);		
		o_rdata : out std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0)
	  );
  end component;

	signal s_clock : std_logic := '0';	
	signal s_reset : std_logic := '0';	

	signal s_en : std_logic;
	signal s_addr : std_logic_vector((integer(ceil(log2(real(N_DATA)))) - 1) downto 0);
	signal s_wen : std_logic_vector(N_DATA_BYTE - 1 downto 0);
	signal s_wdata : std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);		
	signal s_rdata : std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);

  begin
    s_clock <= not (s_clock) after HALF_PERIOD;

    m_Ram: Ram 
      generic map (
        INIT_FILE => "data.hex"
      )
      port map (
        i_clock  => s_clock, 
        i_reset  => s_reset, 
        
        i_en     => s_en, 
        i_addr   => s_addr, 
        i_wen    => s_wen, 
        i_wdata  => s_wdata, 
        o_rdata  => s_rdata
      );

    main: process
    begin
      -- TEST: START
      test_runner_setup(runner, runner_cfg);
      wait for PERIOD;

      -- TEST: RESET
      s_reset <= '1';
      wait for PERIOD*5;
      s_reset <= '0';

      -- TEST: BODY
      -- TEST: T1
      s_en <= '1';
      s_wen <= "0101";
      s_addr <= "000000";
      s_wdata <= x"01010101";
      for I in 1 to 32 loop
        wait for PERIOD;
        s_addr <= s_addr + "000001";
        s_wdata <= s_wdata + x"01010101";
      end loop;

      -- TEST: END
      wait for PERIOD;
--      assert true report "End of the simulation.";
      test_runner_cleanup(runner); -- Simulation ends here
    end process;
end tb;
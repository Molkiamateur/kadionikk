--
-- File: tb_gpr.vhd
-- Created Date: 2024-10-15 01:58:44 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 07:21:59 am
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
use emmk.C_CORE.all;
use emmk.C_TB_CONSTS.all;

entity tb_Gpr is
  generic (runner_cfg : string);
end entity;

architecture tb of tb_Gpr is
  constant N_DATA_BIT: integer := 32;
  constant N_GPR: integer := 32;

  component Gpr
	  generic (
	  	N_DATA_BIT: integer := 32;
	  	N_GPR: integer := 32
	  ); port(
	    i_clock : in std_logic;	
	    i_reset : in std_logic;	

	    i_read0_addr : in std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
	    o_read0_data : out std_logic_vector(N_DATA_BIT - 1 downto 0);			
	    i_read1_addr : in std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	    o_read1_data : out std_logic_vector(N_DATA_BIT - 1 downto 0);		

	    i_write_en : in std_logic;		
	    i_write_addr : in std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
	    i_write_data : in std_logic_vector(N_DATA_BIT - 1 downto 0)
    );	
  end component;

	signal s_clock : std_logic := '0';	
	signal s_reset : std_logic := '0';	
	signal s_read0_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
	signal s_read0_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
	signal s_read1_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	signal s_read1_data : std_logic_vector(N_DATA_BIT - 1 downto 0);		
	signal s_write_en : std_logic;		
	signal s_write_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
	signal s_write_data : std_logic_vector(N_DATA_BIT - 1 downto 0);

  begin
    s_clock <= not (s_clock) after HALF_PERIOD;

    m_gpr: Gpr port map (
      i_clock       => s_clock,   
      i_reset       => s_reset,   
      i_read0_addr  => s_read0_addr,
      o_read0_data  => s_read0_data,
      i_read1_addr  => s_read1_addr,
      o_read1_data  => s_read1_data,
      i_write_en    => s_write_en,   
      i_write_addr  => s_write_addr, 
      i_write_data  => s_write_data 
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
      s_read0_addr <= "00001";
      s_read1_addr <= "00000";
      s_write_en <= '1';
      s_write_addr <= "00001";
      s_write_data <= x"00000002";
      wait for PERIOD;
      assert (s_read0_data = x"00000002") report "[rs1] Error T1";
      assert (s_read1_data = x"00000000") report "[rs2] Error T1";

      -- TEST: T2
      s_read0_addr <= "00010";
      s_read1_addr <= "00010";
      s_write_en <= '1';
      s_write_addr <= "00010";
      s_write_data <= x"00000004";
      wait for PERIOD;
      assert (s_read0_data = x"00000004") report "[rs1] Error T2";
      assert (s_read1_data = x"00000004") report "[rs2] Error T2";

      -- TEST: END
      wait for PERIOD;
--      assert true report "End of the simulation.";
      test_runner_cleanup(runner); -- Simulation ends here
    end process;
end tb;
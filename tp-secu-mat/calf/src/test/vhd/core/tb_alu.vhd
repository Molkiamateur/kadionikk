--
-- File: tb_alu.vhd
-- Created Date: 2024-10-15 01:58:44 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 07:15:46 am
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
use emmk.C_CORE.all;
use emmk.C_TB_CONSTS.all;

entity tb_Alu is
  generic (runner_cfg : string);
end entity;

architecture tb of tb_Alu is
  constant N_DATA_BIT: integer := 32;
  
  component Alu
	  generic (
	  	N_DATA_BIT: integer := 32
	  );
    port(
	    i_uop		  : in std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	    i_signed	: in std_logic;									
      i_s1		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);
	    i_s2		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);	
	    o_res	    : out std_logic_vector(N_DATA_BIT - 1 downto 0)
    );	
  end component;

	signal s_uop: std_logic_vector(2 downto 0);		
	signal s_signed: std_logic;									
  signal s_s1: std_logic_vector(N_DATA_BIT - 1 downto 0);
	signal s_s2: std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_res: std_logic_vector(N_DATA_BIT - 1 downto 0);	

  begin
    m_alu: Alu port map (
      i_uop		  => s_uop,		 
      i_signed  => s_signed, 
      i_s1		  => s_s1,		 
      i_s2		  => s_s2,		 
      o_res	    => s_res	   
    );

    main: process
    begin
      -- TEST: START
      test_runner_setup(runner, runner_cfg);
      wait for PERIOD;

      -- TEST: BODY
      -- TEST: T1
      s_uop <= C_ALU_ADD;
      s_signed <= '0';
      s_s1 <= x"00000001";
      s_s2 <= x"00000002";
      wait for PERIOD;

      assert (s_res = x"00000003") report "Error T1: ALU ADD";
      wait for PERIOD;

      -- TEST: T2
      s_uop <= C_ALU_ADD;
      s_signed <= '0';
      s_s1 <= x"00000001";
      s_s2 <= x"00000003";
      wait for PERIOD;

      assert (s_res = x"00000004") report "Error T2: ALU ADD";
      wait for PERIOD;

      -- TEST: T3
      s_uop <= C_ALU_ADD;
      s_signed <= '1';
      s_s1 <= x"00000010";
      s_s2 <= x"00000009";
      wait for PERIOD;

      assert (s_res = x"00000007") report "Error T3: ALU SUB";
      wait for PERIOD;

      -- TEST: T4
      s_uop <= C_ALU_SLL;
      s_signed <= '0';
      s_s1 <= x"00000010";
      s_s2 <= x"00000002";
      wait for PERIOD;

      assert (s_res = x"00000040") report "Error T4: ALU SLL" severity warning;
      wait for PERIOD;

      -- TEST: END
      wait for PERIOD;
--      assert true report "End of the simulation.";
      test_runner_cleanup(runner); -- Simulation ends here
    end process;
end tb;
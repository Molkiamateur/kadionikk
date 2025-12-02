--
-- File: gpr.vhd
-- Created Date: 2024-10-15 04:35:50 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 11:51:12 am
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

library emmk;
use emmk.C_RISCV.all;
use emmk.C_CORE.all;

entity Gpr is
	generic (
		N_DATA_BIT: integer := 32;
		N_GPR: integer := 32
	);
	port (
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
end entity Gpr;

architecture Gpr_arch of Gpr is
	type regfile_type is array (0 to N_GPR - 1) of std_logic_vector(N_DATA_BIT - 1 downto 0);
	signal r_gpr: regfile_type;

	begin
		-- Combinatorial Logic
		comb1 : process (r_gpr, i_read0_addr, i_read1_addr)
			begin
			
			  if (unsigned(i_read0_addr) = 0) then
					o_read0_data <= (others => '0'); 
				else 
					o_read0_data <= r_gpr(to_integer(unsigned(i_read0_addr))); 
				end if;

			  if (unsigned(i_read1_addr) = 0) then
					o_read1_data <= (others => '0'); 
				else 
					o_read1_data <= r_gpr(to_integer(unsigned(i_read1_addr))); 
				end if;
		end process comb1;

		-- Sequential Logic
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						-- Nothing to reset here
					else 
						if ((i_write_en = '1') and (unsigned(i_write_addr) /= 0)) then
							r_gpr(to_integer(unsigned(i_write_addr))) <= i_write_data;
						end if;
					end if;
				end if;
		end process seq;
end Gpr_arch;
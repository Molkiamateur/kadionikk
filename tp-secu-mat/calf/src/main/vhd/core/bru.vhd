--
-- File: bru.vhd
-- Created Date: 2024-10-15 04:35:50 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 09:02:41 am
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

library emmk;
use emmk.C_CORE.all;

entity Bru is
	generic (
		N_ADDR_BIT: integer := 32;
		N_DATA_BIT: integer := 32
	);
	port (
		i_uop		  : in std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);	
  	i_pc		  : in std_logic_vector(N_ADDR_BIT - 1 downto 0);
  	i_s1		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);
		i_s2		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);	
		o_br	    : out std_logic;	
		o_res	    : out std_logic_vector(N_DATA_BIT - 1 downto 0)
	);	
end entity Bru;

architecture Bru_arch of Bru is
	signal s_cmp_eq : std_logic;
	signal s_cmp_slow : std_logic;
	signal s_cmp_ulow : std_logic;

	begin
    -- Direct affectation
    o_res <= std_logic_vector(resize(unsigned(i_pc + x"4"), N_DATA_BIT));

		-- Combinatorial Logic
		comb1 : process (i_s1, i_s2)
			begin
				if (i_s1 = i_s2) then
			  	s_cmp_eq <= '1';	
				else
					s_cmp_eq <= '0';
				end if;

				if (signed(i_s1) < signed(i_s2)) then
			  	s_cmp_slow <= '1';	
				else
					s_cmp_slow <= '0';
				end if;

				if (unsigned(i_s1) < unsigned(i_s2)) then
			  	s_cmp_ulow <= '1';	
				else
					s_cmp_ulow <= '0';
				end if;
		end process comb1;

		comb2 : process (i_uop, s_cmp_eq, s_cmp_slow, s_cmp_ulow)
			begin
			  case i_uop is
			  	when C_BRU_J =>			-- JAL/JALR
			  		o_br <= '1';	
			  	when C_BRU_BEQ =>		-- BEQ
						if (s_cmp_eq = '1') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
			  	when C_BRU_BNE =>		-- BNE
						if (s_cmp_eq = '0') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
			  	when C_BRU_BLT =>		-- BLT
						if (s_cmp_slow = '1') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
			  	when C_BRU_BGE =>		-- BGE
						if (s_cmp_slow = '0') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
			  	when C_BRU_BLTU =>		-- BLTU
						if (s_cmp_ulow = '1') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
			  	when C_BRU_BGEU =>		-- BGEU
						if (s_cmp_ulow = '0') then
			  			o_br <= '1';	
						else
							o_br <= '0';
						end if;
				  when others =>
				  	o_br <= '0';
			end case;
		end process comb2;
end Bru_arch;
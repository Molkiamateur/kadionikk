--
-- File: alu.vhd
-- Created Date: 2024-10-15 04:35:50 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 08:59:54 am
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

entity Alu is
	generic (
		N_DATA_BIT: integer := 32
	);
	port (
		i_uop		  : in std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
		i_signed	: in std_logic;									
  	i_s1		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);
		i_s2		  : in std_logic_vector(N_DATA_BIT - 1 downto 0);	
		o_res	    : out std_logic_vector(N_DATA_BIT - 1 downto 0)
	);	
end entity Alu;

architecture Alu_arch of Alu is
	signal s_amount : std_logic_vector(4 downto 0);

	begin
    -- Direct affectation
    s_amount <= i_s2(4 downto 0); 

		-- Combinatorial Logic
		comb1 : process (i_uop, i_signed, i_s1, i_s2, s_amount)
			begin
			  case i_uop is
			  	when C_ALU_ADD =>			-- Addition / Substraction
			  		if (i_signed = '0') then
			  			o_res <= i_s1 + i_s2;
			  		else
			  			o_res <= i_s1 - i_s2;
			  		end if;	
  				when C_ALU_SLL =>			-- Left Shift (Logical)
  					for I in 31 downto 0 loop
  						if I < to_integer(unsigned(s_amount)) then
  							o_res(I) <= '0';
  						else	
  							o_res(I) <= i_s1(I - to_integer(unsigned(s_amount)));
  						end if;
  					end loop;
					when C_ALU_SLT =>			-- Set on Less Than (Signed)
						o_res(N_DATA_BIT - 1 downto 1) <= (others => '0');
						if (i_signed = '1') then
							if (signed(i_s1) < signed(i_s2)) then
								o_res(0) <= '1';
							else   
								o_res(0) <= '0';
							end if;
						else
							if (unsigned(i_s1) < unsigned(i_s2)) then
								o_res(0) <= '1';
							else   
								o_res(0) <= '0';
							end if;
						end if;						
					when C_ALU_XOR =>			-- Logical XOR
						o_res <= i_s1 xor i_s2;
					when C_ALU_SR =>			-- Right Shift (Logical or Arithmetic)
						for I in 0 to 31 loop
							if I < (31 - to_integer(unsigned(s_amount)) + 1) then
								o_res(I) <= i_s1(I + to_integer(unsigned(s_amount)));
							else
								if i_signed = '1' then
									o_res(I) <= i_s1(31);
								else
									o_res(I) <= '0';
								end if;
							end if;
						end loop;
					when C_ALU_OR =>			-- Logical OR
						o_res <= i_s1 or i_s2;
					when C_ALU_AND =>			-- Logical AND
						o_res <= i_s1 and i_s2;
				  when others =>
				  	o_res <= (others => '0');
			end case;
		end process comb1;
end Alu_arch;
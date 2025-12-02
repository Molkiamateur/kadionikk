--
-- File: gpio8.vhd
-- Created Date: 2025-02-13 11:46:57 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 04:12:26 pm
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
use emmk.C_ADDR.all;

entity Gpio8 is
	generic (
		N_DATA_BYTE: integer := 4
	);
	port (
		i_clock : in std_logic;	
		i_reset : in std_logic;	

		i_mem_valid : in std_logic;
		i_mem_addr : in std_logic_vector(N_GPIO8_BIT - 1 downto 0);
		i_mem_wen : in std_logic_vector(N_DATA_BYTE - 1 downto 0);
		i_mem_wdata : in std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);	
		o_mem_ready : out std_logic;	
		o_mem_rdata : out std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);

		o_gpio_eno : out std_logic_vector(7 downto 0);
		i_gpio_in : in std_logic_vector(7 downto 0);
		o_gpio_out : out std_logic_vector(7 downto 0)
	);	
end entity Gpio8;

architecture Gpio8_arch of Gpio8 is
  signal r_eno : std_logic_vector(7 downto 0);
  signal r_in : std_logic_vector(7 downto 0);
  signal r_out : std_logic_vector(7 downto 0);

  signal r_rdata : std_logic_vector(7 downto 0);

  signal s_rdata : std_logic_vector(7 downto 0);
  signal s_eno : std_logic_vector(7 downto 0);	
  signal s_out : std_logic_vector(7 downto 0);

	begin
		o_mem_ready <= '1';

  	-- ******************************
  	--              READ
  	-- ******************************
		comb_read : process (i_mem_addr, r_rdata, r_eno, r_in, r_out)
			begin
				case i_mem_addr is
			    when C_GPIO8_ENO =>		-- ENO
            s_rdata <= r_eno;
			    when C_GPIO8_IN =>		-- IN
            s_rdata <= r_in;
			    when C_GPIO8_OUT =>		-- OUT
            s_rdata <= r_out;
          when others =>        -- DEFAULT
            s_rdata <= r_rdata;
        end case;       
		end process comb_read;
		
		o_mem_rdata(7 downto 0) <= r_rdata;
		o_mem_rdata(N_DATA_BYTE * 8 - 1 downto 8) <= (others => '0');

  	-- ******************************
  	--             WRITE
  	-- ******************************
		comb_write : process (i_mem_valid, i_mem_addr, i_mem_wen, i_mem_wdata, r_eno, r_in, r_out)
			begin
				if ((i_mem_valid = '1') and (i_mem_wen(0) = '1')) then 
					case i_mem_addr is
						when C_GPIO8_ENO =>		-- ENO
							s_eno <= i_mem_wdata(7 downto 0);
							s_out <= r_out;
						when C_GPIO8_OUT =>		-- OUT
							s_eno <= r_eno;
							s_out <= i_mem_wdata(7 downto 0);
						when others =>        -- DEFAULT
							s_eno <= r_eno;
							s_out <= r_out;
					end case;
				else
					s_eno <= r_eno;
					s_out <= r_out;
				end if;    
		end process comb_write;

  	-- ******************************
  	--              GPIO
  	-- ******************************
		o_gpio_eno <= r_eno;
		o_gpio_out <= r_out;

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_eno <= (others => '0');
						r_in <= (others => '0');
						r_out <= (others => '0');
					else 
						r_eno <= s_eno;
						r_in <= i_gpio_in;
						r_out <= s_out;
						r_rdata <= s_rdata;
					end if;
				end if;
		end process seq;
end Gpio8_arch;
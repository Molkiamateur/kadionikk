--
-- File: ram.vhd
-- Created Date: 2024-10-15 04:35:50 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:11:22 pm
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
use ieee.std_logic_textio.all;
use std.textio.all;

entity Ram is
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
end entity Ram;

architecture Ram_arch of Ram is
	type mem_type is array (0 to N_DATA - 1) of std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);

	impure function func_init return mem_type is	
--		file mem_file : text open read_mode is INIT_FILE;
		variable open_status : file_open_status;
		file mem_file : text;
		variable mem_line : line;
		variable mem_init : mem_type;
		variable I : integer := 0;

		begin
			file_open(open_status, mem_file, INIT_FILE, read_mode);
			if (open_status = open_ok) then
				while not endfile(mem_file) loop
					readline(mem_file, mem_line);
					hread(mem_line, mem_init(I));
					I := I + 1;
				end loop;
			end if;
			return mem_init;
	end function;

	signal r_ram: mem_type := func_init;
	signal r_rdata: std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);

	begin
		-- Sequential Logic: read
		read : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_rdata <= (others => '0');
					else 
						r_rdata <= r_ram(to_integer(unsigned(i_addr)));
					end if;
				end if;
		end process read;

		o_rdata <= r_rdata;

		-- Sequential Logic: write
		write : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '0') then
						for I in 0 to N_DATA_BYTE - 1 loop
							if ((i_en = '1') and (i_wen(I) = '1')) then
								r_ram(to_integer(unsigned(i_addr)))(((I + 1) * 8 - 1) downto (I * 8)) <= i_wdata(((I + 1) * 8 - 1) downto (I * 8));
							end if;
						end loop;
					end if;
				end if;
		end process write;
end Ram_arch;
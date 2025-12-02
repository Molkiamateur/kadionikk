--
-- File: core.vhd
-- Created Date: 2025-02-11 06:55:18 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:44:48 pm
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

entity Core is
	generic (
  	PC_BOOT: std_logic_vector(31 downto 0) := x"00000000";
    N_ADDR_BIT: integer := 32;
    N_INSTR_BIT: integer := 32;
		N_DATA_BIT: integer := 32;
    N_GPR: integer := 32
	);
  port (
	  i_clock : in std_logic;	
	  i_reset : in std_logic;	

	  i_bl : in std_logic;	

	  o_mem_valid : out std_logic;
	  o_mem_wen : out std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	  o_mem_addr : out std_logic_vector(N_ADDR_BIT - 1 downto 0);
	  o_mem_wdata : out std_logic_vector(N_DATA_BIT - 1 downto 0);	
	  i_mem_ready : in std_logic;	
	  i_mem_rdata : in std_logic_vector(N_DATA_BIT - 1 downto 0)
  );	
end entity Core;

architecture Core_arch of Core is
  component Fsm port (
  	i_clock : in std_logic;	
  	i_reset : in std_logic;	

    i_bl : in std_logic;

    i_fetch_req : in std_logic;
    i_fetch_ack : in std_logic;
	  i_seq : in std_logic_vector(N_SEQ_BIT - 1 downto 0);
    i_mem_req : in std_logic;
    i_mem_ack : in std_logic;

    o_fetch : out std_logic;
    o_instr : out std_logic;
    o_decoder : out std_logic;
    o_alu : out std_logic;
    o_bru : out std_logic;
    o_mem_req : out std_logic;
    o_mem_ack : out std_logic;
    o_wb : out std_logic);	
  end component;

  component Gpr
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
  end component;

  component Decoder
	  generic (
	  	N_ADDR_BIT: integer := 32;
	  	N_INSTR_BIT: integer := 32;
	  	N_DATA_BIT: integer := 32;
	  	N_GPR: integer := 32
	  );
	  port (
	  	i_pc	  			: in std_logic_vector(N_ADDR_BIT - 1 downto 0);	
	  	i_instr	  		: in std_logic_vector(N_INSTR_BIT - 1 downto 0);	

	  	o_seq					: out std_logic_vector(N_SEQ_BIT - 1 downto 0);

	  	o_alu_uop			: out std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	  	o_alu_signed	: out std_logic;	
	  	o_bru_uop			: out std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);
	  	o_bru_pc_rel	: out std_logic;					
	  	o_mem_rw			: out std_logic;		
	  	o_mem_size		: out std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	  	o_mem_signed	: out std_logic;		
	  	o_wb_en				: out std_logic;
	  	o_wb_addr			: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			

	  	o_rs1					: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	  	o_rs2					: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	  	o_s1_reg  		: out std_logic;		
	  	o_s1_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0);			
	  	o_s2_reg  		: out std_logic;		
	  	o_s2_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0);	
	  	o_s3_reg  		: out std_logic;		
	  	o_s3_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0)	
	  );	
  end component;

  component Alu
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
  end component;

  component Bru
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
  end component;

  signal r_pc : std_logic_vector(N_ADDR_BIT - 1 downto 0);
  signal r_instr : std_logic_vector(N_INSTR_BIT - 1 downto 0);

	signal r_alu_uop : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	signal r_alu_signed	: std_logic;	
	signal r_bru_uop : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);
	signal r_bru_pc_rel	: std_logic;					
	signal r_mem_rw	: std_logic;		
	signal r_mem_size	: std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	signal r_mem_signed	: std_logic;		
	signal r_wb_en : std_logic;
	signal r_wb_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);	

  signal r_s1_res : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal r_s2_pc : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal r_s3_br : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_pc : std_logic_vector(N_ADDR_BIT - 1 downto 0);
  signal s_instr : std_logic_vector(N_INSTR_BIT - 1 downto 0);

	signal s_alu_uop : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	signal s_alu_signed	: std_logic;	
	signal s_bru_uop : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);
	signal s_bru_pc_rel	: std_logic;					
	signal s_mem_rw	: std_logic;		
	signal s_mem_size	: std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	signal s_mem_signed	: std_logic;		
	signal s_wb_en : std_logic;
	signal s_wb_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);	

  signal s_s1_res : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal s_s2_pc : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal s_s3_br : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_fsm_fetch : std_logic;
  signal s_fsm_instr : std_logic;
  signal s_fsm_decoder : std_logic;
  signal s_fsm_alu : std_logic;
  signal s_fsm_bru : std_logic;
  signal s_fsm_mem_req : std_logic;
  signal s_fsm_mem_ack : std_logic;
  signal s_fsm_wb : std_logic;

  signal s_read0_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
  signal s_read1_data : std_logic_vector(N_DATA_BIT - 1 downto 0);

	signal s_dec_seq : std_logic_vector(N_SEQ_BIT - 1 downto 0);
	signal s_dec_alu_uop : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	signal s_dec_alu_signed	: std_logic;	
	signal s_dec_bru_uop	: std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);	
  signal s_dec_bru_pc_rel : std_logic;			
	signal s_dec_mem_rw	: std_logic;		
	signal s_dec_mem_size : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	signal s_dec_mem_signed	: std_logic;
  signal s_dec_wb_en : std_logic;
  signal s_dec_wb_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);	
  signal s_dec_rs1 : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
  signal s_dec_rs2 : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	signal s_dec_s1_reg : std_logic;		
	signal s_dec_s1_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
	signal s_dec_s2_reg : std_logic;		
	signal s_dec_s2_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
	signal s_dec_s3_reg : std_logic;		
	signal s_dec_s3_data : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_alu_s1 : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal s_alu_s2 : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal s_alu_res : std_logic_vector(N_DATA_BIT - 1 downto 0);
  signal s_bru_br : std_logic;
  signal s_bru_res : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_gpr_write_en : std_logic;
  signal s_gpr_write_addr : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
  signal s_gpr_write_data : std_logic_vector(N_DATA_BIT - 1 downto 0);

	begin
    -- ******************************
    --              FSM
    -- ******************************
    m_fsm: Fsm port map (
      i_clock       => i_clock,	
  	  i_reset       => i_reset,	

      i_bl          => i_bl,

      i_fetch_req   => i_mem_ready,
      i_fetch_ack   => '1',
      i_seq         => s_dec_seq,
      i_mem_req     => i_mem_ready,
      i_mem_ack     => '1',

      o_fetch       => s_fsm_fetch,
      o_instr       => s_fsm_instr,
      o_decoder     => s_fsm_decoder,
      o_alu         => s_fsm_alu,
      o_bru         => s_fsm_bru,
      o_mem_req     => s_fsm_mem_req,
      o_mem_ack     => s_fsm_mem_ack,
      o_wb          => s_fsm_wb	   
    );

    -- ******************************
    --        PC / INSTRUCTION
    -- ******************************
		comb_pc : process (r_pc, r_s2_pc, r_s3_br, s_fsm_wb)
			begin
        if (s_fsm_wb = '1') then 
          if (r_s3_br(0) = '1') then
            s_pc <= r_s2_pc(N_ADDR_BIT - 1 downto 0);
          else 
            s_pc <= r_pc + x"4";
          end if;
        else 
          s_pc <= r_pc;
        end if;        
		end process comb_pc;

		comb_instr : process (r_instr, s_fsm_instr, i_mem_rdata)
			begin
        if (s_fsm_instr = '1') then
          s_instr <= i_mem_rdata;  
        else 
          s_instr <= r_instr;
        end if; 
		end process comb_instr;

    -- ******************************
    --             MEMORY
    -- ******************************
		comb_mem : process (r_pc, r_s1_res, r_s3_br, s_fsm_fetch, s_fsm_alu, s_fsm_mem_req, r_mem_rw, r_mem_size, i_mem_rdata)
			begin
        if (s_fsm_mem_req = '1') then 
          o_mem_valid <= not s_fsm_alu;
          o_mem_addr <= r_s1_res(N_ADDR_BIT - 1 downto 2) & "00";
          o_mem_wdata <= r_s3_br;

          if (r_mem_rw = '1') then 
            if (r_mem_size = C_MEM_B) then 
              o_mem_wen <= "0001";
            elsif (r_mem_size = C_MEM_H) then 
              o_mem_wen <= "0011";
            elsif (r_mem_size = C_MEM_W) then 
              o_mem_wen <= "1111";
            else 
              o_mem_wen <= "0000";
            end if;
          else 
            o_mem_wen <= "0000";
          end if;
        else 
          o_mem_valid <= s_fsm_fetch;
          o_mem_addr <= r_pc(N_ADDR_BIT - 1 downto 2) & "00";
          o_mem_wen <= "0000";
          o_mem_wdata <= (others => '0');
        end if;    
		end process comb_mem;

    -- ******************************
    --            DECODER
    -- ******************************
    m_decoder: Decoder
      generic map (
        N_ADDR_BIT    => N_ADDR_BIT,
        N_INSTR_BIT   => N_INSTR_BIT,
        N_DATA_BIT    => N_DATA_BIT,
        N_GPR         => N_GPR
      )
    
      port map (
      	i_pc	        => r_pc,	
      	i_instr	      => r_instr,	

        o_seq         => s_dec_seq,

  	    o_alu_uop     => s_dec_alu_uop,
  	    o_alu_signed	=> s_dec_alu_signed,
  	    o_bru_uop     => s_dec_bru_uop,
  	    o_bru_pc_rel  => s_dec_bru_pc_rel,				
  	    o_mem_rw      => s_dec_mem_rw,	
  	    o_mem_size    => s_dec_mem_size,		
  	    o_mem_signed  => s_dec_mem_signed,	
      	o_wb_en	      => s_dec_wb_en,			
      	o_wb_addr			=> s_dec_wb_addr,	

      	o_rs1			    => s_dec_rs1,			
      	o_rs2			    => s_dec_rs2,		
  	    o_s1_reg      => s_dec_s1_reg,		
  	    o_s1_data     => s_dec_s1_data,			
  	    o_s2_reg      => s_dec_s2_reg,		
  	    o_s2_data     => s_dec_s2_data,				
  	    o_s3_reg      => s_dec_s3_reg,		
  	    o_s3_data     => s_dec_s3_data		
      );

    comb_dec_alu : process (s_fsm_decoder, s_dec_alu_uop, s_dec_alu_signed, r_alu_uop, r_alu_signed)
			begin
        if (s_fsm_decoder = '1') then 
	        s_alu_uop <= s_dec_alu_uop;
	        s_alu_signed <= s_dec_alu_signed;	
        else 
	        s_alu_uop <= r_alu_uop;
	        s_alu_signed <= r_alu_signed;		
        end if;        
		end process comb_dec_alu;

		comb_dec_br : process (s_fsm_decoder, s_dec_bru_uop, s_dec_bru_pc_rel, r_bru_uop, r_bru_pc_rel)
			begin
        if (s_fsm_decoder = '1') then 
	        s_bru_uop <= s_dec_bru_uop;
	        s_bru_pc_rel <= s_dec_bru_pc_rel;
        else 
	        s_bru_uop <= r_bru_uop;
	        s_bru_pc_rel <= r_bru_pc_rel;
        end if;        
		end process comb_dec_br;

		comb_dec_mem : process (s_fsm_decoder, s_dec_mem_rw, s_dec_mem_size, s_dec_mem_signed, r_mem_rw, r_mem_size, r_mem_signed)
			begin
        if (s_fsm_decoder = '1') then 	
	        s_mem_rw <= s_dec_mem_rw;
	        s_mem_size <= s_dec_mem_size;		
	        s_mem_signed <= s_dec_mem_signed;	
        else 
	        s_mem_rw <= r_mem_rw;
	        s_mem_size <= r_mem_size;		
	        s_mem_signed <= r_mem_signed;	
        end if;        
		end process comb_dec_mem;

		comb_dec_wb : process (s_fsm_decoder, s_dec_wb_en, s_dec_wb_addr, r_wb_en, r_wb_addr)
			begin
        if (s_fsm_decoder = '1') then 
          s_wb_en <= s_dec_wb_en;
          s_wb_addr <= s_dec_wb_addr;
        else 
          s_wb_en <= r_wb_en;
          s_wb_addr <= r_wb_addr;
        end if;        
		end process comb_dec_wb;

    -- ******************************
    --              GPR
    -- ******************************
    m_gpr: Gpr
      generic map (
        N_DATA_BIT    => N_DATA_BIT,
        N_GPR         => N_GPR
      )
      port map (
      	i_clock       => i_clock,	
      	i_reset       => i_reset,

      	i_read0_addr  => s_dec_rs1,
      	o_read0_data  => s_read0_data,			
      	i_read1_addr  => s_dec_rs2,		
      	o_read1_data  => s_read1_data,	

      	i_write_en    => s_gpr_write_en,
      	i_write_addr  => s_gpr_write_addr,
      	i_write_data  => s_gpr_write_data
      );

		comb_wb : process (s_fsm_wb, r_wb_en, r_wb_addr, r_s1_res)
			begin
        s_gpr_write_en <= r_wb_en and s_fsm_wb;
        s_gpr_write_addr <= r_wb_addr;
        s_gpr_write_data <= r_s1_res;   
		end process comb_wb;

    -- ******************************
    --          DATA REGISTER
    -- ******************************
		comb_data : process (s_fsm_decoder, s_fsm_alu, s_fsm_bru, s_fsm_mem_req, s_fsm_mem_ack, r_mem_rw, r_mem_size, r_mem_signed, r_s1_res, r_s2_pc, r_s3_br, s_read0_data, s_read1_data, s_alu_res, s_bru_res, s_bru_br, s_dec_s1_reg, s_dec_s1_data, s_dec_s2_reg, s_dec_s2_data, s_dec_s3_reg, s_dec_s3_data, i_mem_ready, i_mem_rdata)
			begin
        if (s_fsm_decoder = '1') then
          if (s_dec_s1_reg = '1') then
            s_s1_res <= s_read0_data;
          else
            s_s1_res <= s_dec_s1_data;
          end if;

          if (s_dec_s2_reg = '1') then
            s_s2_pc <= s_read1_data;
          else
            s_s2_pc <= s_dec_s2_data;
          end if;

          if (s_dec_s3_reg = '1') then
            s_s3_br <= s_read1_data;
          else
            s_s3_br <= s_dec_s3_data;
          end if;
        elsif (s_fsm_bru = '1') then
          s_s1_res <= s_bru_res;
          s_s2_pc <= s_alu_res;
          s_s3_br(0) <= s_bru_br;
          s_s3_br(N_DATA_BIT - 1 downto 1) <= (others => '0');
        elsif ((s_fsm_alu = '1') and (s_fsm_mem_req = '1')) then
          s_s1_res <= s_alu_res;
          s_s2_pc <= r_s2_pc;
          s_s3_br <= r_s3_br;
        elsif (s_fsm_alu = '1') then
          s_s1_res <= s_alu_res;
          s_s2_pc <= r_s2_pc;
          s_s3_br <= (others => '0');
        elsif (s_fsm_mem_ack = '1') then
          if ((r_mem_rw = '0') and (i_mem_ready = '1')) then 
            case r_mem_size is
              when C_MEM_B =>
                s_s1_res(7 downto 0) <= i_mem_rdata(7 downto 0);
                if (r_mem_signed = '1') then
                  s_s1_res(N_DATA_BIT - 1 downto 8) <= (others => i_mem_rdata(7));
                else 
                  s_s1_res(N_DATA_BIT - 1 downto 8) <= (others => '0');
                end if;              
              when C_MEM_H =>
                s_s1_res(15 downto 0) <= i_mem_rdata(15 downto 0);
                if (r_mem_signed = '1') then
                  s_s1_res(N_DATA_BIT - 1 downto 16) <= (others => i_mem_rdata(15));
                else 
                  s_s1_res(N_DATA_BIT - 1 downto 16) <= (others => '0');
                end if; 
              when C_MEM_W =>
                s_s1_res <= i_mem_rdata(31 downto 0);
              when others =>
                s_s1_res <=  i_mem_rdata(31 downto 0);
            end case;
          else
            s_s1_res <= r_s1_res;
          end if;
          
          s_s2_pc <= r_s2_pc;
          
          if (i_mem_ready = '1') then
            s_s3_br <= (others => '0');
          else 
            s_s3_br <= r_s3_br;
          end if;
        else 
          s_s1_res <= r_s1_res;
          s_s2_pc <= r_s2_pc;
          s_s3_br <= r_s3_br;
        end if;        
		end process comb_data;

    -- ******************************
    --              ALU
    -- ******************************
		comb_alu : process (s_fsm_bru, r_bru_pc_rel, r_pc, r_s1_res, r_s2_pc, r_s3_br)
			begin
        if (s_fsm_bru = '1') and (r_bru_pc_rel = '1') then
          s_alu_s1 <= r_s3_br;
          s_alu_s2 <= std_logic_vector(resize(unsigned(r_pc), N_DATA_BIT));
        else
          s_alu_s1 <= r_s1_res;
          s_alu_s2 <= r_s2_pc;
        end if;
		end process comb_alu;

    m_alu: Alu 
      generic map (
        N_DATA_BIT    => N_DATA_BIT
      )
      port map (
      	i_uop		  => r_alu_uop,		
      	i_signed	=> r_alu_signed,									
        i_s1		  => s_alu_s1,
      	i_s2		  => s_alu_s2,
      	o_res	    => s_alu_res
      );	

    -- ******************************
    --              BRU
    -- ******************************
    m_bru: Bru 
      generic map (
        N_ADDR_BIT    => N_ADDR_BIT,
        N_DATA_BIT    => N_DATA_BIT
      )
      port map (
      	i_uop		  => r_bru_uop,	
        i_pc		  => r_pc,
        i_s1		  => r_s1_res,
      	i_s2		  => r_s2_pc,
      	o_br	    => s_bru_br,	
      	o_res	    => s_bru_res
      );

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_pc <= PC_BOOT(N_ADDR_BIT - 1 downto 0);
					else 
						r_pc <= s_pc;
						r_instr <= s_instr;
            
	          r_alu_uop <= s_alu_uop;
	          r_alu_signed <= s_alu_signed;		
	          r_bru_uop <= s_bru_uop;
	          r_bru_pc_rel <= s_bru_pc_rel;
	          r_mem_rw <= s_mem_rw;
	          r_mem_size <= s_mem_size;		
	          r_mem_signed <= s_mem_signed;	
            r_wb_en <= s_wb_en;
            r_wb_addr <= s_wb_addr;
            
						r_s1_res <= s_s1_res;
						r_s2_pc <= s_s2_pc;
						r_s3_br <= s_s3_br;
					end if;
				end if;
		end process seq;

  	-- ******************************
  	--              DEBUG
  	-- ******************************
    
end Core_arch;
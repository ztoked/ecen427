------------------------------------------------------------------------------
-- user_logic.vhd - entity/architecture pair
------------------------------------------------------------------------------
--
-- ***************************************************************************
-- ** Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.            **
-- **                                                                       **
-- ** Xilinx, Inc.                                                          **
-- ** XILINX IS PROVIDING THIS DESIGN, CODE, OR INFORMATION "AS IS"         **
-- ** AS A COURTESY TO YOU, SOLELY FOR USE IN DEVELOPING PROGRAMS AND       **
-- ** SOLUTIONS FOR XILINX DEVICES.  BY PROVIDING THIS DESIGN, CODE,        **
-- ** OR INFORMATION AS ONE POSSIBLE IMPLEMENTATION OF THIS FEATURE,        **
-- ** APPLICATION OR STANDARD, XILINX IS MAKING NO REPRESENTATION           **
-- ** THAT THIS IMPLEMENTATION IS FREE FROM ANY CLAIMS OF INFRINGEMENT,     **
-- ** AND YOU ARE RESPONSIBLE FOR OBTAINING ANY RIGHTS YOU MAY REQUIRE      **
-- ** FOR YOUR IMPLEMENTATION.  XILINX EXPRESSLY DISCLAIMS ANY              **
-- ** WARRANTY WHATSOEVER WITH RESPECT TO THE ADEQUACY OF THE               **
-- ** IMPLEMENTATION, INCLUDING BUT NOT LIMITED TO ANY WARRANTIES OR        **
-- ** REPRESENTATIONS THAT THIS IMPLEMENTATION IS FREE FROM CLAIMS OF       **
-- ** INFRINGEMENT, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS       **
-- ** FOR A PARTICULAR PURPOSE.                                             **
-- **                                                                       **
-- ***************************************************************************
--
------------------------------------------------------------------------------
-- Filename:          user_logic.vhd
-- Version:           1.00.a
-- Description:       User logic.
-- Date:              Mon Nov 14 15:36:27 2016 (by Create and Import Peripheral Wizard)
-- VHDL Standard:     VHDL'93
------------------------------------------------------------------------------
-- Naming Conventions:
--   active low signals:                    "*_n"
--   clock signals:                         "clk", "clk_div#", "clk_#x"
--   reset signals:                         "rst", "rst_n"
--   generics:                              "C_*"
--   user defined types:                    "*_TYPE"
--   state machine next state:              "*_ns"
--   state machine current state:           "*_cs"
--   combinatorial signals:                 "*_com"
--   pipelined or register delay signals:   "*_d#"
--   counter signals:                       "*cnt*"
--   clock enable signals:                  "*_ce"
--   internal version of output port:       "*_i"
--   device pins:                           "*_pin"
--   ports:                                 "- Names begin with Uppercase"
--   processes:                             "*_PROCESS"
--   component instantiations:              "<ENTITY_>I_<#|FUNC>"
------------------------------------------------------------------------------

-- DO NOT EDIT BELOW THIS LINE --------------------
library ieee;
use ieee.std_logic_1164.all;
--use ieee.std_logic_arith.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

library proc_common_v3_00_a;
use proc_common_v3_00_a.proc_common_pkg.all;

-- DO NOT EDIT ABOVE THIS LINE --------------------

--USER libraries added here

------------------------------------------------------------------------------
-- Entity section
------------------------------------------------------------------------------
-- Definition of Generics:
--   C_NUM_REG                    -- Number of software accessible registers
--   C_SLV_DWIDTH                 -- Slave interface data bus width
--
-- Definition of Ports:
--   Bus2IP_Clk                   -- Bus to IP clock
--   Bus2IP_Resetn                -- Bus to IP reset
--   Bus2IP_Data                  -- Bus to IP data bus
--   Bus2IP_BE                    -- Bus to IP byte enables
--   Bus2IP_RdCE                  -- Bus to IP read chip enable
--   Bus2IP_WrCE                  -- Bus to IP write chip enable
--   IP2Bus_Data                  -- IP to Bus data bus
--   IP2Bus_RdAck                 -- IP to Bus read transfer acknowledgement
--   IP2Bus_WrAck                 -- IP to Bus write transfer acknowledgement
--   IP2Bus_Error                 -- IP to Bus error response
------------------------------------------------------------------------------

entity user_logic is
  generic
  (
    -- ADD USER GENERICS BELOW THIS LINE ---------------
    --USER generics added here
    -- ADD USER GENERICS ABOVE THIS LINE ---------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol parameters, do not add to or delete
    C_NUM_REG                      : integer              := 1;
    C_SLV_DWIDTH                   : integer              := 32
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );
  port
  (
    -- ADD USER PORTS BELOW THIS LINE ------------------
	Latch            : out std_logic;
	Pulse            : out std_logic;
	Data             : in std_logic;
	IP2Bus_Interrupt			   : out std_logic;

    -- ADD USER PORTS ABOVE THIS LINE ------------------

    -- DO NOT EDIT BELOW THIS LINE ---------------------
    -- Bus protocol ports, do not add to or delete
    Bus2IP_Clk                     : in  std_logic;
    Bus2IP_Resetn                  : in  std_logic;
    Bus2IP_Data                    : in  std_logic_vector(C_SLV_DWIDTH-1 downto 0);
    Bus2IP_BE                      : in  std_logic_vector(C_SLV_DWIDTH/8-1 downto 0);
    Bus2IP_RdCE                    : in  std_logic_vector(C_NUM_REG-1 downto 0);
    Bus2IP_WrCE                    : in  std_logic_vector(C_NUM_REG-1 downto 0);
    IP2Bus_Data                    : out std_logic_vector(C_SLV_DWIDTH-1 downto 0);
    IP2Bus_RdAck                   : out std_logic;
    IP2Bus_WrAck                   : out std_logic;
    IP2Bus_Error                   : out std_logic
    -- DO NOT EDIT ABOVE THIS LINE ---------------------
  );

  attribute MAX_FANOUT : string;
  attribute SIGIS : string;

  attribute SIGIS of Bus2IP_Clk    : signal is "CLK";
  attribute SIGIS of Bus2IP_Resetn : signal is "RST";

end entity user_logic;

------------------------------------------------------------------------------
-- Architecture section
------------------------------------------------------------------------------

architecture IMP of user_logic is

  --USER signal declarations added here, as needed for user logic
	signal interruptNext : std_logic;
	signal lastButtons : std_logic_vector(31 downto 0) := (others => '1');
		--This will count every 8us it counts from 0 to 799
	constant BIT_COUNTER_MAX_VAL: natural := (100_000_000 / 125_000) - 1;
	constant BIT_COUNTER_BITS: natural := 10;
	-- 2084 would basically be 60 HZ. 18 is number of bit timer cycles to get through the process
	constant STATE_COUNTER_MAX_VAL: natural := 2084 - 18 - 1;
	constant STATE_COUNTER_BITS: natural := 12;
	
	constant A_POS:      natural := 0;
	constant B_POS:      natural := 1;
	constant SELECT_POS: natural := 2;
	constant START_POS:  natural := 3;
	constant UP_POS:     natural := 4;
	constant DOWN_POS:   natural := 5;
	constant LEFT_POS:   natural := 6;
	constant RIGHT_POS:  natural := 7;
	
	type states is (IDLE, LATCH_STATE, A, B, SELECT_STATE, START, UP, DOWN, LEFT, RIGHT);
	signal cur_state, next_state: states := IDLE;

	signal data_bit, data_bit_next, clrStateTimer, latch_reg : std_logic;
	signal bit_timer, bit_timer_next: unsigned (BIT_COUNTER_BITS-1 downto 0) := to_unsigned(0,BIT_COUNTER_BITS);
	signal state_timer, state_timer_next: unsigned (STATE_COUNTER_BITS-1 downto 0) := to_unsigned(0,STATE_COUNTER_BITS);
	
  ------------------------------------------
  -- Signals for user logic slave model s/w accessible register example
  ------------------------------------------
  signal slv_reg0                       : std_logic_vector(C_SLV_DWIDTH-1 downto 0);
  signal slv_reg_write_sel              : std_logic_vector(0 to 0);
  signal slv_reg_read_sel               : std_logic_vector(0 to 0);
  signal slv_ip2bus_data                : std_logic_vector(C_SLV_DWIDTH-1 downto 0);
  signal slv_read_ack                   : std_logic;
  signal slv_write_ack                  : std_logic;

begin

  --USER logic implementation added here
	-- FSM
	process(Bus2IP_Clk,Bus2IP_Resetn)
	begin
		if(Bus2IP_Resetn = '0') then
			cur_state <= IDLE;
			IP2Bus_Interrupt <= '0';
		elsif(Bus2IP_Clk' event and Bus2IP_Clk = '1') then
			cur_state <= next_state;
			IP2Bus_Interrupt <= interruptNext;
		end if;
	end process;
	
	process(Bus2IP_Clk)
	begin
		if(Bus2IP_Clk' event and Bus2IP_Clk = '1') then
			data_bit <= data_bit_next;
			bit_timer <= bit_timer_next;
			if(clrStateTimer = '1') then
				state_timer <= to_unsigned(0,STATE_COUNTER_BITS);
			elsif(data_bit = '1') then
				state_timer <= state_timer_next;
			end if;
		end if;
	end process;
	
	data_bit_next <= '1' when bit_timer >= BIT_COUNTER_MAX_VAL else
				 '0';
	bit_timer_next <= to_unsigned(0,BIT_COUNTER_BITS) when (bit_timer = BIT_COUNTER_MAX_VAL) or (Bus2IP_Resetn = '0') else
							 bit_timer + 1;
							 
	state_timer_next <= to_unsigned(0,STATE_COUNTER_BITS) when (state_timer = STATE_COUNTER_MAX_VAL) or (Bus2IP_Resetn = '0') else
							 state_timer + 1;
	Latch <= latch_reg;
			  
	process(state_timer)
	begin
		next_state <= cur_state;
		interruptNext <= '0';
		clrStateTimer <= '0';
		latch_reg <= '0';
		Pulse <= '0';
		case cur_state is
			when IDLE =>
				if(slv_reg0 /= lastButtons) then
					interruptNext <= '1';
					lastButtons <= slv_reg0;
				end if;
				if(state_timer = STATE_COUNTER_MAX_VAL) then
					next_state <= A;
					clrStateTimer <= '1';
				end if;
			when A =>
				if(state_timer < 2) then
					latch_reg <= '1';
				elsif(state_timer = 2) then
					slv_reg0(A_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= B;
				end if;
			when B =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(B_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= SELECT_STATE;
				end if;
			when SELECT_STATE =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(SELECT_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= START;
				end if;
			when START =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(START_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= UP;
				end if;
			when UP =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(UP_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= DOWN;
				end if;
			when DOWN =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(DOWN_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= LEFT;
				end if;
			when LEFT =>
				if(state_timer < 1) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(LEFT_POS) <= Data;
				else
					clrStateTimer <= '1';
					next_state <= RIGHT;
				end if;
			when RIGHT =>
				if(state_timer = 0) then
					Pulse <= '1';
				elsif(state_timer = 1) then
					slv_reg0(RIGHT_POS) <= Data;	
				elsif(state_timer = 2) then
					Pulse <= '1';
				elsif(state_timer = 3) then
				else
					clrStateTimer <= '1';
					next_state <= IDLE;
				end if;
			when others =>
			
			end case;
	end process;
	
	
  ------------------------------------------
  -- Example code to read/write user logic slave model s/w accessible registers
  -- 
  -- Note:
  -- The example code presented here is to show you one way of reading/writing
  -- software accessible registers implemented in the user logic slave model.
  -- Each bit of the Bus2IP_WrCE/Bus2IP_RdCE signals is configured to correspond
  -- to one software accessible register by the top level template. For example,
  -- if you have four 32 bit software accessible registers in the user logic,
  -- you are basically operating on the following memory mapped registers:
  -- 
  --    Bus2IP_WrCE/Bus2IP_RdCE   Memory Mapped Register
  --                     "1000"   C_BASEADDR + 0x0
  --                     "0100"   C_BASEADDR + 0x4
  --                     "0010"   C_BASEADDR + 0x8
  --                     "0001"   C_BASEADDR + 0xC
  -- 
  ------------------------------------------
  slv_reg_write_sel <= Bus2IP_WrCE(0 downto 0);
  slv_reg_read_sel  <= Bus2IP_RdCE(0 downto 0);
  slv_write_ack     <= Bus2IP_WrCE(0);
  slv_read_ack      <= Bus2IP_RdCE(0);

  -- implement slave model software accessible register(s)
--  SLAVE_REG_WRITE_PROC : process( Bus2IP_Clk ) is
--  begin
--
--    if Bus2IP_Clk'event and Bus2IP_Clk = '1' then
--      if Bus2IP_Resetn = '0' then
--        slv_reg0 <= (others => '0');
--      else
--        case slv_reg_write_sel is
--          when "1" =>
--            for byte_index in 0 to (C_SLV_DWIDTH/8)-1 loop
--              if ( Bus2IP_BE(byte_index) = '1' ) then
--                slv_reg0(byte_index*8+7 downto byte_index*8) <= Bus2IP_Data(byte_index*8+7 downto byte_index*8);
--              end if;
--            end loop;
--          when others => null;
--        end case;
--      end if;
--    end if;
--
--  end process SLAVE_REG_WRITE_PROC;

  -- implement slave model software accessible register(s) read mux
  SLAVE_REG_READ_PROC : process( slv_reg_read_sel, slv_reg0 ) is
  begin

    case slv_reg_read_sel is
      when "1" => slv_ip2bus_data <= slv_reg0;
      when others => slv_ip2bus_data <= (others => '0');
    end case;

  end process SLAVE_REG_READ_PROC;

  ------------------------------------------
  -- Example code to drive IP to Bus signals
  ------------------------------------------
  IP2Bus_Data  <= slv_ip2bus_data when slv_read_ack = '1' else
                  (others => '0');

  IP2Bus_WrAck <= slv_write_ack;
  IP2Bus_RdAck <= slv_read_ack;
  IP2Bus_Error <= '0';

end IMP;

library IEEE;
use ieee.std_logic_1164.all;
--use ieee.std_logic_arith.all;
--use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;


entity test is
port(
	-- Microblaze ins and outs
	IP2Bus_Interrupt : out std_logic;
	Bus2IP_Clk       : in  std_logic;
	Bus2IP_Resetn    : in  std_logic;
	-- Controller ins and outs
	Latch            : out std_logic;
	Pulse            : out std_logic;
	Data             : in std_logic
);
end test;

architecture Behavioral of test is
	signal interruptNext : std_logic;
	signal slv_reg0  : std_logic_vector(31 downto 0) := (others => '1');
	signal lastButtons : std_logic_vector(31 downto 0) := (others => '1');
-- CONTROLLER STUFF
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
	
begin
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
end Behavioral;
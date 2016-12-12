library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

entity test is
port(
	IP2Bus_Interrupt : out std_logic;
    Bus2IP_Clk : in  std_logic;
    Bus2IP_Resetn : in  std_logic
);
end test;

architecture Behavioral of test is
	signal count : unsigned(31 downto 0) := (others => '0');
  signal countNext : unsigned(31 downto 0) := (others => '0');
  signal interruptNext : std_logic;

  signal slv_reg0  : std_logic_vector(32-1 downto 0);
  signal slv_reg1  : std_logic_vector(32-1 downto 0);
	
begin

	process (Bus2IP_Clk, Bus2IP_Resetn)
		begin
	if(Bus2IP_Resetn = '0')  then
			count <= unsigned(slv_reg0);
			IP2Bus_Interrupt <= '0';
		elsif Bus2IP_Clk' event and Bus2IP_Clk = '1' then
			count <= countNext;
			IP2Bus_Interrupt <= interruptNext;
	end if;
	end process;

		
	countNext <= count - 1 when count = to_unsigned(1, 32) or (count > 0 and slv_reg1(0) = '1')
		else unsigned(slv_reg0) when slv_reg1(2) = '1' and count = 0
		else count;
		
	interruptNext <= '1' when count = 1 and slv_reg1(1) = '1' else '0';
					
end Behavioral;
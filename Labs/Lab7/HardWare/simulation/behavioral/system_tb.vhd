-------------------------------------------------------------------------------
-- system_tb.vhd
-------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

library UNISIM;
use UNISIM.VCOMPONENTS.ALL;

-- START USER CODE (Do not remove this line)

-- User: Put your libraries here. Code in this
--       section will not be overwritten.

-- END USER CODE (Do not remove this line)

entity system_tb is
end system_tb;

architecture STRUCTURE of system_tb is

  constant GCLK_PERIOD : time := 10000.000000 ps;
  constant RESET_LENGTH : time := 160000 ps;

  component system is
    port (
      zio : inout std_logic;
      rzq : inout std_logic;
      mcbx_dram_we_n : out std_logic;
      mcbx_dram_udqs_n : inout std_logic;
      mcbx_dram_udqs : inout std_logic;
      mcbx_dram_udm : out std_logic;
      mcbx_dram_ras_n : out std_logic;
      mcbx_dram_odt : out std_logic;
      mcbx_dram_ldm : out std_logic;
      mcbx_dram_dqs_n : inout std_logic;
      mcbx_dram_dqs : inout std_logic;
      mcbx_dram_dq : inout std_logic_vector(15 downto 0);
      mcbx_dram_clk_n : out std_logic;
      mcbx_dram_clk : out std_logic;
      mcbx_dram_cke : out std_logic;
      mcbx_dram_cas_n : out std_logic;
      mcbx_dram_ba : out std_logic_vector(2 downto 0);
      mcbx_dram_addr : out std_logic_vector(12 downto 0);
      RS232_Uart_1_sout : out std_logic;
      RS232_Uart_1_sin : in std_logic;
      RESET : in std_logic;
      GCLK : in std_logic;
      axi4lite_0_M_AXI_ACLK_pin : in std_logic_vector(2 downto 0);
      axi_hdmi_0_TMDS_RX_CLK_P_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_CLK_N_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_2_P_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_2_N_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_1_P_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_1_N_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_0_P_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_0_N_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_SCL_pin : in std_logic;
      axi_hdmi_0_TMDS_RX_SDA_pin : inout std_logic;
      axi_hdmi_0_TMDS_TX_CLK_P_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_CLK_N_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_2_P_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_2_N_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_1_P_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_1_N_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_0_P_pin : out std_logic;
      axi_hdmi_0_TMDS_TX_0_N_pin : out std_logic;
      axi_ac97_0_SData_In_pin : in std_logic;
      axi_ac97_0_Bit_Clk_pin : in std_logic;
      axi_ac97_0_Sync_pin : out std_logic;
      axi_ac97_0_SData_Out_pin : out std_logic;
      axi_ac97_0_AC97Reset_n_pin : out std_logic;
      Push_Buttons_5Bits_TRI_I : in std_logic_vector(0 to 4);
      nes_controller_0_PULSE_pin : out std_logic;
      nes_controller_0_LATCH_pin : out std_logic;
      nes_controller_0_DATA_pin : in std_logic
    );
  end component;

  -- Internal signals

  signal GCLK : std_logic;
  signal Push_Buttons_5Bits_TRI_I : std_logic_vector(0 to 4);
  signal RESET : std_logic;
  signal RS232_Uart_1_sin : std_logic;
  signal RS232_Uart_1_sout : std_logic;
  signal axi4lite_0_M_AXI_ACLK_pin : std_logic_vector(2 downto 0);
  signal axi_ac97_0_AC97Reset_n_pin : std_logic;
  signal axi_ac97_0_Bit_Clk_pin : std_logic;
  signal axi_ac97_0_SData_In_pin : std_logic;
  signal axi_ac97_0_SData_Out_pin : std_logic;
  signal axi_ac97_0_Sync_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_0_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_0_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_1_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_1_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_2_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_2_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_CLK_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_CLK_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_SCL_pin : std_logic;
  signal axi_hdmi_0_TMDS_RX_SDA_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_0_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_0_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_1_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_1_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_2_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_2_P_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_CLK_N_pin : std_logic;
  signal axi_hdmi_0_TMDS_TX_CLK_P_pin : std_logic;
  signal mcbx_dram_addr : std_logic_vector(12 downto 0);
  signal mcbx_dram_ba : std_logic_vector(2 downto 0);
  signal mcbx_dram_cas_n : std_logic;
  signal mcbx_dram_cke : std_logic;
  signal mcbx_dram_clk : std_logic;
  signal mcbx_dram_clk_n : std_logic;
  signal mcbx_dram_dq : std_logic_vector(15 downto 0);
  signal mcbx_dram_dqs : std_logic;
  signal mcbx_dram_dqs_n : std_logic;
  signal mcbx_dram_ldm : std_logic;
  signal mcbx_dram_odt : std_logic;
  signal mcbx_dram_ras_n : std_logic;
  signal mcbx_dram_udm : std_logic;
  signal mcbx_dram_udqs : std_logic;
  signal mcbx_dram_udqs_n : std_logic;
  signal mcbx_dram_we_n : std_logic;
  signal nes_controller_0_DATA_pin : std_logic;
  signal nes_controller_0_LATCH_pin : std_logic;
  signal nes_controller_0_PULSE_pin : std_logic;
  signal rzq : std_logic;
  signal zio : std_logic;

  -- START USER CODE (Do not remove this line)

  -- User: Put your signals here. Code in this
  --       section will not be overwritten.

  -- END USER CODE (Do not remove this line)

begin

  dut : system
    port map (
      zio => zio,
      rzq => rzq,
      mcbx_dram_we_n => mcbx_dram_we_n,
      mcbx_dram_udqs_n => mcbx_dram_udqs_n,
      mcbx_dram_udqs => mcbx_dram_udqs,
      mcbx_dram_udm => mcbx_dram_udm,
      mcbx_dram_ras_n => mcbx_dram_ras_n,
      mcbx_dram_odt => mcbx_dram_odt,
      mcbx_dram_ldm => mcbx_dram_ldm,
      mcbx_dram_dqs_n => mcbx_dram_dqs_n,
      mcbx_dram_dqs => mcbx_dram_dqs,
      mcbx_dram_dq => mcbx_dram_dq,
      mcbx_dram_clk_n => mcbx_dram_clk_n,
      mcbx_dram_clk => mcbx_dram_clk,
      mcbx_dram_cke => mcbx_dram_cke,
      mcbx_dram_cas_n => mcbx_dram_cas_n,
      mcbx_dram_ba => mcbx_dram_ba,
      mcbx_dram_addr => mcbx_dram_addr,
      RS232_Uart_1_sout => RS232_Uart_1_sout,
      RS232_Uart_1_sin => RS232_Uart_1_sin,
      RESET => RESET,
      GCLK => GCLK,
      axi4lite_0_M_AXI_ACLK_pin => axi4lite_0_M_AXI_ACLK_pin,
      axi_hdmi_0_TMDS_RX_CLK_P_pin => axi_hdmi_0_TMDS_RX_CLK_P_pin,
      axi_hdmi_0_TMDS_RX_CLK_N_pin => axi_hdmi_0_TMDS_RX_CLK_N_pin,
      axi_hdmi_0_TMDS_RX_2_P_pin => axi_hdmi_0_TMDS_RX_2_P_pin,
      axi_hdmi_0_TMDS_RX_2_N_pin => axi_hdmi_0_TMDS_RX_2_N_pin,
      axi_hdmi_0_TMDS_RX_1_P_pin => axi_hdmi_0_TMDS_RX_1_P_pin,
      axi_hdmi_0_TMDS_RX_1_N_pin => axi_hdmi_0_TMDS_RX_1_N_pin,
      axi_hdmi_0_TMDS_RX_0_P_pin => axi_hdmi_0_TMDS_RX_0_P_pin,
      axi_hdmi_0_TMDS_RX_0_N_pin => axi_hdmi_0_TMDS_RX_0_N_pin,
      axi_hdmi_0_TMDS_RX_SCL_pin => axi_hdmi_0_TMDS_RX_SCL_pin,
      axi_hdmi_0_TMDS_RX_SDA_pin => axi_hdmi_0_TMDS_RX_SDA_pin,
      axi_hdmi_0_TMDS_TX_CLK_P_pin => axi_hdmi_0_TMDS_TX_CLK_P_pin,
      axi_hdmi_0_TMDS_TX_CLK_N_pin => axi_hdmi_0_TMDS_TX_CLK_N_pin,
      axi_hdmi_0_TMDS_TX_2_P_pin => axi_hdmi_0_TMDS_TX_2_P_pin,
      axi_hdmi_0_TMDS_TX_2_N_pin => axi_hdmi_0_TMDS_TX_2_N_pin,
      axi_hdmi_0_TMDS_TX_1_P_pin => axi_hdmi_0_TMDS_TX_1_P_pin,
      axi_hdmi_0_TMDS_TX_1_N_pin => axi_hdmi_0_TMDS_TX_1_N_pin,
      axi_hdmi_0_TMDS_TX_0_P_pin => axi_hdmi_0_TMDS_TX_0_P_pin,
      axi_hdmi_0_TMDS_TX_0_N_pin => axi_hdmi_0_TMDS_TX_0_N_pin,
      axi_ac97_0_SData_In_pin => axi_ac97_0_SData_In_pin,
      axi_ac97_0_Bit_Clk_pin => axi_ac97_0_Bit_Clk_pin,
      axi_ac97_0_Sync_pin => axi_ac97_0_Sync_pin,
      axi_ac97_0_SData_Out_pin => axi_ac97_0_SData_Out_pin,
      axi_ac97_0_AC97Reset_n_pin => axi_ac97_0_AC97Reset_n_pin,
      Push_Buttons_5Bits_TRI_I => Push_Buttons_5Bits_TRI_I,
      nes_controller_0_PULSE_pin => nes_controller_0_PULSE_pin,
      nes_controller_0_LATCH_pin => nes_controller_0_LATCH_pin,
      nes_controller_0_DATA_pin => nes_controller_0_DATA_pin
    );

  -- Clock generator for GCLK

  process
  begin
    GCLK <= '0';
    loop
      wait for (GCLK_PERIOD/2);
      GCLK <= not GCLK;
    end loop;
  end process;

  -- Reset Generator for RESET

  process
  begin
    RESET <= '0';
    wait for (RESET_LENGTH);
    RESET <= not RESET;
    wait;
  end process;

  -- START USER CODE (Do not remove this line)

  -- User: Put your stimulus here. Code in this
  --       section will not be overwritten.

  -- END USER CODE (Do not remove this line)

end architecture STRUCTURE;


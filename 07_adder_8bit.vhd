library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity adder_8bit is
    port ( A, B : in STD_LOGIC_VECTOR(7 downto 0);
           CIN : in STD_LOGIC;
           SUM : out STD_LOGIC_VECTOR(7 downto 0);
           COUT : out STD_LOGIC );
end adder_8bit;

architecture structural of adder_8bit is
    signal carry : STD_LOGIC_VECTOR(8 downto 0);
begin
    carry(0) <= CIN;
    GEN_ADD: for i in 0 to 7 generate
        FA: entity work.full_adder(structural)
            port map (A => A(i), B => B(i), CIN => carry(i),
                      SUM => SUM(i), COUT => carry(i+1));
    end generate;
    COUT <= carry(8);
end structural;

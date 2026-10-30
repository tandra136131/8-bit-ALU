library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity full_adder is
    port ( A, B, CIN : in STD_LOGIC;
           SUM, COUT : out STD_LOGIC );
end full_adder;

architecture structural of full_adder is
    signal s1, c1, c2 : STD_LOGIC;
begin
    HA1: entity work.half_adder(structural)
        port map (A => A, B => B, SUM => s1, CARRY => c1);
    HA2: entity work.half_adder(structural)
        port map (A => s1, B => CIN, SUM => SUM, CARRY => c2);
    COUT <= c1 or c2;
end structural;

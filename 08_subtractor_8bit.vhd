library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity subtractor_8bit is
    port ( A, B : in STD_LOGIC_VECTOR(7 downto 0);
           DIFF : out STD_LOGIC_VECTOR(7 downto 0);
           COUT : out STD_LOGIC );
end subtractor_8bit;

architecture structural of subtractor_8bit is
    signal not_b : STD_LOGIC_VECTOR(7 downto 0);
begin
    INV_B: entity work.not_gate(dataflow)
        port map (A => B, Y => not_b);

    ADDER: entity work.adder_8bit(structural)
        port map (A => A, B => not_b, CIN => '1',
                  SUM => DIFF, COUT => COUT);
end structural;

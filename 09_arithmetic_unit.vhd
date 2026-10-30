library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity arithmetic_unit is
    port ( A, B : in STD_LOGIC_VECTOR(7 downto 0);
           SUB : in STD_LOGIC;
           RESULT : out STD_LOGIC_VECTOR(7 downto 0);
           COUT : out STD_LOGIC );
end arithmetic_unit;

architecture structural of arithmetic_unit is
    signal add_result, sub_result : STD_LOGIC_VECTOR(7 downto 0);
    signal add_cout, sub_cout : STD_LOGIC;
begin
    ADDER: entity work.adder_8bit(structural)
        port map (A => A, B => B, CIN => '0',
                  SUM => add_result, COUT => add_cout);

    SUBTRACTOR: entity work.subtractor_8bit(structural)
        port map (A => A, B => B, DIFF => sub_result, COUT => sub_cout);

    RESULT <= sub_result when SUB = '1' else add_result;
    COUT <= sub_cout when SUB = '1' else add_cout;
end structural;

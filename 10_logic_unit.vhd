library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity logic_unit is
    port ( A, B : in STD_LOGIC_VECTOR(7 downto 0);
           AND_RESULT, OR_RESULT, XOR_RESULT, NOT_RESULT :
             out STD_LOGIC_VECTOR(7 downto 0) );
end logic_unit;

architecture structural of logic_unit is
begin
    GEN_LOGIC: for i in 0 to 7 generate
        AG: entity work.and_gate(dataflow)
            port map (A => A(i), B => B(i), Y => AND_RESULT(i));
        OG: entity work.or_gate(dataflow)
            port map (A => A(i), B => B(i), Y => OR_RESULT(i));
        XG: entity work.xor_gate(dataflow)
            port map (A => A(i), B => B(i), Y => XOR_RESULT(i));
    end generate;

    INV_A: entity work.not_gate(dataflow)
        port map (A => A, Y => NOT_RESULT);
end structural;

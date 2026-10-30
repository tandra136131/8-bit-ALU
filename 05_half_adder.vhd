library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity half_adder is
    port ( A, B : in STD_LOGIC;
           SUM, CARRY : out STD_LOGIC );
end half_adder;

architecture structural of half_adder is
begin
    SUM <= A xor B;
    CARRY <= A and B;
end structural;

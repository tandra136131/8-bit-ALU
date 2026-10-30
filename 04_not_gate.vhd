library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity not_gate is
    port ( A : in STD_LOGIC_VECTOR(7 downto 0);
           Y : out STD_LOGIC_VECTOR(7 downto 0) );
end not_gate;

architecture dataflow of not_gate is
begin
    Y <= not A;
end dataflow;

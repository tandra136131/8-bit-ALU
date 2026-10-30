library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity and_gate is
    port ( A, B : in STD_LOGIC; Y : out STD_LOGIC );
end and_gate;

architecture dataflow of and_gate is
begin
    Y <= A and B;
end dataflow;

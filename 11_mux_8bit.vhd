library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_8bit is
    port ( ADD_RESULT, SUB_RESULT, AND_RESULT, OR_RESULT,
           XOR_RESULT, NOT_RESULT, A, B : in STD_LOGIC_VECTOR(7 downto 0);
           SEL : in STD_LOGIC_VECTOR(2 downto 0);
           Y : out STD_LOGIC_VECTOR(7 downto 0) );
end mux_8bit;

architecture dataflow of mux_8bit is
begin
    process(ADD_RESULT, SUB_RESULT, AND_RESULT, OR_RESULT,
            XOR_RESULT, NOT_RESULT, A, B, SEL)
    begin
        case SEL is
            when "000" => Y <= ADD_RESULT;
            when "001" => Y <= SUB_RESULT;
            when "010" => Y <= AND_RESULT;
            when "011" => Y <= OR_RESULT;
            when "100" => Y <= XOR_RESULT;
            when "101" => Y <= NOT_RESULT;
            when "110" => Y <= A;
            when others => Y <= B;
        end case;
    end process;
end dataflow;

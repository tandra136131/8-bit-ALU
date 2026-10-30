library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit is
    port (
        A, B : in STD_LOGIC_VECTOR(7 downto 0);
        SEL : in STD_LOGIC_VECTOR(2 downto 0);
        RESULT : out STD_LOGIC_VECTOR(7 downto 0);
        COUT : out STD_LOGIC;
        ZERO : out STD_LOGIC
    );
	 end alu_8bit;

architecture structural of alu_8bit is

    signal add_result, sub_result :
        STD_LOGIC_VECTOR(7 downto 0);

    signal and_result, or_result, xor_result, not_result :
        STD_LOGIC_VECTOR(7 downto 0);
		      signal arith_result :
        STD_LOGIC_VECTOR(7 downto 0);

    signal arith_cout : STD_LOGIC;

    -- Internal signal for fixing XST output port error
    signal result_internal :
        STD_LOGIC_VECTOR(7 downto 0);
	begin

    -- Arithmetic Unit
    ARITH: entity work.arithmetic_unit(structural)
        port map (
            A => A,
            B => B,
            SUB => SEL(0),
            RESULT => arith_result,
            COUT => arith_cout
        );
    -- Logic Unit
    LOGIC: entity work.logic_unit(structural)
        port map (
            A => A,
            B => B,
            AND_RESULT => and_result,
            OR_RESULT => or_result,
            XOR_RESULT => xor_result,
            NOT_RESULT => not_result
        );
    -- 8-bit Adder
    ADD_ONLY: entity work.adder_8bit(structural)
        port map (
            A => A,
            B => B,
            CIN => '0',
            SUM => add_result,
            COUT => open
        );
    -- 8-bit Subtractor
    SUB_ONLY: entity work.subtractor_8bit(structural)
        port map (
            A => A,
            B => B,
            DIFF => sub_result,
            COUT => open
        );
    -- Multiplexer
    SELECTOR: entity work.mux_8bit(dataflow)
        port map (
            ADD_RESULT => add_result,
            SUB_RESULT => sub_result,
            AND_RESULT => and_result,
            OR_RESULT => or_result,
            XOR_RESULT => xor_result,
            NOT_RESULT => not_result,
            A => A,
            B => B,
            SEL => SEL,
            Y => result_internal
        );
    -- Output Assignment
    RESULT <= result_internal;

    -- Carry Output
    COUT <= arith_cout
        when SEL = "000" or SEL = "001"
        else '0';

    -- Zero Flag
    ZERO <= '1'
        when result_internal = "00000000"
        else '0';

end structural;		  
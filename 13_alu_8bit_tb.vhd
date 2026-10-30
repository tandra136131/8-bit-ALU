library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture test of alu_8bit_tb is
    signal A, B : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal SEL : STD_LOGIC_VECTOR(2 downto 0) := (others => '0');
    signal RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal COUT, ZERO : STD_LOGIC;
begin
    DUT: entity work.alu_8bit(structural)
        port map (A => A, B => B, SEL => SEL,
                  RESULT => RESULT, COUT => COUT, ZERO => ZERO);

    STIMULUS: process
    begin
        -- 000: Addition (25 + 10 = 35)
        A <= x"19"; B <= x"0A"; SEL <= "000";
        wait for 20 ns;
        assert RESULT = x"23" report "ADD test failed" severity error;

        -- 001: Subtraction (25 - 10 = 15)
        SEL <= "001";
        wait for 20 ns;
        assert RESULT = x"0F" report "SUB test failed" severity error;

        -- 010: AND
        A <= x"F0"; B <= x"0F"; SEL <= "010";
        wait for 20 ns;
        assert RESULT = x"00" report "AND test failed" severity error;

        -- 011: OR
        SEL <= "011";
        wait for 20 ns;
        assert RESULT = x"FF" report "OR test failed" severity error;

        -- 100: XOR
        SEL <= "100";
        wait for 20 ns;
        assert RESULT = x"FF" report "XOR test failed" severity error;

        -- 101: NOT A
        A <= x"55"; B <= x"00"; SEL <= "101";
        wait for 20 ns;
        assert RESULT = x"AA" report "NOT test failed" severity error;

        -- 110: Pass A
        SEL <= "110";
        wait for 20 ns;
        assert RESULT = x"55" report "PASS A test failed" severity error;

        -- 111: Pass B
        B <= x"C3"; SEL <= "111";
        wait for 20 ns;
        assert RESULT = x"C3" report "PASS B test failed" severity error;

        -- Zero flag check
        A <= x"00"; B <= x"00"; SEL <= "000";
        wait for 20 ns;
        assert RESULT = x"00" and ZERO = '1'
            report "ZERO flag test failed" severity error;

        report "All ALU test cases completed." severity note;
        wait;
    end process;
end test;

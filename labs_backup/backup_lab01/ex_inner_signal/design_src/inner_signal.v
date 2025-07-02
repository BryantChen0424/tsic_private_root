module inner_signal (
    input  a,
    input  b,
    output reg o_and,
    output reg o_or,
    output reg o_nand,
    output reg o_nor
);
    reg and_val;
    reg or_val;

    always @(*) begin
        and_val = a & b;
        or_val  = a | b;

        o_and  = and_val;
        o_or   = or_val;
        o_nand = ~and_val;
        o_nor  = ~or_val;
    end
endmodule

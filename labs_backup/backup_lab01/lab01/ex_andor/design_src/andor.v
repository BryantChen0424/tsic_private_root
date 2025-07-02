module andor (
    input a,
    input b,
    output reg o_and,
    output reg o_or
);

    always @(*) begin
        o_and = a & b;
        o_or  = a | b;
    end

endmodule

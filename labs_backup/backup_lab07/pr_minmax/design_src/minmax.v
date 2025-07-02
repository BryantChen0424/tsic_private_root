module minmax (
    input  [7:0] a,
    input  [7:0] b,
    input        s,
    output reg [7:0] o
);
    always @(*) begin
        if (s == 1'b0)
            o = (a > b) ? a : b;  // max
        else
            o = (a < b) ? a : b;  // min
    end
endmodule

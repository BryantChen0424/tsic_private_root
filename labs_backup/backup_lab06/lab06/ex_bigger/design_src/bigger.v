module bigger (
    input signed [3:0] a,
    input signed [3:0] b,
    input signed [3:0] c,
    output reg bgt,
    output reg seq_bgt
);
    always @(*) begin
        bgt      = (a > b);
        seq_bgt  = (a > b) && (b > c);
    end
endmodule

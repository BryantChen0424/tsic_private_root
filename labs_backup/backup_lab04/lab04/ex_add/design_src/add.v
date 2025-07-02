module add (
    input  [3:0] a,
    input  [3:0] b,
    input  [3:0] c,
    output reg [4:0] sum_ab,
    output reg [4:0] sum_a5,
    output reg [4:0] sum_b5,
    output reg [4:0] sum_c5
);
    localparam [4:0] FIVE = 5'd5;

    always @(*) begin
        sum_ab = a + b;
        sum_a5 = a + FIVE;
        sum_b5 = b + FIVE;
        sum_c5 = c + FIVE;
    end
endmodule

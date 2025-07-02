module mul (
    input  [3:0] a,
    output reg [7:0] mul2,
    output reg [7:0] mul4,
    output reg [7:0] mul8,
    output reg       be4
);
    always @(*) begin
        mul2 = a << 1;
        mul4 = a << 2;
        mul8 = a << 3;
        be4  = ~| a[1:0];
    end
endmodule

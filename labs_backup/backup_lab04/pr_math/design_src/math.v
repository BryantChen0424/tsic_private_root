module math (
    input  [3:0] a,
    output reg [7:0] mul2,
    output reg [3:0] div2,
    output reg [3:0] mod2,
    output reg [7:0] mul4,
    output reg [3:0] div4,
    output reg [3:0] mod4
);
    always @(*) begin
        mul2 = a * 2;
        div2 = a / 2;
        mod2 = a % 2;

        mul4 = a * 4;
        div4 = a / 4;
        mod4 = a % 4;
    end
endmodule

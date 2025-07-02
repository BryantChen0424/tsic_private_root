module div (
    input  [7:0] a,
    output reg [7:0] div2,
    output reg [7:0] div4,
    output reg [7:0] div8
);
    always @(*) begin
        // div2 = a >> 1;   // a / 2
        // div4 = a >> 2;   // a / 4
        // div8 = a >> 3;   // a / 8

        div2 = {1'b0, a[7:1]};   // a / 2
        div4 = {2'b0, a[7:2]};   // a / 4
        div8 = {3'b0, a[7:3]};   // a / 8
    end
endmodule

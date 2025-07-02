module relu (
    input  [7:0] a,
    output reg [7:0] relu_a
);
    always @(*) begin
        relu_a = a[7] ? 0 : a;
    end
endmodule

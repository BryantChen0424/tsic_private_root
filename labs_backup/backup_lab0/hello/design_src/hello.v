module hello (
    input      [7:0] in,
    output reg [7:0] out
);

    always @(*) begin
        out = in;
    end

endmodule

module try_const (
    output reg [15:0] o16
);

    always @(*) begin
        // o16 = 16'b0000_0000_0101_1010;  // binary
        // o16 = 16'd90;                  // decimal
        // o16 = 16'h5A;                  // hexadecimal
        // o16 = -5;                      // negative signed
        // o16 = 8'd255;                 // smaller constant auto-extend

        o16 = 16'h5A; // modify this
    end

endmodule

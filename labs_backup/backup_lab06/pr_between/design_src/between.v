module between (
    input  [7:0] a,
    output reg bt,
    output reg ubt
);
    always @(*) begin
        bt  = ($signed(a) >= -25) && ($signed(a) <= 25);
        ubt = (a < 8'd25) || (a > 8'd125);
    end
endmodule

module ops (
    input  [7:0] a,
    input  [7:0] b,
    input  [1:0] op,
    output reg [7:0] o,
    output reg overflow
);
    wire signed [7:0] sa = a;
    wire signed [7:0] sb = b;
    wire signed [7:0] add_result = sa + sb;
    wire signed [7:0] sub_result = sa - sb;

    always @(*) begin
        overflow = 0;
        case (op)
            2'b00: begin
                o = add_result;
                overflow = ((sa[7] == sb[7]) && (o[7] != sa[7]));
            end
            2'b01: begin
                o = sub_result;
                overflow = ((sa[7] != sb[7]) && (o[7] != sa[7]));
            end
            2'b10: o = a & b;
            2'b11: o = a | b;
            default: o = 8'h00;
        endcase
    end
endmodule

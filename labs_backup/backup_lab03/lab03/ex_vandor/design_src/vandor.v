module vandor (
    input  [3:0] a,
    input  [3:0] b,
    output reg [3:0] and_ab,
    output reg [3:0] or_ab,
    output reg and_a,
    output reg or_a
);
    always @(*) begin
        and_ab = a & b;
        or_ab  = a | b;
        and_a  = a[3] & a[2] & a[1] & a[0]; // &a
        or_a   = |a;                        // Reduction OR
    end
endmodule

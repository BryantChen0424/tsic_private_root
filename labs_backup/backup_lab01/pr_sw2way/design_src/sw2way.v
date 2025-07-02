module sw2way (
    input  a,
    input  b,
    output reg na_and_nb,
    output reg sw
);
    reg not_a;
    reg not_b;

    always @(*) begin
        not_a = ~a;
        not_b = ~b;

        na_and_nb = not_a & not_b;
        sw        = (not_a & b) | (a & not_b);
    end
endmodule
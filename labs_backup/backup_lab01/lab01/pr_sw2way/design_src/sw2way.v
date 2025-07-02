module sw2way (
    input  a,
    input  b,
    output reg na_and_nb,
    output reg sw
);
    reg not_a;
    reg not_b;

    always @(*) begin
        /* inner signals assignment here */

        na_and_nb = /* using inners signals here */
        sw        =
    end
endmodule
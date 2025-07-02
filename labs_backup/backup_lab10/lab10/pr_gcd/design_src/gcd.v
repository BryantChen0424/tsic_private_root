module gcd (
    input clk,
    input rst_n,

    output reg i_ready,
    input i_valid,
    input unsigned [7:0] i_a,
    input unsigned [7:0] i_b,

    input o_ready,
    output reg o_valid,
    output reg [7:0] o_ans
);

/* state local parameters */

always @(*) begin
    /* next logic */
end

always @(posedge clk, negedge rst_n) begin
    /* register update logic */
end

/* maybe output logic */

endmodule
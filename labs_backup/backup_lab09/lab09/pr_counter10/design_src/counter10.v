module counter10 (
    input        clk,
    input        rst_n,
    output reg [3:0] cnt
    // cnt is the "state" of this circuit,
    // and also directly connected with the output
);
    reg [3:0] cnt_nxt;

    // the D logic
    always @(*) begin

    end

    // the Q logic
    always @(posedge clk, negedge rst_n) begin

    end

    // the output logic

endmodule

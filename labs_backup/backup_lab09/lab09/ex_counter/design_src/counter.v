module counter (
    input        clk,
    input        rst_n,
    output reg [3:0] cnt
    // cnt is the "state" of this circuit,
    // and also directly connected with the output
);
    reg [3:0] cnt_nxt;

    // the combinational logic
    always @(*) begin
        cnt_nxt = cnt + 1;
    end

    // the sequential logic
    always @(posedge clk, negedge rst_n) begin
        if (!rst_n)
            cnt <= 0;
        else
            cnt <= cnt_nxt;
    end

    // the output logic
    // non
endmodule

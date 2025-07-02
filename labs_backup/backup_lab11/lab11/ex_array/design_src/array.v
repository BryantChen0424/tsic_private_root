module array (
    input clk,
    input rst_n,
    output reg w_ready,
    input w_valid,
    input [7:0] w_data
);
    reg [7:0] R[0:7] /* verilator public */;
    reg [7:0] R_nxt[0:7];

    reg [3:0] p, p_nxt;

    reg w_fire;
    
    integer i;

    always @(*) begin
        w_fire = w_ready & w_valid;
        for (i = 0; i < 8; i = i + 1) begin
            R_nxt[i] = ((p == i) && (w_fire)) ? w_data : R[i];
        end
        p_nxt = w_fire ? p + 1 : p;
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            for (i = 0; i < 8; i = i + 1) begin
                R[i] <= 0;
            end
            p <= 0;
        end
        else begin
            for (i = 0; i < 8; i = i + 1) begin
                R[i] <= R_nxt[i];
            end
            p <= p_nxt;
        end
    end

    always @(*) begin
        w_ready = ~p[3]; // !(p == 8)
    end
endmodule
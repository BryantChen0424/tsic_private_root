module fifo (
    input clk,
    input rst_n,
    output reg       w_ready,
    input            w_valid,
    input      [7:0] w_data,
    output reg       r_ready,
    input            r_valid,
    output reg [7:0] r_data
);
    reg [7:0] R[0:7] /* verilator public */;
    reg [7:0] R_nxt[0:7];
    reg [7:0] r_data_nxt;

    reg [3:0] wp, wp_nxt;
    reg [3:0] rp, rp_nxt;

    reg w_fire, r_fire;
    
    integer i;

    always @(*) begin
        w_fire = w_ready & w_valid;
        r_fire = r_ready & r_valid;
        for (i = 0; i < 8; i = i + 1) begin
            if ( ((wp[2:0] == i) && (w_fire)) && !((rp[2:0] == i) && (r_fire))) begin
                R_nxt[i] = w_data;
            end
            else begin
                R_nxt[i] = R[i];
            end
        end
        wp_nxt = w_fire ? wp + 1 : wp;
        rp_nxt = r_fire ? rp + 1 : rp;
        r_data_nxt = r_fire ? R[rp] : 0;
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            for (i = 0; i < 8; i = i + 1) begin
                R[i] <= 0;
            end
            wp <= 0;
            rp <= 0;
            r_data <= 0;
        end
        else begin
            for (i = 0; i < 8; i = i + 1) begin
                R[i] <= R_nxt[i];
            end
            wp <= wp_nxt;
            rp <= rp_nxt;
            r_data <= r_data_nxt;
        end
    end

    always @(*) begin
        w_ready = (wp - rp) < 8;
        r_ready = (wp - rp) > 0;
    end
endmodule
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
    reg [7:0] R[0:7] /* verilator public */; /* the array */
    reg [7:0] R_nxt[0:7];
    reg [7:0] r_data_nxt;

    reg [3:0] wp, wp_nxt; /* the write pointer */
    reg [3:0] rp, rp_nxt; /* the read pointer */

    reg w_fire, r_fire;
    
    integer i;

    always @(*) begin
        w_fire = w_ready & w_valid;
        r_fire = r_ready & r_valid;
        for (i = 0; i < 8; i = i + 1) begin
            /* R_nxt assignment */
        end
        /* other _nxt assignment */
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            for (i = 0; i < 8; i = i + 1) begin
                /* R initial state */
            end
            /* other register initial state */
        end
        else begin
            for (i = 0; i < 8; i = i + 1) begin
                /* R <= ??*/
            end
            /* other register */
        end
    end

    always @(*) begin
        /* output signals assignment */
    end
endmodule
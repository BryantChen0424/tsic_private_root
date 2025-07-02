module counter_onoff (
    input clk,
    input rst_n,
    input sw,
    output reg [5:0] cnt
);

localparam OFF = 0, ON = 1;

reg       S, S_nxt;
reg [5:0] cnt_nxt;

always @(*) begin
    case (S)
    OFF: begin
        cnt_nxt = cnt;
        S_nxt = sw ? ON : OFF;
    end
    ON: begin
        cnt_nxt = cnt + 1;
        S_nxt = sw ? OFF : ON;
    end
    default: begin
        cnt_nxt = cnt;
        S_nxt = S;
    end
    endcase
end

always @(posedge clk, negedge rst_n) begin
    if (~rst_n) begin
        S <= OFF;
        cnt <= 0;
    end
    else begin
        S <= S_nxt;
        cnt <= cnt_nxt;
    end
end
    
endmodule
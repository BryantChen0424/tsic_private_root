module mod (
    input clk,
    input rst_n,
    input valid,
    input [7:0] dividend,
    input [7:0] divisor,
    output reg ready,
    output reg [7:0] remainder
);
    localparam IDLE = 0,
               BUSY = 1,
               OUT  = 2;
    
    reg [1:0] S, S_nxt;
    reg [7:0] a, a_nxt;
    reg [7:0] b, b_nxt;

    always @(*) begin
        case (S)
            IDLE: begin
                if (valid) begin
                    a_nxt = dividend;
                    b_nxt = divisor;
                    S_nxt = BUSY;
                end
                else begin
                    a_nxt = a;
                    b_nxt = b;
                    S_nxt = IDLE;
                end
            end
            BUSY: begin
                if (a < b) begin
                    a_nxt = a;
                    b_nxt = b;
                    S_nxt = OUT;
                end
                else begin
                    a_nxt = a - b;
                    b_nxt = b;
                    S_nxt = BUSY;
                end
            end
            OUT: begin
                a_nxt = a;
                b_nxt = b;
                S_nxt = IDLE;
            end
            default: begin
                a_nxt = 0;
                b_nxt = 0;
                S_nxt = IDLE;
            end
        endcase
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            S <= IDLE;
            a <= 0;
            b <= 0;
        end
        else begin
            S <= S_nxt;
            a <= a_nxt;
            b <= b_nxt;
        end
    end

    always @(*) begin
        ready = S == OUT;
        remainder = S == OUT ? a : 0;
    end
endmodule

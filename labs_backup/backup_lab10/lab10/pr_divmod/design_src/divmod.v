module divmod (
    input            clk,
    input            rst_n,
    input            valid,
    input      [7:0] dividend,
    input      [7:0] divisor,
    output reg       ready,
    output reg [7:0] quotient,
    output reg [7:0] remainder
);
    localparam IDLE = 0, /* state code define */
               BUSY = 1,
               OUT  = 2;
    
    reg [1:0] S, S_nxt; /* state register */
    reg [7:0] a, a_nxt; /* other registers */
    reg [7:0] b, b_nxt;
    reg [7:0] q, q_nxt;

    always @(*) begin
        case (S)
            IDLE: begin
                /* In state "IDLE", for the ??_nxt, what expression should be assigned to them? */
            end
            BUSY: begin
                /* In state "BUSY", for the ??_nxt, what expression should be assigned to them? */
            end
            OUT: begin
                /* In state "OUT", for the ??_nxt, what expression should be assigned to them? */
            end
            default: begin
                a_nxt = 0;
                b_nxt = 0;
                q_nxt = 0;
                S_nxt = IDLE;
            end
        endcase
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            /* assign the initial state to S, a, b, q */
        end
        else begin
            /* assign the ??_nxt to S, a, b, q */
        end
    end

    always @(*) begin
        /* output signals assignment */
    end
endmodule

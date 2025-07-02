module const_ (
    output reg ot,
    output reg of,
    output reg [7:0] o1,
    output reg [7:0] o2,
    output reg [7:0] o16,
    output reg [7:0] o_auto_expand,
    output reg [7:0] o_auto_cut,
    output reg [7:0] o_neg
);
    always @(*) begin
        ot            = 1;
        of            = 0;
        o1            = 3'b101;
        o2            = 8'd101;
        o16           = 8'h5A;
        o_auto_expand = 5;
        o_auto_cut    = 345;    // 345 % 256 = 89
        o_neg         = -5;     // 
    end
endmodule

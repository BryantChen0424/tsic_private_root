module sorter (
    input  [3:0] v0, v1, v2, v3,
    output [3:0] o0, o1, o2, o3
);
    wire [3:0] c0_min, c0_max, c1_min, c1_max, c2_min,
               c3_min, c3_max, c4_min;

    cmp c0 (.a(v0), .b(v1), .min(c0_min), .max(c0_max));
    cmp c1 (.a(c0_max), .b(v2), .min(c1_min), .max(c1_max));
    cmp c2 (.a(c1_max), .b(v3), .min(c2_min), .max(o3));

    cmp c3 (.a(c0_min), .b(c1_min), .min(c3_min), .max(c3_max));
    cmp c4 (.a(c3_max), .b(c2_min), .min(c4_min), .max(o2));

    cmp c5 (.a(c3_min), .b(c4_min), .min(o0), .max(o1));
endmodule


module cmp (
    input  unsigned [3:0] a,
    input  unsigned [3:0] b,
    output reg [3:0] max,
    output reg [3:0] min
);
    always @(*) begin
        max = (a > b) ? a : b;
        min = (a > b) ? b : a;
    end
endmodule

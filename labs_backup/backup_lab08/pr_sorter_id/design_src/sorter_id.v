module sorter_id (
    input  [3:0] v0, v1, v2, v3,
    output [3:0] o0, o1, o2, o3,
    output [1:0] o3_id
);
    wire [3:0] c0_min   , c0_max   , c1_min   , c1_max   , c2_min,
               c3_min   , c3_max   , c4_min   ;
    wire [3:0] c0_min_id, c0_max_id, c1_min_id, c1_max_id, c2_min_id,
               c3_min_id, c3_max_id, c4_min_id;

    cmp_id c0 (.a(    v0), .b(    v1), .a_id(     2'd0), .b_id(     2'd1), .min(c0_min), .max(c0_max), .min_id(c0_min_id), .max_id(c0_max_id));
    cmp_id c1 (.a(c0_max), .b(    v2), .a_id(c0_max_id), .b_id(     2'd2), .min(c1_min), .max(c1_max), .min_id(c1_min_id), .max_id(c1_max_id));
    cmp_id c2 (.a(c1_max), .b(    v3), .a_id(c1_max_id), .b_id(     2'd3), .min(c2_min), .max(    o3), .min_id(c2_min_id), .max_id(    o3_id));
    cmp_id c3 (.a(c0_min), .b(c1_min), .a_id(c0_min_id), .b_id(c1_min_id), .min(c3_min), .max(c3_max), .min_id(c3_min_id), .max_id(c3_max_id));
    cmp_id c4 (.a(c3_max), .b(c2_min), .a_id(c3_max_id), .b_id(c2_min_id), .min(c4_min), .max(    o2), .min_id(c4_min_id), .max_id(         ));
    cmp_id c5 (.a(c3_min), .b(c4_min), .a_id(c3_min_id), .b_id(c4_min_id), .min(    o0), .max(    o1), .min_id(         ), .max_id(         ));
endmodule


module cmp_id (
    input  unsigned [3:0] a,
    input  unsigned [3:0] b,
    input  unsigned [1:0] a_id,
    input  unsigned [1:0] b_id,
    output reg [3:0] min,
    output reg [3:0] max,
    output reg [1:0] min_id,
    output reg [1:0] max_id
);
    reg a_is_max;
    always @(*) begin
        a_is_max = {a, a_id} > {b, b_id};
        min    = a_is_max ? b : a;
        max    = a_is_max ? a : b;
        min_id = a_is_max ? b_id : a_id;
        max_id = a_is_max ? a_id : b_id;
    end
endmodule

module sorter_id (
    input  [3:0] v0, v1, v2, v3,
    output [3:0] o0, o1, o2, o3,
    output [1:0] o3_id
);
    /* need some wires ? */

    cmp_id c0 ();
    cmp_id c1 ();
    cmp_id c2 ();
    /* more sub-modules ? */

endmodule


module cmp_id (
    input  unsigned [3:0] a,
    input  unsigned [3:0] b,
    /* other inputs ?*/
    output reg [3:0] min,
    output reg [3:0] max,
    /* other outputs ? */
);

    always @(*) begin
        
    end
endmodule

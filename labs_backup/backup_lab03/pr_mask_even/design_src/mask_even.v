module mask_even (
    input  [7:0] a,
    output reg [7:0] mask,
    output reg even1
);
    always @(*) begin
        mask = a & /* ??? */ 'b00001111;
        even1 = /* ? */ ~^a;
    end
endmodule

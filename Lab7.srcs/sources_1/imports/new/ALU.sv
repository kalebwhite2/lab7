`timescale 1ns / 1ps
`default_nettype none

module ALU #(parameter N=32) (
    input wire [N-1:0] A, B,
    output wire [N-1:0] R,
    input wire [4:0] ALUfn,
    output wire FlagZ
    );
    
    wire subtract, bool1, bool0, shft, math;
    assign {subtract, bool1, bool0, shft, math} = ALUfn[4:0];
    
    wire [N-1:0] addsubResult, shiftResult, logicalResult;
    wire compResult, FlagN, FlagV, FlagC;
    
    addsub #(N) AS(.A, .B, .Subtract(ALUfn[4]), .Result(addsubResult), .FlagN, .FlagC, .FlagV);
    shifter #(N) S(.IN(B), .shamt(A[$clog2(N)-1:0]), .left(~bool1 & ~bool0), .logical(bool1 & ~bool0), .OUT(shiftResult));
    logical #(N) L(.A, .B, .op({bool1, bool0}), .R(logicalResult));
    comparator C(.FlagN, .FlagV, .FlagC, .bool0, .comparison(compResult));
    
     assign R = (~shft & math)? addsubResult:
                (shft & ~math)? shiftResult:
                (~shft & ~math)? logicalResult: 
                {{(N-1){1'b0}}, compResult};
                
     assign FlagZ = ~|R;
    
endmodule

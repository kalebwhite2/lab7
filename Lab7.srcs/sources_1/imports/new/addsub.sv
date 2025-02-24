`timescale 1ns / 1ps
`default_nettype none

module addsub #(parameter N=32)(
    input wire [N-1:0] A, B,
    input wire Subtract,
    output wire [N-1:0] Result,
    output wire FlagN, FlagC, FlagV
    );
    
    wire [N-1:0] ToBornottoB = {N{Subtract}} ^ B;
    adder #(N) add(.A(A), .B(ToBornottoB), .Cin(Subtract), .Sum(Result), .FlagN, .FlagC, .FlagV);
    
endmodule

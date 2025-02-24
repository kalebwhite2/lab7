`timescale 1ns / 1ps
`default_nettype none

module comparator(
    input wire FlagN, FlagV, FlagC, bool0,
    output wire comparison
    );
    
    assign comparison = bool0 ? ~FlagC: (FlagN & ~FlagC) | FlagV;
    
endmodule

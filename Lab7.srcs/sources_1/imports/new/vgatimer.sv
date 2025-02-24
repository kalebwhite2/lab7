`timescale 1ns / 1ps
`default_nettype none
`include "display640x480.vh"

module vgatimer(
    input wire clk,
    output wire hsync, vsync, activevideo,
    output wire [`xbits-1:0] x,
    output wire [`ybits-1:0] y
    );
    
    logic [1:0] clk_count=0;
    always_ff @(posedge clk)
        clk_count <= clk_count + 2'b 01;
        
    wire Every2ndTick = (clk_count[0] == 1'b 1);
    wire Every4thTick = (clk_count[1:0] == 2'b 11);
    
    xycounter #(`WholeLine, `WholeFrame) xy(clk, Every4thTick, x, y);
    
    assign hsync = `hSyncPolarity ^ (x >= `hSyncStart && x <= `hSyncEnd) ? 1: 0;
    assign vsync = `vSyncPolarity ^ (y >= `vSyncStart && y <= `vSyncEnd) ? 1: 0;
    assign activevideo = x <= `hVisible - 1 && y <= `vVisible - 1;
    
endmodule
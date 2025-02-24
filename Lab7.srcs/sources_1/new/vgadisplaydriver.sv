`timescale 1ns / 1ps
`default_nettype none
`include "display640x480.vh"

module vgadisplaydriver #(
    parameter Nchars=4,
    parameter smem_size=1200,
    parameter bmem_init="bitmap.mem"
)(
    input wire clk,
    input wire [$clog2(Nchars)-1:0] charcode,
    
    output wire [$clog2(smem_size)-1:0] smem_addr,
    output wire [3:0] red, green, blue,
    output wire hsync, vsync    
);

    wire [`xbits-1:0] x;
    wire [`ybits-1:0] y;
    wire activevideo;
    
    wire [$clog2(Nchars*256)-1 : 0] bitmap_addr = {charcode, y[3:0], x[3:0]};
    wire [`ybits-5: 0] row = y>>4;
    wire [`xbits-5: 0] col = x>>4;
    assign smem_addr = (row<<5) + (row<<3) + col;
    
    wire [11:0] pixel_color; 
    
    vgatimer mytimer(
        .clk(clk),
        .hsync(hsync),
        .vsync(vsync),
        .activevideo(activevideo),
        .x(x),
        .y(y)
    );
    
    rom_module #(.Nloc(Nchars<<8), .Dbits(12), .initfile(bmem_init)) bmem (
        .addr(bitmap_addr),
        .dout(pixel_color)
    );
            
    assign red = activevideo? pixel_color[11:8] : 0;
    assign green = activevideo? pixel_color[7:4] : 0;
    assign blue = activevideo? pixel_color[3:0] : 0;  
    
endmodule
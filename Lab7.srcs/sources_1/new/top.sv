//////////////////////////////////////////////////////////////////////////////////
//
// Montek Singh
// 2/21/2025
//
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns / 1ps
`default_nettype none

module top #(
    parameter Nchars=4,                         // number of characters/sprites
    parameter smem_size=1200,                   // smem size, 30 rows x 40 cols
    parameter smem_init="screenmem.mem", 	// text file to initialize screen memory
    parameter bmem_init="bitmapmem.mem" 	// text file to initialize bitmap memory
)(    
    input wire clk,
    // VGA outputs
    output wire [3:0] red, green, blue,
    output wire hsync, vsync
);

    wire [$clog2(smem_size)-1:0] smem_addr;
    wire [$clog2(Nchars)-1:0] charcode;
   
    rom_module #(.Nloc(smem_size), .Dbits($clog2(Nchars)), .initfile(smem_init)) screenmem(.addr(smem_addr), .dout(charcode));
    vgadisplaydriver #(.Nchars(Nchars), .smem_size(smem_size), .bmem_init(bmem_init)) display(
        .clk(clk), 
        .smem_addr(smem_addr), 
        .charcode(charcode), 
        .hsync(hsync), 
        .vsync(vsync), 
        .red(red), 
        .green(green),
        .blue(blue)
    );

endmodule
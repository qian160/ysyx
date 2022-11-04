import "DPI-C" function longint mmio_read(input longint addr, input int len);
import "DPI-C" function void mmio_write(input longint addr, input int len, input longint wdata);
/*
    special case:
        when a store inst is stalled, the incorrect store address could be passed here.
    solution:
        set memop.is_store = 0 when store inst is stalled
*/
module MMIO_RW(
    input wire read_en,
    input wire write_en,
    input [63:0] addr,
    input [ 3:0] length,
    input [63:0] wdata,

    output reg [63:0] rdata
);
always @(*) begin
    if(read_en) begin
        //$display("mmio_read(%x, %x)", read_en, addr, length);
        rdata   =  mmio_read(addr, length);
    end
    //avoid comb latch... just keep this as a habit
    else
        rdata   =  64'd0;
end

always @(*) begin
    if(write_en)    begin
        //$display("mmio_write(%x, %x)", addr, length);
        mmio_write(addr, length, wdata);
    end
end

endmodule
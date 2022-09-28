import chisel3._
import chisel3.util._

import Util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new WriteRfOp)
        val memOp       = Input(new MemOp)

        val writeRfOp_o = Output(new WriteRfOp)

        val debug_i     = Input (new Debug_Bundle)
        val debug_o     = Output(new Debug_Bundle)
    })

    val ram1 = Mem(1 << 36, UInt(8.W))
    val ram2 = Mem(1 << 36, UInt(8.W))
    val ram3 = Mem(1 << 36, UInt(8.W))
    val ram4 = Mem(1 << 36, UInt(8.W))
    val ram5 = Mem(1 << 36, UInt(8.W))
    val ram6 = Mem(1 << 36, UInt(8.W))
    val ram7 = Mem(1 << 36, UInt(8.W))
    val ram8 = Mem(1 << 36, UInt(8.W))

    val isLoad      = io.memOp.isLoad
    val isStore     = io.memOp.isStore
    val addr        = io.memOp.addr >> 3
    //Big Endian?
    /*
    val mask    = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "b00000001".U,      //8, one bit's mask controls one byte
        1.U ->  "b00000011".U,      //16  
        2.U ->  "b00001111".U,      //32
        3.U ->  "b11111111".U,      //64
    ))
    */
    val mask    = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "h00000000000000ff".U,      //8, one bit's mask controls one byte
        1.U ->  "h000000000000ffff".U,      //16  
        2.U ->  "h00000000ffffffff".U,      //32
        3.U ->  "hffffffffffffffff".U,      //64
    ))
    //could be improved..
    val dword   = Cat(ram1(addr), ram2(addr),ram3(addr), ram4(addr),ram5(addr), ram6(addr),ram7(addr), ram8(addr))
    val loadval = dword & mask
    val loadVal = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U   ->  Mux(io.memOp.sign, SEXT(loadval, 8,  64), loadval),
        1.U   ->  Mux(io.memOp.sign, SEXT(loadval, 16, 64), loadval),
        2.U   ->  Mux(io.memOp.sign, SEXT(loadval, 32, 64), loadval),
        3.U   ->  loadval,
    ))

    val sdata   =   io.memOp.sdata & mask
    when(io.memOp.isStore){
        ram1.write(addr, sdata/*, mask(0)*/)
        ram2.write(addr, sdata/*, mask(1)*/)
        ram3.write(addr, sdata/*, mask(2)*/)
        ram4.write(addr, sdata/*, mask(3)*/)
        ram5.write(addr, sdata/*, mask(4)*/)
        ram6.write(addr, sdata/*, mask(5)*/)
        ram7.write(addr, sdata/*, mask(6)*/)
        ram8.write(addr, sdata/*, mask(7)*/)
    }
    io.writeRfOp_o  :=  io.writeRfOp_i
    io.writeRfOp_o.wdata    :=  Mux(isLoad, loadVal, io.writeRfOp_i.wdata)
    printf("memOP.addr = %x\n", io.memOp.addr)

    io.debug_o      :=  io.debug_i
}
import chisel3._
import chisel3.util._

import Util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new WriteRfOp)
        val memOp       = Input(new MemOp)

        val writeRfOp_o = Output(new WriteRfOp)

        val debug_i     = Input(new Debug)
        val debug_o     = Output(new Debug)
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
    val mask    = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "h00000000000000ff".U,      //8,    2 ^ 3
        1.U ->  "h000000000000ffff".U,      //16,   2 ^ 4  
        2.U ->  "h00000000ffffffff".U,      //32    2 ^ 5
        3.U ->  "hffffffffffffffff".U,      //64    2 ^ 6
        //total: 2 ^ (length  + 3) valid bits   =>  (length << 2) & 0b11
    ))
    //could be improved..
    val loadval = Cat(ram1(addr), ram2(addr),ram3(addr), ram4(addr),ram5(addr), ram6(addr),ram7(addr), ram8(addr)) & mask
    val loadVal = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U   ->  Mux(io.memOp.sign, SEXT(loadval, 8,  64), loadval),
        1.U   ->  Mux(io.memOp.sign, SEXT(loadval, 16, 64), loadval),
        2.U   ->  Mux(io.memOp.sign, SEXT(loadval, 32, 64), loadval),
        3.U   ->  loadval,
    ))

    val sdata   =   io.memOp.sdata & mask
    when(io.memOp.isStore){
        ram1.write(addr, mask(7,  0))
        ram1.write(addr, mask(15, 8))
        ram1.write(addr, mask(23, 16))
        ram1.write(addr, mask(31, 24))
        ram1.write(addr, mask(39, 32))
        ram1.write(addr, mask(47, 40))
        ram1.write(addr, mask(55, 48))
        ram1.write(addr, mask(63, 56))
    }
    io.writeRfOp_o  :=  io.writeRfOp_i
    io.writeRfOp_o.wdata    :=  Mux(isLoad, loadVal, io.writeRfOp_i.wdata)


    io.debug_o      :=  io.debug_i
}
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
    val readMask    = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "h00000000000000ff".U,      //8, one bit's mask controls one byte
        1.U ->  "h000000000000ffff".U,      //16  
        2.U ->  "h00000000ffffffff".U,      //32
        3.U ->  "hffffffffffffffff".U,      //64
        //2 ^ (length + 3)
    ))
    //could be improved..
    val dword   = Cat(ram1(addr), ram2(addr),ram3(addr), ram4(addr),ram5(addr), ram6(addr),ram7(addr), ram8(addr))
    val loadval = dword & readMask      //before extended
    val loadVal = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U   ->  Mux(io.memOp.sign, SEXT(loadval, 8,  64), loadval),
        1.U   ->  Mux(io.memOp.sign, SEXT(loadval, 16, 64), loadval),
        2.U   ->  Mux(io.memOp.sign, SEXT(loadval, 32, 64), loadval),
        3.U   ->  loadval,
    ))
/*
    val writeEn = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "b00000001".U,   // 2 ^ 1 - 1
        1.U ->  "b00000011".U,   // 2 ^ 2 - 1
        2.U ->  "b00001111".U,   // 2 ^ 4 - 1
        3.U ->  "b11111111".U,   // 2 ^ 8 - 1
        //qizhong, 1, 2, 4, 8 = 1 << length
    ))
*/
    val writeEn = Wire(UInt(8.W))
    writeEn    := ((1.U << (1.U << io.memOp.length)) - 1.U)
    val sdata   =   io.memOp.sdata// & mask
    when(io.memOp.isStore){
        ram1(addr)  :=  Mux(writeEn(0), sdata(7,  0),  ram1(addr))
        ram2(addr)  :=  Mux(writeEn(1), sdata(15, 8),  ram2(addr))
        ram3(addr)  :=  Mux(writeEn(2), sdata(23, 16), ram3(addr))
        ram4(addr)  :=  Mux(writeEn(3), sdata(31, 24), ram4(addr))
        ram5(addr)  :=  Mux(writeEn(4), sdata(39, 32), ram5(addr))
        ram6(addr)  :=  Mux(writeEn(5), sdata(47, 40), ram6(addr))
        ram7(addr)  :=  Mux(writeEn(6), sdata(55, 48), ram7(addr))
        ram8(addr)  :=  Mux(writeEn(7), sdata(63, 56), ram8(addr))
    }
    io.writeRfOp_o  :=  io.writeRfOp_i
    io.writeRfOp_o.wdata    :=  Mux(isLoad, loadVal, io.writeRfOp_i.wdata)
    printf("memOP.addr = %x\n", io.memOp.addr)

    io.debug_o      :=  io.debug_i
}
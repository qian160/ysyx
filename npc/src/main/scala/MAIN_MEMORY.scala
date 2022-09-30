import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import Util._

class MAIN_MEMORY extends Module{
    val io = IO(new Bundle{
        val pc_i      = Input(UInt(64.W))
        val inst_o    = Output(UInt(32.W))

        val memOp_i   = Input(new MemOp)
        val loadVal_o = Output(UInt(64.W))
    })

    val ram = Mem(1 << 20, UInt(32.W))  //hope this is enough
    loadMemoryFromFileInline(ram, "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img_file")
    io.inst_o       :=  ram((io.pc_i - CONST.PC_INIT) >> 2)
    
    val addr        =   (io.memOp_i.addr - CONST.PMEM_START)   >> 2
    val sign        =   io.memOp_i.sign
    val is_store    =   io.memOp_i.isStore
    //little endian. Assume aligned
    val dword       =   Cat(ram(addr), ram(addr+1.U))
    val loadVal     =   MuxLookup(io.memOp_i.length, 0.U, Seq(
        0.U ->  Mux(sign, SEXT(dword(7,  0), 8,  64), dword(7,  0)),
        0.U ->  Mux(sign, SEXT(dword(15, 0), 16, 64), dword(15, 0)),
        0.U ->  Mux(sign, SEXT(dword(31, 0), 32, 64), dword(31, 0)),
        0.U ->  dword,
    ))

    io.loadVal_o  :=  loadVal
    //we can't use expressions like:ram(addr)(7, 0) := xxx, the lhs is not assignable
    //so we make a helper bundle here, and finally assign that bundle to
    val temp = dword.asTypeOf(Vec(8, UInt(8.W)))
    val smask   =   MuxLookup(io.memOp_i.length, 0.U, Seq(
        0.U ->  "b00000001".U,
        1.U ->  "b00000011".U,
        2.U ->  "b00001111".U,
        3.U ->  "b11111111".U,
    ))
    val sdata   =   io.memOp_i.sdata
    //temp(0) gets the lsb
    when(is_store){
        when(smask(0)){ temp(0) :=  sdata(7,  0)}
        when(smask(1)){ temp(1) :=  sdata(15, 8)}
        when(smask(2)){ temp(2) :=  sdata(23, 16)}
        when(smask(3)){ temp(3) :=  sdata(31, 24)}
        when(smask(4)){ temp(4) :=  sdata(39, 32)}
        when(smask(5)){ temp(5) :=  sdata(47, 40)}
        when(smask(6)){ temp(6) :=  sdata(55, 48)}
        when(smask(7)){ temp(7) :=  sdata(63, 56)}

        ram(addr)           :=  temp.asTypeOf(UInt())(31, 0)
        ram(addr + 1.U)     :=  temp.asTypeOf(UInt())(63, 32)
    }



    //to make inst rom and data ram compatible and easy to initialize(loadMemoryFromFileInline), the width is set to be 32 bits
}


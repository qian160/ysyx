import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class IF extends Module{
    val io = IO(new Bundle{
        val branchOp  = Input(new BranchOp)

        val pc_o    = Output(UInt(64.W))
        val inst_o  = Output(UInt(32.W))
    })

    val inst_rom    =  /*SyncRead*/Mem(0x8000, UInt(32.W))  //should be enough...
    //SyncRead will cause the "delay slot"
    //in chisel test and verilator, the path will be different
    loadMemoryFromFileInline(inst_rom, "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/inst_rom")
    val pc          =  RegInit(CONST.PC_INIT)

    val nextPC  =  PriorityMux(Seq(
        //(reset.asBool(),        CONST.PC_INIT),
        (io.branchOp.happen,    io.branchOp.newPC),
        (true.B,                pc + 4.U)
    ))

    pc :=   nextPC

    io.pc_o :=  pc
    io.inst_o   :=  inst_rom(pc >> 2)
}
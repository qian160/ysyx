import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class IF extends Module{
    val io = IO(new Bundle{
        val ctrl_i      =   Input(new Ctrl)
        val branchOp_i  =   Input(new BranchOp)
        val inst_i      =   Input(UInt(32.W))
        val pc_o        =   Output(UInt(64.W))
        val inst_o      =   Output(UInt(32.W))
    })

    //val inst_rom    =  /*SyncRead*/Mem(0x800, UInt(32.W))  //should be enough...
    //SyncRead will cause the "delay slot"
    //in chisel test and verilator, the path will be different
    //loadMemoryFromFileInline(inst_rom, "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/inst_rom")
    val pc  =  RegInit(CONST.PC_INIT)

    /*
        stall and branch could both arrive. Like this:
            lbu     a5, 0(a5)
            bnez    a5, ...
        solution:   latch the branch signal. Otherwise we will lose it in the next cycle
    */
    val branch_latch    =   RegNext(io.branchOp_i.happen & io.ctrl_i.stall, 0.U)
    val newPC_latch     =   RegNext(io.branchOp_i.newPC, 0.U)
    pc :=   PriorityMux(Seq(
        //(reset.asBool(),        CONST.PC_INIT),
        (io.ctrl_i.stall,       pc),
        //(io.ctrl_i.flush,       CONST.PC_INIT),
        (io.branchOp_i.happen,  io.branchOp_i.newPC),
        //(branch_latch,          newPC_latch),
        (true.B,                pc + 4.U)
    ))

    io.pc_o :=  pc
    //io.inst_o   :=  inst_rom(pc >> 2)
    io.inst_o   :=  io.inst_i
}
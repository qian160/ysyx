import chisel3._
import chisel3.util._

class IF extends Module{
    val io = IO(new Bundle{
        val branchOp  = Input(new BranchOp)
        val inst_i  = Input(UInt(32.W))     //let cpp get the inst through TOP module

        val pc_o    = Output(UInt(64.W))
        val inst_o  = Output(UInt(32.W))
    })

    val nextPC  =  Wire(UInt(64.W))

    val pc      =  Reg(UInt(64.W))

    nextPC  :=  PriorityMux(Seq(
        (reset.asBool(),        CONST.PC_INIT),
        (io.branchOp.happen,    io.branchOp.newPC),
        (true.B,                pc + 4.U)
    ))
    pc  :=  nextPC

    io.pc_o :=  pc

    dontTouch(io.pc_o)
    dontTouch(io.inst_o)
    io.pc_o     :=  pc
    io.inst_o   :=  io.inst_i
 //   io.inst := DontCare
}
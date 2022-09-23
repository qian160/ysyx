import chisel3._
import chisel3.util._

class IF extends Module{
    val io = IO(new Bundle{
        val pc_i    = Input(UInt(64.W))
        val inst_i  = Input(UInt(32.W))

        val pc_o    = Output(UInt(64.W))
        val inst_o  = Output(UInt(32.W))
    })
    
//    val pc = RegInit(CONST.PC_INIT)
//    pc  := pc + 4.U

//    io.pc       := pc
    dontTouch(io.pc_o)
    dontTouch(io.inst_o)
    io.pc_o     :=  io.pc_i
    io.inst_o   :=  io.inst_i
 //   io.inst := DontCare
}
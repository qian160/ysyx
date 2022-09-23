import chisel3._
import chisel3.util._

class IF extends Module{
    val io = IO(new Bundle{
        val pc      = Output(UInt(64.W))
        val inst    = Output(UInt(32.W))
    })
    
    val pc = RegInit(CONST.PC_INIT)
    pc  := pc + 4.U

    io.pc   := pc
    io.inst := DontCare
}
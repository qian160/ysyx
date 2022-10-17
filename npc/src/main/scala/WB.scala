import chisel3._
import chisel3.util._

class WB extends Module{
    val io = IO(new Bundle{
        val writeOp_i =   Input(new WriteOp)

        val writeOp_o =   Output(new WriteOp)

        val debug       =   Input(new Debug_Bundle)
    })

    io.writeOp_o  :=  io.writeOp_i

    //debug
    val DEBUG = Module(new DEBUG)

    val wdata = io.writeOp_i.rf.wdata
    
    DEBUG.io.pc     :=  io.debug.pc
    DEBUG.io.exit   :=  io.debug.exit
    DEBUG.io.inst   :=  io.debug.inst
    DEBUG.io.a0     :=  io.debug.a0

    //(0 to 31).foreach( (idx: Int) => DEBUG.io.gpr(idx) := io.debug.gpr(idx))
}
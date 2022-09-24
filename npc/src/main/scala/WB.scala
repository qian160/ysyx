import chisel3._
import chisel3.util._

class WB extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i =   Input(new writeRfOp)

        val writeRfOp_o =   Output(new writeRfOp)

        val debug       =   Input(new Debug)
    })

    io.writeRfOp_o  :=  io.writeRfOp_i

    //debug
    val DEBUG = Module(new DEBUG)
    DEBUG.io.pc     :=  io.debug.pc
    DEBUG.io.exit   :=  io.debug.exit
    DEBUG.io.inst   :=  io.debug.inst
    DEBUG.io.a0     :=  io.debug.a0
}
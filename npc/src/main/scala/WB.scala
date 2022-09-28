import chisel3._
import chisel3.util._

class WB extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i =   Input(new WriteRfOp)

        val writeRfOp_o =   Output(new WriteRfOp)

        val debug       =   Input(new Debug_Bundle)
    })

    io.writeRfOp_o  :=  io.writeRfOp_i

    //debug
    val DEBUG = Module(new DEBUG)

    val wdata = io.writeRfOp_i.wdata
    printf("wdata = %x\n", wdata)       //this will be printed first....

    DEBUG.io.pc     :=  io.debug.pc
    DEBUG.io.exit   :=  io.debug.exit
    DEBUG.io.inst   :=  io.debug.inst
    DEBUG.io.a0     :=  io.debug.a0

    //(0 to 31).foreach( (idx: Int) => DEBUG.io.gpr(idx) := io.debug.gpr(idx))
}
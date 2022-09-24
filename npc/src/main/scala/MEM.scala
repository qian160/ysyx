import chisel3._
import chisel3.util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new writeRfOp)

        val writeRfOp_o = Output(new writeRfOp)

        val debug_i     = Input(new Debug)
        val debug_o     = Output(new Debug)
    })

    io.writeRfOp_o  :=  io.writeRfOp_i
    io.debug_o      :=  io.debug_i
}
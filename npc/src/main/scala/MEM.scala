import chisel3._
import chisel3.util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new WriteRfOp)

        val writeRfOp_o = Output(new WriteRfOp)

        val debug_i     = Input(new Debug)
        val debug_o     = Output(new Debug)
    })

    val ram = Mem(1 << 39, UInt(8.W))

    io.writeRfOp_o  :=  io.writeRfOp_i
    io.debug_o      :=  io.debug_i
}
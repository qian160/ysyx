import chisel3._
import chisel3.util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new writeRfOp)

        val writeRfOp_o = Output(new writeRfOp)
    })

    io.writeRfOp_o  :=  io.writeRfOp_i
}
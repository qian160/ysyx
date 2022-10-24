//use cpp to simulate this. So DPI-C is needed...
import chisel3._
import chisel3.util._

class VGA extends BlackBox with HasBlackBoxResource{
    val io = IO(new Bundle{
        val sync = Input(Bool())
    })
    addResource("VGA.sv")
}
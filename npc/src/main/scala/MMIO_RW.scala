//use cpp to simulate this. So DPI-C is needed...
import chisel3._
import chisel3.util._

class MMIO_RW extends BlackBox with HasBlackBoxResource{
    val io = IO(new Bundle{
        val read_en     =   Input(Bool())
        val write_en    =   Input(Bool())
        val addr        =   Input(UInt(64.W))
        val wdata       =   Input(UInt(64.W))
        val length      =   Input(UInt(4.W))

        val rdata       =   Output(UInt(64.W))
    })
    addResource("MMIO_RW.sv")
}
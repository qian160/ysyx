import org.scalatest.flatspec.AnyFlatSpec
import scala.io.StdIn           //debug
import chisel3._                //basic data types
import chisel3.iotesters._      //peek poke expert
import scala.util.Random        //debug
import chiseltest._             //test
import chisel3.util._
import chisel3.experimental._
import D._

class TOP extends Module{
    //to make tests easier, we expose the inst fetch ports in top, which can be used by verilator and chiseltest
    //now TOP seems to act as IF
    val io = IO(new Bundle{
        val pc_i      = Input(UInt(64.W))
        val inst_i    = Input(UInt(32.W))

        val pc_o      = Output(UInt(64.W))
        val inst_o    = Output(UInt(32.W))
        val o         = Output(UInt(64.W)) //to avoid dce
        val src1      = Output(UInt(64.W))
        val src2      = Output(UInt(64.W))
    })

    val IF      =   Module(new IF)
    val ID      =   Module(new ID)
    val EX      =   Module(new EX)
    val MEM     =   Module(new MEM)
    val WB      =   Module(new WB)
    val Regfile =   Module(new Regfile)

    IF.io.pc_i      :=  io.pc_o
    IF.io.inst_i    :=  io.inst_o

    ID.io.inst      :=  IF.io.inst_o
    ID.io.pc        :=  IF.io.pc_o
    ID.io.regSrc    :=  Regfile.io.readRes

    Regfile.io.readRfOp     :=  ID.io.readRfOp
    Regfile.io.writeRfOp    :=  WB.io.writeRfOp_o

    EX.io.decInfo       :=  ID.io.decInfo

    MEM.io.writeRfOp_i  :=  EX.io.writeRfOp

    WB.io.writeRfOp_i   :=  MEM.io.writeRfOp_o

    //TOP module's output, for debug use and also to avoid dce
    io.o        :=  WB.io.writeRfOp_o.wdata
    io.inst_o   :=  io.inst_i
    io.pc_o     :=  io.pc_i
    io.src1     :=  ID.io.decInfo.src1
    io.src2     :=  ID.io.decInfo.src2

    ID.io.debug_i   :=  IF.io.debug
    EX.io.debug_i   :=  ID.io.debug_o
    MEM.io.debug_i  :=  EX.io.debug_o
    WB.io.debug     :=  MEM.io.debug_o
}

object Gen {
    def main(args:Array[String]) : Unit = {
        println(YellowStr("generate verilog..."))
        println(getVerilogString(new TOP))
        (new chisel3.stage.ChiselStage).emitVerilog(new TOP, args)      //--target-dir , --no-dce
    }
}
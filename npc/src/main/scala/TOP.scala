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
    //now TOP acts like IF, and IF is useless, just passes the signal
    val io = IO(new Bundle{
        //set by cpp
        val inst_i    = Input(UInt(32.W))   //interface between cpp and chisel
        //debug-use signals, just add to the output port (top module's input can't be assigned by its sub-Module)
        val pc_o      = Output(UInt(64.W))  //set by IF, this port just lets cpp know the value of pc, which is in IF, and we pass it to there
        val inst_o    = Output(UInt(32.W))  //set by cpp
        val o         = Output(UInt(64.W))  //to avoid dce
        val src1      = Output(UInt(64.W))
        val src2      = Output(UInt(64.W))
        val instType  = Output(UInt(5.W))
        val branch    =   Output(Bool())

    })

    val IF      =   Module(new IF)
    val ID      =   Module(new ID)
    val EX      =   Module(new EX)
    val MEM     =   Module(new MEM)
    val WB      =   Module(new WB)
    val Regfile =   Module(new Regfile)

    IF.io.inst_i    :=  io.inst_o
    IF.io.branchOp  :=  ID.io.decInfo.branchOp

    ID.io.inst      :=  IF.io.inst_o
    ID.io.pc        :=  IF.io.pc_o
    ID.io.regVal    :=  Regfile.io.readRes

    Regfile.io.readRfOp     :=  ID.io.readRfOp
    Regfile.io.writeRfOp    :=  WB.io.writeRfOp_o

    EX.io.decInfo       :=  ID.io.decInfo

    MEM.io.writeRfOp_i  :=  EX.io.writeRfOp
    MEM.io.memOp        :=  EX.io.memOp

    WB.io.writeRfOp_i   :=  MEM.io.writeRfOp_o

    //TOP module's output, for debug use and also to avoid dce
    io.o        :=  WB.io.writeRfOp_o.wdata
    io.src1     :=  ID.io.decInfo.aluOp.src1
    io.src2     :=  ID.io.decInfo.aluOp.src2
    io.inst_o   :=  io.inst_i
    io.pc_o     :=  IF.io.pc_o
    io.instType :=  ID.io.instType
    io.branch   :=  IF.io.branch


    EX.io. debug_i  :=  ID.io.debug_o
    MEM.io.debug_i  :=  EX.io.debug_o
    WB.io.debug     :=  MEM.io.debug_o

}

object Gen {
    def main(args:Array[String]) : Unit = {
        println(YellowStr("Generate Verilog..."))
        //println(getVerilogString(new TOP))
        (new chisel3.stage.ChiselStage).emitVerilog(new TOP, args)      //--target-dir , --no-dce
        println(GreenStr("Done"))
    }
}
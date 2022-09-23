import org.scalatest.flatspec.AnyFlatSpec
import scala.io.StdIn           //debug
import chisel3._                //basic data types
import chisel3.iotesters._      //peek poke expert
import scala.util.Random        //debug
import chiseltest._             //test
import chisel3.util._
import chisel3.experimental._


object D{       //debug
    //usage: println(D.xx + "foo" + D.ed)
    val red     = "\u001b[1;31m" //1: background color(none)
    val green   = "\u001b[1;32m"
    val yellow  = "\u001b[1;33m"
    val blue    = "\u001b[1;34m"
    val magenta = "\u001b[1;35m"
    val cyan    = "\u001b[1;36m"
    val white   = "\u001b[1;37m"
    val pink    = "\u001b[1;38m"

    val normal      = "\u001b[0m"
    val bold        = "\u001b[1m"
    val dark        = "\u001b[2m"
    val italics     = "\u001b[3m"
    val underline   = "\u001b[4m"

    def RedStr(str: String) = red + str + normal
    def YellowStr(str: String) = yellow + str + normal
    def PinkStr(str: String) = pink + str + normal
    def MagentaStr(str: String) = magenta + str + normal
    def GreenStr(str: String) = green + str + normal
}

class TOP extends Module{
    val io = IO(new Bundle{
        val o       = Output(UInt(64.W)) //to avoid dce
        val pc      = Output(UInt(64.W))
        val inst    = Output(UInt(32.W))
    })

    val IF      =   Module(new IF)
    val ID      =   Module(new ID)
    val EX      =   Module(new EX)
    val MEM     =   Module(new MEM)
    val WB      =   Module(new WB)
    val Regfile =   Module(new Regfile)

    IF.io.pc_i      :=  io.pc
    IF.io.inst_i    :=  io.inst

    ID.io.inst      :=  IF.io.inst_o
    ID.io.pc        :=  IF.io.pc_o
    ID.io.regSrc    :=  Regfile.io.readRes

    Regfile.io.readRfOp     :=  ID.io.readRfOp
    Regfile.io.writeRfOp    :=  WB.io.writeRfOp_o

    EX.io.decInfo   :=  ID.io.decInfo

    MEM.io.writeRfOp_i  :=  EX.io.writeRfOp

    WB.io.writeRfOp_i   :=  MEM.io.writeRfOp_o

    io.o    :=  WB.io.writeRfOp_o.wdata
    io.pc   :=  DontCare    //let cpp do this, not scala
    io.inst :=  DontCare

}

object Gen {
import D._
    def main(args:Array[String]) : Unit = {
        println(YellowStr("generate verilog..."))
        println(getVerilogString(new TOP))
        (new chisel3.stage.ChiselStage).emitVerilog(new TOP, args)      //--target-dir , --no-dce
    }
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
import D._
    val Rnd = new Random()
    "simple hello world test" should "pass" in{
        test(new TOP){ dut => println(PinkStr("hello world")) }
    }
}
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

    def RedString(str: String) = red + str + normal
    def YellowString(str: String) = yellow + str + normal
    def PinkString(str: String) = pink + str + normal
    def MagentaString(str: String) = magenta + str + normal
    def GreenString(str: String) = green + str + normal
}

class TOP extends Module{
    val io = IO(new Bundle{
        val o = Output(UInt(64.W))  //to avoid dce
    })

    val IF      =   Module(new IF)
    val ID      =   Module(new ID)
    val EX      =   Module(new EX)
    val MEM     =   Module(new MEM)
    val WB      =   Module(new WB)
    val Regfile =   Module(new Regfile)

    ID.io.inst      :=  IF.io.inst
    ID.io.pc        :=  IF.io.pc
    ID.io.regSrc    :=  Regfile.io.readRes

    Regfile.io.readRfOp     :=  ID.io.readRfOp
    Regfile.io.writeRfOp    :=  WB.io.writeRfOp_o

    EX.io.decInfo   :=  ID.io.decInfo

    MEM.io.writeRfOp_i  :=  EX.io.writeRfOp

    WB.io.writeRfOp_i   :=  MEM.io.writeRfOp_o

    io.o    :=  WB.io.writeRfOp_o.wdata

}

object Gen {
    def main(args:Array[String]) : Unit = {
        println(D.yellow + "generate verilog..." + D.normal)
        println(getVerilogString(new TOP))
        (new chisel3.stage.ChiselStage).emitVerilog(new TOP, args)      //--target-dir , --no-dce
    }
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
    val Rnd = new Random()
    "test" should "pass" in{
        test(new TOP){ dut => println(D.PinkString("hello world")) }
    }
}
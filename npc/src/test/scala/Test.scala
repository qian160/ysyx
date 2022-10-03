import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest._
import scala.io.StdIn           //debug
import chisel3._                //basic data types
import chisel3.iotesters._      //peek poke expert
import scala.util.Random        //debug
import chiseltest._             //test
import chisel3.util._
import chisel3.experimental._
import chisel3.util.experimental.loadMemoryFromFileInline

import D._

class simple extends Module{
    val io = IO(new Bundle{
        val a   =   Input( UInt(8.W))
        val b   =   Input( UInt(8.W))
        val wdata = Input( UInt(32.W))
        val mask  = Input(UInt(4.W))
        //val n   =   Output(Vec(16, UInt(8.W)))
        val sum  =  Output(UInt(8.W))
        val cnt  =  Output(UInt(32.W))
    })
    val ram  = SyncReadMem(5, UInt(16.W))        //test sync read
    val mem  = Mem(8, UInt(32.W))
    val cnt = Counter(32)
    io.sum  :=  io.a + io.b
    io.cnt  :=  cnt.value

    val temp = Wire(Vec(4, UInt(8.W)))
    temp    :=  io.wdata.asTypeOf(Vec(4, UInt(8.W)))

    printf("%x\n%x\n%x\n%x\n", temp(0), temp(1), temp(2), temp(3))
}

object t {
    var test = UInt(8.W)
}

class simpleDevice extends Module {
    val io = IO(new Bundle{
        val w       = Input(Bool())
        val char    = Input(UInt(8.W))
        val wdata   = Input(UInt(64.W))
        val time    = Output(UInt(64.W))
    })
    val time = RegInit(0.U(64.W))
    val boot_time   =   RegInit(System.currentTimeMillis.U(64.W))
    when(io.w){
        printf("%c", io.char)
        time    :=   io.wdata - boot_time
    }

    io.time :=  time
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
    "empty set " should "have size 0" in{
        assert(Set.empty.size == 0)
    }
    "it" should "do something" in{
        test(new simple){dut => 
            dut.io.wdata.poke("h11223344".U)
            dut.clock.step()
        }
    }
    "simple device" should "work" in {
        test(new simpleDevice){dut =>
            dut.io.w.poke(true.B)
            for(i <- 'a' to 'z'){
                dut.io.char.poke(i)
                dut.clock.step()
            }
            println()
            println()

            println("test timer\n")
            dut.io.w.poke(true.B)
            for(i <- 1 to 10000){
                val t = System.currentTimeMillis.U
                dut.io.wdata.poke(t)
                dut.clock.step()
                val v = dut.io.time.peek()
                println(s"$v")
            }
            //val res = dut.io.o.peek()
            //println(s"wdata = $res")
        }
    }
}

/*
class Test(dut: TOP) extends PeekPokeTester(dut){
    val Rnd = new Random()
    for(i <- 0 to 100){  //simulate 100 cycles
        //poke(dut.io.foo, bar)
        step(1)
        //expect(dut.io.foo, bar)
    }

}

object Test extends App{
    chisel3.iotesters.Driver.execute(Array(
        "--target-dir",     "src/main/scala/verilator/verilog/",
        "--backend-name",   "verilator"),
        ()  =>  new TOP)   (dut => new Test(dut)
    )
}
*/

/*
class Test extends AnyFlatSpec with ChiselScalatestTester{
    "it" should "do something" in{
        test(new TOP){ dut =>
            for(i <- 0 to 100){
                dut.clock.step()
            }
        }
    }
}
*/
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
        //val n   =   Output(Vec(16, UInt(8.W)))
        val sum =   Output(UInt(8.W))
        val cnt =   Output(UInt(32.W))
    })
    val ram = SyncReadMem(5, UInt(16.W))        //sequential read
    val cnt = Counter(32)
    io.sum  :=  io.a + io.b
    io.cnt  :=  cnt.value
}

class simple1 extends AnyFlatSpec{
    "empty set " should "have size 0" in{
        assert(Set.empty.size == 0)
    }
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
    val Rnd = new Random()
    "test" should "pass" in{
        test(new simple){ dut => ()

        }

    }
}

class ppt(dut: simple) extends PeekPokeTester(dut){
    val rand = new Random
    for(i <- 0 to 255){
        poke(dut.io.a, rand.nextInt(256))
        poke(dut.io.b, rand.nextInt(256))

        step(1)
        peek(dut.io.sum)

    }
}
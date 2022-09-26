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
        val o1 = Output(UInt(64.W))
        val o2 = Output(UInt(64.W))
    })
    val ram = Mem(16, UInt(64.W))
    loadMemoryFromFileInline(ram, "./ram")
    io.o1   :=  ram(0)
    io.o2   :=  ram(1)
}

class simple1 extends AnyFlatSpec{
    "empty set " should "have size 0" in{
        assert(Set.empty.size == 0)
    }
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
    val Rnd = new Random()
    "test" should "pass" in{
        test(new simple){ dut => 
            val inst_rom = Array(
                "hfff00513".U,
                "h00150513".U,
                "h00150513".U,
                "h00150513".U,
                "h00150513".U,
                "h00150513".U,
                "h00100073".U,
                "h00150513".U,
                "h00150513".U,
                "h00150513".U,
                "h00150513".U,
            )

            println(PinkStr("hello world")) 
            val v1 = dut.io.o1.peek().toString
            val v2 = dut.io.o2.peek().toString
            println(s"v1 = $v1, v2 = $v2")
            //dut.io.inst_i.poke("hfff00513".U)
/*
            inst_rom foreach( (inst) => {
//                println(f"$inst%8x")
                dut.io.inst_i.poke(inst)
                val wdata = dut.io.o.peek().toString()
                dut.clock.step()
                println(s"wdata = $wdata")
            })
            */
            
        }
    }

}

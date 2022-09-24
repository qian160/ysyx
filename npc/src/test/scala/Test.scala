import org.scalatest.flatspec.AnyFlatSpec
import org.scalatest._
import scala.io.StdIn           //debug
import chisel3._                //basic data types
import chisel3.iotesters._      //peek poke expert
import scala.util.Random        //debug
import chiseltest._             //test
import chisel3.util._
import chisel3.experimental._
import D._

class simple extends AnyFlatSpec{
    "empty set " should "have size 0" in{
        assert(Set.empty.size == 0)
    }
}

class Test extends AnyFlatSpec with ChiselScalatestTester{
    val Rnd = new Random()
    "test" should "pass" in{
        test(new TOP){ dut => 
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
            dut.io.inst_i.poke("hfff00513".U)

            inst_rom foreach( (inst) => {
//                println(f"$inst%8x")
                dut.io.inst_i.poke(inst)
                val wdata = dut.io.o.peek().toString()
                dut.clock.step()
                println(s"wdata = $wdata")
            })
            
        }
    }

}

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxResource
import chisel3.util.HasBlackBoxInline

class DEBUG extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
        val exit = Input(Bool())
        val pc   = Input(UInt(64.W))
        val inst = Input(UInt(32.W))
        val a0   = Input(UInt(64.W))    //x10
        //val gpr  = Input(Vec(32, UInt(64.W)))
    })
    setInline("DEBUG.v",
        """ 
        |module DEBUG(
        |   input   exit,
        |   input   [63: 0]  pc,
        |   input   [63: 0]  a0,
        |   input   [31: 0]  inst
        |);
        |   always @* begin
        |       if(exit)   begin
        |           if(a0 != 64'h0) begin
        |               $display("\n\n hit \033[1;31mbad\033[0m trap at pc = %x, inst = 0x%8x", pc, inst);
        |           end
        |           else begin
        |               $display("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x", pc, inst);
        |           end
        |           $finish;
        |       end
        |   end
        |endmodule
        """.stripMargin)
}

/*
class EXIT extends BlackBox with HasBlackBoxResource{
    val io = IO(new Bundle{
        val exit = Input(Bool())
    })
    addResource("EXIT.v")
}
*/

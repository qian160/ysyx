import chisel3._
import chisel3.util._

class Regfile extends Module{
    val io = IO(new Bundle{
        val readRfOp_i     = Input(new ReadOp)   //readIndex
        val writeRfOp_i    = Input(new WriteRfOp)

        val readRes_o      = Output(new RegSource)
        val regs_o         = Output(Vec(32, UInt(64.W)))
    })
    val registers    = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))
    registers(0)    := 0.U

    val rd = io.writeRfOp_i.rd

    when(io.writeRfOp_i.wen & rd =/= 0.U){     
        registers(rd) := io.writeRfOp_i.wdata
    }
    //read
    io.readRes_o.rs1Val := registers(io.readRfOp_i.rs1)
    io.readRes_o.rs2Val := registers(io.readRfOp_i.rs2)
    //debug_o_i
    io.readRes_o.a0     := registers(10)
    //(0 to 31).foreach( (idx: Int) => io.readRes.gpr(idx) := registers(idx))
    //io.readRes.gpr  :=  registers
    io.regs_o   :=  registers
}
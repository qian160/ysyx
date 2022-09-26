import chisel3._
import chisel3.util._

class Regfile extends Module{
    val io = IO(new Bundle{
        val readRfOp       = Input(new ReadRfOp)   //readIndex
        val writeRfOp      = Input(new WriteRfOp)

        val readRes        = Output(new ReadRes)
    })
    val registers    = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))
    registers(0)    := 0.U

    when(io.writeRfOp.wen){     
        if(io.writeRfOp.rd!= 0.U)   
            registers(io.writeRfOp.rd) := io.writeRfOp.wdata
    }
    //read
    io.readRes.rs1Val := registers(io.readRfOp.rs1)
    io.readRes.rs2Val := registers(io.readRfOp.rs1)
    //debug
    io.readRes.a0     := registers(10)
    //(0 to 31).foreach( (idx: Int) => io.readRes.gpr(idx) := registers(idx))
    //io.readRes.gpr  :=  registers
}
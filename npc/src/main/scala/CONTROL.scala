import chisel3._
import chisel3.util._

class CONTROL extends RawModule{
    val io = IO(new Bundle {
        val id_stall_req = Input(Bool())    // read after load
        val ex_stall_req = Input(Bool())    // div
        val id_flush_req = Input(Bool())    // branch

        val stall_o  = Output(UInt(5.W))
        val flush_o  = Output(UInt(5.W))
    })
    // the 5 bits' output corresponding to the 5 pipeline stages. Each bit control one stage
    // we make the asumption that at any time at most only one input appears to be 1
    io.stall_o    :=  0.U
    io.flush_o    :=  0.U
    when(io.id_stall_req){        //read after load
        io.stall_o    :=  "b00011".U
    }
    when(io.ex_stall_req){
        io.stall_o    :=  "b00111".U
    }
    when(io.id_flush_req){        //branch or jump
        io.flush_o    :=  "b00011".U
        //jump still needs ID_EX's information to write rf, so dont flush id/ex
        //and B-Type inst will set writeRfop = 0, so no bad even though we dont flush ID/EX it won't produce bad effects
    }

}
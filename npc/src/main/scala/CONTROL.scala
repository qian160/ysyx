import chisel3._
import chisel3.util._
/*
    0     1      2       3       4
    IF  IF/ID  ID/EX   EX/MEM  MEM/WB  

*/
class CONTROL extends RawModule{
    val io = IO(new Bundle {
        val if_stall_req_i    =   Input(Bool())    // I-Cache miss
        val id_stall_req_i    =   Input(Bool())    // read after load
        val ex_stall_req_i    =   Input(Bool())    // div
        val mem_stall_req_i   =   Input(Bool())    // D-Cache miss

        val id_flush_req_i    =   Input(Bool())    // branch prediction failed

        val stall_o  = Output(UInt(5.W))
        val flush_o  = Output(UInt(5.W))
    })
    // the 5 bits' output corresponding to the 5 pipeline stages. Each bit control one stage
    // about priority:  if multiple stages(say a and b) request for a stall at the same time, we should take the request from latter stage(say b)
    // because the influenced registers are (a U b). if b is stalled, then a is also stalled. not vise versa
    io.flush_o    :=  0.U
    
    io.stall_o  :=  PriorityMux(Seq(
        (io.mem_stall_req_i,    "b01111".U),
        (io.ex_stall_req_i,     "b00111".U),
        (io.id_stall_req_i,     "b00011".U),
        (io.if_stall_req_i,     "b00001".U),
        (true.B,                0.U)
    ))

    when(io.id_flush_req_i){        //branch or jump
        io.flush_o    :=  "b00011".U
    }
}
import chisel3._
import chisel3.util._

import Util._

//little endian
class MEM extends Module{
    val io = IO(new Bundle{
        val writeOp_i   =   Input(new WriteOp)
        val memOp_i     =   Input(new MemOp)
        val loadVal_i   =   Input(UInt(64.W))

        val writeOp_o   =   Output(new WriteOp)
        val mem_fwd_o   =   Output(new Forward_Info)
        val debug_i     =   Input (new Debug_Bundle)
        val debug_o     =   Output(new Debug_Bundle)
    })

    val is_load      = io.memOp_i.is_load
    val is_store     = io.memOp_i.is_store

    val sdata   =   io.memOp_i.sdata
    val addr    =   io.memOp_i.addr
/*
    when(is_load){
        printf("(%x):   [x%d]   <=  %x (Mem[%x])\n", io.debug_i.pc(31, 0), io.writeOp_i.rf.rd, io.loadVal_i, addr(31, 0))
    }

    when(is_store){
        printf("(%x):   %x  =>  Mem[%x]\n", io.debug_i.pc(31, 0), sdata, addr(31, 0))
    }
*/
    io.writeOp_o            :=  io.writeOp_i
    io.writeOp_o.rf.wdata   :=  Mux(is_load, io.loadVal_i, io.writeOp_i.rf.wdata)

    io.debug_o      :=  io.debug_i
    //disable bypass on store
    io.mem_fwd_o.rf.rd      :=  Mux(is_store, 0.U, io.writeOp_o.rf.rd)
    io.mem_fwd_o.rf.wdata   :=  io.writeOp_o.rf.wdata

    io.mem_fwd_o.csr.addr   :=  io.writeOp_o.csr.waddr
    io.mem_fwd_o.csr.wdata  :=  io.writeOp_o.csr.wdata

}
import chisel3._
import chisel3.util._

class WB extends Module{
    val io = IO(new Bundle{
        val writeOp_i   =   Input(new WriteOp)

        val writeOp_o   =   Output(new WriteOp)
        val wb_fwd_o    =   Output(new Forward_Info)

        val debug_i     =   Input(new Debug_Bundle)
    })
    io.writeOp_o  :=  io.writeOp_i

    io.wb_fwd_o.rf.rd       :=  io.writeOp_o.rf.rd
    io.wb_fwd_o.rf.wdata    :=  io.writeOp_o.rf.wdata

    io.wb_fwd_o.csr.addr    :=  io.writeOp_o.csr.waddr
    io.wb_fwd_o.csr.wdata   :=  io.writeOp_o.csr.wdata

    //debug
    val DEBUG = Module(new DEBUG)

    DEBUG.io.pc     :=  io.debug_i.pc
    DEBUG.io.exit   :=  io.debug_i.exit
    DEBUG.io.inst   :=  io.debug_i.inst
    DEBUG.io.a0     :=  io.debug_i.a0

    //(0 to 31).foreach( (idx: Int) => DEBUG.io.gpr(idx) := io.debug.gpr(idx))
}
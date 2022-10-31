import chisel3._
import chisel3.util._

object ADDR {
    val MEPC    =   "h341".U(12.W)
    val MTVEC   =   "h305".U(12.W)
    val MSTATUS =   "h300".U(12.W)
    val MCAUSE  =   "h342".U(12.W)
}

class CSR extends Module{
    val io = IO(new Bundle{
        val csrAddr_i     =   Input(UInt(12.W))
        val writeOp_i     =   Input(new WriteCSROp)

        val csrData_o     =   Output(new CsrData)
    })
    val mepc    =   RegInit(0.U(64.W))
    val mcause  =   RegInit(0.U(64.W))
    val mstatus =   RegInit(0.U(64.W))
    val mtvec   =   RegInit("h800011c0".U(64.W))    //__am_asm_trap offered by nanos

    val wdata   =   io.writeOp_i.wdata

    io.csrData_o.csrVal   :=  MuxLookup(io.csrAddr_i, 0.U, Seq(
        ADDR.MEPC       ->  mepc,
        ADDR.MCAUSE     ->  mcause,
        ADDR.MSTATUS    ->  mstatus,
        ADDR.MTVEC      ->  mtvec
    ))

    when(io.writeOp_i.wen){
        switch(io.writeOp_i.waddr){
            is(ADDR.MEPC)   {mepc       :=  wdata}
            is(ADDR.MCAUSE) {mcause     :=  wdata}
            is(ADDR.MTVEC)  {mtvec      :=  wdata}
            is(ADDR.MSTATUS){mstatus    :=  wdata}
        }
    }

    io.csrData_o.epc    :=  mepc
    io.csrData_o.tvec   :=  mtvec
    io.csrData_o.cause  :=  mcause
    io.csrData_o.status :=  mstatus
}

object CSR extends CSR {
    def raiseIntr(NO: UInt) = {
        mcause  :=  NO
    }
}
import chisel3._
import chisel3.util._

import Util._
import AluOPT._

class EX extends Module{
    val io = IO(new Bundle{
        val decInfo_i   =   Input(new DecodeInfo)

        val writeOp_o   =   Output(new WriteOp)
        val memOp_o     =   Output(new MemOp)
        val ex_fwd_o    =   Output(new Forward_Info)

        val debug_i     =   Input (new Debug_Bundle)
        val debug_o     =   Output(new Debug_Bundle)
    })

    val src1 = io.decInfo_i.aluOp.src1
    val src2 = io.decInfo_i.aluOp.src2

    val aluRes  = Wire(UInt(64.W))
    aluRes  := MuxLookup(io.decInfo_i.aluOp.opt, src1 + src2, Seq(
        SUB     ->  (src1 - src2),
        SLT     ->  Mux(src1.asSInt < src2.asSInt, 1.U, 0.U),
        SLTU    ->  Mux(src1 < src2, 1.U, 0.U),
        MUL     ->  (src1.asSInt * src2.asSInt).asUInt(63,0),
        MULU    ->  src1  *src2,
        MULH    ->  (src1 * src2)(127,64),
        XOR     ->  (src1 ^ src2),
        OR      ->  (src1 | src2),
        AND     ->  (src1 & src2),
        SLL     ->  (src1 << src2(5,0)), 
        SRL     ->  (src1 >> src2(5,0)),
        SRA     ->  (src1.asSInt >> src2(5,0)).asUInt,

        ADDW    ->  SEXT(src1(31,0) + src2(31,0), 32, 64),
        SUBW    ->  SEXT(src1(31,0) - src2(31,0), 32, 64),
        MULW    ->  SEXT((src1.asSInt(31,0) * src2.asSInt(31,0))(31,0), 32, 64).asUInt,
        SLLW    ->  SEXT((src1(31, 0) << src2(4,0))(31,0), 32, 64),
        SRLW    ->  SEXT((src1(31, 0) >> src2(4,0))(31,0), 32, 64),
        SRAW    ->  SEXT((src1(31, 0).asSInt >> src2(4,0)).asUInt, 32, 64),

        //temp
        MULHSU  ->  ((src1.asSInt * src2).asUInt)(127, 64),

        MULH    ->  ((src1.asSInt * src2.asSInt).asUInt)(127, 64),
        DIV     ->  (src1.asSInt / src2.asSInt).asUInt,
        DIVU    ->  (src1 / src2),
        REM     ->  (src1.asSInt % src2.asSInt).asUInt,
        REMU    ->  (src1 % src2),

        REMW    ->  SEXT((src1(31, 0).asSInt % src2(31, 0).asSInt).asUInt, 32, 64),
        DIVW    ->  SEXT((src1(31, 0).asSInt / src2(31, 0).asSInt).asUInt, 32, 64),
        DIVUW   ->  SEXT((src1(31, 0) / src2(31, 0)), 32, 64),
        REMUW   ->  SEXT((src1(31, 0) % src2(31, 0)), 32, 64),
        
        //by default we do add, not listed here. Mostly about calculating the address
        )
    )

    io.writeOp_o          :=  io.decInfo_i.writeOp
    io.writeOp_o.rf.wdata :=  aluRes

    io.memOp_o            :=  io.decInfo_i.memOp
    io.memOp_o.addr       :=  aluRes

    //disable bypass at load
    io.ex_fwd_o.rf.rd       :=  Mux(io.memOp_o.is_load, 0.U,  io.decInfo_i.writeOp.rf.rd)
    io.ex_fwd_o.rf.wdata    :=  aluRes

    io.ex_fwd_o.csr.addr    :=  io.writeOp_o.csr.waddr
    io.ex_fwd_o.csr.wdata   :=  io.writeOp_o.csr.wdata

    io.debug_o  :=  io.debug_i

}
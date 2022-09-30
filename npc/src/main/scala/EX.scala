import chisel3._
import chisel3.util._

import Util._
import AluOPT._

class EX extends Module{
    val io = IO(new Bundle{
        val decInfo_i     = Input(new DecodeInfo)

        val writeRfOp_o   = Output(new WriteRfOp)
        val memOp_o       = Output(new MemOp)

        val debug_i     = Input (new Debug_Bundle)
        val debug_o     = Output(new Debug_Bundle)
    })

    val src1 = io.decInfo_i.aluOp.src1
    val src2 = io.decInfo_i.aluOp.src2

    val aluRes = MuxLookup(io.decInfo_i.aluOp.opt, src1 + src2, Seq(
        SUB     -> (src1 - src2),
        SLT     -> Mux(src1.asSInt < src2.asSInt, 1.U, 0.U),
        SLTU    -> Mux(src1 < src2, 1.U, 0.U),
        MUL     -> (src1 * src2)(63,0),
        MULH    -> (src1 * src2)(127,64),
        XOR     -> (src1 ^ src2),
        OR      -> (src1 | src2),
        AND     -> (src1 & src2),
        SLL     -> (src1 << src2(5,0)), 
        SRL     -> (src1 >> src2(5,0)),
        SRA     -> (src1.asSInt >> src2(5,0)).asUInt,

        ADDW    -> SEXT(src1(31,0) + src2(31,0), 32, 64),
        SUBW    -> SEXT(src1(31,0) - src2(31,0), 32, 64),
        MULW    -> SEXT(src1(31,0) * src2(31,0)(31,0), 32, 64),
        SLLW    -> SEXT((src1 << src2(4,0))(31,0), 32, 64),
        SRLW    -> SEXT((src1 << src2(4,0))(31,0), 32, 64),
        SRAW    -> SEXT((src1(31,0).asSInt >> src2(4,0)).asUInt, 32, 64),
        //by default we do add, not listed here. Mostly about calculating the address
        )
    )

    io.writeRfOp_o        :=  io.decInfo_i.writeRfOp
    io.writeRfOp_o.wdata  :=  aluRes

    io.memOp_o            :=  io.decInfo_i.memOp
    io.memOp_o.addr       :=  aluRes

/*
    switch(io.decInfo.instType){
        is(InstType.I){
            io.writeRfOp.wen  = true.B

        }
    }
*/
    io.debug_o  :=  io.debug_i

}
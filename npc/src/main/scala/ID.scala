import chisel3._
import chisel3.util._
import Util._

class ID extends Module{
    val io = IO(new Bundle{
        val inst        =   Input(UInt(32.W))
        val pc          =   Input(UInt(64.W))
        val regSrc      =   Input(new readRes)

        val readRfOp    =   Output(new readRfOp)
        val decInfo     =   Output(new decInfo)

        val debug_i     =   Input(new Debug)
        val debug_o     =   Output(new Debug)
    })
    //to make test easier, we use cpp to load inst not verilog or chisel
    dontTouch(io.inst)  //don't elimate this

    val inst     = io.inst
    val imm_I    = SEXT(inst(31,20), 64)
    val imm_S    = SEXT(Cat(inst(31,25), inst(11,7)), 64)
    val imm_B    = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)),64)
    val imm_J    = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),64)
    val imm_U    = SEXT(inst(31,12),64)

    val decRes   = ListLookup(inst,DecTable.defaultDec,DecTable.decMap)     //returns list(instType,opt)
    val instType = decRes(DecTable.TYPE)    //R I S B J U SYS
    val decOpt   = decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val rs1Val   = io.regSrc.rs1Val
    val rs2Val   = io.regSrc.rs2Val

    //default
    io.decInfo.src1     := rs1Val
    io.decInfo.src2     := rs2Val
    io.decInfo.wen      := false.B
    io.decInfo.rd       := inst(11, 7)
    io.decInfo.aluop    := decOpt
    io.decInfo.instType := instType

    io.readRfOp.rs1     := io.inst(19, 15)
    io.readRfOp.rs2     := io.inst(24, 20)

    switch(instType){
        is(InstType.I){
            io.decInfo.src1 :=  rs1Val
            io.decInfo.src2 :=  imm_I
            io.decInfo.wen  :=  true.B
        }
        /*
        is(InstType.U){

        }
        is(InstType.R){

        }
        */
    }

    io.debug_o      :=  io.debug_i
    io.debug_o.a0   :=  io.regSrc.a0
    io.debug_o.exit :=  (instType   === InstType.SYS)

//    val EXIT = Module(new EXIT)
//    EXIT.io.exit    := Mux(inst === CONST.EBREAK, true.B, false.B)

}
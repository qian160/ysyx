import chisel3._
import chisel3.util._
import Util._

class ID extends Module{
    val io = IO(new Bundle{
        val inst        =   Input(UInt(32.W))
        val pc          =   Input(UInt(64.W))
        val regVal      =   Input(new readRes)

        val readRfOp    =   Output(new readRfOp)
        val decInfo     =   Output(new decInfo)
        val branchOp    =   Output(new BranchOp)

        val debug_o     =   Output(new Debug)
    })
    //to make test easier, we use cpp to load inst, not verilog or chisel
    dontTouch(io.inst)  //don't elimate this

    val inst     = io.inst
    val pc       = io.pc
    val imm_I    = SEXT(inst(31,20), 64)
    val imm_S    = SEXT(Cat(inst(31,25), inst(11,7)), 64)
    val imm_B    = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)),64)
    val imm_J    = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),64)
    val imm_U    = SEXT(inst(31,12),64)

    val decRes   = ListLookup(inst,DecTable.defaultDec,DecTable.decMap)     //returns list(instType,opt)
    val instType = decRes(DecTable.TYPE)    //R I S B J U SYS
    val decOpt   = decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val rs1Val   = io.regVal.rs1Val
    val rs2Val   = io.regVal.rs2Val

    val opcode  =   inst(6, 0)

    //default
    io.branchOp         := 0.U.asTypeOf(new BranchOp)
    io.decInfo          := 0.U.asTypeOf(new decInfo)        //src1, src2, wen are not sure
    io.decInfo.rd       := inst(11, 7)
    io.decInfo.aluop    := decOpt
    io.decInfo.instType := instType
    //read rf
    io.readRfOp.rs1     := io.inst(19, 15)
    io.readRfOp.rs2     := io.inst(24, 20)

    io.debug_o.pc       :=  pc
    io.debug_o.inst     :=  inst    
    io.debug_o.a0       :=  io.regVal.a0
    io.debug_o.exit     :=  inst === CONST.EBREAK

    switch(instType){//R I U S B J
        is(InstType.I){
            io.decInfo.src1 :=  rs1Val
            io.decInfo.src2 :=  imm_I
            io.decInfo.wen  :=  true.B
        }
        is(InstType.R){
            io.decInfo.src1 :=  rs1Val
            io.decInfo.src2 :=  rs2Val
            io.decInfo.wen  :=  true.B
        }
        is(InstType.B){
            io.debug_o.exit :=  true.B
        }
        is(InstType.U){     //lui auipc
            io.decInfo.src1 :=  Mux(opcode === Opcode.LUI, 0.U, pc)
            io.decInfo.src2 :=  imm_U << 12
            io.decInfo.wen  :=  true.B
        }
        is(InstType.J){     //jal
            io.decInfo.wen      :=  true.B
            io.branchOp.happen  :=  true.B
            io.branchOp.newPC   :=  pc + imm_J
            //link address
            io.decInfo.src1     :=  pc
            io.decInfo.src2     :=  4.U(64.W)
            
        }/*
        is(InstType.S){
            

        }        
        */

    }

    //io.debug_o.exit     :=  inst === CONST.EBREAK

//    val EXIT = Module(new EXIT)
//    EXIT.io.exit    := Mux(inst === CONST.EBREAK, true.B, false.B)

}
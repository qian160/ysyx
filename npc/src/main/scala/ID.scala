import chisel3._
import chisel3.util._
import Util._

class ID extends Module{
    def imm_I(inst: UInt) = SEXT(inst(31,20), 64)
    def imm_J(inst: UInt) = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),64)
    def imm_U(inst: UInt) = SEXT(inst(31,12), 64)
    def imm_S(inst: UInt) = SEXT(Cat(inst(31,25), inst(11,7)), 64)
    def imm_B(inst: UInt) = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)),64)

    val io = IO(new Bundle{
        val inst        =   Input(UInt(32.W))
        val pc          =   Input(UInt(64.W))
        val regVal      =   Input(new ReadRes)

        val readRfOp    =   Output(new ReadRfOp)
        val decInfo     =   Output(new DecodeInfo)

        val debug_o     =   Output(new Debug)
        val instType    =   Output(UInt(5.W))
    })
    //to make test easier, we use cpp to load inst, not verilog or chisel
    dontTouch(io.inst)  //don't elimate this

    val inst     = io.inst
    val pc       = RegNext(io.pc)

    val decRes   = ListLookup(inst,DecTable.defaultDec,DecTable.decMap)     //returns list(instType,opt)
    val instType = decRes(DecTable.TYPE)    //R I S B J U SYS
    io.instType :=  instType
    val op       = decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val rs1Val   = io.regVal.rs1Val
    val rs2Val   = io.regVal.rs2Val

    val opcode  =   inst(6, 0)
    val fct3    =   inst(14, 12)

    //default
    io.decInfo                  := 0.U.asTypeOf(new DecodeInfo)
    io.decInfo.instType         := instType
    io.decInfo.writeRfOp.rd     := inst(11, 7)
    io.decInfo.aluOp.opt        := op
    //read rf
    io.readRfOp.rs1     := io.inst(19, 15)
    io.readRfOp.rs2     := io.inst(24, 20)

    io.debug_o.pc       :=  pc
    io.debug_o.inst     :=  inst    
    io.debug_o.a0       :=  io.regVal.a0
    io.debug_o.exit     :=  false.B

    switch(instType){//R I U S B J
        is(InstType.BAD){
            io.debug_o.exit   :=  inst.andR     //not nop
        }
        is(InstType.I){ //likely jalr, load
            io.decInfo.writeRfOp.wen    :=  true.B
            val is_jalr =   opcode  === Opcode.JALR

            io.decInfo.aluOp.src1   :=  Mux(is_jalr, pc,        rs1Val)
            io.decInfo.aluOp.src2   :=  Mux(is_jalr, 4.U(64.W), imm_I(inst))
            io.decInfo.branchOp.happen  :=  Mux(is_jalr, true.B, false.B)
            io.decInfo.branchOp.newPC   :=  rs1Val + imm_I(inst)
            io.decInfo.memOp.isLoad     :=  opcode === Opcode.LOAD
            //io.decInfo.memOp.length     :=  

        }
        is(InstType.R){
            io.decInfo.aluOp.src1       :=  rs1Val
            io.decInfo.aluOp.src2       :=  rs2Val
            io.decInfo.writeRfOp.wen    :=  true.B
        }
        is(InstType.B){
            io.debug_o.exit :=  true.B
        }
        is(InstType.U){     //lui auipc
            io.decInfo.aluOp.src1       :=  Mux(opcode === Opcode.LUI, 0.U, pc)
            io.decInfo.aluOp.src2       :=  imm_U(inst) << 12
            io.decInfo.writeRfOp.wen    :=  true.B
        }
        is(InstType.J){     //jal
            io.decInfo.writeRfOp.wen    :=  true.B
            io.decInfo.branchOp.happen  :=  true.B
            io.decInfo.branchOp.newPC   :=  pc + imm_J(inst)
            //link address
            io.decInfo.aluOp.src1       :=  pc
            io.decInfo.aluOp.src2       :=  4.U(64.W)
            
        }
        is(InstType.S){
            //io.decInfo.
            io.debug_o.exit :=  true.B
        }

        is(InstType.SYS){
            io.debug_o.exit :=  true.B
        }
    }

    //io.debug_o.exit     :=  inst === CONST.EBREAK

//    val EXIT = Module(new EXIT)
//    EXIT.io.exit    := Mux(inst === CONST.EBREAK, true.B, false.B)

}
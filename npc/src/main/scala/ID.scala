import chisel3._
import chisel3.util._
import Util._

class ID extends Module{
    def imm_I(inst: UInt) = SEXT(inst(31,20), 12, 64)
    def imm_J(inst: UInt) = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),12, 64)
    def imm_U(inst: UInt) = SEXT(inst(31,12), 20, 64)
    def imm_S(inst: UInt) = SEXT(Cat(inst(31,25), inst(11,7)), 12, 64)
    def imm_B(inst: UInt) = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)), 12, 64)

    val io = IO(new Bundle{
        val inst_i        =   Input(UInt(32.W))
        val pc_i          =   Input(UInt(64.W))
        val regVal_i      =   Input(new ReadRes)

        val readRfOp_o    =   Output(new ReadRfOp)
        val decInfo_o     =   Output(new DecodeInfo)

        val debug_o       =   Output(new Debug_Bundle)
    })
    //to make test easier, we use cpp to load inst, not verilog or chisel

    val inst     = io.inst_i
    val pc       = /*RegNext*/(io.pc_i)

    val decRes   = ListLookup(inst,DecTable.defaultDec,DecTable.decMap)     //returns list(instType,opt)
    val instType = decRes(DecTable.TYPE)    //R I S B J U SYS
    val op       = decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val rs1Val   = io.regVal_i.rs1Val
    val rs2Val   = io.regVal_i.rs2Val

    val opcode  =   inst(6, 0)
    val fct3    =   inst(14, 12)

    //default
    io.decInfo_o                  := 0.U.asTypeOf(new DecodeInfo)
    io.decInfo_o.aluOp.src1       := rs1Val
    io.decInfo_o.aluOp.src2       := rs2Val
    io.decInfo_o.instType         := instType
    io.decInfo_o.writeRfOp.rd     := inst(11, 7)
    io.decInfo_o.aluOp.opt        := op
    //read rf
    io.readRfOp_o.rs1   := inst(19, 15)
    io.readRfOp_o.rs2   := inst(24, 20)

    io.debug_o.pc       :=  pc
    io.debug_o.inst     :=  inst
    //io.debug_o.gpr      :=  io.regVal.gpr
    io.debug_o.a0       :=  io.regVal_i.a0
    io.debug_o.exit     :=  false.B

    val immI = imm_I(inst)
    dontTouch(immI)

    switch(instType){//R I U S B J
        is(InstType.BAD){
            io.debug_o.exit   :=  inst.andR     //not nop
        }
        is(InstType.I){ //likely jalr, load, rv32i-arith, rv64i-arith
            io.decInfo_o.writeRfOp.wen    :=  true.B
            val is_jalr =   opcode  === Opcode.JALR

            io.decInfo_o.aluOp.src1   :=  Mux(is_jalr, pc,        rs1Val)
            io.decInfo_o.aluOp.src2   :=  Mux(is_jalr, 4.U(64.W), imm_I(inst))
            io.decInfo_o.branchOp.happen  :=  Mux(is_jalr, true.B, false.B)
            io.decInfo_o.branchOp.newPC   :=  rs1Val + imm_I(inst)
            //load uses src1 and src2 to calculate the address
            io.decInfo_o.memOp.isLoad     :=  opcode === Opcode.LOAD
            io.decInfo_o.memOp.length     :=  fct3(1, 0)

            io.decInfo_o.memOp.sign       :=  fct3(2)     //0 to 3 unsigned, signed when fct3 >= 4

        }
        is(InstType.R){
            io.decInfo_o.aluOp.src1       :=  rs1Val
            io.decInfo_o.aluOp.src2       :=  rs2Val
            io.decInfo_o.writeRfOp.wen    :=  true.B

            //io.decInfo.aluOp.src1   :=  
        }
        is(InstType.B){
            io.decInfo_o.branchOp.newPC   :=  pc + imm_B(inst)
            io.decInfo_o.branchOp.happen  :=  MuxLookup(fct3, false.B, Seq(
                Fct3.BEQ     ->  (rs1Val  === rs2Val),
                Fct3.BNE     ->  (rs1Val  =/= rs2Val),
                Fct3.BLT     ->  (rs1Val.asSInt   <  rs2Val.asSInt),
                Fct3.BGE     ->  (rs1Val.asSInt   >  rs2Val.asSInt),
                Fct3.BLTU    ->  (rs1Val  === rs2Val),
                Fct3.BGEU    ->  (rs1Val  === rs2Val),
            ))
        }
        is(InstType.U){     //lui auipc
            io.decInfo_o.aluOp.src1       :=  Mux(opcode === Opcode.LUI, 0.U, pc)
            io.decInfo_o.aluOp.src2       :=  imm_U(inst) << 12
            io.decInfo_o.writeRfOp.wen    :=  true.B
        }
        is(InstType.J){     //jal
            io.decInfo_o.writeRfOp.wen    :=  true.B
            io.decInfo_o.branchOp.happen  :=  true.B
            io.decInfo_o.branchOp.newPC   :=  pc + imm_J(inst)
            //link address
            io.decInfo_o.aluOp.src1       :=  pc
            io.decInfo_o.aluOp.src2       :=  4.U(64.W)            
        }
        is(InstType.S){
            io.decInfo_o.memOp.isStore    :=  true.B
            io.decInfo_o.memOp.length     :=  fct3
            io.decInfo_o.memOp.sdata      :=  rs2Val
            /*
            io.decInfo.memOp.sel        :=  MuxLookup(fct3, 0.U, Seq(
                0.U ->  "b00000001".U,      //2 ^ 1 - 1
                1.U ->  "b00000011".U,      //2 ^ 2 - 1 
                2.U ->  "b00001111".U,      //2 ^ 4 - 1
                3.U ->  "b11111111".U,      //2 ^ 8 - 1
            ))
            io.decInfo.memOp.sel        :=  ((1.U << (1.U << fct3)) - 1.U) << ((rs1Val + imm_S(inst)) % 8.U)      //sel is decided by both width and addr
            */
            //use ALU to calculate the address
            io.decInfo_o.aluOp.src1       :=  rs1Val
            io.decInfo_o.aluOp.src2       :=  imm_S(inst)
        }

        is(InstType.SYS){
            io.debug_o.exit :=  true.B
        }
    }

    //debug print info
    val src1 = io.decInfo_o.aluOp.src1
    val src2 = io.decInfo_o.aluOp.src2

    //printf(p"src1 = ${Hexadecimal(src1)}, src2 = ${Hexadecimal(src2)}\n")
    printf("pc = %x, inst = %x\n\n",pc, inst/*, src1, src2*/)

    //io.debug_o.exit     :=  inst === CONST.EBREAK

//    val EXIT = Module(new EXIT)

}
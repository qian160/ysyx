import chisel3._
import chisel3.util._
import Util._

class ID extends Module{
    def imm_I(inst: UInt) = SEXT(inst(31,20), 12, 64)
//    def imm_J(inst: UInt) = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),13, 64)
    def imm_J(inst: UInt) = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),21, 64)
    //def imm_U(inst: UInt) = SEXT(inst(31,12), 20, 64)
    def imm_U(inst: UInt) = SEXT(inst(31,12), 20, 64) << 12
    def imm_S(inst: UInt) = SEXT(Cat(inst(31,25), inst(11,7)), 12, 64)
    def imm_B(inst: UInt) = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)), 13, 64)

    val io = IO(new Bundle{
        val inst_i      =   Input(UInt(32.W))
        val fwd_i       =   Input(new Forward)
        val pc_i        =   Input(UInt(64.W))
        val rfData_i    =   Input(new RegSource)
        val csrData_i   =   Input(new CsrData)

        val readOp_o    =   Output(new ReadOp)
        val decInfo_o   =   Output(new DecodeInfo)
        val stall_req_o =   Output(Bool())
        val flush_req_o =   Output(Bool())

        val debug_o     =   Output(new Debug_Bundle)
    })
    //alias
    val inst     =  io.inst_i
    val pc       =  io.pc_i
    val rs1      =  inst(19, 15)
    val rs2      =  inst(24, 20)
    val csrAddr  =  inst(31, 20)
    val rd       =  inst(11, 7)
    //bypass
    val rs1Val   = PriorityMux(Seq(
        (rs1 === 0.U,                  0.U),
        (rs1 === io.fwd_i.ex.rf.rd,    io.fwd_i.ex.rf.wdata),
        (rs1 === io.fwd_i.mem.rf.rd,   io.fwd_i.mem.rf.wdata),
        (rs1 === io.fwd_i.wb.rf.rd,    io.fwd_i.wb.rf.wdata),
        (true.B,                       io.rfData_i.rs1Val)
    ))
    val rs2Val   = PriorityMux(Seq(
        (rs2 === 0.U,                  0.U),
        (rs2 === io.fwd_i.ex.rf.rd,    io.fwd_i.ex.rf.wdata),
        (rs2 === io.fwd_i.mem.rf.rd,   io.fwd_i.mem.rf.wdata),
        (rs2 === io.fwd_i.wb.rf.rd,    io.fwd_i.wb.rf.wdata),
        (true.B,                       io.rfData_i.rs2Val)
    ))

    val csrVal   = PriorityMux(Seq(
        (csrAddr === io.fwd_i.wb.csr.addr,      io.fwd_i.wb.csr.wdata),
        (csrAddr === io.fwd_i.mem.csr.addr,     io.fwd_i.mem.csr.wdata),
        (csrAddr === io.fwd_i.ex.csr.addr,      io.fwd_i.ex.csr.wdata),
        (true.B,                                io.csrData_i.csrVal)
    ))
    //sometimes the imm field will be interpreted as rs1 and rs2 and unexpectedly triggared the stall
    //io.stall_req_o    :=  (io.fwd_i.prev_is_load & (io.fwd_i.prev_rd === rs1 | io.fwd_i.prev_rd === rs2))
    
    when(io.stall_req_o){
        printf("stall at %x\n", pc)
    }
    
    io.flush_req_o    :=  io.decInfo_o.branchOp.happen
    io.stall_req_o    :=  0.U
    val prev_is_load    =   io.fwd_i.prev_is_load
    val prev_rd         =   io.fwd_i.prev_rd

    val decRes   = ListLookup(inst, DecTable.defaultDec, DecTable.decMap)     //returns list(instType,opt)
    val instType = decRes(DecTable.TYPE)    //R I S B J U SYS
    val op       = decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val opcode  =   inst(6, 0)
    val fct3    =   inst(14, 12)

    //default
    io.decInfo_o                    := 0.U.asTypeOf(new DecodeInfo)
    io.decInfo_o.aluOp.src1         := rs1Val
    io.decInfo_o.aluOp.src2         := rs2Val
    io.decInfo_o.instType           := instType
    io.decInfo_o.writeOp.rf.rd      := inst(11, 7)
    io.decInfo_o.writeOp.csr.waddr  := csrAddr
    io.decInfo_o.aluOp.opt          := op
    //read rf
    io.readOp_o.rs1     := inst(19, 15)
    io.readOp_o.rs2     := inst(24, 20)
    io.readOp_o.csrAddr := csrAddr

    io.debug_o.pc       :=  pc
    io.debug_o.inst     :=  inst
    io.debug_o.a0       :=  PriorityMux(Seq(
        (10.U === io.fwd_i.ex.rf.rd,    io.fwd_i.ex.rf.wdata),
        (10.U === io.fwd_i.mem.rf.rd,   io.fwd_i.mem.rf.wdata),
        (10.U === io.fwd_i.wb.rf.rd,    io.fwd_i.wb.rf.wdata),
        (true.B,                       io.rfData_i.a0)
    ))
    io.debug_o.exit     :=  false.B

    val immI = imm_I(inst)
    switch(instType){//R I U S B J
        is(InstType.BAD){
            io.debug_o.exit   :=  inst.andR     //not nop
        }
        is(InstType.I){ //likely jalr, load, rv32i-arith, rv64i-arith
            io.decInfo_o.writeOp.rf.wen    :=  true.B
            val is_jalr =   opcode  === Opcode.JALR

            io.decInfo_o.aluOp.src1   :=  Mux(is_jalr, pc,        rs1Val)
            io.decInfo_o.aluOp.src2   :=  Mux(is_jalr, 4.U(64.W), imm_I(inst))
            io.decInfo_o.branchOp.happen  :=  Mux(is_jalr, true.B, false.B)
            io.decInfo_o.branchOp.newPC   :=  rs1Val + imm_I(inst)
            //load uses src1 and src2 to calculate the address
            io.decInfo_o.memOp.is_load    :=  opcode === Opcode.LOAD
            io.decInfo_o.memOp.length     :=  UIntToOH(fct3(1, 0))

            io.decInfo_o.memOp.unsigned   :=  fct3(2)     //0 to 3 unsigned, signed when fct3 >= 4

            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1)

        }
        is(InstType.R){
            io.decInfo_o.aluOp.src1       :=  rs1Val
            io.decInfo_o.aluOp.src2       :=  rs2Val
            io.decInfo_o.writeOp.rf.wen   :=  true.B

            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1 | prev_rd === rs2)
        }
        is(InstType.B){
            //when stall happens, the branch signal can't be given, since the op
            //solution: clear the branch signal when stall. this is done by & (~stall)
            io.decInfo_o.writeOp.rf.rd    :=  0.U
            io.decInfo_o.branchOp.newPC   :=  pc + imm_B(inst)

            val likely_branch = MuxLookup(fct3, false.B, Seq(
                Fct3.BEQ     ->  (rs1Val  === rs2Val),
                Fct3.BNE     ->  (rs1Val  =/= rs2Val),
                Fct3.BLT     ->  (rs1Val.asSInt   <   rs2Val.asSInt),
                Fct3.BGE     ->  (rs1Val.asSInt   >=  rs2Val.asSInt),
                Fct3.BLTU    ->  (rs1Val   <  rs2Val),
                Fct3.BGEU    ->  (rs1Val   >= rs2Val),
            ))

            io.decInfo_o.branchOp.happen  :=  likely_branch & (~io.stall_req_o)
            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1 | prev_rd === rs2)
        }
        is(InstType.U){     //lui auipc
            io.decInfo_o.aluOp.src1       :=  Mux(opcode === Opcode.LUI, 0.U, pc)
            io.decInfo_o.aluOp.src2       :=  imm_U(inst)
            io.decInfo_o.writeOp.rf.wen   :=  true.B
        }
        is(InstType.J){     //jal
            io.decInfo_o.writeOp.rf.wen   :=  true.B
            io.decInfo_o.branchOp.happen  :=  true.B
            io.decInfo_o.branchOp.newPC   :=  pc + imm_J(inst)
            //link address
            io.decInfo_o.aluOp.src1       :=  pc
            io.decInfo_o.aluOp.src2       :=  4.U(64.W)            
        }
        is(InstType.S){
            //avoid incorrect bypass(imm being interpreted as rd)
            io.decInfo_o.writeOp.rf.rd    :=  0.U
            io.decInfo_o.memOp.is_store   :=  true.B
            io.decInfo_o.memOp.length     :=  UIntToOH(fct3)
            io.decInfo_o.memOp.sdata      :=  rs2Val

            //use ALU to calculate the address
            io.decInfo_o.aluOp.src1       :=  rs1Val
            io.decInfo_o.aluOp.src2       :=  imm_S(inst)

            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1 | prev_rd === rs2)
        }

        is(InstType.SYS){           //csr ecall ebreak mret
            when(fct3.orR){         //csr
                //printf("csr\n")
                io.decInfo_o.writeOp.rf.wen :=  true.B
                io.decInfo_o.aluOp.src1     :=  csrVal
                io.decInfo_o.aluOp.src2     :=  0.U


                val csr_useImm  = fct3(2)
                val rsVal       = Mux(csr_useImm, SEXT(inst(19, 15), 5, 64), rs1Val)    

                io.decInfo_o.writeOp.csr.wdata  := MuxLookup(fct3, 0.U, Seq(
                    (CSRMODE.RW, rs1Val),
                    (CSRMODE.RS, csrVal |  rsVal), //rs1 is used as a bit mask
                    (CSRMODE.RC, csrVal & ~rsVal)
                ))
                io.decInfo_o.writeOp.csr.wen    :=  true.B
            }.otherwise{
                val inst_p2 =   inst(21, 20)
                switch(inst_p2){
                    is(SYS_INST.mret){
                        io.decInfo_o.branchOp.happen    :=  true.B
                        io.decInfo_o.branchOp.newPC     :=  io.csrData_i.epc       // + 4 is performed by exception handler code
                    }
                    is(SYS_INST.ecall){
                        io.decInfo_o.branchOp.happen    :=  true.B
                        io.decInfo_o.branchOp.newPC     :=  io.csrData_i.tvec
                        io.decInfo_o.writeOp.csr.wen    :=  true.B
                        io.decInfo_o.writeOp.csr.waddr  :=  0x305.U
                        io.decInfo_o.writeOp.csr.wdata  :=  pc
                    }
                    is(SYS_INST.ebreak){
                        io.debug_o.exit :=  true.B
                    }
                }
            }

        }
    }

    //debug print info
    val src1 = io.decInfo_o.aluOp.src1
    val src2 = io.decInfo_o.aluOp.src2

    //printf(p"src1 = ${Hexadecimal(src1)}, src2 = ${Hexadecimal(src2)}\n")
    //printf("\npc = %x, inst = %x\n",pc, inst)
    //printf("src1 = %x, src2 = %x\n\n\n", io.decInfo_o.aluOp.src1, io.decInfo_o.aluOp.src2)

}
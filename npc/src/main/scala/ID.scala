import chisel3._
import chisel3.util._
import Util._
/*
        When stalled, we can't give out valid information, it will be okay if we don't 'use' those invalid information, since
    in the next cycle  we will update those information correctly.
        However, if we try to 'use' those incorrectly decoded information when stalled, it could lead to problems
        The only way to 'use' the decoded information here seems to be branch and jump

        ID's stall has many causes. For example, ID can itself request for a stall in the next cycle. But remember when EX or MEM requests
    for a stall, ID is also influenced.
        If the stall is caused by ID itself, then we could know that ID must have met with a data hazard. Under this condition, we can't use the 
    the decoded information. However, if the stall is not caused by ID itself, e.g. a D-Cache miss in MEM, 

*/
class ID extends Module{
    val io = IO(new Bundle{
//        val mem_is_load_i       =   Input(Bool())
        val mem_need_stall_i    =   Input(Bool())           // load miss

        val is_stalled_i    =   Input(Bool())
        val inst_i          =   Input(UInt(32.W))
        val fwd_i           =   Input(new Forward)
        val pc_i            =   Input(UInt(64.W))
        val rfData_i        =   Input(new RegSource)
        val csrData_i       =   Input(new CsrData)

        val readOp_o        =   Output(new ReadOp)
        val decInfo_o       =   Output(new DecodeInfo)
        val stall_req_o     =   Output(Bool())              // because of data hazard
        val flush_req_o     =   Output(Bool())

        val debug_o         =   Output(new Debug_Bundle)
        val nr_branch_o     =   Output(UInt(64.W))
        val nr_taken_o      =   Output(UInt(64.W))

        val predict_i       =   Input(new PredictOp)
        val predict_o       =   Output(new PredictOp)
    })
    //alias
    val inst     =  io.inst_i
    val pc       =  io.pc_i
    val rs1      =  inst(19, 15)
    val rs2      =  inst(24, 20)
    val csrAddr  =  inst(31, 20)
    val rd       =  inst(11, 7)

    val nr_branch   =   RegInit(0.U(64.W))
    val nr_taken    =   RegInit(0.U(64.W))
    //bypass. Note: when a inst doesn't write the regfile, its bypass should be disabled
    // add stricter control conditions here.
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

    val id_is_in_stall  =   io.is_stalled_i             // for many reasons...

    // load's rd in mem stage
    val load_rd_in_mem      =   io.fwd_i.mem.rf.rd
    // operands are unusable when data hazard exists
    // the word "unusable" means we can only pass but not give out any result based on the value 
    // in fact only load could make the operands unusable: just read after load. Generally we could solve this by 
    // stalling a cycle. But when load miss happens we need another cycle to stall
    val load_miss           =   io.mem_need_stall_i
    val data_hazard_exist   =   (rs1 === load_rd_in_mem) | (rs2 === load_rd_in_mem)
    val operands_usable     =   ~((load_miss & data_hazard_exist) | io.stall_req_o)

    val predict_target  =   io.predict_i.predict_target
    val actual_target   =   io.predict_o.target
    val predict_taken   =   io.predict_i.predict_taken
    val actual_taken    =   io.predict_o.taken
    val is_branch       =   io.predict_i.is_branch
    val direction_fail  =   actual_taken =/= predict_taken
    val target_fail     =   actual_target =/= predict_target
    // based on reliable information
    val predict_fail    =   ((is_branch) & (target_fail | direction_fail) & operands_usable)

    val prev_is_load    =   io.fwd_i.prev_is_load
    val prev_rd         =   io.fwd_i.prev_rd
    /*  consider something like this:
        WB      lw      a5,220(a5) 
        MEM     sw      a5,20(s0)
        EX      lw      a0,0(s0)    -> assume I-Cache miss
        ID      sext.w  a0,a0

        the sext inst will stall for 2 cycles. 1st I-Cache miss, 2nd data hazard caused by load
        What's more, that inst should take the bypass from MEM, if we just latch
    */
    // different types of inst have their different stall reasons. But all caused by load
    io.stall_req_o     :=   0.U

    io.flush_req_o     :=   predict_fail

    val decRes   =  ListLookup(inst, DecTable.defaultDec, DecTable.decMap)     //returns list(instType,opt)
    val instType =  decRes(DecTable.TYPE)    //R I S B J U SYS
    val op       =  decRes(DecTable.OPT)     //sometimes useless,like InstType.B

    val opcode   =  inst(6, 0)
    val fct3     =  inst(14, 12)

    //default
    io.decInfo_o                    :=  0.U.asTypeOf(new DecodeInfo)
    io.decInfo_o.aluOp.src1         :=  rs1Val
    io.decInfo_o.aluOp.src2         :=  rs2Val
    // disable next inst's bypass(when read after load)
    io.decInfo_o.writeOp.rf.rd      :=  Mux(io.stall_req_o, 0.U, inst(11, 7))
    io.decInfo_o.writeOp.csr.waddr  :=  csrAddr
    io.decInfo_o.aluOp.opt          :=  op

    io.predict_o         :=  io.predict_i
    io.predict_o.taken   :=  false.B
    io.predict_o.predict_fail    :=  predict_fail

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
        (true.B,                        io.rfData_i.a0)
    ))
    io.debug_o.exit     :=  false.B

    //S and B dont write regfile. Set rd = 0 to avoid bypass
    switch(instType){//R I U S B J
        is(InstType.BAD){
            io.debug_o.exit   :=  inst.orR     //not nop
        }
        is(InstType.I){ //special cases: jalr, load. operands look like this: rd, imm(rs1)
            io.decInfo_o.writeOp.rf.wen    :=  Mux(io.stall_req_o, false.B, true.B)
            //val is_jalr =   opcode  === Opcode.JALR
            val is_jalr =   io.predict_i.is_branch

            io.decInfo_o.aluOp.src1   :=  Mux(is_jalr, pc,        rs1Val)
            io.decInfo_o.aluOp.src2   :=  Mux(is_jalr, 4.U(64.W), imm_I(inst))
            //if stalled, we can't tell whether the branch is true, because our result is based on old operands. Just wait and see
            io.predict_o.target  :=  rs1Val + imm_I(inst)
            io.predict_o.taken   :=  ~io.stall_req_o
            //load: uses src1 and src2 to calculate the address
            io.decInfo_o.memOp.is_load    :=  (opcode === Opcode.LOAD & ~io.stall_req_o)
            io.decInfo_o.memOp.length     :=  UIntToOH(fct3(1, 0))

            io.decInfo_o.memOp.unsigned   :=  fct3(2)     //0 to 3 unsigned, signed when fct3 >= 4

            when(is_jalr & ~io.is_stalled_i){
                nr_taken    :=  nr_taken + 1.U
                nr_branch   :=  nr_branch + 1.U
            }
            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1)
        }
        is(InstType.R){
            io.decInfo_o.aluOp.src1       :=  rs1Val
            io.decInfo_o.aluOp.src2       :=  rs2Val
            io.decInfo_o.writeOp.rf.wen   :=  Mux(io.stall_req_o, false.B, true.B)

            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1 | prev_rd === rs2)
        }
        is(InstType.B){
            //when stall happens, branch result is in fact not sure, since it's calculated based on incorrect operands
            //solution: always clear the branch signal when stall. this is done by & (~stall)
            io.decInfo_o.writeOp.rf.rd    :=  0.U
            val branch = MuxLookup(fct3, false.B, Seq(
                Fct3.BEQ     ->  (rs1Val  === rs2Val),
                Fct3.BNE     ->  (rs1Val  =/= rs2Val),
                Fct3.BLT     ->  (rs1Val.asSInt   <   rs2Val.asSInt),
                Fct3.BGE     ->  (rs1Val.asSInt   >=  rs2Val.asSInt),
                Fct3.BLTU    ->  (rs1Val   <  rs2Val),
                Fct3.BGEU    ->  (rs1Val   >= rs2Val),
            )) & ~io.stall_req_o

            io.predict_o.taken   :=  branch
            io.predict_o.target  :=  pc + imm_B(inst)
            io.stall_req_o  :=  prev_is_load & (prev_rd  === rs1 | prev_rd === rs2)

            //when(~io.stall_req_o & ~io.is_stalled_i){printf("[%x] branch target = %x\nsrc1 = %x,  src2 = %x, #%x\n", pc(31, 0), io.predict_o.target, rs1Val, rs2Val, nr_branch(9, 0))}
            when(branch){
                nr_taken    :=  nr_taken + 1.U
            }
            when(~io.is_stalled_i){
                nr_branch   :=  nr_branch + 1.U
            }
        }
        is(InstType.U){     //lui auipc, no stall
            io.decInfo_o.aluOp.src1       :=  Mux(opcode === Opcode.LUI, 0.U, pc)
            io.decInfo_o.aluOp.src2       :=  imm_U(inst)
            io.decInfo_o.writeOp.rf.wen   :=  true.B
        }
        is(InstType.J){     //jal only. rd = pc + 4, pc += imm. no stall
            io.decInfo_o.writeOp.rf.wen   :=  true.B
            io.predict_o.target  :=  pc + imm_J(inst)
            io.predict_o.taken   :=  true.B

            //link address
            io.decInfo_o.aluOp.src1       :=  pc
            io.decInfo_o.aluOp.src2       :=  4.U(64.W)

            nr_branch   :=  nr_branch + 1.U
            nr_taken    :=  nr_taken + 1.U
        }
        is(InstType.S){
            //avoid incorrect bypass(imm being interpreted as rd)
            io.decInfo_o.writeOp.rf.rd    :=  0.U
            //when stalled, clear the store bit, otherwise the incorrect address would cause bugs in MEM
            io.decInfo_o.memOp.is_store   :=  ~io.stall_req_o
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
//                        io.decInfo_o.branchOp.happen    :=  true.B
//                        io.decInfo_o.branchOp.newPC     :=  io.csrData_i.epc       // + 4 is performed by exception handler code
                        io.predict_o.target  :=  io.csrData_i.epc
                        io.predict_o.taken   :=  true.B
                    }
                    is(SYS_INST.ecall){
//                        io.decInfo_o.branchOp.happen    :=  true.B
//                        io.decInfo_o.branchOp.newPC     :=  io.csrData_i.tvec
                        io.predict_o.target  :=  io.csrData_i.tvec
                        io.predict_o.taken   :=  true.B
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

    io.nr_branch_o  :=  nr_branch
    io.nr_taken_o   :=  nr_taken

    //printf(p"src1 = ${Hexadecimal(src1)}, src2 = ${Hexadecimal(src2)}\n")
    //printf("\npc = %x, inst = %x\n",pc, inst)
    //printf("src1 = %x, src2 = %x\n\n\n", io.decInfo_o.aluOp.src1, io.decInfo_o.aluOp.src2)
}
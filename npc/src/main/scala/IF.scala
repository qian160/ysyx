import chisel3._
import chisel3.util._
import Util._
import Opcode._

    /*
    some special cases:
        1.stall/flush and branch both arrive?
            lbu     *a5*, 0(a5)
            bnez    *a5*, ...
        solution:   This is caused by branch/jump after load. In fact this is just the RAL hazard
                    when ID detacts this, just do the stall. Any branch result given at this time is unreliable

    */

    /*
        use gshare with 12 bits' index
        each predictor is a 2-bit counter, 00, 01 not taken,  10, 11 taken. So just check the high bit

        how about BTB miss?
        add a 'hit' or 'valid' signal in BTB's output port. The target in the cache is only used when *taken and hit*

        usually branch result is known in EX, but here to make life easy I move it to ID
    */

class IF extends Module{
    val io = IO(new Bundle{
        //flush is not used here...
        val ctrl_i      =   Input(new Ctrl)
//        val branchOp_i  =   Input(new BranchOp)
        val inst_i      =   Input(UInt(32.W))
        val pc_o        =   Output(UInt(64.W))
        val inst_o      =   Output(UInt(32.W))

//        val id_jump_result_i    =   Input(new Jump_result)
//        val ex_branch_result_i  =   Input(new Branch_result)
        val update_PredictorOp_i    =   Input(new Update_PredictorOp)
        val predict_result_o        =   Output(new Update_PredictorOp)
    })

    val pc  =  RegInit(CONST.PC_INIT)

    val inst    =  io.inst_i
    val opcode  = OPCODE(inst)

    // if prev_predict != prev_taken, then that previous prediction was wrong
    val prev_predict       =   io.update_PredictorOp_i.prediction       // predict branch
    val prev_taken         =   io.update_PredictorOp_i.taken            // actual branch
    val prev_is_branch     =   io.update_PredictorOp_i.is_branch        // need to do something
    val branch_target      =   io.update_PredictorOp_i.target
    val branch_or_jump_pc  =   io.update_PredictorOp_i.pc               // the pc of that b/j inst

    val predict_fail       =   prev_predict =/= prev_taken

    val correct_target  =   io.update_PredictorOp_i.target
    val btb_index   =   io.update_PredictorOp_i.btb_index
    val bpb_index   =   io.update_PredictorOp_i.bpb_index
    // Branch Predict/Target Buffer
//    val BTB         =   RegInit(VecInit(Seq.fill(1 << 12)(0.U.asTypeOf(new BTB_entry))))
//    val BPB         =   RegInit(VecInit(Seq.fill(1 << 12)(0.U(2.W))))
    val BTB =   Mem(1 << 12, (new BTB_entry))
    val BPB =   Mem(1 << 12, UInt(2.W))
    val history     =   RegInit(0.U(12.W))

    val pc_low      =   pc(11, 0)
    val hash_index  =   pc_low | history
    val valid       =   BTB(hash_index).valid & BTB(hash_index).pc === pc
    //if not valid, meaning that we don't know the target yet. So just make no prediction, and after a cycle the target will be computed and passed back

    val predict_taken  =   BPB(hash_index)(1)
    val predict_target =   BTB(hash_index).target

/*
    test:
        j test
        nop
    at first nop will be fetched, but not later
*/
    pc :=   PriorityMux(Seq(
        //(reset.asBool(),        CONST.PC_INIT),
        (io.ctrl_i.stall,       pc),
        //(io.ctrl_i.flush,       CONST.PC_INIT),
        (predict_fail,          correct_target),
        //ID branchop(jal) and ex branchop (b, jalr). branchop need to be substituted
        (predict_taken & valid, predict_target),
        (true.B,                pc + 4.U)
    ))

    io.pc_o :=  pc
    //io.inst_o   :=  inst_rom(pc >> 2)
    io.inst_o   :=  io.inst_i

    val is_jump     =   opcode === JAL | opcode === JALR
    val is_branch   =   opcode === BRANCH
    io.predict_result_o.is_branch   :=  is_branch
    io.predict_result_o.is_jump     :=  is_jump
    io.predict_result_o.pc          :=  pc
    io.predict_result_o.prediction  :=  Mux(is_jump, 1.U, predict_taken)
    io.predict_result_o.bpb_index   :=  hash_index
    // btb: use hash_index or pc_low? It seems that barget has nothing to be with global behavior...
    io.predict_result_o.btb_index   :=  pc_low
    io.predict_result_o.taken       :=  DontCare                // let ID determine this
    io.predict_result_o.target      :=  DontCare

    //in fact prev 2


    //branch
    //flush is given by ID, just check whether the prediction is right and update the date structure
    val prev_is_jump    =   io.update_PredictorOp_i.is_jump
    when(prev_is_branch){
        history :=  (history << 1.U) | prev_taken
        //printf("%x\n", history)
        BTB(btb_index).valid    :=  1.U
        BTB(btb_index).pc       :=  branch_or_jump_pc
        BTB(btb_index).target   :=  correct_target

        // 2-bit saturating counter. Jump doesn't need to update this
        BPB(bpb_index)  :=  Mux(io.update_PredictorOp_i.taken,
            //that branch was taken, and hopefully it will be taken again in the future
            Mux(BPB(bpb_index) === 3.U, BPB(bpb_index), BPB(bpb_index) + 1.U),
            //not taken
            Mux(BPB(bpb_index) === 0.U, BPB(bpb_index), BPB(bpb_index) - 1.U)
        )
    }

    when(prev_is_jump){
        BTB(btb_index).valid    :=  1.U
        BTB(btb_index).pc       :=  branch_or_jump_pc
        BTB(btb_index).target   :=  correct_target
    }
/*
    when(predict_fail)
    {
        printf("predict fail at %x. Taken should be %d\n", branch_or_jump_pc, prev_taken)
    }.elsewhen(prev_is_branch){
        printf("predict hit at %x. Taken = %d\n", branch_or_jump_pc, prev_taken)
    }
*/
    when(prev_is_branch){printf("(%x):   branch, target = %x\n", branch_or_jump_pc, branch_target)}
    when(prev_is_branch){printf("(%x):   jump,   target = %x\n", branch_or_jump_pc, branch_target)}
}

class BTB_entry extends Bundle{
    val pc      =   UInt(64.W)
    val valid   =   Bool()
    val target  =   UInt(64.W)
}

class ICache_entry extends Bundle{

}
import chisel3._
import chisel3.util._
import Util._
import Opcode._

//usually branch result is known in EX, but here to make life easy I move it to ID

    /*
    remember that predict target could be wrong! Even if btb_valid is set. Consider these simple case below:
        case1:    bnez x1, lable
            when first execuated, assuming it it not taken, and we predict taken. As a result, BTB is set to be pc + 4 rather that that target
        now it comes to a second execuation. This time it is taken, and we fetch the value from BTB. Which is not correct(pc + 4)
        solution:   update BTB only when branch is taken

        case2:  j x2
            when first execuated, BTB is not ready and we have to predict not taken. After a cycle the correct target is updated to BTB and we rejump to there. OK so far.
            But if this is execuated a second time later, and x2 is modified somewhere, we would jump to the wrong target. And since predict_taken == actual_taken, no fail would be detacted
        
        case3:  
            this is a little tricky. Sometimes we predict not taken, while in fact taken. But (btb target = branch target). So we won't catch the failure

    Based on these cases, maybe our previous strategy on telling a predict_fail only on (predict_taken =/= actual_taken) is not enough?

    New attempt:    compare both target and taken to get predict_fail

    Jump and branch should be treated the same way. THat is, our prediction is only based on BTB and BPB, not based on whether it's a branch or a jump

    */

//@chiselName
class IF extends Module{
    val io = IO(new Bundle{
        //flush is not used here...
        val ctrl_i      =   Input(new Ctrl)
//        val branchOp_i  =   Input(new BranchOp)
        val inst_i      =   Input(UInt(32.W))
        val pc_o        =   Output(UInt(64.W))
        val inst_o      =   Output(UInt(32.W))

        val update_PredictorOp_i    =   Input(new Update_PredictorOp)
        val predict_result_o        =   Output(new Update_PredictorOp)

        val success_cnt_o   =   Output(UInt(64.W))
    })

    val pc      =   RegInit(CONST.PC_INIT)
    val history =   RegInit(0.U(12.W))

    val opcode  =  OPCODE(io.inst_i)

    val prev_is_branch      =   io.update_PredictorOp_i.is_branch            // need to do something
    val prev_is_jump        =   io.update_PredictorOp_i.is_jump
    val prev_taken          =   io.update_PredictorOp_i.taken

    val branch_target       =   io.update_PredictorOp_i.target
    val branch_pc           =   io.update_PredictorOp_i.pc                   // the pc of that b/j inst

    val prev_predict_fail   =   io.update_PredictorOp_i.predict_fail

    val pc_low      =   pc(11, 0)
    val hash_index  =   pc_low | history

    val is_jump            =   opcode === JAL | opcode === JALR
    val is_branch          =   opcode === BRANCH
    
    /* when prediction fails. There are 2 cases of failures:
        1. target mismatch
        2. direction mismatch
        Both conditions need to be checked
    */
    val correct_address     =   Mux(prev_taken, branch_target, branch_pc + 4.U)
    val btb_index   =   io.update_PredictorOp_i.btb_index
    val bpb_index   =   io.update_PredictorOp_i.bpb_index
    // Branch Predict/Target Buffer
    val BTB =   Mem(1 << 12, (new BTB_entry))
    val BPB =   Mem(1 << 12, UInt(2.W))

    val btb_valid          =   BTB(hash_index).pc === pc
    val btb_target         =   BTB(hash_index).target

    // sometimes jump target is not buffered in btb yet, although we know it must be taken, we still have to predict not taken 
    // if we consist on predicting taken, in the next cycle pc may become 0, which is the value stored in btb
    val predict_taken  =   ( btb_valid & (is_branch & BPB(hash_index)(1)) | (is_jump))

    val predict_target =   BTB(hash_index).target
/*
    test:
        j test
        nop
    at first nop will be fetched, but not later
*/
//jump is implemented by inverting the prediction, making it always fails
    pc :=   PriorityMux(Seq(
        (io.ctrl_i.stall,       pc),
        (prev_predict_fail,     correct_address),
        (predict_taken,         predict_target),
        (true.B,                pc + 4.U)
    ))

    io.pc_o     :=  pc
    //io.inst_o   :=  inst_rom(pc >> 2)
    io.inst_o   :=  io.inst_i

    io.predict_result_o.is_branch   :=  is_branch
    io.predict_result_o.is_jump     :=  is_jump
    io.predict_result_o.pc          :=  pc
    io.predict_result_o.bpb_index   :=  hash_index
    // btb: use hash_index or pc_low? It seems that barget has nothing to be with global behavior...
    io.predict_result_o.btb_index   :=  hash_index
    io.predict_result_o.target      :=  DontCare
    io.predict_result_o.taken       :=  DontCare
    io.predict_result_o.predict_target  :=  predict_target
    io.predict_result_o.predict_fail    :=  DontCare
    io.predict_result_o.predict_taken   :=  predict_taken

    //in fact prev 2


    // branch
    // flush is given by ID, just check whether the prediction is right and update the date structure
    // BTB should never buffer pc + 4(the not taken case)!!!!!
    // because BTB is used when branch/jump happens. If the value inside is the not taken case, then BTB doesn't turn out to be useful
    when(prev_is_branch & ~io.ctrl_i.stall){
        history :=  (history << 1.U) | prev_taken
        //if not taken, then correct_address = pc + 4. Things could go wrong when trying to use this value as a branch target next time
        //pc + 4 is only useful as a recovery value when we predict taken, but in fact not. Not useful in providing a predict target
        BTB(btb_index)  :=  Cat(branch_pc, branch_target).asTypeOf(new BTB_entry)
        // 2-bit saturating counter. Jump doesn't need to update this
        BPB(bpb_index)  :=  Mux(prev_taken,
            //that branch was taken, and hopefully it will be taken again in the future
            Mux(BPB(bpb_index) === 3.U, BPB(bpb_index), BPB(bpb_index) + 1.U),
            //not taken
            Mux(BPB(bpb_index) === 0.U, BPB(bpb_index), BPB(bpb_index) - 1.U)
        )
    }

    when(prev_is_jump & ~io.ctrl_i.stall){
        BTB(btb_index)  :=  Cat(branch_pc, branch_target).asTypeOf(new BTB_entry)
    }

    val success_cnt =   RegInit(0.U(64.W))
    when(~prev_predict_fail & prev_is_branch & ~io.ctrl_i.stall){
        success_cnt := success_cnt + 1.U
    }
    io.success_cnt_o    :=  success_cnt
/*
    when(prev_predict_fail & ~io.ctrl_i.stall)
    {
        printf("predict fail at %x. Taken should be %d\n", branch_pc, prev_taken)
    }
*/
    //when(prev_is_branch & ~io.ctrl_i.stall){printf("(%x):   branch, target = %x\n", branch_pc(31, 0), branch_target)}
    //when(prev_is_jump   & ~io.ctrl_i.stall){printf("(%x):   jump,   target = %x\n", branch_pc(31, 0), branch_target)}
}

class BTB_entry extends Bundle{
    val pc      =   UInt(64.W)
    val target  =   UInt(64.W)
}

class ICache_entry extends Bundle{
    //todo
}
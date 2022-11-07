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

        usually branch result is known in EX, but here to make life easy I move it to ID
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

    // if prev_predict != prev_taken, then that previous prediction was wrong
    val prev_predict       =   io.update_PredictorOp_i.prediction       // predict branch
    val prev_taken         =   io.update_PredictorOp_i.taken            // actual branch
    val prev_is_branch     =   io.update_PredictorOp_i.is_branch        // need to do something
    val prev_is_jump       =   io.update_PredictorOp_i.is_jump

    val branch_target      =   io.update_PredictorOp_i.target
    val branch_pc          =   io.update_PredictorOp_i.pc               // the pc of that b/j inst

    val prev_predict_fail  =   prev_predict =/= prev_taken

    val pc_low      =   pc(11, 0)
    val hash_index  =   pc_low | history

    val is_jump            =   opcode === JAL | opcode === JALR
    val is_branch          =   opcode === BRANCH
    
    // when prediction fails. There are 2 cases of failure
    val correct_target     =   Mux(prev_taken, branch_target, branch_pc + 4.U)
    val btb_index   =   io.update_PredictorOp_i.btb_index
    val bpb_index   =   io.update_PredictorOp_i.bpb_index
    // Branch Predict/Target Buffer
//    val BTB         =   RegInit(VecInit(Seq.fill(1 << 12)(0.U.asTypeOf(new BTB_entry))))
//    val BPB         =   RegInit(VecInit(Seq.fill(1 << 12)(0.U(2.W))))
    val BTB =   Mem(1 << 12, (new BTB_entry))
    val BPB =   Mem(1 << 12, UInt(2.W))

    val btb_valid          =   BTB(hash_index).valid & BTB(hash_index).pc === pc
    val btb_target         =   BTB(hash_index).target

    //sometimes jump target is not buffered in btb yet, although we know it must be taken, we still have to predict not taken. 
    //ID will then set taken = 1 and this makes prediction fail. So IF could update pc to jump target in the next cycle
    val predict_taken  =   (is_branch & BPB(hash_index)(1) & btb_valid) | (is_jump & btb_valid)
    /*
        this target could be wrong! So it need to be checked in ID. Just consider the simple case below:
            bnez x1, lable
        when first execuated, assuming it it not taken, and we predict taken. As a result, BTB is set to be pc + 4 rather that that target
        now it comes to a second execuation. This time it is taken, and we fetch the value from BTB 
    */
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
        (prev_predict_fail,     correct_target),
        (predict_taken,         predict_target),
        (true.B,                pc + 4.U)
    ))

    io.pc_o     :=  pc
    //io.inst_o   :=  inst_rom(pc >> 2)
    io.inst_o   :=  io.inst_i

    io.predict_result_o.is_branch   :=  is_branch
    io.predict_result_o.is_jump     :=  is_jump
    io.predict_result_o.pc          :=  pc
    io.predict_result_o.prediction  :=  predict_taken           // ID will set taken = 1, this makes prediction fail, thus next PC will become the variable 'correct_target'
    io.predict_result_o.bpb_index   :=  hash_index
    // btb: use hash_index or pc_low? It seems that barget has nothing to be with global behavior...
    io.predict_result_o.btb_index   :=  hash_index
    io.predict_result_o.taken       :=  DontCare                // let ID determine this
    io.predict_result_o.target      :=  DontCare
    io.predict_result_o.predict_target  :=  predict_target

    //in fact prev 2


    //branch
    //flush is given by ID, just check whether the prediction is right and update the date structure
    when(prev_is_branch & ~io.ctrl_i.stall){
        history :=  (history << 1.U) | prev_taken
        //if not taken, then correct_target = pc + 4. Things could go wrong when trying to use this value as a branch target next time
        //pc + 4 is only useful as a recovery value when we predict taken, but in fact not. Not useful in providing a predict target
        BTB(btb_index).valid    :=  prev_taken
        BTB(btb_index).pc       :=  branch_pc
        BTB(btb_index).target   :=  correct_target

        // 2-bit saturating counter. Jump doesn't need to update this
        BPB(bpb_index)  :=  Mux(prev_taken,
            //that branch was taken, and hopefully it will be taken again in the future
            Mux(BPB(bpb_index) === 3.U, BPB(bpb_index), BPB(bpb_index) + 1.U),
            //not taken
            Mux(BPB(bpb_index) === 0.U, BPB(bpb_index), BPB(bpb_index) - 1.U)
        )
    }

    when(prev_is_jump & ~io.ctrl_i.stall){
        BTB(btb_index).valid    :=  1.U
        BTB(btb_index).pc       :=  branch_pc
        BTB(btb_index).target   :=  correct_target
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
    // when(prev_is_branch & ~io.ctrl_i.stall){printf("(%x):   branch, target = %x, %d\n", branch_pc, branch_target, prev_taken)}
    // when(prev_is_jump   & ~io.ctrl_i.stall){printf("(%x):   jump,   target = %x, %d\n", branch_pc, branch_target, prev_taken)}
}

class BTB_entry extends Bundle{
    val pc      =   UInt(64.W)
    val valid   =   Bool()
    val target  =   UInt(64.W)
}

class ICache_entry extends Bundle{

}
import chisel3._
import chisel3.util._
import Util._
import Opcode._

//usually branch result is known in EX, but here to make life easy I move it to ID

/*
    an overview on branch prediction:
        1. calculate the index here using low bits of pc and histroy
        2. fetch the predicted target and direction in BTB and BPB using that index
        3. check if (btb.pc = pc). If not then that target should not be used by current inst
        4. otherwise we treat that btb.target as our branch target(although it could be wrong). And bpb will decide the direction
        5. in ID, we check the correctness of our previous prediction by comparing both direction and target. And send back newly calculated target to IF.
            If any of them failed, flush the data in IF/ID(the incorrectly fetched inst)
        6. IF checks the previous prediction. And use the newly calculated target from ID to update btb.

    notes:  jump could be predicted not taken. Why? This is caused by btb miss, we can't give out a correct target under this situation.
                So it makes no difference whichever direction we predict(since a fail will always happen), and thus we could treat jump the branch way. This reduces some code
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

        val predict_i   =   Input(new PredictOp)
        val predict_o   =   Output(new PredictOp)

        val success_cnt_o   =   Output(UInt(64.W))
    })

    val pc      =   RegInit(CONST.PC_INIT)
    val history =   RegInit(0.U(12.W))

    val opcode  =   OPCODE(io.inst_i)
    // 2-way set associated cahce
    // total size of ICache = 8KB, 4KB per set. Block size = 32b(to fit inst size)
    val ICache_Way1  =   Mem(1 << 8, new ICache_Set)
    val ICache_Way2  =   Mem(1 << 8, new ICache_Set)

    //val ICache_metadata_Way1    =
    //val ICache_metadata_Way2    =

    val prev_is_branch      =   io.predict_i.is_branch            // need to do something
    val prev_taken          =   io.predict_i.taken

    val branch_target       =   io.predict_i.target
    val branch_pc           =   io.predict_i.pc                   // the pc of that b/j inst

    val prev_predict_fail   =   io.predict_i.predict_fail

    val pc_low      =   pc(11, 0)
    val bp_index    =   pc_low | history
    // treat jump and branch the same way
    val is_branch   =   opcode === BRANCH | opcode === JAL | opcode === JALR
    
    val correct_address     =   Mux(prev_taken, branch_target, branch_pc + 4.U)
    val prev_bp_index       =   io.predict_i.index
    // Branch Predict/Target Buffer
    val BTB =   Mem(1 << 12, new BTB_entry)
    val BPB =   Mem(1 << 12, UInt(2.W))

    val btb_valid          =   BTB(bp_index).pc === pc
    val btb_target         =   BTB(bp_index).target

    val predict_taken  =   (btb_valid & (is_branch & BPB(bp_index)(1)))
    val predict_target =   BTB(bp_index).target
//---------------------------------------------------------
    pc :=   PriorityMux(Seq(
        (io.ctrl_i.stall,       pc),
        (prev_predict_fail,     correct_address),
        (predict_taken,         predict_target),
        (true.B,                pc + 4.U)
    ))
//---------------------------------------------------------
    io.pc_o     :=  pc
    io.inst_o   :=  io.inst_i

    io.predict_o.is_branch   :=  is_branch
    io.predict_o.pc          :=  pc
    // btb: use btb_index or pc_low? It seems that barget has nothing to be with global behavior...
    io.predict_o.index       :=  bp_index
    io.predict_o.target      :=  DontCare
    io.predict_o.taken       :=  DontCare
    io.predict_o.predict_target  :=  predict_target
    io.predict_o.predict_fail    :=  DontCare
    io.predict_o.predict_taken   :=  predict_taken

    // flush is given by ID, here just check whether the prediction is right and update the some states
    // BTB should never buffer pc + 4(the not taken case)!!!!!
    // because BTB is used when branch/jump happens. If the value inside is the not taken case, then BTB doesn't turn out to be useful
    when(prev_is_branch & ~io.ctrl_i.stall){
        history :=  (history << 1.U) | prev_taken
        BTB(prev_bp_index)  :=  Cat(branch_pc, branch_target).asTypeOf(new BTB_entry)
        // 2-bit saturating counter
        BPB(prev_bp_index)  :=  Mux(prev_taken,
            Mux(BPB(prev_bp_index) === 3.U, BPB(prev_bp_index), BPB(prev_bp_index) + 1.U),
            Mux(BPB(prev_bp_index) === 0.U, BPB(prev_bp_index), BPB(prev_bp_index) - 1.U)
        )
    }

    val success_cnt =   RegInit(0.U(64.W))
    when(~prev_predict_fail & prev_is_branch & ~io.ctrl_i.stall){
        success_cnt := success_cnt + 1.U
    }
    io.success_cnt_o    :=  success_cnt

    //when(prev_is_branch & ~io.ctrl_i.stall){printf("(%x):   branch, target = %x\n", branch_pc(31, 0), branch_target)}
    //when(prev_is_jump   & ~io.ctrl_i.stall){printf("(%x):   jump,   target = %x\n", branch_pc(31, 0), branch_target)}
}

class BTB_entry extends Bundle{
    //32 BIT IS ENOUGH?
    val pc      =   UInt(64.W)
    val target  =   UInt(64.W)
}

class ICache_Set extends Bundle{
    // one row
    // 32-bit pc = 2 offset + 8 line number + 22 tag
    // #lines = 2 ^ 8 = 256, block size = 4B, each line contains 2 ^ 2 = 4 blocks, so 16B per line
    val valid   =   Bool()
    val tag     =   UInt(22.W)
    val insts   =   Vec(4, UInt(32.W))
    val used    =   Bool()      //lru replacement
}
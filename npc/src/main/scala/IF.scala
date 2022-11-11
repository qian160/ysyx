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
        val inst_i      =   Input(UInt(32.W))       //from main memory
        val pc_o        =   Output(UInt(64.W))
        val inst_o      =   Output(UInt(32.W))

        val predict_i   =   Input(new PredictOp)
        val predict_o   =   Output(new PredictOp)

        val icache_insert_i =   Input(new ICacheInsertInfo)
        val icache_miss_o   =   Output(new ICacheMissInfo)

        val success_cnt_o   =   Output(UInt(64.W))
        val nr_icache_hit_o =   Output(UInt(64.W))
    })

    val inst    =   Wire(UInt(32.W))
    val pc      =   RegInit(CONST.PC_INIT)
    val history =   RegInit(0.U(12.W))

    val opcode  =   OPCODE(inst)

    val prev_is_branch      =   io.predict_i.is_branch            // need to do something
    val prev_taken          =   io.predict_i.taken

    val branch_target       =   io.predict_i.target
    val branch_pc           =   io.predict_i.pc                   // the pc of that b/j inst

    val prev_predict_fail   =   io.predict_i.predict_fail

    val pc_low      =   pc(11, 0)
    val bp_index    =   pc_low | history
    // treat jump and branch the same way. But for statistics reason we need to divide them
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
    io.inst_o   :=  inst

    // branch predict
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

    // 2-way set associated cahce
    // total size of ICache = 8KB, 4KB per set. Block size = 32b(to fit inst size)
    // we could also split the cache's metadata and data and store them individually
    val ICache_Way1  =   Mem(1 << 8, new ICache_Set)
    val ICache_Way2  =   Mem(1 << 8, new ICache_Set)
    val tag             =   pc(31, 10)
    val cache_index     =   pc(9, 2)
    val block_offset    =   (pc >> 2.U)(1, 0)

    val set1    =   ICache_Way1(cache_index)
    val set2    =   ICache_Way2(cache_index)
    val block1  =   set1.insts
    val block2  =   set2.insts
    val valid1  =   ICache_Way1(cache_index).valid
    val valid2  =   ICache_Way2(cache_index).valid
    val hit1    =   tag === set1.tag & valid1
    val hit2    =   tag === set2.tag & valid2
    val hit     =   hit1 | hit2
    val miss    =   ~hit

    val which_block =   PriorityMux(Seq(
        (hit1,      block1),
        (hit2,      block2),
        (true.B,    0.U.asTypeOf(Vec(4, UInt(32.W)))),
    ))
    val inst_from_cache =   which_block(block_offset)

    io.icache_miss_o.miss    :=  miss
    io.icache_miss_o.pc      :=  pc
    io.icache_miss_o.index   :=  cache_index

    inst    :=  Mux(miss, io.inst_i, inst_from_cache)
    val insert_insts    =   io.icache_insert_i.insts.asUInt
    val insert_tag      =   io.icache_insert_i.tag
    val insert_index    =   io.icache_insert_i.index

    val set_val         =   Cat(1.U, insert_tag, insert_insts, 1.U)
    val insert_set      =   set_val.asTypeOf(new ICache_Set)

    val set1_valid      =   ICache_Way1(insert_index).valid
    val set2_valid      =   ICache_Way2(insert_index).valid

    val set1_used       =   ICache_Way1(insert_index).used
    val set2_used       =   ICache_Way2(insert_index).used
    /*
        1. if existS non-valid set, insert to that position first
        2. otherwise, consult LRU
    */
    when(io.icache_insert_i.valid){
        when(~set1_valid){
            ICache_Way1(insert_index)       :=  insert_set
            ICache_Way2(insert_index).used  :=  0.U
        }.elsewhen(~set2_valid){
            ICache_Way2(insert_index)       :=  insert_set
            ICache_Way1(insert_index).used  :=  0.U
        }.otherwise{
            when(~set1_used){
                ICache_Way1(insert_index)       :=  insert_set
                ICache_Way2(insert_index).used  :=  0.U
            }.otherwise{
                ICache_Way2(insert_index)       :=  insert_set
                ICache_Way1(insert_index).used  :=  0.U
            }
        }
    }

    val success_cnt =   RegInit(0.U(64.W))
    when(~prev_predict_fail & prev_is_branch & ~io.ctrl_i.stall){
        success_cnt := success_cnt + 1.U
    }
    io.success_cnt_o    :=  success_cnt

    val icache_hit_cnt  =   RegInit(0.U(64.W))
    when(hit & ~io.ctrl_i.stall){
        icache_hit_cnt  :=  icache_hit_cnt + 1.U
    }
    io.nr_icache_hit_o  :=  icache_hit_cnt

    //when(prev_is_branch & ~io.ctrl_i.stall){printf("(%x):   branch, target = %x\n", branch_pc(31, 0), branch_target)}
    //when(prev_is_jump   & ~io.ctrl_i.stall){printf("(%x):   jump,   target = %x\n", branch_pc(31, 0), branch_target)}
}

class BTB_entry extends Bundle{
    //32 BIT IS ENOUGH?
    //val valid   =   Bool()
    val pc      =   UInt(64.W)
    val target  =   UInt(64.W)
}

class ICache_Set extends Bundle{
    // one row in a set
    // 32-bit pc = 2 offset + 8 index + 22 tag
    // #lines = 2 ^ 8 = 256, block size = 4B, each line contains 2 ^ 2 = 4 blocks, so 16B per line
    val valid   =   Bool()
    val tag     =   UInt(22.W)
    val insts   =   Vec(4, UInt(32.W))
    val used    =   Bool()      //lru replacement
}

class ICacheMissInfo extends Bundle{
    val miss    =   Bool()
    val index   =   UInt(8.W)
    val pc      =   UInt(64.W)
}

class ICacheInsertInfo extends Bundle{
    val valid   =   Bool()
    val insts   =   Vec(4, UInt(32.W))
    val index   =   UInt(8.W)
    val tag     =   UInt(22.W)
}
import chisel3._
import chisel3.util._
import Util._
import Opcode._

class IF extends Module{
    def is_branch(inst: UInt) = {
        //jump don't need to predict
        OPCODE(inst) === BRANCH
    }
    val io = IO(new Bundle{
        val ctrl_i      =   Input(new Ctrl)
        val branchOp_i  =   Input(new BranchOp)
        val inst_i      =   Input(UInt(32.W))
        val pc_o        =   Output(UInt(64.W))
        val inst_o      =   Output(UInt(32.W))
    })

    val pc  =  RegInit(CONST.PC_INIT)

    /*
    (flush is not used here though...)
    some special cases:
        1.stall/flush and branch both arrive
            lbu     *a5*, 0(a5)
            bnez    *a5*, ...
        solution:   This is caused by branch/jump after load. Here stall is the most important signal because the other 2 signals
                    are given based on incorrect operands and thus make the result unreliable
                    So we just take stall as valid. As for the other 2 signals, just wait and see in the next cycle

    */

//--------------------------------------------------------------
    /*
        use gshare with 12 bits' index
        each predictor is a 2-bit counter, 00, 01 not taken,  10, 11 taken. So just check the high bit

        how about BTB miss?
        add a 'hit' signal in BTB's output port. The target in the cache is only used when *taken and hit*
    */
    val BTB = RegInit(VecInit(Seq.fill(1 << 12)(0.U.asTypeOf(new BTB_entry))))
    val local_index =   pc(11, 0)
    val history     =   RegInit(0.U(12.W))
    val which_prd   =   local_index | history
    val predictor   =   RegInit(VecInit(Seq.fill(1 << 12)(0.U(2.W))))
    val valid       =   BTB(which_prd).valid
    //history makes an influence on the prediction now
    val prediction  =   predictor(which_prd)(1)

    pc :=   PriorityMux(Seq(
        //(reset.asBool(),        CONST.PC_INIT),
        (io.ctrl_i.stall,       pc),
        //(io.ctrl_i.flush,       CONST.PC_INIT),
        (io.branchOp_i.happen,  io.branchOp_i.newPC),
        (prediction & valid,    BTB(which_prd).target),
        (true.B,                pc + 4.U)
    ))


    io.pc_o :=  pc
    //io.inst_o   :=  inst_rom(pc >> 2)
    io.inst_o   :=  io.inst_i
}

class BTB_entry extends Bundle{
    val pc      =   UInt(64.W)
    val valid   =   Bool()
    val target  =   UInt(64.W)
}
import chisel3._
import chisel3.util._

class IF_ID extends Module {
    val io = IO(new Bundle {
        val ctrl_i          =   Input(new Ctrl)
        val inst_i          =   Input(UInt(32.W))
        val pc_i            =   Input(UInt(64.W))

        val inst_o          =   Output(UInt(32.W))
        val pc_o            =   Output(UInt(64.W))
        val id_is_stalled_o =   Output(Bool())

        val predict_i       =   Input(new PredictOp)
        val predict_o       =   Output(new PredictOp)
    })

    val pc      =   RegNext(io.pc_i,            CONST.PC_INIT)
    val inst    =   RegNext(io.inst_i,          CONST.NOP)
    val predict =   RegNext(io.predict_i,       0.U.asTypeOf(new PredictOp))
    val stall   =   RegNext(io.ctrl_i.stall,    false.B)
    //flush has high priority
    when(io.ctrl_i.flush){
        pc      :=  CONST.PC_INIT
        inst    :=  CONST.NOP
        predict :=  0.U.asTypeOf(new PredictOp)
        stall   :=  false.B
    }.elsewhen(io.ctrl_i.stall){
        pc      :=  pc
        inst    :=  inst
        predict :=  predict
    }

    io.inst_o       :=  inst
    io.pc_o         :=  pc
    io.predict_o    :=  predict
    io.id_is_stalled_o  :=  stall
}

class ID_EX extends Module {
    val io = IO(new Bundle {
        val ctrl_i      =   Input(new Ctrl)
        val decInfo_i   =   Input(new DecodeInfo)
        val debug_i     =   Input(new Debug_Bundle)
        val ex_is_stalled_o =   Output(Bool())

        val decInfo_o   =   Output(new DecodeInfo)
        val debug_o     =   Output(new Debug_Bundle)

//        val update_PredictorOp_i    =   Input(new PredictOP)
//        val update_PredictorOp_o    =   Output(new PredictOP)
    })
    val decInfo =   RegNext(io.decInfo_i, 0.U.asTypeOf(new DecodeInfo))
    val debug   =   RegNext(io.debug_i, 0.U.asTypeOf(new Debug_Bundle))
    val stall   =   RegNext(io.ctrl_i.stall, false.B)

//    val update_PredictorOp  =   RegNext(io.update_PredictorOp_i, 0.U.asTypeOf(new PredictOP))

    when(io.ctrl_i.flush){
        decInfo :=  0.U.asTypeOf(new DecodeInfo)
        debug   :=  0.U.asTypeOf(new Debug_Bundle)
        stall   :=  0.U

    }.elsewhen(io.ctrl_i.stall){
        decInfo :=  decInfo
        debug   :=  debug
    }

    io.decInfo_o        :=  decInfo
    io.debug_o          :=  debug
    io.ex_is_stalled_o  :=  stall

//    io.update_PredictorOp_o :=  update_PredictorOp
}

class EX_MEM extends Module {
    val io = IO(new Bundle {
        val ctrl_i      =   Input(new Ctrl)
        val writeOp_i   =   Input(new WriteOp)
        val memOp_i     =   Input(new MemOp)
        val debug_i     =   Input(new Debug_Bundle)

        val writeOp_o   =   Output(new WriteOp)
        val memOp_o     =   Output(new MemOp)
        val debug_o     =   Output(new Debug_Bundle)
        val mem_is_stalled_o    =   Output(Bool())
    })

    val writeOp =   RegNext(io.writeOp_i, 0.U.asTypeOf(new WriteOp))
    val memOp   =   RegNext(io.memOp_i, 0.U.asTypeOf(new MemOp))
    val debug   =   RegNext(io.debug_i, 0.U.asTypeOf(new Debug_Bundle))
    val stall   =   RegNext(io.ctrl_i.stall, false.B)

    when(io.ctrl_i.flush){
        writeOp :=  0.U.asTypeOf(new WriteOp)
        memOp   :=  0.U.asTypeOf(new MemOp)
        debug   :=  0.U.asTypeOf(new Debug_Bundle)
        stall   :=  false.B
    }.elsewhen(io.ctrl_i.stall){
        writeOp :=  writeOp
        memOp   :=  memOp
        debug   :=  debug
    }

    io.writeOp_o    :=  writeOp
    io.memOp_o      :=  memOp
    io.debug_o      :=  debug
    io.mem_is_stalled_o :=  stall
}

class MEM_WB extends Module {
    val io = IO(new Bundle {
        val stall_mem_i =   Input(Bool())       // load stall, wdata is not ready
        val ctrl_i      =   Input(new Ctrl)
        val writeOp_i   =   Input(new WriteOp)
        val debug_i     =   Input(new Debug_Bundle)
        val debug_o     =   Output(new Debug_Bundle)
        val writeOp_o   =   Output(new WriteOp)
    })

    val writeOp =   RegNext(io.writeOp_i, 0.U.asTypeOf(new WriteOp))
    val debug   =   RegNext(io.debug_i, 0.U.asTypeOf(new Debug_Bundle))
    when(io.ctrl_i.flush){
        writeOp :=  0.U.asTypeOf(new WriteOp)
        debug   :=  0.U.asTypeOf(new Debug_Bundle)
//    }.elsewhen(io.ctrl_i.stall | io.stall_mem_i){
    }.elsewhen(io.ctrl_i.stall){
        writeOp :=  writeOp
        debug   :=  debug
    }

    io.writeOp_o    :=  writeOp
    io.debug_o      :=  debug
}
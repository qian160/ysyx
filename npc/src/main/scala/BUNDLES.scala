import chisel3._

class ReadOp extends Bundle{
    val rs1 = UInt(5.W)
    val rs2 = UInt(5.W)
    val csrAddr =   UInt(12.W)
}

class WriteRfOp extends Bundle{
    val wen     = Bool()
    val rd      = UInt(5.W)
    val wdata   = UInt(64.W)
}

class WriteCSROp extends Bundle {
    val wen     = Bool()
    val wdata   = UInt(64.W)
    val waddr   = UInt(12.W)
}

class WriteOp extends Bundle {
    val rf  =   new WriteRfOp
    val csr =   new WriteCSROp
}

class RegSource extends Bundle{
    val rs1Val = UInt(64.W)
    val rs2Val = UInt(64.W)
    
    val a0     = UInt(64.W) //debug use
    //val gpr    = Vec(32, UInt(64.W))
}

class CsrData extends Bundle {
    val csrVal  =   UInt(64.W)
    val epc     =   UInt(64.W)
    val tvec    =   UInt(64.W)
    val cause   =   UInt(64.W)
    val status  =   UInt(64.W)
}

class AluOp extends Bundle{
    val src1    =   UInt(64.W)
    val src2    =   UInt(64.W)
    val opt     =   UInt(5.W)
}

class DecodeInfo extends Bundle{
    val instType    = UInt(5.W)
    val writeOp     = new WriteOp
    val aluOp       = new AluOp
    //val branchOp    = new BranchOp
    val memOp       = new MemOp
}

class BranchOp extends Bundle{
    val happen  =   Bool()
    val newPC   =   UInt(64.W)
}

class MemOp extends Bundle{
    val is_load     =   Bool()
    val is_store    =   Bool()
    val unsigned    =   Bool()
    val length      =   UInt(4.W)   //1 2 4 8,  loadOp = Cat(sign, length)
    val addr        =   UInt(64.W)
    val sdata       =   UInt(64.W)
    //val sel         =   UInt(8.W)   //byte selection
}

class Debug_Bundle extends Bundle{
    val exit    =   Bool()
    val a0      =   UInt(64.W)
    val pc      =   UInt(64.W)
    val inst    =   UInt(32.W)
    //val gpr     =   Vec(32, UInt(64.W))
}

class Rf_Forward_info extends Bundle{
    val rd      =   UInt(5.W)
    val wdata   =   UInt(64.W)
}

class CSR_Forward_info extends Bundle{
    val addr    =   UInt(12.W)
    val wdata   =   UInt(64.W)
}

class Rf_Forward extends Bundle{
    val ex  = new Rf_Forward_info
    val mem = new Rf_Forward_info
    val wb  = new Rf_Forward_info
}

class Forward_Info extends Bundle{
    val csr =   new CSR_Forward_info
    val rf  =   new Rf_Forward_info
}

class Forward extends Bundle{
    val ex  =   new Forward_Info
    val mem =   new Forward_Info
    val wb  =   new Forward_Info

    val prev_rd =   UInt(5.W)
    val prev_is_load    = Bool()
}

class Ctrl extends Bundle{
    val stall   =   Bool()
    val flush   =   Bool()
}

class Update_PredictorOp extends Bundle{
    val is_jump     =   Bool()
    val is_branch   =   Bool()
    val prediction  =   Bool()
    val taken       =   Bool()
    val pc          =   UInt(64.W)
    val btb_index   =   UInt(12.W)
    val bpb_index   =   UInt(12.W)
    val target      =   UInt(64.W)
}
//subset of Update_PredictorOp
class Jump_result extends Bundle{
    val is_jump =   Bool()
    val target  =   UInt(64.W)
    val pc      =   UInt(64.W)
    val btb_index   =   UInt(12.W)
}

class Branch_result extends Bundle{
    val is_branch   =   Bool()
    val prediction  =   Bool()
    val bpb_index   =   UInt(12.W)
    val pc          =   UInt(64.W)
    val target      =   UInt(64.W)
    val taken       =   UInt(64.W)
}
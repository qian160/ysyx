import chisel3._

class ReadRfOp extends Bundle{
    val rs1 = UInt(5.W)
    val rs2 = UInt(5.W)
}

class WriteRfOp extends Bundle{
    val wen     = Bool()
    val rd      = UInt(5.W)
    val wdata   = UInt(64.W)
}

class ReadRes extends Bundle{
    val rs1Val = UInt(64.W)
    val rs2Val = UInt(64.W)

    val a0     = UInt(64.W) //debug use
}

class AluOp extends Bundle{
    val src1    =   UInt(64.W)
    val src2    =   UInt(64.W)
    val opt     =   UInt(5.W)
}

class DecodeInfo extends Bundle{
    val instType    = UInt(5.W)
    val writeRfOp   = new WriteRfOp
    val aluOp       = new AluOp
    val branchOp    = new BranchOp
    val memOp       = new MemOp
}

class Debug extends Bundle{
    val exit    =   Bool()
    val a0      =   UInt(64.W)
    val pc      =   UInt(64.W)
    val inst    =   UInt(32.W)
}

class BranchOp extends Bundle{
    val happen  =   Bool()
    val newPC   =   UInt(64.W)
}

class MemOp extends Bundle{
    val isLoad  =   Bool()
    val isStore =   Bool()
    val sign    =   Bool()
    val length  =   UInt(2.W)   //1 2 4 8
}
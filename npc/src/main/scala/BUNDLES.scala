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
    val branchOp    = new BranchOp
    val memOp       = new MemOp
}

class BranchOp extends Bundle{
    val happen  =   Bool()
    val newPC   =   UInt(64.W)
}

class MemOp extends Bundle{
    val isLoad      =   Bool()
    val isStore     =   Bool()
    val unsigned    =   Bool()
    val length      =   UInt(2.W)   //1 2 4 8,  loadOp = Cat(sign, length)
    val addr        =   UInt(64.W)
    val sdata       =   UInt(64.W)
    val sel         =   UInt(8.W)   //byte selection
}

class Debug_Bundle extends Bundle{
    val exit    =   Bool()
    val a0      =   UInt(64.W)
    val pc      =   UInt(64.W)
    val inst    =   UInt(32.W)
    //val gpr     =   Vec(32, UInt(64.W))
}
import chisel3._

class readRfOp extends Bundle{
    val rs1 = UInt(5.W)
    val rs2 = UInt(5.W)
}

class writeRfOp extends Bundle{
    val wen     = Bool()
    val rd      = UInt(5.W)
    val wdata   = UInt(64.W)
}

class readRes extends Bundle{
    val rs1Val = UInt(64.W)
    val rs2Val = UInt(64.W)
}

class decInfo extends Bundle{
    val rd          = UInt(5.W)
    val src1        = UInt(64.W)    //ALU operands
    val src2        = UInt(64.W)
    val wen         = UInt(5.W)
    val aluop       = UInt(5.W)
    val instType    = UInt(4.W)
}
import chisel3._
import chisel3.util._

object CONST{
    val PC_INIT = "h80000000".U
    val EBREAK  = "h100073".U(32.W)
    val M_SIZE  = 0x8000000

    val IMG_FILE    = "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img_file"
    val PMEM_START  = "h80000000".U
    val PMEM_END    = "h87ffffff".U
    val NOP         = "h00000013".U(32.W)
}

object CacheAddrField{
    def TAG(addr: UInt) = addr(31, 12)
    def INDEX(addr: UInt) = addr(11, 4)
    def BYTE_OFFSET(addr: UInt) = addr(3, 0)
    def BLOCK_OFFSET(addr: UInt) = addr(3, 2)

    val OFF_LEN     =   4.W
    val INDEX_LEN   =   8.W
    val TAG_LEN     =   20.W
    val BLOCK_SIZE  =   32.W
    val BLOCK_NUM   =   4.W
}

object Fct3 {
    val LB  = 0.U(3.W)        //byte
    val LH  = 1.U(3.W)        //half word
    val LW  = 2.U(3.W)        //word
    val LD  = 3.U(3.W)        //double word

    val LBU = 4.U(3.W)
    val LHU = 5.U(3.W)
    val LWU = 6.U(3.W)

    val BEQ     =   0.U(3.W)
    val BNE     =   1.U(3.W)
    val BLT     =   4.U(3.W)
    val BGE     =   5.U(3.W)
    val BLTU    =   6.U(3.W)
    val BGEU    =   7.U(3.W)
}

object InstType{
    val R   = 0.U(5.W)
    val I   = 1.U(5.W)
    val U   = 2.U(5.W)
    val B   = 3.U(5.W)
    val J   = 4.U(5.W)
    val S   = 5.U(5.W)
    val SYS = 6.U(5.W)
    val BAD = 7.U(5.W)
}

object AluOPT {
    //let Alu know what to do
    val ADD  = 0.U(5.W) //default op
    val SUB  = 1.U(5.W)
    val SLT  = 2.U(5.W)
    val SLTU = 3.U(5.W)
    val XOR  = 4.U(5.W)
    val OR   = 5.U(5.W)
    val AND  = 6.U(5.W)
    val SLL  = 7.U(5.W)
    val SRL  = 8.U(5.W)
    val SRA  = 9.U(5.W)

    val JALR = 10.U(5.W)

    val MUL    = 11.U(5.W)
    val MULH   = 12.U(5.W)
    val MULU   = 13.U(5.W)
    val MULHSU = 14.U(5.W)
    val MULHU  = 15.U(5.W)
    //alu don't do division, but EX needs this information to stall so we just encode it here and pass 
    val DIV    = 16.U(5.W)
    val REM    = 17.U(5.W)
    val DIVU   = 18.U(5.W)
    val REMU   = 19.U(5.W)

    val REMW   = 20.U(5.W)
    val DIVW   = 21.U(5.W)
    val DIVUW  = 22.U(5.W)
    val REMUW  = 23.U(5.W)

    //RV64
    val MULW = 24.U(5.W)
    val ADDW = 25.U(5.W)
    val SUBW = 26.U(5.W)
    val SLLW = 27.U(5.W)
    val SRLW = 28.U(5.W)
    val SRAW = 29.U(5.W)

    val LUI     = 30.U(5.W)
    val AUIPC   = 31.U(5.W)

    //not alu's job, funct3
    //used in ID to specify a inst
    val BEQ  = 0.U(3.W)
    val BNE  = 1.U(3.W)
    val BLT  = 4.U(3.W)
    val BGE  = 5.U(3.W)
    val BLTU = 6.U(3.W)
    val BGEU = 7.U(3.W)

    val LB   = 0.U(3.W)
    val LH   = 1.U(3.W)
    val LW   = 2.U(3.W)
    val LD   = 3.U(3.W)
    val LBU  = 4.U(3.W)
    val LHU  = 5.U(3.W)
    val LWU  = 6.U(3.W)

    val SB   = 0.U(3.W)
    val SH   = 1.U(3.W)
    val SW   = 2.U(3.W)
    val SD   = 3.U(3.W)
}

object Opcode {
    val JAL     =   "b1101111".U
    val JALR    =   "b1100111".U
    val LUI     =   "b0110111".U
    val AUIPC   =   "b0010111".U

    val LOAD    =   "b0000011".U
    val ARITH_I =   "b0010011".U

    val BRANCH  =   "b1100011".U
}

object SYS_INST {   // inst[21, 20]
    val mret    = "b10".U(2.W)      //in fact mret need also to check other bits
    val ecall   = "b00".U(2.W)
    val ebreak  = "b01".U(2.W)
}

object CSRMODE {
    val NOP = 0.U(3.W)
    val RW  = 1.U(3.W)  //only these 3 types. others are all psedo insts
    val RS  = 2.U(3.W)
    val RC  = 3.U(3.W)
}

object Insts { // idea from mini riscv
//  // Loads              funct7   rs1   rs2  fct3  rd   opcode
    def LB     = BitPat("b??????? ????? ????? 000 ????? 0000011")
    def LH     = BitPat("b??????? ????? ????? 001 ????? 0000011")
    def LW     = BitPat("b??????? ????? ????? 010 ????? 0000011")
    def LBU    = BitPat("b??????? ????? ????? 100 ????? 0000011")
    def LHU    = BitPat("b??????? ????? ????? 101 ????? 0000011")
//  // Stores
    def SB     = BitPat("b??????? ????? ????? 000 ????? 0100011")
    def SH     = BitPat("b??????? ????? ????? 001 ????? 0100011")
    def SW     = BitPat("b??????? ????? ????? 010 ????? 0100011")
//  // Shifts, RV64 needs 6 bits' shamt, so it will take one bit's position of funct7 when using immediate
    def SLL    = BitPat("b0000000 ????? ????? 001 ????? 0110011")
    def SLLI   = BitPat("b000000? ????? ????? 001 ????? 0010011")
    def SRL    = BitPat("b0000000 ????? ????? 101 ????? 0110011")
    def SRLI   = BitPat("b000000? ????? ????? 101 ????? 0010011")
    def SRA    = BitPat("b0100000 ????? ????? 101 ????? 0110011")
    def SRAI   = BitPat("b010000? ????? ????? 101 ????? 0010011")
//  // Arithmetic
    def ADD    = BitPat("b0000000 ????? ????? 000 ????? 0110011")
    def ADDI   = BitPat("b??????? ????? ????? 000 ????? 0010011")
    def SUB    = BitPat("b0100000 ????? ????? 000 ????? 0110011")
    def LUI    = BitPat("b??????? ????? ????? ??? ????? 0110111")
    def AUIPC  = BitPat("b??????? ????? ????? ??? ????? 0010111")
//  // Logical
    def XOR    = BitPat("b0000000 ????? ????? 100 ????? 0110011")
    def XORI   = BitPat("b??????? ????? ????? 100 ????? 0010011")
    def OR     = BitPat("b0000000 ????? ????? 110 ????? 0110011")
    def ORI    = BitPat("b??????? ????? ????? 110 ????? 0010011")
    def AND    = BitPat("b0000000 ????? ????? 111 ????? 0110011")
    def ANDI   = BitPat("b??????? ????? ????? 111 ????? 0010011")
//  // Compare
    def SLT    = BitPat("b0000000 ????? ????? 010 ????? 0110011")
    def SLTI   = BitPat("b??????? ????? ????? 010 ????? 0010011")
    def SLTU   = BitPat("b0000000 ????? ????? 011 ????? 0110011")
    def SLTIU  = BitPat("b??????? ????? ????? 011 ????? 0010011")
//  // Branches
    def BEQ    = BitPat("b??????? ????? ????? 000 ????? 1100011")
    def BNE    = BitPat("b??????? ????? ????? 001 ????? 1100011")
    def BLT    = BitPat("b??????? ????? ????? 100 ????? 1100011")
    def BGE    = BitPat("b??????? ????? ????? 101 ????? 1100011")
    def BLTU   = BitPat("b??????? ????? ????? 110 ????? 1100011")
    def BGEU   = BitPat("b??????? ????? ????? 111 ????? 1100011")
//  // Jump & Link
    def JAL    = BitPat("b??????? ????? ????? ??? ????? 1101111")
    def JALR   = BitPat("b??????? ????? ????? 000 ????? 1100111")
//  SYS
    def SYS    = BitPat("b??????? ????? ????? ??? ????? 1110011")
// FENCE
/*
    def FENCE  = BitPat("b0000????????00000000000000001111")
    def FENCE_I= BitPat("b00000000000000000001000000001111")
*/
    //M
    def MUL    = BitPat("b0000001 ????? ????? 000 ????? 0110011")
    def MULH   = BitPat("b0000001 ????? ????? 001 ????? 0110011")
    def MULHSU = BitPat("b0000001 ????? ????? 010 ????? 0110011")
    def MULHU  = BitPat("b0000001 ????? ????? 011 ????? 0110011")
    def DIV    = BitPat("b0000001 ????? ????? 100 ????? 0110011")
    def DIVU   = BitPat("b0000001 ????? ????? 101 ????? 0110011")
    def REM    = BitPat("b0000001 ????? ????? 110 ????? 0110011")
    def REMU   = BitPat("b0000001 ????? ????? 111 ????? 0110011")

//RV64I
    def ADDW   = BitPat("b0000000 ????? ????? 000 ????? 0111011")
    def SUBW   = BitPat("b0100000 ????? ????? 000 ????? 0111011")
    def SLLW   = BitPat("b0000000 ????? ????? 001 ????? 0111011")
    def SRLW   = BitPat("b0000000 ????? ????? 101 ????? 0111011")
    def SRAW   = BitPat("b0100000 ????? ????? 101 ????? 0111011")
    def LWU    = BitPat("b??????? ????? ????? 110 ????? 0000011")
    def LD     = BitPat("b??????? ????? ????? 011 ????? 0000011")
    def SD     = BitPat("b??????? ????? ????? 011 ????? 0100011")

    def ADDIW  = BitPat("b??????? ????? ????? 000 ????? 0011011")
    def SLLIW  = BitPat("b0000000 ????? ????? 001 ????? 0011011")
    def SRLIW  = BitPat("b0000000 ????? ????? 101 ????? 0011011")
    def SRAIW  = BitPat("b0100000 ????? ????? 101 ????? 0011011")
//RV64M
    def MULW   = BitPat("b0000001 ????? ????? 000 ????? 0111011")
    def DIVW   = BitPat("b0000001 ????? ????? 100 ????? 0111011")
    def DIVUW  = BitPat("b0000001 ????? ????? 101 ????? 0111011")
    def REMW   = BitPat("b0000001 ????? ????? 110 ????? 0111011")
    def REMUW  = BitPat("b0000001 ????? ????? 111 ????? 0111011")

    def EBREAK = BitPat("b0000000 00001 ????? ??? ????? 1110011")
    def ECALL  = BitPat("b0000000 00000 00000 000 00000 1110011")
}


object DecTable {
    val defaultDec  =   List(InstType.BAD, AluOPT.ADD)

    val decMap = Array(     //type         option
        Insts.ADD     ->  List(InstType.R, AluOPT.ADD),
        Insts.SUB     ->  List(InstType.R, AluOPT.SUB),
        Insts.SLL     ->  List(InstType.R, AluOPT.SLL),
        Insts.SLT     ->  List(InstType.R, AluOPT.SLT),
        Insts.SLTU    ->  List(InstType.R, AluOPT.SLTU),
        Insts.XOR     ->  List(InstType.R, AluOPT.XOR),
        Insts.SRL     ->  List(InstType.R, AluOPT.SRL),
        Insts.SRA     ->  List(InstType.R, AluOPT.SRA),
        Insts.OR      ->  List(InstType.R, AluOPT.OR),
        Insts.AND     ->  List(InstType.R, AluOPT.AND),

        Insts.ADDI    ->  List(InstType.I, AluOPT.ADD),
        Insts.SLTI    ->  List(InstType.I, AluOPT.SLT),
        Insts.SLTIU   ->  List(InstType.I, AluOPT.SLTU),
        Insts.XORI    ->  List(InstType.I, AluOPT.XOR),
        Insts.ORI     ->  List(InstType.I, AluOPT.OR),
        Insts.ANDI    ->  List(InstType.I, AluOPT.AND),
        Insts.SLLI    ->  List(InstType.I, AluOPT.SLL),
        Insts.SRLI    ->  List(InstType.I, AluOPT.SRL),
        Insts.SRAI    ->  List(InstType.I, AluOPT.SRA),

        Insts.LB      ->  List(InstType.I, AluOPT.ADD),
        Insts.LH      ->  List(InstType.I, AluOPT.ADD),
        Insts.LW      ->  List(InstType.I, AluOPT.ADD),
        Insts.LBU     ->  List(InstType.I, AluOPT.ADD),
        Insts.LHU     ->  List(InstType.I, AluOPT.ADD),

        Insts.SB      ->  List(InstType.S, AluOPT.ADD),
        Insts.SH      ->  List(InstType.S, AluOPT.ADD),
        Insts.SW      ->  List(InstType.S, AluOPT.ADD),

        Insts.MUL     ->  List(InstType.R, AluOPT.MUL),
        Insts.MULH    ->  List(InstType.R, AluOPT.MULH),
        Insts.MULHSU  ->  List(InstType.R, AluOPT.MULHSU),
        Insts.DIV     ->  List(InstType.R, AluOPT.DIV),    //not alu's job
        Insts.DIVU    ->  List(InstType.R, AluOPT.DIVU),
        Insts.REM     ->  List(InstType.R, AluOPT.REM),
        Insts.REMU    ->  List(InstType.R, AluOPT.REMU),

        //ex satge don't need its information however
        Insts.BEQ     ->  List(InstType.B, AluOPT.BEQ),
        Insts.BNE     ->  List(InstType.B, AluOPT.BNE),
        Insts.BLT     ->  List(InstType.B, AluOPT.BLT),
        Insts.BGE     ->  List(InstType.B, AluOPT.BGE),
        Insts.BLTU    ->  List(InstType.B, AluOPT.BLTU),
        Insts.BGEU    ->  List(InstType.B, AluOPT.BGEU),

        Insts.JAL     ->  List(InstType.J, AluOPT.ADD),
        Insts.JALR    ->  List(InstType.I, AluOPT.JALR),

        Insts.LUI     ->  List(InstType.U, AluOPT.LUI),
        Insts.AUIPC   ->  List(InstType.U, AluOPT.AUIPC),

        Insts.SYS     ->  List(InstType.SYS, AluOPT.ADD), //ecall, csr, ebreak
//RV64I
        Insts.ADDIW   ->  List(InstType.I, AluOPT.ADDW),
        Insts.SLLIW   ->  List(InstType.I, AluOPT.SLLW),
        Insts.SRLIW   ->  List(InstType.I, AluOPT.SRLW),
        Insts.SRAIW   ->  List(InstType.I, AluOPT.SRAW),
        Insts.ADDW    ->  List(InstType.R, AluOPT.ADDW),
        Insts.SUBW    ->  List(InstType.R, AluOPT.SUBW),
        Insts.SLLW    ->  List(InstType.R, AluOPT.SLLW),
        Insts.SRLW    ->  List(InstType.R, AluOPT.SRLW),
        Insts.SRAW    ->  List(InstType.R, AluOPT.SRAW),
        Insts.LWU     ->  List(InstType.I, AluOPT.ADD),
        Insts.LD      ->  List(InstType.I, AluOPT.ADD),
        Insts.SD      ->  List(InstType.S, AluOPT.ADD),
//RV64M
        Insts.MULW    ->  List(InstType.R, AluOPT.MULW),
        Insts.DIVW    ->  List(InstType.R, AluOPT.DIVW),
        Insts.DIVUW   ->  List(InstType.R, AluOPT.DIVUW),
        Insts.REMW    ->  List(InstType.R, AluOPT.REMW),
        Insts.REMUW   ->  List(InstType.R, AluOPT.REMUW),

        Insts.EBREAK  ->  List(InstType.SYS, AluOPT.ADD)
/*
        Insts.FENCE   ->  List(InstType.FENCE, AluOPT.ADD),
        Insts.FENCE_I ->  List(InstType.FENCE, AluOPT.ADD),
*/

    )
    // fields, list index
    val TYPE = 0
    val OPT = 1
}

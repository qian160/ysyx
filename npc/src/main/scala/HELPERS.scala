import chisel3._
import chisel3.util._

object countLeadingZeros
{
    //PriorityEncoder: Returns the bit position of right-most 1 bit
    def apply(in: UInt): UInt = PriorityEncoder(Reverse(in))
}

object Util{
    def neg(data:UInt):UInt = {~data + 1.U}
    //pad: add prefix 0s or 1s according to the data type
    def SEXT(a:UInt, from: Int, to: Int): UInt = a(from - 1, 0).asSInt.pad(to).asUInt
    def ZEXT(a:UInt, from: Int, to: Int): UInt = a(from - 1, 0).pad(to)

    def OPCODE(inst: UInt)  = inst(6, 0)
    def RD(inst: UInt)      = inst(11, 7)
    def FUNCT3(inst: UInt)  = inst(14, 12)
    def RS1(inst: UInt)     = inst(19, 15)
    def RS2(inst: UInt)     = inst(24, 20)

    def imm_I(inst: UInt) = SEXT(inst(31,20), 12, 64)
    def imm_J(inst: UInt) = SEXT(Cat(inst(31), inst(19,12), inst(20), inst(30,21), 0.U(1.W)),21, 64)
    def imm_U(inst: UInt) = SEXT(inst(31,12), 20, 64) << 12
    def imm_S(inst: UInt) = SEXT(Cat(inst(31,25), inst(11,7)), 12, 64)
    def imm_B(inst: UInt) = SEXT(Cat(inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W)), 13, 64)

}

object Color{
    //usage: println(D.xx + "foo" + D.ed)
    val red     = "\u001b[1;31m" //1: background color(none)
    val green   = "\u001b[1;32m"
    val yellow  = "\u001b[1;33m"
    val blue    = "\u001b[1;34m"
    val magenta = "\u001b[1;35m"
    val cyan    = "\u001b[1;36m"
    val white   = "\u001b[1;37m"
    val pink    = "\u001b[1;38m"

    val normal      = "\u001b[0m"
    val bold        = "\u001b[1m"
    val dark        = "\u001b[2m"
    val italics     = "\u001b[3m"
    val underline   = "\u001b[4m"

    def Red(str: String) = red + str + normal
    def Yellow(str: String) = yellow + str + normal
    def Pink(str: String) = pink + str + normal
    def Magenta(str: String) = magenta + str + normal
    def Green(str: String) = green + str + normal
}
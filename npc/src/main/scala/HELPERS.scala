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
    def SEXT(a:UInt, to: Int): UInt = a.asSInt.pad(to).asUInt
    def ZEXT(a:UInt, to: Int): UInt = a.pad(to)
}
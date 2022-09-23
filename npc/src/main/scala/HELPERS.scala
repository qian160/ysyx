import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

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

class EXIT extends BlackBox with HasBlackBoxInline {
    val io = IO(new Bundle {
        val exit = Input(Bool())
    })
    setInline("exit.v",
        """ module exit(
        |       input    exit
        |   );
        |   always @* begin
        |       if(exit)   $finish(0);
        |   end
        |   endmodule
        |
        """.stripMargin)
}

object D{       //debug
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

    def RedStr(str: String) = red + str + normal
    def YellowStr(str: String) = yellow + str + normal
    def PinkStr(str: String) = pink + str + normal
    def MagentaStr(str: String) = magenta + str + normal
    def GreenStr(str: String) = green + str + normal
}
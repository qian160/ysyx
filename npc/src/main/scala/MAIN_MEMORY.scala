import chisel3._
import chisel3.util._
import chisel3.util.experimental._

import MMIO_SPACE._
import Util._

class MAIN_MEMORY extends Module{
    def bswap(a: UInt): UInt        =   Cat(a(7, 0), a(15, 8), a(23, 16), a(31, 24), a(39, 32), a(47, 40), a(55, 48), a(63, 56))
    def in_pmem(addr: UInt):Bool    =   (addr >= CONST.PMEM_START & addr <= CONST.PMEM_END)
    val io = IO(new Bundle{
        val pc_i      = Input(UInt(64.W))
        val memOp_i   = Input(new MemOp)

        val inst_o    = Output(UInt(32.W))
        val loadVal_o = Output(UInt(64.W))
    })

    val rtc_boot_time = RegInit(System.currentTimeMillis.U(64.W))
    val ram = Mem(1 << 24, UInt(32.W))  //hope this is enough
    loadMemoryFromFileInline(ram, "/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img_file")
    io.inst_o       :=  ram((io.pc_i - CONST.PC_INIT) >> 2)
    io.loadVal_o    :=  0.U

    //start accessing memory
    //when(in_pmem(io.memOp_i.addr)){
        val addr        =   (io.memOp_i.addr - CONST.PMEM_START)  >> 2
        val unsigned    =   io.memOp_i.unsigned
        val is_store    =   io.memOp_i.isStore
        val length      =   io.memOp_i.length

        //assuming that the address is aligned, little endian
        val dword       =   Cat(ram(addr + 1.U), ram(addr))

        val offset  =   io.memOp_i.addr(1, 0)   //mod by 4, get the byte offset in the 32-bit block
        //chisel doesn't support partial assignment like ram(0)(7, 0) := foo, the LHS just produces a value, and is not assignable
        //so we create a temp variable to manipulate with, and finally assign that temp variable to ram
        val temp    =   dword.asTypeOf(Vec(8, UInt(8.W)))        //easy to manipulate, temp(0) starts at the right side
        dontTouch(temp)
        /*
            notice that we load a 64-bit block like this:
                ______________________________________________
                |temp(7)   |   |   |   |   |   |   |temp(0)   |
            and temp(0) in fact holds the msb. If we would like to write into address 0, temp(7) should be writen

        */
        //data is stored with little endian, for example, ram(0)(7, 0) holds the 1st inst's lsb, and ram(0)(31,24) holds the msb
        //but that doesn't seem to be important now. Maybe loading value from section .data will need this
        val loadMask    =   MuxLookup(length, 0.U, Seq(
            0.U ->  "h00000000000000ff".U,
            1.U ->  "h000000000000ffff".U,
            2.U ->  "h00000000ffffffff".U,
            3.U ->  "hffffffffffffffff".U,
        ))

        val mask    =   loadMask  << (offset << 3)
        /*
            for example, if we want to load the value marked as X(temp(6)):
                ________________________________________________
                |temp(7)   | X  |   |   |   |   |   |temp(0)   |
                                    dword
            1.set loadMask to 0x00ff000000000000, then use the AND operation to extract the bits there
            2.the bits we get at step 1 is actually weighted(not starting at lsb, the right side), we need to recover it by shifting back
        */
        val loadVal_temp   =    (dword & mask) >> (offset << 3)       //extract the bits by shifting and masking, then shift back. Not SEXT
        val loadVal        =    MuxLookup(length, 0.U, Seq(
            0.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 8,  64)),
            1.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 16, 64)),
            2.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 32, 64)),
            3.U ->  loadVal_temp,
        ))
    /*
        val loadVal     =   MuxLookup(length, 0.U, Seq(
            0.U ->  Mux(sign, SEXT(dword(63, 56), 8,  64), dword(63 ,56)),
            1.U ->  Mux(sign, SEXT(dword(63, 48), 16, 64), dword(63 ,48)),
            2.U ->  Mux(sign, SEXT(dword(63, 32), 32, 64), dword(63 ,32)),
            3.U ->  dword,
        ))
    */
        io.loadVal_o      :=   loadVal
        val store_en       =   Wire(UInt(8.W))
        val store_en_lut   =   VecInit("b00000001".U, "b00000011".U, "b00001111".U, "b11111111".U)
        store_en          :=   store_en_lut(length)
        //maybe lut is faster, we don't need to calculate every time
        //val store_en   =   ((1.U << (1.U << length)) - 1.U)
        dontTouch(store_en)
/*        
        val test0 = Wire(UInt(32.W))
        val test1 = Wire(UInt(32.W))

        test0   :=  ram(0)
        test1   :=  ram(1)


        dontTouch(test0)
        dontTouch(test1)
*/
        val sdata   =   io.memOp_i.sdata
        //if the address is unaligned, this may not work correctly
        when(is_store){
            when(store_en(0)){ temp(0.U + offset) :=  sdata(7,  0 )}
            when(store_en(1)){ temp(1.U + offset) :=  sdata(15, 8 )}    //consider endianess, may use Cat here
            when(store_en(2)){ temp(2.U + offset) :=  sdata(23, 16)}
            when(store_en(3)){ temp(3.U + offset) :=  sdata(31, 24)}
            when(store_en(4)){ temp(4.U + offset) :=  sdata(39, 32)}
            when(store_en(5)){ temp(5.U + offset) :=  sdata(47, 40)}
            when(store_en(6)){ temp(6.U + offset) :=  sdata(55, 48)}
            when(store_en(7)){ temp(7.U + offset) :=  sdata(63, 56)}

            ram(addr + 1.U)     :=  temp.asTypeOf(UInt())(63, 32)
            ram(addr)           :=  temp.asTypeOf(UInt())(31, 0)
        }
    //}
    /*
    .elsewhen(in_serial(io.memOp_i.addr)){
        printf("in serial\n")
        when(io.memOp_i.isStore){
            printf("%c", io.memOp_i.sdata)
        }//serial doesn't support read
    }.elsewhen(in_rtc(io.memOp_i.addr)){
        printf("in rtc\n");
        when(io.memOp_i.isLoad){
            io.loadVal_o    :=  System.currentTimeMillis.U(64.W) - rtc_boot_time
        }
    }
    */

    //to make inst rom and data ram compatible and easy to initialize(loadMemoryFromFileInline), the width is set to be 32 bits
}


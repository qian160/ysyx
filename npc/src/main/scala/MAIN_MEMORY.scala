import chisel3._
import chisel3.util._
import chisel3.util.experimental._

import Util._
/*
Byte address:(not bit address or block(4B) address!)
    0      3       4      7       8     11       12     15
    | ram1 |       | ram2 |       | ram3 |       | ram4 |
    ......
*/
class MAIN_MEMORY extends Module{
    def in_pmem(addr: UInt):Bool    =   (addr >= CONST.PMEM_START & addr <= CONST.PMEM_END)
    def bswap(a: UInt): UInt        =   Cat(a(7, 0), a(15, 8), a(23, 16), a(31, 24), a(39, 32), a(47, 40), a(55, 48), a(63, 56))
    def row_number(addr: UInt)      =   ((addr - CONST.PMEM_START) >> 4)    // divide 16, since one row contains 4B * 4 = 16B
    def getRow(addr: UInt)  =   {
        val row =   row_number(addr)
        Cat(ram4(row), ram3(row), ram2(row), ram1(row))
    }
    //def block_offset(addr: UInt)    =   Mux(addr_i(3), 2.U, 0.U)            // 1 row = 16B, so 8B is the halfway. Used to figure a dword, which is used by load and store
    val io = IO(new Bundle{
        val memOp_i   = Input(new MemOp)
        val sync_i          =   Input(new Sync)     // a set of cache with dirty bit set is kicked out
        val dcache_miss_i   =   Input(new DCacheMissInfo)
        val icache_miss_i   =   Input(new ICacheMissInfo)

        val dcache_insert_o =   Output(new DCacheInsertInfo)
        val icache_insert_o =   Output(new ICacheInsertInfo)

        val qword_o     =   Output(UInt(128.W))
    })
    // to make inst rom and data ram compatible and both easy to initialize(loadMemoryFromFileInline, or readmemh), the width is set to be 32 bits
    // total size = 4B x 4096 x 4 = 64KB
    val ram1 = Mem(1 << 16, UInt(32.W))  //hope this is enough
    val ram2 = Mem(1 << 16, UInt(32.W))  //hope this is enough
    val ram3 = Mem(1 << 16, UInt(32.W))  //hope this is enough
    val ram4 = Mem(1 << 16, UInt(32.W))  //hope this is enough

    loadMemoryFromFileInline(ram1, CONST.IMG_FILE + "1")
    loadMemoryFromFileInline(ram2, CONST.IMG_FILE + "2")
    loadMemoryFromFileInline(ram3, CONST.IMG_FILE + "3")
    loadMemoryFromFileInline(ram4, CONST.IMG_FILE + "4")

    io.qword_o  :=  0.U

    val is_store    =   io.memOp_i.is_store
    val addr_i      =   io.memOp_i.addr
    val sdata       =   io.memOp_i.sdata
    val is_load     =   io.memOp_i.is_load
    val length      =   io.memOp_i.length
    // write 16B at one time, or we will meet problems...
    when(is_load | is_store){
        when(in_pmem(addr_i)){
            // output a 16B aligned qword. start at row (addr / 16). For example, 0 ~ 15 -> row0 (block 0 - 3), 16 ~ 31 -> block 4 - 7
            val row =   row_number(addr_i)
            val on_the_right_half   =   addr_i(3)                               // assume right side's address is higher than left half

            val qword   =   Cat(ram4(row), ram3(row), ram2(row), ram1(row))
            val dword   =   Mux(on_the_right_half, qword(127, 64), qword(63, 0))
            io.qword_o  :=  qword
            when(is_store){
                // manipulate on dword (8B)
                val offset  =   addr_i(2, 0)        // byte offset in a dword
                val store_en_lut   =   VecInit("b00000001".U, "b00000011".U, "b00001111".U, "b11111111".U)
                val store_en       =   store_en_lut(OHToUInt(length))
                val temp           =   dword.asTypeOf(Vec(8, UInt(8.W)))       // a temp value to manicipulate with, since we can't do dword(7, 0) := ...
                when(store_en(0) )    {temp(0.U + offset) :=  sdata( 7, 0 )}
                when(store_en(1) )    {temp(1.U + offset) :=  sdata(15, 8 )}
                when(store_en(2) )    {temp(2.U + offset) :=  sdata(23, 16)}
                when(store_en(3) )    {temp(3.U + offset) :=  sdata(31, 24)}
                when(store_en(4) )    {temp(4.U + offset) :=  sdata(39, 32)}
                when(store_en(5) )    {temp(5.U + offset) :=  sdata(47, 40)}
                when(store_en(6) )    {temp(6.U + offset) :=  sdata(55, 48)}
                when(store_en(7) )    {temp(7.U + offset) :=  sdata(63, 56)}

                when(on_the_right_half){
                    ram3(row)   :=  temp.asUInt(31, 0)
                    ram4(row)   :=  temp.asUInt(63, 32)
                }.otherwise{
                    ram1(row)   :=  temp.asUInt(31, 0)
                    ram2(row)   :=  temp.asUInt(63, 32)
                }
            }
        }
    }

    io.icache_insert_o  :=  0.U.asTypeOf(new ICacheInsertInfo)
    io.dcache_insert_o  :=  0.U.asTypeOf(new DCacheInsertInfo)
// I-Cache miss
    // 16B aligned, erase the low 4 bits
    when(io.icache_miss_i.miss){
        val miss_pc     =   io.icache_miss_i.pc
        val icache_set  =   getRow(miss_pc).asTypeOf(Vec(4, UInt(32.W)))

        io.icache_insert_o.valid  :=  io.icache_miss_i.miss
        io.icache_insert_o.insts  :=  icache_set
        io.icache_insert_o.index  :=  CacheAddrField.INDEX(miss_pc)
        io.icache_insert_o.tag    :=  CacheAddrField.TAG(miss_pc)
    }
// D-Cache miss
    when(io.dcache_miss_i.miss){
        val miss_addr   =   io.dcache_miss_i.addr
        val dcache_set  =   getRow(miss_addr).asTypeOf(Vec(4, UInt(32.W)))
        io.dcache_insert_o.valid    :=  io.dcache_miss_i.miss
        io.dcache_insert_o.blocks   :=  dcache_set
        io.dcache_insert_o.index    :=  CacheAddrField.INDEX(miss_addr)
        io.dcache_insert_o.tag      :=  CacheAddrField.TAG(miss_addr)
    }

    when(io.sync_i.valid){
        //addr data
        val sync_addr   =   io.sync_i.addr
        val row         =   getRow(sync_addr)
        val new_data    =   io.sync_i.data
        ram1(row)       :=  new_data(0)
        ram2(row)       :=  new_data(1)
        ram3(row)       :=  new_data(2)
        ram4(row)       :=  new_data(3)
    }

}

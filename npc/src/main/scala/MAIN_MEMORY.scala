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
object MemFunc{
    // the semantics of these 2 functions are not so straightforword...
    // 'get' the correct qword after storing(not stored into ram yet)
    def store(addr: UInt, sdata: UInt, qword_old: UInt, length: UInt) = {
        val on_the_right_half   =   addr(3)                                 // assume right side's address is higher than left half
        val qword_vec           =   qword_old.asTypeOf(Vec(16, UInt(8.W)))
        val block_offset        =   Mux(on_the_right_half, 8.U, 0.U)        // 64
        val dword               =   Mux(on_the_right_half, qword_old(127, 64), qword_old(63, 0))
        val offset              =   addr(2, 0)                              // byte offset in 'a dword'
        val store_en_lut        =   VecInit("b00000001".U, "b00000011".U, "b00001111".U, "b11111111".U)
        val store_en            =   store_en_lut(OHToUInt(length))
        when(store_en(0) )    {qword_vec(0.U + offset + block_offset) :=  sdata( 7, 0 )}
        when(store_en(1) )    {qword_vec(1.U + offset + block_offset) :=  sdata(15, 8 )}
        when(store_en(2) )    {qword_vec(2.U + offset + block_offset) :=  sdata(23, 16)}
        when(store_en(3) )    {qword_vec(3.U + offset + block_offset) :=  sdata(31, 24)}
        when(store_en(4) )    {qword_vec(4.U + offset + block_offset) :=  sdata(39, 32)}
        when(store_en(5) )    {qword_vec(5.U + offset + block_offset) :=  sdata(47, 40)}
        when(store_en(6) )    {qword_vec(6.U + offset + block_offset) :=  sdata(55, 48)}
        when(store_en(7) )    {qword_vec(7.U + offset + block_offset) :=  sdata(63, 56)}

        qword_vec.asTypeOf(Vec(4, UInt(32.W)))
    }
    // load some bytes(maybe 1, 2, 4, 8 1) from the given qword
    //def load(addr: UInt, qword: UInt, length: UInt) = {}
}

// this module can be instantiated in MEM, not TOP. So MEM can conveniently call MM's functions through the created object 
class MAIN_MEMORY extends Module{
    def in_pmem(addr: UInt):Bool    =   (addr >= CONST.PMEM_START & addr <= CONST.PMEM_END)
    def bswap(a: UInt): UInt        =   Cat(a(7, 0), a(15, 8), a(23, 16), a(31, 24), a(39, 32), a(47, 40), a(55, 48), a(63, 56))
    def row_number(addr: UInt)      =   ((addr - CONST.PMEM_START) >> 4)    // divide by 16, since one row contains 4B * 4 = 16B
    def block_offset(addr: UInt)    =   Mux(addr(3), 2.U, 0.U)              // 16B per row, so 8B is the half
    // get a qword from ram
    def getRow(addr: UInt)  =   {
        val row =   row_number(addr)
        Cat(ram4(row), ram3(row), ram2(row), ram1(row))
    }

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
    val ram1 = Mem(1 << 16, UInt(32.W))
    val ram2 = Mem(1 << 16, UInt(32.W))
    val ram3 = Mem(1 << 16, UInt(32.W))
    val ram4 = Mem(1 << 16, UInt(32.W))

    loadMemoryFromFileInline(ram1, CONST.IMG_FILE + "0")
    loadMemoryFromFileInline(ram2, CONST.IMG_FILE + "1")
    loadMemoryFromFileInline(ram3, CONST.IMG_FILE + "2")
    loadMemoryFromFileInline(ram4, CONST.IMG_FILE + "3")

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
                // is_store or sync
                val new_qword   =   MemFunc.store(addr_i, sdata, getRow(addr_i).asUInt, length)
                ram1(row)   :=  new_qword(0)
                ram2(row)   :=  new_qword(1)
                ram3(row)   :=  new_qword(2)
                ram4(row)   :=  new_qword(3)
                //*/
            }
        }
    }

    val icache_insert_info  =   RegInit(0.U.asTypeOf(new ICacheInsertInfo))
    val dcache_insert_info  =   RegInit(0.U.asTypeOf(new DCacheInsertInfo))
//    val dcache_insert_info  =   Wire((new DCacheInsertInfo))

    io.icache_insert_o  :=  icache_insert_info
    io.dcache_insert_o  :=  dcache_insert_info
// I-Cache miss
    // 16B aligned, erase the low 4 bits

    when(io.icache_miss_i.miss){
        val miss_pc     =   io.icache_miss_i.pc
        val icache_set  =   getRow(miss_pc).asTypeOf(Vec(4, UInt(32.W)))

        icache_insert_info.valid  :=  true.B
        icache_insert_info.insts  :=  icache_set
        icache_insert_info.index  :=  CacheAddrField.INDEX(miss_pc)
        icache_insert_info.tag    :=  CacheAddrField.TAG(miss_pc)
    }.otherwise{
        icache_insert_info  :=  0.U.asTypeOf(new ICacheInsertInfo)
    }
// D-Cache miss

    when(io.dcache_miss_i.miss){
        val miss_addr   =   io.dcache_miss_i.addr
        val dcache_set  =   getRow(miss_addr).asTypeOf(Vec(4, UInt(32.W)))
        dcache_insert_info.valid    :=  true.B
        dcache_insert_info.blocks   :=  dcache_set
        dcache_insert_info.index    :=  CacheAddrField.INDEX(miss_addr)
        dcache_insert_info.tag      :=  CacheAddrField.TAG(miss_addr)
    }.otherwise{
        dcache_insert_info  :=  0.U.asTypeOf(new DCacheInsertInfo)
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

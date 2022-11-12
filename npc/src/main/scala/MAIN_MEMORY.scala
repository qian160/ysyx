import chisel3._
import chisel3.util._
import chisel3.util.experimental._

import Util._

class MAIN_MEMORY extends Module{
    def bswap(a: UInt): UInt        =   Cat(a(7, 0), a(15, 8), a(23, 16), a(31, 24), a(39, 32), a(47, 40), a(55, 48), a(63, 56))
    def in_pmem(addr: UInt):Bool    =   (addr >= CONST.PMEM_START & addr <= CONST.PMEM_END)
    val io = IO(new Bundle{
        val timer_i   = Input(UInt(64.W))       //from TOP(cpp Input). Ignored now
        val memOp_i   = Input(new MemOp)
        val sync_i          =   Input(new Sync)
        val dcache_miss_i   =   Input(new DCacheMissInfo)
        val dcache_insert_o =   Output(new DCacheInsertInfo)
        val icache_miss_i   =   Input(new ICacheMissInfo)
        val icache_insert_o =   Output(new ICacheInsertInfo)

        val loadVal_o = Output(UInt(64.W))
    })
    //to make inst rom and data ram compatible and easy to initialize(loadMemoryFromFileInline), the width is set to be 32 bits
    val ram = Mem(1 << 20, UInt(32.W))  //hope this is enough
    loadMemoryFromFileInline(ram, CONST.IMG_FILE)

    io.loadVal_o    :=  0.U

    val is_store    =   io.memOp_i.is_store
    val addr_i      =   io.memOp_i.addr
    val sdata       =   io.memOp_i.sdata
    val is_load     =   io.memOp_i.is_load
    val length      =   io.memOp_i.length
    val unsigned    =   io.memOp_i.unsigned

    val MMIO_RW = Module(new MMIO_RW)
    MMIO_RW.io.addr     :=  addr_i
    MMIO_RW.io.length   :=  io.memOp_i.length
    MMIO_RW.io.wdata    :=  io.memOp_i.sdata
    MMIO_RW.io.read_en  :=  0.U
    MMIO_RW.io.write_en :=  0.U

    val loadVal_temp =   Wire(UInt(64.W))   //before sext
    when(in_pmem(addr_i)){
        val addr    =   (io.memOp_i.addr - CONST.PMEM_START)  >> 2
        val dword   =   Cat(ram(addr + 1.U), ram(addr))
        val offset  =   io.memOp_i.addr(1, 0)   //mod by 4, get the byte offset in the 32-bit block
        // chisel doesn't support partial assignment like ram(0)(7, 0) := foo, the LHS just produces a value, and is not assignable
        // so we create a temp variable to manipulate with, and finally assign that temp variable to ram
        val temp    =   dword.asTypeOf(Vec(8, UInt(8.W)))        //easy to manipulate, temp(0) starts at the right side
        /*
                ______________________________________________
                |temp(7)   |   |   |   |   |   |   |temp(0)   | msb

            If we want to write into address 0, temp(7) is the right target
        */
        // data is stored with little endian, for example, ram(0)(7, 0) holds the 1st inst's lsb, and ram(0)(31,24) holds the msb
        val byteMask    =   MuxLookup(length, 0.U, Seq(
            1.U ->  "h00000000000000ff".U,
            2.U ->  "h000000000000ffff".U,
            4.U ->  "h00000000ffffffff".U,
            8.U ->  "hffffffffffffffff".U,
        ))

        val mask    =   byteMask  << (offset << 3)
        /*
            for example, if we want to load the value marked as X(temp(6)):
                ________________________________________________
                |temp(7)   | X  |   |   |   |   |   |temp(0)   |
                                    dword
            1.set byteMask to 0x00ff000000000000, then use the AND operation to extract the bits there
            2.the bits we get at step 1 is actually weighted(not starting at lsb, the right side), we need to recover it by shifting back
        */
        loadVal_temp    :=    (dword & mask) >> (offset << 3)       //extract the bits by shifting and masking, then shift back. Without SEXT

        val store_en       =   Wire(UInt(8.W))
        val store_en_lut   =   VecInit("b00000001".U, "b00000011".U, "b00001111".U, "b11111111".U)
        store_en          :=   store_en_lut(OHToUInt(length))     //which bytes in the dword block need to be updated
        //maybe lut is faster, we don't need to calculate every time
        //val store_en   =   ((1.U << (1.U << length)) - 1.U)

        //if the address is unaligned, this may not work correctly... not sure about that
        when(is_store){
            when(store_en(0)/* & (0.U + offset < 8.U)*/)    {temp(0.U + offset) :=  sdata( 7, 0 )}
            when(store_en(1)/* & (1.U + offset < 8.U)*/)    {temp(1.U + offset) :=  sdata(15, 8 )}    //consider endianess, may use Cat here
            when(store_en(2)/* & (2.U + offset < 8.U)*/)    {temp(2.U + offset) :=  sdata(23, 16)}
            when(store_en(3)/* & (3.U + offset < 8.U)*/)    {temp(3.U + offset) :=  sdata(31, 24)}
            when(store_en(4)/* & (4.U + offset < 8.U)*/)    {temp(4.U + offset) :=  sdata(39, 32)}
            when(store_en(5)/* & (5.U + offset < 8.U)*/)    {temp(5.U + offset) :=  sdata(47, 40)}
            when(store_en(6)/* & (6.U + offset < 8.U)*/)    {temp(6.U + offset) :=  sdata(55, 48)}
            when(store_en(7)/* & (7.U + offset < 8.U)*/)    {temp(7.U + offset) :=  sdata(63, 56)}

            ram(addr + 1.U)     :=  temp.asTypeOf(UInt())(63, 32)
            ram(addr)           :=  temp.asTypeOf(UInt())(31, 0)
        }
    }.otherwise{
        MMIO_RW.io.read_en  :=  is_load
        MMIO_RW.io.write_en :=  is_store
        loadVal_temp    :=  MMIO_RW.io.rdata
    }

    io.loadVal_o    :=  MuxLookup(length, 0.U, Seq(
        1.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 8,  64)),
        2.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 16, 64)),
        4.U ->  Mux(unsigned, loadVal_temp, SEXT(loadVal_temp, 32, 64)),
        8.U ->  loadVal_temp,
    ))

    // I-Cache. When a miss happens in IF, send the needed data to it
    // 16B aligned, erase the low 4 bits
    val pc_aligned  =   Cat(io.icache_miss_i.pc(63, 4), 0.U(4.W))
    val base_index  =   (pc_aligned  - CONST.PC_INIT) >> 2
    val inst1       =   ram(base_index)
    val inst2       =   ram(base_index + 1.U)
    val inst3       =   ram(base_index + 2.U)
    val inst4       =   ram(base_index + 3.U)
    val icache_set  =   Cat(inst4, inst3, inst2, inst1).asTypeOf(Vec(4, UInt(32.W)))


    val miss_pc     =   io.icache_miss_i.pc
    io.icache_insert_o.valid  :=  io.icache_miss_i.miss
    io.icache_insert_o.insts  :=  icache_set
    io.icache_insert_o.index  :=  CacheAddrField.INDEX(miss_pc)
    io.icache_insert_o.tag    :=  CacheAddrField.TAG(miss_pc)

    val miss_addr   =   io.dcache_miss_i.addr
    io.dcache_insert_o.valid  :=  io.dcache_miss_i.miss
    io.dcache_insert_o.blocks :=  0.U.asTypeOf( Vec(4, UInt(32.W)))
    io.dcache_insert_o.index  :=  CacheAddrField.INDEX(miss_addr)
    io.dcache_insert_o.tag    :=  CacheAddrField.TAG(miss_addr)
}

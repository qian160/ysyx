import chisel3._
import chisel3.util._

import CacheAddrField._
import Util._

class MEM extends Module{
    def is_in_pmem(addr: UInt):Bool    =   (addr >= CONST.PMEM_START & addr <= CONST.PMEM_END)
    val io = IO(new Bundle{
        val writeOp_i   =   Input(new WriteOp)
        val memOp_i     =   Input(new MemOp)
        val qword_i     =   Input(UInt(128.W))

        val writeOp_o   =   Output(new WriteOp)
        val mem_fwd_o   =   Output(new Forward_Info)

        val dcache_insert_i =   Input(new DCacheInsertInfo)
        val dcache_miss_o   =   Output(new DCacheMissInfo)
        val sync_o          =   Output(new Sync)

        val nr_dcache_hit_o =   Output(UInt(64.W))
        val nr_load_o       =   Output(UInt(64.W))

        val stall_req_o =   Output(Bool())

        val debug_i     =   Input (new Debug_Bundle)
        val debug_o     =   Output(new Debug_Bundle)
    })

    val dcache_hit_cnt  =   RegInit(0.U(64.W))
    val load_cnt        =   RegInit(0.U(64.W))
    val DCache_Way1     =   Mem(1 << 8, new DCache_Set)
    val DCache_Way2     =   Mem(1 << 8, new DCache_Set)

    // alias and variables
    val is_load     =   io.memOp_i.is_load
    val is_store    =   io.memOp_i.is_store
    val length      =   io.memOp_i.length
    val unsigned    =   io.memOp_i.unsigned
    val pc          =   io.debug_i.pc(31, 0)        // for debug use
    val qword       =   io.qword_i
    val sdata       =   io.memOp_i.sdata
    val addr_i      =   io.memOp_i.addr

    val in_pmem         =   is_in_pmem(addr_i)
    val not_in_pmem     =   ~in_pmem
    val tag             =   TAG(addr_i)
    val index           =   INDEX(addr_i)
    val byte_offset     =   BYTE_OFFSET(addr_i)
    val block_offset    =   BLOCK_OFFSET(addr_i)
    //val use_cache       =   (is_load | is_store) & in_pmem      // when to use cache
    val use_cache       =   is_load & in_pmem      // when to use cache

    // a set contains a row of data, including valid, tag, index data blocks and used
    val set1    =   DCache_Way1(index)
    val block1  =   set1.blocks
    val valid1  =   set1.valid
    val used1   =   set1.used
    val hit1    =   tag === set1.tag & valid1

    val set2    =   DCache_Way2(index)
    val block2  =   set2.blocks
    val valid2  =   set2.valid
    val used2   =   set2.used
    val hit2    =   tag === set2.tag & valid2

    val hit3    =   (tag === io.dcache_insert_i.tag) & (index === io.dcache_insert_i.index)
    val hit     =   use_cache & (hit1 | hit2 | hit3)
    val miss    =   use_cache & ~hit1 & ~hit2 & ~hit3
    val loadVal             =   WireDefault(0.U(64.W))
    val loadVal_sext        =   WireDefault(0.U(64.W))
    val dword               =   WireDefault(0.U(64.W))

    // device
    val MMIO_RW = Module(new MMIO_RW)
    MMIO_RW.io.addr     :=  addr_i
    MMIO_RW.io.length   :=  length
    MMIO_RW.io.wdata    :=  sdata
    MMIO_RW.io.read_en  :=  not_in_pmem & is_load
    MMIO_RW.io.write_en :=  not_in_pmem & is_store

    // default values
    io.dcache_miss_o    :=  0.U.asTypeOf(new DCacheMissInfo)
    io.sync_o           :=  0.U.asTypeOf(new Sync)

    when(miss){
        io.dcache_miss_o.miss   :=  true.B
        io.dcache_miss_o.addr   :=  addr_i
    }

//    when(is_load & hit){
//        printf("[%x]:   load %x\n", io.debug_i.pc, loadVal_sext)
//    }    
    io.stall_req_o  :=  miss
    when(is_load){
        // mod 8, which byte should be the start of dword
        val offset  =   addr_i(2, 0)
        // choose blocks from the hit set
        val which_block =   PriorityMux(Seq(
            (hit1,      block1),
            (hit2,      block2),
            (hit3,      io.dcache_insert_i.blocks),     // from main memory
            (true.B,    0.U.asTypeOf(Vec(4, UInt(32.W)))),
        ))
        // something like mod 8. 8B aligned aword
        val on_the_right_half   =   addr_i(3)
        val dword_from_cache    =   Mux(on_the_right_half, 
            Cat(which_block(3), which_block(2)),
            Cat(which_block(1), which_block(0))
        )
        val dword_from_main_memory  =   Mux(on_the_right_half, 
            io.dcache_insert_i.blocks.asUInt(127, 64), 
            io.dcache_insert_i.blocks.asUInt(63, 0)
        )
        load_cnt    :=  load_cnt + 1.U
        when(not_in_pmem){
            // don't use cache
            loadVal     :=  MMIO_RW.io.rdata
        }.otherwise{
            dcache_hit_cnt  :=  Mux(hit, dcache_hit_cnt + 1.U, dcache_hit_cnt)
            dword           :=  Mux(false.B, dword_from_cache, dword_from_main_memory)
            /*
            when(hit){
                printf("\n[%x]  load hit: %d  %d,   addr = %x\n", io.debug_i.pc(31, 0), hit1, hit2, addr_i(31, 0))
                
            }.otherwise{
                printf("\n[%x]  load miss:    %d  %d,   addr = %x\n", io.debug_i.pc(31, 0), hit1, hit2, addr_i(31,0))
            }
            
            printf("from cache: %x\n", dword_from_cache)
            printf("from MM:    %x\n\n", io.qword_i(63, 0))
            */
            val byteMask    =   MuxLookup(length, 0.U, Seq(
                1.U ->  "h00000000000000ff".U,
                2.U ->  "h000000000000ffff".U,
                4.U ->  "h00000000ffffffff".U,
                8.U ->  "hffffffffffffffff".U,
            ))
            val mask    =   byteMask  << (offset << 3)
            loadVal    :=   (dword & mask) >> (offset << 3)
        }
        loadVal_sext    :=    MuxLookup(length, 0.U, Seq(
            1.U ->  Mux(unsigned, loadVal, SEXT(loadVal, 8,  64)),
            2.U ->  Mux(unsigned, loadVal, SEXT(loadVal, 16, 64)),
            4.U ->  Mux(unsigned, loadVal, SEXT(loadVal, 32, 64)),
            8.U ->  loadVal,
        ))
        /*
        when(hit){
            printf("\n[%x] load   mem[%x] %x\n", pc, addr_i, loadVal_sext)
            printf("dword = %x\n", dword)
            printf("qword = %x\n\n", qword)
        }
        */
    }
    //when(is_store){printf("\n[%x] store  mem[%x] %x\n", pc, addr_i, sdata)}
/*
        // the store miss problem:
        // when trying to store a value to a set with mismatched tag, we must also update the old tag to new one.
        // However, once the tag is updated, the old blocks in the set is no longer valid(we are using the new tag to access them, while their actual tag is the old one)
        // My solution is to load a new set from memory before storing

        when(is_store & ~not_in_pmem){
            // It's behavior is similar to insertion
            val qword   =  Mux(false.B, which_block.asUInt, io.qword_i)
            when(hit){
                printf("\n[%x]  store hit: %d %d,   addr = %x\n", io.debug_i.pc(31, 0), hit1, hit2, addr_i(31, 0))
            }.otherwise{
                printf("\n[%x]  store miss: %d %d,  addr = %x\n", io.debug_i.pc(31, 0), hit1, hit2, addr_i(31, 0))
            }
            printf("from cache: %x\n", qword)
            printf("from MM:    %x\n\n", io.qword_i)
            val store_en_lut    =   VecInit("b00000001".U, "b00000011".U, "b00001111".U, "b11111111".U)
            val store_en        =   store_en_lut(OHToUInt(length))
            val temp            =   qword.asTypeOf(Vec(16, UInt(8.W)))       // easy to manicipulate with
            val block_off       =   Mux(addr_i(3), 8.U, 0.U)        // 64
            when(store_en(0))    {temp(0.U + offset + block_off) :=  sdata( 7, 0 )}
            when(store_en(1))    {temp(1.U + offset + block_off) :=  sdata(15, 8 )}    //consider endianess, may use Cat here
            when(store_en(2))    {temp(2.U + offset + block_off) :=  sdata(23, 16)}
            when(store_en(3))    {temp(3.U + offset + block_off) :=  sdata(31, 24)}
            when(store_en(4))    {temp(4.U + offset + block_off) :=  sdata(39, 32)}
            when(store_en(5))    {temp(5.U + offset + block_off) :=  sdata(47, 40)}
            when(store_en(6))    {temp(6.U + offset + block_off) :=  sdata(55, 48)}
            when(store_en(7))    {temp(7.U + offset + block_off) :=  sdata(63, 56)}

            printf("temp:       %x\n", temp.asUInt)

            val store_set   =   Cat(1.U, hit, 1.U, tag, index, temp.asUInt).asTypeOf(new DCache_Set)

            when(~valid1){
                DCache_Way1(index)       :=  store_set
                DCache_Way2(index).used  :=  0.U
            }.elsewhen(~valid2){
                DCache_Way2(index)       :=  store_set
                DCache_Way1(index).used  :=  0.U
            }.otherwise{
                // have to kick out a block
                val sync_addr   =   Mux(used1,      //if set1 is recently used, kick out set2
                    Cat(DCache_Way2(index).tag, DCache_Way2(index).index, 0.U(4.W)),
                    Cat(DCache_Way1(index).tag, DCache_Way1(index).index, 0.U(4.W)),
                )
                io.sync_o.addr  :=  sync_addr
                when(~used1){
                    io.sync_o.data  :=  DCache_Way1(index).blocks.asTypeOf(Vec(4, UInt(32.W)))
                    //io.sync_o.valid :=  DCache_Way1(index).dirty
                    DCache_Way1(index)       :=  store_set
                    DCache_Way2(index).used  :=  0.U
                }.otherwise{
                    io.sync_o.data  :=  DCache_Way2(index).blocks.asTypeOf(Vec(4, UInt(32.W)))
                    //io.sync_o.valid :=  DCache_Way2(index).dirty
                    DCache_Way2(index)       :=  store_set
                    DCache_Way1(index).used  :=  0.U
                }
            }
        }

    }


    when(dcache_insert_i_latch.valid){
        val insert_index    =   dcache_insert_i_latch.index
        val valid1  =   DCache_Way1(insert_index).valid
        val valid2  =   DCache_Way2(insert_index).valid

        val set1_used   =   DCache_Way1(insert_index).used
        val set2_used   =   DCache_Way2(insert_index).used
        // dirty bit = hit
        val insert_addr = Cat(dcache_insert_i_latch.tag, dcache_insert_i_latch.index, 0.U(4.W))
        printf("\n[%x]  insert:   addr = %x\n", pc, insert_addr)
        printf("%x\n", io.dcache_insert_i.blocks.asUInt)
        val insert_set  =   Cat(1.U, 0.U, 1.U, dcache_insert_i_latch.tag, dcache_insert_i_latch.index, dcache_insert_i_latch.blocks.asUInt).asTypeOf(new DCache_Set)
        when(~valid1){
            DCache_Way1(insert_index)       :=  insert_set
            DCache_Way2(insert_index).used  :=  0.U
        }.elsewhen(~valid2){
            DCache_Way2(insert_index)       :=  insert_set
            DCache_Way1(insert_index).used  :=  0.U
        }.otherwise{
            // need to kick data when not hit
            val sync_addr   =   Mux(set1_used,      //if set1 is recently used, kick out set2
                Cat(DCache_Way2(insert_index).tag, DCache_Way2(insert_index).index, 0.U(4.W)),
                Cat(DCache_Way1(insert_index).tag, DCache_Way1(insert_index).index, 0.U(4.W)),
            )
            io.sync_o.addr  :=  sync_addr
            when(~set1_used){
                io.sync_o.data  :=  DCache_Way1(insert_index).blocks.asTypeOf(Vec(4, UInt(32.W)))
                //io.sync_o.valid :=  DCache_Way1(insert_index).dirty
                DCache_Way1(insert_index)       :=  insert_set
                DCache_Way2(insert_index).used  :=  0.U
            }.otherwise{
                io.sync_o.data  :=  DCache_Way2(insert_index).blocks.asTypeOf(Vec(4, UInt(32.W)))
                //io.sync_o.valid :=  DCache_Way2(insert_index).dirty
                DCache_Way2(insert_index)       :=  insert_set
                DCache_Way1(insert_index).used  :=  0.U
            }
        }
*/


    io.writeOp_o            :=  io.writeOp_i
    io.writeOp_o.rf.wdata   :=  Mux(is_load, loadVal_sext, io.writeOp_i.rf.wdata)

    io.nr_dcache_hit_o  :=  dcache_hit_cnt
    io.nr_load_o        :=  load_cnt

    io.debug_o      :=  io.debug_i
    //disable bypass on store(wdata is just an address) and load miss
    io.mem_fwd_o.rf.rd      :=  Mux(is_store | (is_load & io.stall_req_o), 0.U, io.writeOp_o.rf.rd)
    io.mem_fwd_o.rf.wdata   :=  io.writeOp_o.rf.wdata

    io.mem_fwd_o.csr.addr   :=  io.writeOp_o.csr.waddr
    io.mem_fwd_o.csr.wdata  :=  io.writeOp_o.csr.wdata

}

class DCache_Set extends Bundle{
    // 4 + 8 + 20
    val valid   =   Bool()
    val dirty   =   Bool()
    val used    =   Bool()      // lru replacement
    val tag     =   UInt(20.W)
    // data with the same tag share some same address
    val index   =   UInt(8.W)   // sync need to know the address, so we need to keep track of this
    val blocks  =   Vec(4, UInt(32.W))
}

class DCacheMissInfo extends Bundle{

    val miss    =   Bool()
    val addr    =   UInt(64.W)
}

class DCacheInsertInfo extends Bundle{
    val valid   =   Bool()
    val blocks  =   Vec(4, UInt(32.W))
    val index   =   UInt(8.W)
    val tag     =   UInt(20.W)
}

// write through or write back
class Sync extends Bundle{
    val valid   =   Bool()
    val addr    =   UInt(64.W)
    val data    =   Vec(4, UInt(32.W))
}
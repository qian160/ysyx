import chisel3._
import chisel3.util._

import CacheAddrField._
import Util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeOp_i   =   Input(new WriteOp)
        val memOp_i     =   Input(new MemOp)
        val loadVal_i   =   Input(UInt(64.W))

        val writeOp_o   =   Output(new WriteOp)
        val mem_fwd_o   =   Output(new Forward_Info)

        val dcache_insert_i =   Input(new DCacheInsertInfo)
        val dcache_miss_o   =   Output(new DCacheMissInfo)
        val sync_o      =   Output(new Sync)

        val debug_i     =   Input (new Debug_Bundle)
        val debug_o     =   Output(new Debug_Bundle)
    })

    val DCache_Way1     =   Mem(1 << 8, new DCache_Set)
    val DCache_Way2     =   Mem(1 << 8, new DCache_Set)

    val is_load      = io.memOp_i.is_load
    val is_store     = io.memOp_i.is_store

    val sdata   =   io.memOp_i.sdata
    val addr_i  =   io.memOp_i.addr

    io.dcache_miss_o    :=  0.U.asTypeOf(new DCacheMissInfo)
    io.sync_o           :=  0.U.asTypeOf(new Sync)
    // D-Cache
    val tag             =   TAG(addr_i)
    val index           =   INDEX(addr_i)
    val byte_offset     =   BYTE_OFFSET(addr_i)
    val block_offset    =   BLOCK_OFFSET(addr_i)
    val miss            =   WireDefault(false.B)
    val loadVal_from_cache  =   WireDefault(0.U(64.W))
    // 3 cases: 1. load 2. store 3. miss 4. insert
    // special: when a block is kicked out of cache, its data need to be synced to main memory
    when(is_load | is_store){
        // a set contains a row of data, including valid, tag, index data blocks and used
        val set1    =   DCache_Way1(index)
        val set2    =   DCache_Way2(index)

        val block1  =   set1.blocks
        val block2  =   set2.blocks

        val valid1  =   set1.valid
        val valid2  =   set2.valid

        val hit1    =   tag === set1.tag & valid1
        val hit2    =   tag === set2.tag & valid2
        val hit     =   hit1 | hit2

        miss    :=   ~hit
        // 4 blocks per set. A dword needs 2 blocks
        val which_block =   PriorityMux(Seq(
            (hit1,      block1),
            (hit2,      block2),
            (true.B,    0.U.asTypeOf(Vec(4, UInt(32.W)))),
        ))

        val dword_from_cache    =   Mux(addr_i(3), 
            Cat(which_block(3), which_block(2)),
            Cat(which_block(1), which_block(0))
        )

    }

    when(miss){
        io.dcache_miss_o.miss   :=  true.B
        io.dcache_miss_o.addr   :=  addr_i
    }

    when(io.dcache_insert_i.valid){
        val insert_index    =   io.dcache_insert_i.index
        val valid1  =   DCache_Way1(insert_index).valid
        val valid2  =   DCache_Way2(insert_index).valid

        val set1_used   =   DCache_Way1(insert_index).used
        val set2_used   =   DCache_Way2(insert_index).used

        val insert_addr =   Cat(io.dcache_insert_i.tag, io.dcache_insert_i.index, 0.U(4.W))
        printf("insert: %x\n", insert_addr)

        val insert_set  =   Cat(1.U, io.dcache_insert_i.tag, io.dcache_insert_i.index, io.dcache_insert_i.blocks.asUInt, 1.U).asTypeOf(new DCache_Set)
        when(~valid1){
            printf("1")
            DCache_Way1(insert_index)       :=  insert_set
            DCache_Way2(insert_index).used  :=  0.U
        }.elsewhen(~valid2){
            printf("2")
            DCache_Way2(insert_index)       :=  insert_set
            DCache_Way1(insert_index).used  :=  0.U
        }.otherwise{
            val sync_addr   =   Mux(set1_used,      //if set1 is recently used, kick out set2
                Cat(DCache_Way2(insert_index).tag, DCache_Way2(insert_index).index, 0.U(4.W)),
                Cat(DCache_Way1(insert_index).tag, DCache_Way1(insert_index).index, 0.U(4.W)),
            )
            io.sync_o.valid :=  true.B
            io.sync_o.addr  :=  sync_addr
            when(~set1_used){
            printf("3")
                DCache_Way1(insert_index)       :=  insert_set
                DCache_Way2(insert_index).used  :=  0.U
                io.sync_o.data  :=  DCache_Way1(insert_index).blocks.asTypeOf(Vec(4, UInt(32.W)))
                //sync()
            }.otherwise{
            printf("4")
                DCache_Way2(insert_index)       :=  insert_set
                DCache_Way1(insert_index).used  :=  0.U
                io.sync_o.data  :=  DCache_Way2(insert_index).blocks.asTypeOf(Vec(4, UInt(32.W)))
            }
        }
    }



    io.writeOp_o            :=  io.writeOp_i
    io.writeOp_o.rf.wdata   :=  Mux(is_load, io.loadVal_i, io.writeOp_i.rf.wdata)

    io.debug_o      :=  io.debug_i
    //disable bypass on store
    io.mem_fwd_o.rf.rd      :=  Mux(is_store, 0.U, io.writeOp_o.rf.rd)
    io.mem_fwd_o.rf.wdata   :=  io.writeOp_o.rf.wdata

    io.mem_fwd_o.csr.addr   :=  io.writeOp_o.csr.waddr
    io.mem_fwd_o.csr.wdata  :=  io.writeOp_o.csr.wdata

}

class DCache_Set extends Bundle{
    // 4 + 8 + 20
    val valid   =   Bool()
    val tag     =   UInt(20.W)
    val index   =   UInt(8.W)   // sync need to know the address, so we need to keep track of this
    val blocks  =   Vec(4, UInt(32.W))
    val used    =   Bool()      // lru replacement
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

class Sync extends Bundle{
    val valid   =   Bool()
    val addr    =   UInt(64.W)
    val data    =   Vec(4, UInt(32.W))
}
import chisel3._
import chisel3.util._

import Util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new WriteRfOp)
        val memOp_i     = Input(new MemOp)
        val loadVal_i   = Input(UInt(64.W))

        val writeRfOp_o = Output(new WriteRfOp)
        val debug_i     = Input (new Debug_Bundle)
        val debug_o     = Output(new Debug_Bundle)
    })
    //little endian

    val isLoad      = io.memOp_i.isLoad
    val isStore     = io.memOp_i.isStore

    val sdata   =   io.memOp_i.sdata
    val addr    =   io.memOp_i.addr
    /*
    when(isStore){
        switch(io.memOp_i.length){
            is(0.U){
                printf("sb: 0x%x    =>  pmem[0x%x]\n", sdata(7, 0 ), addr)
            }
            is(1.U){
                printf("sh: 0x%x    =>  pmem[0x%x]\n", sdata(15, 0), addr)
            }
            is(2.U){
                printf("sw: 0x%x    =>  pmem[0x%x]\n", sdata(31, 0), addr)
            }
            is(3.U){
                printf("sd: 0x%x    =>  pmem[0x%x]\n", sdata, addr)
            }
        }

    }

    when(isLoad){
        printf("[x%d]   <=  0x%x\n",io.writeRfOp_i.rd,  io.loadVal_i)
    }
*/
    io.writeRfOp_o          :=  io.writeRfOp_i
    io.writeRfOp_o.wdata    :=  Mux(isLoad, io.loadVal_i, io.writeRfOp_i.wdata)

/*
    whne(isStore){
        printf("store a data 0x%x to address 0x%x\n", sdata, )
    }
*/
    //val test = Wire(Vec(8, UInt(8.W)))

    io.debug_o      :=  io.debug_i
}
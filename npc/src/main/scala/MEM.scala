import chisel3._
import chisel3.util._

import Util._

class MEM extends Module{
    val io = IO(new Bundle{
        val writeRfOp_i = Input(new WriteRfOp)
        val memOp       = Input(new MemOp)

        val writeRfOp_o = Output(new WriteRfOp)

        val debug_i     = Input (new Debug_Bundle)
        val debug_o     = Output(new Debug_Bundle)
    })
    //little endian
/*
    val ram1 = Mem(1 << 36, UInt(8.W))
    val ram2 = Mem(1 << 36, UInt(8.W))
    val ram3 = Mem(1 << 36, UInt(8.W))
    val ram4 = Mem(1 << 36, UInt(8.W))
    val ram5 = Mem(1 << 36, UInt(8.W))
    val ram6 = Mem(1 << 36, UInt(8.W))
    val ram7 = Mem(1 << 36, UInt(8.W))
    val ram8 = Mem(1 << 36, UInt(8.W))
*/
    val ram = Mem(1 << 39, UInt(8.W))

    val isLoad      = io.memOp.isLoad
    val isStore     = io.memOp.isStore

    //val addr   = io.memOp.addr & ~"b111".U(64.W)       //load 8 aligned bytes from Mem to be used
    val addr        = io.memOp.addr
    val readMask    = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U ->  "h00000000000000ff".U,      //8
        1.U ->  "h000000000000ffff".U,      //16  
        2.U ->  "h00000000ffffffff".U,      //32
        3.U ->  "hffffffffffffffff".U,      //64
    ))
    //assume the address is aligned
    //could be improved..
    //val dword   = Cat(ram(addr), ram(load_addr+1.U),ram(load_addr+2.U), ram(load_addr+3.U),ram(load_addr+4.U), ram(load_addr+5.U),ram(load_addr+6.U), ram(load_addr+7.U))
    //val dword   = Cat(ram(addr), ram(addr+1.U),ram(addr+2.U), ram(addr+3.U),ram(addr+4.U), ram(addr+5.U),ram(addr+6.U), ram(addr+7.U))
    val dword   = Cat(ram(addr+7.U), ram(addr+6.U),ram(addr+5.U), ram(addr+4.U),ram(addr+3.U), ram(addr+2.U),ram(addr+1.U), ram(addr))

    val loadval = dword & readMask      //before sign extended
    val loadVal = MuxLookup(io.memOp.length, 0.U, Seq(
        0.U   ->  Mux(io.memOp.sign, SEXT(loadval, 8,  64), loadval),
        1.U   ->  Mux(io.memOp.sign, SEXT(loadval, 16, 64), loadval),
        2.U   ->  Mux(io.memOp.sign, SEXT(loadval, 32, 64), loadval),
        3.U   ->  loadval,
    ))
    val sel = io.memOp.sel

    val sdata   =   io.memOp.sdata// & mask
    when(isStore){
        /*
        ram1(addr)  :=  Mux(sel(0), sdata(7,  0 ), ram1(addr))
        ram2(addr)  :=  Mux(sel(1), sdata(15, 8 ), ram2(addr))
        ram3(addr)  :=  Mux(sel(2), sdata(23, 16), ram3(addr))
        ram4(addr)  :=  Mux(sel(3), sdata(31, 24), ram4(addr))
        ram5(addr)  :=  Mux(sel(4), sdata(39, 32), ram5(addr))
        ram6(addr)  :=  Mux(sel(5), sdata(47, 40), ram6(addr))
        ram7(addr)  :=  Mux(sel(6), sdata(55, 48), ram7(addr))
        ram8(addr)  :=  Mux(sel(7), sdata(63, 56), ram8(addr))
        */
        switch(io.memOp.length){
            is(0.U){
                ram(addr)   :=  sdata(7, 0)
                printf("sb: 0x%x    =>  pmem[0x%x]\n", sdata(7, 0), addr)
            }
            is(1.U){
                ram(addr)       :=  sdata(7,  0)
                ram(addr + 1.U) :=  sdata(15, 8)
                printf("sh  0x%x    =>  pmem[0x%x]\n", sdata(15,0), addr)
            }
            is(2.U){
                ram(addr)       :=  sdata(7,  0)
                ram(addr + 1.U) :=  sdata(15, 8)
                ram(addr + 2.U) :=  sdata(23, 16)
                ram(addr + 3.U) :=  sdata(31, 24)
                printf("sw: 0x%x    =>  pmem[0x%x]\n", sdata(31,0), addr)
            }
            is(3.U){
                ram(addr)       :=  sdata(7,  0 )
                ram(addr + 1.U) :=  sdata(15, 8 )
                ram(addr + 2.U) :=  sdata(23, 16)
                ram(addr + 3.U) :=  sdata(31, 24)
                ram(addr + 4.U) :=  sdata(39, 32)
                ram(addr + 5.U) :=  sdata(47, 40)
                ram(addr + 6.U) :=  sdata(55, 48)
                ram(addr + 7.U) :=  sdata(63, 56)
                printf("sd: 0x%x    =>  pmem[0x%x]\n", sdata, addr)
            }
        }
        /*
        ram.write(addr,       sdata(7,  0 ))
        ram.write(addr + 1.U, sdata(15, 8 ))
        ram.write(addr + 2.U, sdata(23, 16))
        ram.write(addr + 3.U, sdata(31, 24))
        ram.write(addr + 4.U, sdata(39, 32))
        ram.write(addr + 5.U, sdata(47, 40))
        ram.write(addr + 6.U, sdata(55, 48))
        ram.write(addr + 7.U, sdata(63, 56))
        */
    }

    when(isLoad){
        printf("[x%d]   <=  0x%x\n",io.writeRfOp_i.rd,  loadVal)
    }


    io.writeRfOp_o          :=  io.writeRfOp_i
    io.writeRfOp_o.wdata    :=  Mux(isLoad, loadVal, io.writeRfOp_i.wdata)
/*
    whne(isStore){
        printf("store a data 0x%x to address 0x%x\n", sdata, )
    }
*/
    //val test = Wire(Vec(8, UInt(8.W)))

    io.debug_o      :=  io.debug_i
}
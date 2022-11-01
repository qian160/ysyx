import org.scalatest.flatspec.AnyFlatSpec
import scala.io.StdIn           //debug
import chisel3._                //basic data types
import chisel3.iotesters._      //peek poke expert
import scala.util.Random        //debug
import chiseltest._             //test
import chisel3.util._
import chisel3.experimental._
import chisel3.stage._
import Color._

class TOP extends Module{
    //to make tests easier, we expose the inst fetch ports in top, which can be used by verilator and chiseltest
    //now TOP acts like IF, and IF is useless, just passes the signal
    val io = IO(new Bundle{
        //set by cpp
        //debug-use signals, just add to the output port (top module's input can't be assigned by its sub-Module)
        val timer_i   = Input (UInt(64.W))  // generated by cpp

        val csrData   = Output(new CsrData)
        val regs      = Output(Vec(32, UInt(64.W)))
        val pc_o      = Output(UInt(64.W))  // set by IF, this port just lets cpp know the value of pc, which is in IF, and we pass it to there
        val inst_o    = Output(UInt(32.W))  // set by cpp
        val o1        = Output(UInt(64.W))  // to avoid dce
        val o2        = Output(UInt(64.W))  // to avoid dce
        val src1      = Output(UInt(64.W))
        val src2      = Output(UInt(64.W))

    })
    //comb logic, pipeline stages
    val IF          =   Module(new IF)
    val ID          =   Module(new ID)
    val EX          =   Module(new EX)
    val MEM         =   Module(new MEM)
    val WB          =   Module(new WB)
    val Regfile     =   Module(new Regfile)
    val Csr         =   Module(new CSR)
    val Main_Memory =   Module(new MAIN_MEMORY)
    val Control     =   Module(new CONTROL)

    //pipeline registers
    val IF_ID   =   Module(new IF_ID)
    val ID_EX   =   Module(new ID_EX)
    val EX_MEM  =   Module(new EX_MEM)
    val MEM_WB  =   Module(new MEM_WB)

    IF.io.branchOp_i    :=  ID.io.decInfo_o.branchOp
    IF.io.inst_i        :=  Main_Memory.io.inst_o

    IF_ID.io.inst_i     :=  IF.io.inst_o
    IF_ID.io.pc_i       :=  IF.io.pc_o

    Main_Memory.io.pc_i     :=  IF.io.pc_o
    Main_Memory.io.timer_i  :=  io.timer_i
    Main_Memory.io.memOp_i  :=  MEM.io.memOp_i

    ID.io.inst_i      :=  IF_ID.io.inst_o
    ID.io.pc_i        :=  IF_ID.io.pc_o
    ID.io.csrData_i   :=  Csr.io.csrData_o
    ID.io.rfData_i    :=  Regfile.io.readRes_o
    //bypass
    ID.io.fwd_i.ex    :=  EX.io.ex_fwd_o
    ID.io.fwd_i.mem   :=  MEM.io.mem_fwd_o
    ID.io.fwd_i.wb    :=  WB.io.wb_fwd_o

    ID.io.fwd_i.prev_is_load    :=  EX.io.memOp_o.is_load
    ID.io.fwd_i.prev_rd         :=  EX.io.writeOp_o.rf.rd

    ID_EX.io.debug_i    :=  ID.io.debug_o
    ID_EX.io.decInfo_i  :=  ID.io.decInfo_o

    Regfile.io.readRfOp_i     :=  ID.io.readOp_o
    Regfile.io.writeRfOp_i    :=  WB.io.writeOp_o.rf
    //read
    Csr.io.csrAddr_i    :=  ID.io.readOp_o.csrAddr
    Csr.io.writeOp_i    :=  WB.io.writeOp_o.csr

    EX.io.decInfo_i     :=  ID_EX.io.decInfo_o

    EX_MEM.io.writeOp_i :=  EX.io.writeOp_o
    EX_MEM.io.memOp_i   :=  EX.io.memOp_o
    EX_MEM.io.debug_i   :=  EX.io.debug_o

    MEM.io.writeOp_i    :=  EX_MEM.io.writeOp_o
    MEM.io.memOp_i      :=  EX_MEM.io.memOp_o
    MEM.io.loadVal_i    :=  Main_Memory.io.loadVal_o

    MEM_WB.io.writeOp_i :=  MEM.io.writeOp_o

    WB.io.writeOp_i     :=  MEM_WB.io.writeOp_o

    //TOP module's output, for debug use and also to avoid dce
    io.o1       :=  WB.io.writeOp_o.rf.wdata
    io.o2       :=  WB.io.writeOp_o.csr.wdata
    io.src1     :=  ID.io.decInfo_o.aluOp.src1
    io.src2     :=  ID.io.decInfo_o.aluOp.src2
    io.inst_o   :=  IF.io.inst_o
    io.pc_o     :=  IF.io.pc_o
    io.regs     :=  Regfile.io.regs_o
    io.csrData  :=  Csr.io.csrData_o

    dontTouch(io.csrData)
    dontTouch(io.regs)

    IF.io.ctrl_i.flush      :=  Control.io.flush_o(0)
    IF.io.ctrl_i.stall      :=  Control.io.stall_o(0)

    IF_ID.io.ctrl_i.flush   :=  Control.io.flush_o(1)
    IF_ID.io.ctrl_i.stall   :=  Control.io.stall_o(1)

    ID_EX.io.ctrl_i.flush   :=  Control.io.flush_o(2)
    ID_EX.io.ctrl_i.stall   :=  Control.io.stall_o(2)

    EX_MEM.io.ctrl_i.flush  :=  Control.io.flush_o(3)
    EX_MEM.io.ctrl_i.stall  :=  Control.io.stall_o(3)

    MEM_WB.io.ctrl_i.flush  :=  Control.io.flush_o(4)
    MEM_WB.io.ctrl_i.stall  :=  Control.io.stall_o(4)

    Control.io.id_flush_req :=  ID.io.flush_req_o
    Control.io.id_stall_req :=  ID.io.stall_req_o
    Control.io.ex_stall_req :=  0.U


    //debug
    EX.io. debug_i  :=  ID.io.debug_o
    MEM.io.debug_i  :=  EX.io.debug_o
    WB.io.debug     :=  MEM.io.debug_o
}

object Gen {
    def main(args:Array[String]) : Unit = {
        println(Yellow("Generate Verilog..."))
        //println(getVerilogString(new seg_scan))
        (new chisel3.stage.ChiselStage).emitVerilog(new TOP, Array("--target-dir", "src/main/scala/verilator/verilog/"))      //--target-dir , --no-dce
        //(new chisel3.stage.ChiselStage).execute(args, Seq(ChiselGeneratorAnnotation(() => new TOP)))

        println(Green("Done"))

    }
}
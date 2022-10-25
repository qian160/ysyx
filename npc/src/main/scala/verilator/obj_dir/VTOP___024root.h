// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTOP__Syms;
class VTOP___024unit;

VL_MODULE(VTOP___024root) {
  public:
    // CELLS
    VTOP___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_writeOp_rf_wen;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_writeOp_csr_wen;
        CData/*4:0*/ TOP__DOT__ID_io_decInfo_o_aluOp_opt;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_memOp_isStore;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_memOp_unsigned;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_140;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_155;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_170;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_185;
        CData/*4:0*/ TOP__DOT__ID__DOT__decRes_0;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_203;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_218;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_233;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_248;
        CData/*0:0*/ TOP__DOT__ID__DOT___GEN_83;
        CData/*2:0*/ TOP__DOT__ID__DOT___GEN_112;
        CData/*0:0*/ TOP__DOT__Main_Memory__DOT___T_2;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT__store_en;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_12;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_13;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_14;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_15;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_16;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_17;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_18;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_19;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_28;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_29;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_30;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_31;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_44;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_45;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_46;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_47;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_60;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_61;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_62;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_63;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_76;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_77;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_78;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_79;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_80;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_81;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_82;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_83;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_92;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_93;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_94;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_95;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_96;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_97;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_98;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_99;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_108;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_109;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_110;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_111;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_112;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_113;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_114;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_115;
    };
    struct {
        CData/*0:0*/ TOP__DOT__Main_Memory__DOT___T_69;
        CData/*0:0*/ TOP__DOT__Main_Memory__DOT___T_74;
        CData/*0:0*/ TOP__DOT__Main_Memory__DOT__VGA__DOT__read_width;
        CData/*0:0*/ TOP__DOT__Main_Memory__DOT__VGA__DOT__read_height;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*11:0*/ TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr;
        SData/*12:0*/ TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_13;
        SData/*11:0*/ TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16;
        VL_OUT(io_inst_o,31,0);
        IData/*31:0*/ TOP__DOT__IF__DOT__pc;
        IData/*20:0*/ TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24;
        VlWide<3>/*75:0*/ TOP__DOT__ID__DOT___GEN_108;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_13;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_15;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_34;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_42;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_68;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_77;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_109;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_126;
        IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_133;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_155;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_167;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_185;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_191;
        IData/*31:0*/ TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data;
        VlWide<3>/*94:0*/ TOP__DOT__Main_Memory__DOT__loadVal_temp;
        IData/*31:0*/ TOP__DOT__Main_Memory__DOT__initvar;
        VL_IN64(io_timer_i,63,0);
        VL_OUT64(io_csrData_csrVal,63,0);
        VL_OUT64(io_csrData_epc,63,0);
        VL_OUT64(io_csrData_tvec,63,0);
        VL_OUT64(io_csrData_cause,63,0);
        VL_OUT64(io_csrData_status,63,0);
        VL_OUT64(io_regs_0,63,0);
        VL_OUT64(io_regs_1,63,0);
        VL_OUT64(io_regs_2,63,0);
        VL_OUT64(io_regs_3,63,0);
        VL_OUT64(io_regs_4,63,0);
        VL_OUT64(io_regs_5,63,0);
        VL_OUT64(io_regs_6,63,0);
        VL_OUT64(io_regs_7,63,0);
        VL_OUT64(io_regs_8,63,0);
        VL_OUT64(io_regs_9,63,0);
        VL_OUT64(io_regs_10,63,0);
        VL_OUT64(io_regs_11,63,0);
        VL_OUT64(io_regs_12,63,0);
        VL_OUT64(io_regs_13,63,0);
        VL_OUT64(io_regs_14,63,0);
        VL_OUT64(io_regs_15,63,0);
        VL_OUT64(io_regs_16,63,0);
        VL_OUT64(io_regs_17,63,0);
        VL_OUT64(io_regs_18,63,0);
        VL_OUT64(io_regs_19,63,0);
        VL_OUT64(io_regs_20,63,0);
        VL_OUT64(io_regs_21,63,0);
        VL_OUT64(io_regs_22,63,0);
        VL_OUT64(io_regs_23,63,0);
        VL_OUT64(io_regs_24,63,0);
        VL_OUT64(io_regs_25,63,0);
        VL_OUT64(io_regs_26,63,0);
        VL_OUT64(io_regs_27,63,0);
        VL_OUT64(io_regs_28,63,0);
        VL_OUT64(io_regs_29,63,0);
    };
    struct {
        VL_OUT64(io_regs_30,63,0);
        VL_OUT64(io_regs_31,63,0);
        VL_OUT64(io_pc_o,63,0);
        VL_OUT64(io_o1,63,0);
        VL_OUT64(io_o2,63,0);
        VL_OUT64(io_src1,63,0);
        VL_OUT64(io_src2,63,0);
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata;
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_o_aluOp_src1;
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_o_memOp_sdata;
        QData/*63:0*/ TOP__DOT__MEM_io_writeOp_o_rf_wdata;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_o_rs1Val;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_o_rs2Val;
        QData/*63:0*/ TOP__DOT__Csr_io_csrData_o_csrVal;
        QData/*63:0*/ TOP__DOT__IF__DOT___GEN_0;
        QData/*63:0*/ TOP__DOT__ID__DOT__immI;
        QData/*63:0*/ TOP__DOT__ID__DOT__rsVal;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_0;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_1;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_2;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_3;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_4;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_5;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_6;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_7;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_8;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_9;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_10;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_11;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_12;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_13;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_14;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_15;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_16;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_17;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_18;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_19;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_20;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_21;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_22;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_23;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_24;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_25;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_26;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_27;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_28;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_29;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_30;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_31;
        QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_77;
        QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_90;
        QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_109;
        QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_122;
        QData/*63:0*/ TOP__DOT__Csr__DOT__mepc;
        QData/*63:0*/ TOP__DOT__Csr__DOT__mcause;
        QData/*63:0*/ TOP__DOT__Csr__DOT__mstatus;
        QData/*63:0*/ TOP__DOT__Csr__DOT__mtvec;
        QData/*63:0*/ TOP__DOT__Csr__DOT___GEN_1;
        QData/*63:0*/ TOP__DOT__Csr__DOT___GEN_2;
        QData/*63:0*/ TOP__DOT__Main_Memory__DOT__dword;
        QData/*63:0*/ TOP__DOT__Main_Memory__DOT___T_62;
        VlUnpacked<IData/*31:0*/, 1048576> TOP__DOT__Main_Memory__DOT__ram;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VTOP__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTOP___024root(VTOP__Syms* symsp, const char* name);
    ~VTOP___024root();
    VL_UNCOPYABLE(VTOP___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

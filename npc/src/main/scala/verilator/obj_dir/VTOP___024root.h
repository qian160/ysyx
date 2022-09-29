// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTOP.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class VTOP__Syms;
VL_MODULE(VTOP___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_instType,4,0);
        VL_OUT8(io_branch,0,0);
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_writeRfOp_wen;
        CData/*4:0*/ TOP__DOT__ID_io_decInfo_aluOp_opt;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_branchOp_happen;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_memOp_isStore;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_memOp_sign;
        CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_187;
        CData/*4:0*/ TOP__DOT__ID__DOT__decRes_0;
        CData/*2:0*/ TOP__DOT__ID__DOT___GEN_67;
        CData/*0:0*/ TOP__DOT__MEM__DOT___GEN_93;
        CData/*0:0*/ TOP__DOT__MEM__DOT___GEN_100;
        CData/*0:0*/ TOP__DOT__MEM__DOT___GEN_111;
        CData/*0:0*/ __Vclklast__TOP__clock;
        SData/*12:0*/ TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11;
        VL_OUT(io_inst_o,31,0);
        IData/*31:0*/ TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data;
        IData/*31:0*/ TOP__DOT__IF__DOT__pc;
        IData/*31:0*/ TOP__DOT__IF__DOT__initvar;
        VlWide<3>/*75:0*/ TOP__DOT__ID__DOT___GEN_63;
        VlWide<4>/*126:0*/ TOP__DOT__EX__DOT__aluRes;
        VL_OUT64(io_pc_o,63,0);
        VL_OUT64(io_o,63,0);
        VL_OUT64(io_src1,63,0);
        VL_OUT64(io_src2,63,0);
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_aluOp_src1;
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_memOp_sdata;
        QData/*63:0*/ TOP__DOT__MEM_io_writeRfOp_o_wdata;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_rs1Val;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_rs2Val;
        QData/*63:0*/ TOP__DOT__IF__DOT___GEN_0;
        QData/*63:0*/ TOP__DOT__ID__DOT__immI;
        QData/*63:0*/ TOP__DOT__MEM__DOT__loadval;
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
    };
    struct {
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_29;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_30;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_31;
        VlUnpacked<IData/*31:0*/, 32768> TOP__DOT__IF__DOT__inst_rom;
        VlUnpacked<CData/*7:0*/, 128> TOP__DOT__MEM__DOT__ram;
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

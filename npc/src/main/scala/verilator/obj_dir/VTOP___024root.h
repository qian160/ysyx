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
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_writeRfOp_wen;
        CData/*4:0*/ TOP__DOT__ID_io_decInfo_o_aluOp_opt;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_memOp_isStore;
        CData/*0:0*/ TOP__DOT__ID_io_decInfo_o_memOp_unsigned;
        CData/*4:0*/ TOP__DOT__ID__DOT__decRes_0;
        CData/*2:0*/ TOP__DOT__ID__DOT___GEN_61;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_2;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_108;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_109;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_110;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_111;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_112;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_113;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_114;
        CData/*7:0*/ TOP__DOT__Main_Memory__DOT___GEN_115;
        CData/*0:0*/ __Vclklast__TOP__clock;
        VL_OUT(io_inst_o,31,0);
        IData/*31:0*/ TOP__DOT__IF__DOT__pc;
        VlWide<3>/*75:0*/ TOP__DOT__ID__DOT___GEN_57;
        VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_189;
        IData/*31:0*/ TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data;
        VlWide<3>/*94:0*/ TOP__DOT__Main_Memory__DOT__loadVal_temp;
        IData/*31:0*/ TOP__DOT__Main_Memory__DOT__initvar;
        VL_OUT64(io_pc_o,63,0);
        VL_OUT64(io_o,63,0);
        VL_OUT64(io_src1,63,0);
        VL_OUT64(io_src2,63,0);
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_o_aluOp_src1;
        QData/*63:0*/ TOP__DOT__ID_io_decInfo_o_memOp_sdata;
        QData/*63:0*/ TOP__DOT__MEM_io_writeRfOp_o_wdata;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_o_rs1Val;
        QData/*63:0*/ TOP__DOT__Regfile_io_readRes_o_rs2Val;
        QData/*63:0*/ TOP__DOT__IF__DOT___GEN_0;
        QData/*63:0*/ TOP__DOT__ID__DOT__immI;
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
    };
    struct {
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_27;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_28;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_29;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_30;
        QData/*63:0*/ TOP__DOT__Regfile__DOT__registers_31;
        QData/*63:0*/ TOP__DOT__Main_Memory__DOT__dword;
        QData/*63:0*/ TOP__DOT__Main_Memory__DOT___T_27;
        VlUnpacked<IData/*31:0*/, 16777216> TOP__DOT__Main_Memory__DOT__ram;
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

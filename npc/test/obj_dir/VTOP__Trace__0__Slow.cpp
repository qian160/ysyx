// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declQuad(c+65,"io_o", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declQuad(c+65,"io_o", false,-1, 63,0);
    tracep->declBus(c+67,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"ID_io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declBus(c+68,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+68,"ID_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"ID_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+69,"ID_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+68,"ID_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+68,"ID_io_decInfo_aluop", false,-1, 4,0);
    tracep->declBus(c+68,"EX_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"EX_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+69,"EX_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+68,"EX_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+68,"EX_io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+71,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+68,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+68,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+68,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+68,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+68,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+63,"Regfile_clock", false,-1);
    tracep->declBit(c+64,"Regfile_reset", false,-1);
    tracep->declBus(c+68,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+71,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+68,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+1,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+68,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+69,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+68,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+68,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+71,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declArray(c+72,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+67,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declBus(c+68,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+68,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+69,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+68,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+68,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declQuad(c+69,"imm_I", false,-1, 63,0);
    tracep->declBus(c+76,"decRes_0", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+71,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+63,"clock", false,-1);
    tracep->declBit(c+64,"reset", false,-1);
    tracep->declBus(c+68,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+71,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+1,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+1,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+3,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+5,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+7,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+9,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+13,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+15,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+17,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+19,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+21,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+23,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+25,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+27,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+29,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+31,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+33,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_30", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+71,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+71,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+68,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+69,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_h9b32b598__0;
    // Body
    tracep->fullQData(oldp+1,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+3,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+5,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+11,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+13,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+15,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+19,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+21,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+23,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+27,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+29,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+31,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+33,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+39,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullBit(oldp+63,(vlSelf->clock));
    tracep->fullBit(oldp+64,(vlSelf->reset));
    tracep->fullQData(oldp+65,(vlSelf->io_o),64);
    tracep->fullIData(oldp+67,(0U),32);
    tracep->fullCData(oldp+68,(0U),5);
    tracep->fullQData(oldp+69,(0ULL),64);
    tracep->fullBit(oldp+71,(0U));
    __Vtemp_h9b32b598__0[0U] = 0U;
    __Vtemp_h9b32b598__0[1U] = 0U;
    __Vtemp_h9b32b598__0[2U] = 0U;
    __Vtemp_h9b32b598__0[3U] = 0U;
    tracep->fullWData(oldp+72,(__Vtemp_h9b32b598__0),127);
    tracep->fullCData(oldp+76,(7U),4);
}

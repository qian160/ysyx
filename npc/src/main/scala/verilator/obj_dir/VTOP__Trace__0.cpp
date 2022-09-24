// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgQData(oldp+0,(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val),64);
        tracep->chgQData(oldp+2,(vlSelf->TOP__DOT__ID_io_decInfo_src2),64);
        tracep->chgCData(oldp+4,((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))),5);
        tracep->chgCData(oldp+5,(vlSelf->TOP__DOT__ID_io_decInfo_aluop),5);
        tracep->chgBit(oldp+6,((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))));
        tracep->chgBit(oldp+7,((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))));
        tracep->chgQData(oldp+8,((((QData)((IData)(
                                                   vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
        tracep->chgWData(oldp+10,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
        tracep->chgCData(oldp+14,(vlSelf->TOP__DOT__ID__DOT__decRes_0),4);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+15,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+17,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+19,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+21,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+23,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+25,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+27,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+29,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+31,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+33,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgQData(oldp+37,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+39,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    }
    tracep->chgBit(oldp+77,(vlSelf->clock));
    tracep->chgBit(oldp+78,(vlSelf->reset));
    tracep->chgQData(oldp+79,(vlSelf->io_pc_i),64);
    tracep->chgIData(oldp+81,(vlSelf->io_inst_i),32);
    tracep->chgQData(oldp+82,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+84,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+85,(vlSelf->io_o),64);
    tracep->chgQData(oldp+87,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+89,(vlSelf->io_src2),64);
    tracep->chgQData(oldp+91,(((0x1eU == (0x1fU & (vlSelf->io_inst_o 
                                                   >> 0xfU)))
                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                : vlSelf->TOP__DOT__Regfile__DOT___GEN_91)),64);
    tracep->chgCData(oldp+93,((0x1fU & (vlSelf->io_inst_o 
                                        >> 0xfU))),5);
    tracep->chgCData(oldp+94,((0x1fU & (vlSelf->io_inst_o 
                                        >> 7U))),5);
    tracep->chgQData(oldp+95,((((- (QData)((IData)(
                                                   (vlSelf->io_inst_o 
                                                    >> 0x1fU)))) 
                                << 0xcU) | (QData)((IData)(
                                                           (vlSelf->io_inst_o 
                                                            >> 0x14U))))),64);
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

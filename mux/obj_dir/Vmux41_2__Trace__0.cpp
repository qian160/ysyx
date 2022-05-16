// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41_2__Syms.h"


void Vmux41_2___024root__trace_chg_sub_0(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

void Vmux41_2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_chg_top_0\n"); );
    // Init
    Vmux41_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_2___024root*>(voidSelf);
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux41_2___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vmux41_2___024root__trace_chg_sub_0(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgSData(oldp+0,(vlSelf->mux41_2__DOT____Vcellinp__m0____pinNumber3),16);
        tracep->chgCData(oldp+1,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[0]),4);
        tracep->chgCData(oldp+2,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[1]),4);
        tracep->chgCData(oldp+3,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[2]),4);
        tracep->chgCData(oldp+4,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[3]),4);
        tracep->chgCData(oldp+5,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[0]),2);
        tracep->chgCData(oldp+6,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[1]),2);
        tracep->chgCData(oldp+7,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[2]),2);
        tracep->chgCData(oldp+8,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[3]),2);
        tracep->chgCData(oldp+9,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[0]),2);
        tracep->chgCData(oldp+10,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[1]),2);
        tracep->chgCData(oldp+11,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[2]),2);
        tracep->chgCData(oldp+12,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[3]),2);
        tracep->chgCData(oldp+13,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__lut_out),2);
        tracep->chgBit(oldp+14,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__hit));
    }
    tracep->chgCData(oldp+15,(vlSelf->x0),2);
    tracep->chgCData(oldp+16,(vlSelf->x1),2);
    tracep->chgCData(oldp+17,(vlSelf->x2),2);
    tracep->chgCData(oldp+18,(vlSelf->x3),2);
    tracep->chgCData(oldp+19,(vlSelf->y),2);
    tracep->chgCData(oldp+20,(vlSelf->f),2);
}

void Vmux41_2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_cleanup\n"); );
    // Init
    Vmux41_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_2___024root*>(voidSelf);
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

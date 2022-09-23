// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__Regfile__DOT__registers_29 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_28 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_27 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_26 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_25 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_12 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_11 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_10 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_9 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_8 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_7 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_2 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_30 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_1 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_3 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_4 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_5 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_6 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_13 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_14 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_15 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_16 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_17 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_18 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_19 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_20 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_21 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_22 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_23 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_24 = 0ULL;
    }
}

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

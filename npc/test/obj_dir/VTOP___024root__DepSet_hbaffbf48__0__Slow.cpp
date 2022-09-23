// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->io_o = 0ULL;
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Body
    VTOP___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTOP___024root___final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___final\n"); );
}

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_o = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_3 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_4 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_5 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_6 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_7 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_8 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_9 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_10 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_11 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_12 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_13 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_14 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_15 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_16 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_17 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_18 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_19 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_20 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_21 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_22 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_23 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_24 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_25 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_26 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_27 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_28 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_29 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_30 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

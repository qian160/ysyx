// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux41_2.h for the primary calling header

#include "verilated.h"

#include "Vmux41_2___024root.h"

VL_ATTR_COLD void Vmux41_2___024root___eval_initial(Vmux41_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root___eval_initial\n"); );
}

void Vmux41_2___024root___combo__TOP__0(Vmux41_2___024root* vlSelf);

VL_ATTR_COLD void Vmux41_2___024root___eval_settle(Vmux41_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root___eval_settle\n"); );
    // Body
    Vmux41_2___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vmux41_2___024root___final(Vmux41_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root___final\n"); );
}

VL_ATTR_COLD void Vmux41_2___024root___ctor_var_reset(Vmux41_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x0 = VL_RAND_RESET_I(2);
    vlSelf->x1 = VL_RAND_RESET_I(2);
    vlSelf->x2 = VL_RAND_RESET_I(2);
    vlSelf->x3 = VL_RAND_RESET_I(2);
    vlSelf->y = VL_RAND_RESET_I(2);
    vlSelf->f = VL_RAND_RESET_I(2);
    vlSelf->mux41_2__DOT____Vcellinp__m0____pinNumber3 = VL_RAND_RESET_I(16);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(2);
    vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

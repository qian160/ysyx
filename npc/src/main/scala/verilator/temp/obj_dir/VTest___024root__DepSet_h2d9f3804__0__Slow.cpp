// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTest___024root.h"

VL_ATTR_COLD void VTest___024root___eval_initial(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___eval_initial\n"); );
}

void VTest___024root___combo__TOP__0(VTest___024root* vlSelf);

VL_ATTR_COLD void VTest___024root___eval_settle(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___eval_settle\n"); );
    // Body
    VTest___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void VTest___024root___final(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___final\n"); );
}

VL_ATTR_COLD void VTest___024root___ctor_var_reset(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->panic = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(8);
    vlSelf->b = VL_RAND_RESET_I(8);
    vlSelf->c = VL_RAND_RESET_I(9);
}

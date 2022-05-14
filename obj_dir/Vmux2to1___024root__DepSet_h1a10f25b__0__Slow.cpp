// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2to1.h for the primary calling header

#include "verilated.h"

#include "Vmux2to1___024root.h"

VL_ATTR_COLD void Vmux2to1___024root___eval_initial(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___eval_initial\n"); );
}

void Vmux2to1___024root___combo__TOP__0(Vmux2to1___024root* vlSelf);

VL_ATTR_COLD void Vmux2to1___024root___eval_settle(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___eval_settle\n"); );
    // Body
    Vmux2to1___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vmux2to1___024root___final(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___final\n"); );
}

VL_ATTR_COLD void Vmux2to1___024root___ctor_var_reset(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->select = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
}

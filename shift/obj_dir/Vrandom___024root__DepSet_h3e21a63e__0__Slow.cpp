// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom___024root.h"

VL_ATTR_COLD void Vrandom___024root___initial__TOP__0(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->random__DOT__temp = 1U;
}

VL_ATTR_COLD void Vrandom___024root___settle__TOP__0(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data[0U] = ((1U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[1U] = ((2U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[2U] = ((4U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[3U] = ((8U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[4U] = ((0x10U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[5U] = ((0x20U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[6U] = ((0x40U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
    vlSelf->data[7U] = ((0x80U & (IData)(vlSelf->random__DOT__temp))
                         ? 0x9fU : 3U);
}

VL_ATTR_COLD void Vrandom___024root___eval_initial(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vrandom___024root___initial__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vrandom___024root___eval_settle(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_settle\n"); );
    // Body
    Vrandom___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vrandom___024root___final(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___final\n"); );
}

VL_ATTR_COLD void Vrandom___024root___ctor_var_reset(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->random__DOT__temp = VL_RAND_RESET_I(8);
}

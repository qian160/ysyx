// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour_OnOff.h for the primary calling header

#include "verilated.h"

#include "Vour_OnOff___024root.h"

VL_ATTR_COLD void Vour_OnOff___024root___eval_initial(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___eval_initial\n"); );
}

void Vour_OnOff___024root___combo__TOP__0(Vour_OnOff___024root* vlSelf);

VL_ATTR_COLD void Vour_OnOff___024root___eval_settle(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___eval_settle\n"); );
    // Body
    Vour_OnOff___024root___combo__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vour_OnOff___024root___final(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___final\n"); );
}

VL_ATTR_COLD void Vour_OnOff___024root___ctor_var_reset(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c = VL_RAND_RESET_I(1);
}

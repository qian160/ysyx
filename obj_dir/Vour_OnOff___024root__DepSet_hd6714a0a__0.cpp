// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vour_OnOff.h for the primary calling header

#include "verilated.h"

#include "Vour_OnOff___024root.h"

VL_INLINE_OPT void Vour_OnOff___024root___combo__TOP__0(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->c = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
}

void Vour_OnOff___024root___eval(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___eval\n"); );
    // Body
    Vour_OnOff___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vour_OnOff___024root___eval_debug_assertions(Vour_OnOff___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG

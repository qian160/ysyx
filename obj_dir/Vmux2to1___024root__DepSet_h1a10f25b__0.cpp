// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux2to1.h for the primary calling header

#include "verilated.h"

#include "Vmux2to1___024root.h"

VL_INLINE_OPT void Vmux2to1___024root___combo__TOP__0(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->y = (((IData)(vlSelf->a) & (~ (IData)(vlSelf->select))) 
                 | ((IData)(vlSelf->select) & (IData)(vlSelf->b)));
}

void Vmux2to1___024root___eval(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___eval\n"); );
    // Body
    Vmux2to1___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void Vmux2to1___024root___eval_debug_assertions(Vmux2to1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->select & 0xfeU))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG

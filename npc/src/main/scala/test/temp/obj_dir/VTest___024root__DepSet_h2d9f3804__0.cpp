// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTest.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTest___024root.h"

VL_INLINE_OPT void VTest___024root___combo__TOP__0(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___combo__TOP__0\n"); );
    // Body
    if (VL_UNLIKELY(vlSelf->panic)) {
        VL_FINISH_MT("Test.sv", 4, "");
    }
    vlSelf->c = (0x1ffU & ((IData)(vlSelf->a) + (IData)(vlSelf->b)));
}

void VTest___024root___eval(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___eval\n"); );
    // Body
    VTest___024root___combo__TOP__0(vlSelf);
}

#ifdef VL_DEBUG
void VTest___024root___eval_debug_assertions(VTest___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTest___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->panic & 0xfeU))) {
        Verilated::overWidthError("panic");}
}
#endif  // VL_DEBUG

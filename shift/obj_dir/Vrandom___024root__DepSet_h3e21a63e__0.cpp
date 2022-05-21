// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrandom.h for the primary calling header

#include "verilated.h"

#include "Vrandom___024root.h"

VL_INLINE_OPT void Vrandom___024root___sequent__TOP__0(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdly__random__DOT__temp;
    // Body
    __Vdly__random__DOT__temp = vlSelf->random__DOT__temp;
    __Vdly__random__DOT__temp = ((0x80U & ((((((IData)(vlSelf->random__DOT__temp) 
                                               >> 4U) 
                                              + ((IData)(vlSelf->random__DOT__temp) 
                                                 >> 3U)) 
                                             + ((IData)(vlSelf->random__DOT__temp) 
                                                >> 2U)) 
                                            + (IData)(vlSelf->random__DOT__temp)) 
                                           << 7U)) 
                                 | (0x7fU & ((IData)(vlSelf->random__DOT__temp) 
                                             >> 1U)));
    VL_WRITEF("%b\n\n",8,vlSelf->random__DOT__temp);
    vlSelf->random__DOT__temp = __Vdly__random__DOT__temp;
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

void Vrandom___024root___eval(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vrandom___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vrandom___024root___eval_debug_assertions(Vrandom___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG

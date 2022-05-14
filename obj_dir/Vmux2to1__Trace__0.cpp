// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2to1__Syms.h"


void Vmux2to1___024root__trace_chg_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep);

void Vmux2to1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_chg_top_0\n"); );
    // Init
    Vmux2to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2to1___024root*>(voidSelf);
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmux2to1___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vmux2to1___024root__trace_chg_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->a));
    tracep->chgBit(oldp+1,(vlSelf->b));
    tracep->chgBit(oldp+2,(vlSelf->select));
    tracep->chgBit(oldp+3,(vlSelf->y));
    tracep->chgBit(oldp+4,((1U & (~ (IData)(vlSelf->select)))));
    tracep->chgBit(oldp+5,(((IData)(vlSelf->a) & (~ (IData)(vlSelf->select)))));
    tracep->chgBit(oldp+6,(((IData)(vlSelf->select) 
                            & (IData)(vlSelf->b))));
}

void Vmux2to1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_cleanup\n"); );
    // Init
    Vmux2to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2to1___024root*>(voidSelf);
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

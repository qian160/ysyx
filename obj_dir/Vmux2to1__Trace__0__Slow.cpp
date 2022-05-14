// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux2to1__Syms.h"


VL_ATTR_COLD void Vmux2to1___024root__trace_init_sub__TOP__0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"select", false,-1);
    tracep->declBit(c+4,"y", false,-1);
    tracep->pushNamePrefix("mux2to1 ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"select", false,-1);
    tracep->declBit(c+4,"y", false,-1);
    tracep->declBit(c+5,"t1", false,-1);
    tracep->declBit(c+6,"t2", false,-1);
    tracep->declBit(c+7,"t3", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_init_top(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_init_top\n"); );
    // Body
    Vmux2to1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmux2to1___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmux2to1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux2to1___024root__trace_register(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux2to1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux2to1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux2to1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux2to1___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_full_top_0\n"); );
    // Init
    Vmux2to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux2to1___024root*>(voidSelf);
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux2to1___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vmux2to1___024root__trace_full_sub_0(Vmux2to1___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux2to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux2to1___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->a));
    tracep->fullBit(oldp+2,(vlSelf->b));
    tracep->fullBit(oldp+3,(vlSelf->select));
    tracep->fullBit(oldp+4,(vlSelf->y));
    tracep->fullBit(oldp+5,((1U & (~ (IData)(vlSelf->select)))));
    tracep->fullBit(oldp+6,(((IData)(vlSelf->a) & (~ (IData)(vlSelf->select)))));
    tracep->fullBit(oldp+7,(((IData)(vlSelf->select) 
                             & (IData)(vlSelf->b))));
}

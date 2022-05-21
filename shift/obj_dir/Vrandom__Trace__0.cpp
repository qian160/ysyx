// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrandom__Syms.h"


void Vrandom___024root__trace_chg_sub_0(Vrandom___024root* vlSelf, VerilatedVcd* tracep);

void Vrandom___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_chg_top_0\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrandom___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vrandom___024root__trace_chg_sub_0(Vrandom___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgBit(oldp+0,(vlSelf->clk));
    tracep->chgCData(oldp+1,(vlSelf->data[0]),8);
    tracep->chgCData(oldp+2,(vlSelf->data[1]),8);
    tracep->chgCData(oldp+3,(vlSelf->data[2]),8);
    tracep->chgCData(oldp+4,(vlSelf->data[3]),8);
    tracep->chgCData(oldp+5,(vlSelf->data[4]),8);
    tracep->chgCData(oldp+6,(vlSelf->data[5]),8);
    tracep->chgCData(oldp+7,(vlSelf->data[6]),8);
    tracep->chgCData(oldp+8,(vlSelf->data[7]),8);
    tracep->chgCData(oldp+9,(vlSelf->random__DOT__temp),8);
}

void Vrandom___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrandom___024root__trace_cleanup\n"); );
    // Init
    Vrandom___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrandom___024root*>(voidSelf);
    Vrandom__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}

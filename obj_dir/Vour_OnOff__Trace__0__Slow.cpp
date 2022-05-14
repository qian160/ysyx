// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vour_OnOff__Syms.h"


VL_ATTR_COLD void Vour_OnOff___024root__trace_init_sub__TOP__0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->pushNamePrefix("our_OnOff ");
    tracep->declBit(c+1,"a", false,-1);
    tracep->declBit(c+2,"b", false,-1);
    tracep->declBit(c+3,"c", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vour_OnOff___024root__trace_init_top(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root__trace_init_top\n"); );
    // Body
    Vour_OnOff___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vour_OnOff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vour_OnOff___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vour_OnOff___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vour_OnOff___024root__trace_register(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vour_OnOff___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vour_OnOff___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vour_OnOff___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vour_OnOff___024root__trace_full_sub_0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vour_OnOff___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root__trace_full_top_0\n"); );
    // Init
    Vour_OnOff___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vour_OnOff___024root*>(voidSelf);
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vour_OnOff___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vour_OnOff___024root__trace_full_sub_0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vour_OnOff___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->a));
    tracep->fullBit(oldp+2,(vlSelf->b));
    tracep->fullBit(oldp+3,(vlSelf->c));
}

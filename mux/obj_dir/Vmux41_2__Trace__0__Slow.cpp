// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux41_2__Syms.h"


VL_ATTR_COLD void Vmux41_2___024root__trace_init_sub__TOP__0(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+16,"x0", false,-1, 1,0);
    tracep->declBus(c+17,"x1", false,-1, 1,0);
    tracep->declBus(c+18,"x2", false,-1, 1,0);
    tracep->declBus(c+19,"x3", false,-1, 1,0);
    tracep->declBus(c+20,"y", false,-1, 1,0);
    tracep->declBus(c+21,"f", false,-1, 1,0);
    tracep->pushNamePrefix("mux41_2 ");
    tracep->declBus(c+16,"x0", false,-1, 1,0);
    tracep->declBus(c+17,"x1", false,-1, 1,0);
    tracep->declBus(c+18,"x2", false,-1, 1,0);
    tracep->declBus(c+19,"x3", false,-1, 1,0);
    tracep->declBus(c+20,"y", false,-1, 1,0);
    tracep->declBus(c+21,"f", false,-1, 1,0);
    tracep->pushNamePrefix("m0 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 1,0);
    tracep->declBus(c+20,"key", false,-1, 1,0);
    tracep->declBus(c+1,"lut", false,-1, 15,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+24,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+21,"out", false,-1, 1,0);
    tracep->declBus(c+20,"key", false,-1, 1,0);
    tracep->declBus(c+25,"default_out", false,-1, 1,0);
    tracep->declBus(c+1,"lut", false,-1, 15,0);
    tracep->declBus(c+22,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+2+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+6+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+10+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+14,"lut_out", false,-1, 1,0);
    tracep->declBit(c+15,"hit", false,-1);
    tracep->declBus(c+26,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vmux41_2___024root__trace_init_top(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_init_top\n"); );
    // Body
    Vmux41_2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmux41_2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmux41_2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vmux41_2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmux41_2___024root__trace_register(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmux41_2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmux41_2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmux41_2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmux41_2___024root__trace_full_sub_0(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmux41_2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_full_top_0\n"); );
    // Init
    Vmux41_2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmux41_2___024root*>(voidSelf);
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmux41_2___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vmux41_2___024root__trace_full_sub_0(Vmux41_2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux41_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux41_2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+1,(vlSelf->mux41_2__DOT____Vcellinp__m0____pinNumber3),16);
    tracep->fullCData(oldp+2,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[0]),4);
    tracep->fullCData(oldp+3,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[1]),4);
    tracep->fullCData(oldp+4,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[2]),4);
    tracep->fullCData(oldp+5,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__pair_list[3]),4);
    tracep->fullCData(oldp+6,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[0]),2);
    tracep->fullCData(oldp+7,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[1]),2);
    tracep->fullCData(oldp+8,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[2]),2);
    tracep->fullCData(oldp+9,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__key_list[3]),2);
    tracep->fullCData(oldp+10,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[0]),2);
    tracep->fullCData(oldp+11,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[1]),2);
    tracep->fullCData(oldp+12,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[2]),2);
    tracep->fullCData(oldp+13,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__data_list[3]),2);
    tracep->fullCData(oldp+14,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__lut_out),2);
    tracep->fullBit(oldp+15,(vlSelf->mux41_2__DOT__m0__DOT__i0__DOT__hit));
    tracep->fullCData(oldp+16,(vlSelf->x0),2);
    tracep->fullCData(oldp+17,(vlSelf->x1),2);
    tracep->fullCData(oldp+18,(vlSelf->x2),2);
    tracep->fullCData(oldp+19,(vlSelf->x3),2);
    tracep->fullCData(oldp+20,(vlSelf->y),2);
    tracep->fullCData(oldp+21,(vlSelf->f),2);
    tracep->fullIData(oldp+22,(4U),32);
    tracep->fullIData(oldp+23,(2U),32);
    tracep->fullIData(oldp+24,(0U),32);
    tracep->fullCData(oldp+25,(0U),2);
    tracep->fullIData(oldp+26,(4U),32);
}

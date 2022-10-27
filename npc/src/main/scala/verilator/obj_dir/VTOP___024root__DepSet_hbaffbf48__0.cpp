// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___combo__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : (((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))
                                              ? ((7U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   + vlSelf->TOP__DOT__ID__DOT__immI)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0ULL
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                     + 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_13) 
                                                                              >> 0xcU))))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_13))))
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 0ULL
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                       ? 
                                                      ((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                       + 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
                                                                                >> 0x14U))))) 
                                                         << 0x15U) 
                                                        | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24))))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                        ? 0ULL
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                         ? 
                                                        ((0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0xcU)))
                                                          ? 0ULL
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (3U 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Csr__DOT__mepc
                                                           : 
                                                          ((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__Csr__DOT__mtvec
                                                            : 0ULL)))
                                                         : 0ULL))))))))
                                              : (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelf->TOP__DOT__IF__DOT__pc)))));
}

void VTOP___024root___sequent__TOP__0(VTOP___024root* vlSelf);

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    VTOP___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

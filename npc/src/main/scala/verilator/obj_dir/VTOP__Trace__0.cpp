// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTOP___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VTOP___024root__trace_chg_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_hec567cc9__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa4740a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h1320bab3__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                 ? 1U : 0U)));
        tracep->chgBit(oldp+1,(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen));
        tracep->chgQData(oldp+2,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                   ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                                 + vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_4)
                                              : ((0U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__IF_ID__DOT__pc 
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
                                                    (vlSelf->TOP__DOT__IF_ID__DOT__pc 
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
                                                         & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 0ULL
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Csr__DOT__mepc
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Csr__DOT__mtvec
                                                          : 0ULL)))
                                                       : 0ULL))))))))),64);
        tracep->chgIData(oldp+4,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
        tracep->chgQData(oldp+5,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
        tracep->chgIData(oldp+7,(vlSelf->TOP__DOT__IF_ID__DOT__inst),32);
        tracep->chgSData(oldp+8,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_waddr),12);
        tracep->chgQData(oldp+9,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wdata),64);
        tracep->chgCData(oldp+11,(vlSelf->TOP__DOT__EX_io_ex_fwd_o_rf_rd),5);
        tracep->chgQData(oldp+12,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))),64);
        tracep->chgSData(oldp+14,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_waddr),12);
        tracep->chgQData(oldp+15,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wdata),64);
        tracep->chgCData(oldp+17,(vlSelf->TOP__DOT__MEM_io_mem_fwd_o_rf_rd),5);
        tracep->chgQData(oldp+18,(vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata),64);
        tracep->chgSData(oldp+20,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_waddr),12);
        tracep->chgQData(oldp+21,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wdata),64);
        tracep->chgCData(oldp+23,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_rd),5);
        tracep->chgQData(oldp+24,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wdata),64);
        tracep->chgCData(oldp+26,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_rd),5);
        tracep->chgBit(oldp+27,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_load));
        tracep->chgQData(oldp+28,(vlSelf->TOP__DOT__IF_ID__DOT__pc),64);
        tracep->chgQData(oldp+30,(((0x1fU == (0x1fU 
                                              & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                 >> 0xfU)))
                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                    : ((0x1eU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                    : vlSelf->TOP__DOT__Regfile__DOT___GEN_90)))))),64);
        tracep->chgQData(oldp+32,(((0x1fU == (0x1fU 
                                              & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                 >> 0x14U)))
                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                    : ((0x1eU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                >> 0x14U)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0x14U)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                    : vlSelf->TOP__DOT__Regfile__DOT___GEN_122)))))),64);
        tracep->chgQData(oldp+34,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgQData(oldp+36,(vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal),64);
        tracep->chgQData(oldp+38,(vlSelf->TOP__DOT__Csr__DOT__mepc),64);
        tracep->chgQData(oldp+40,(vlSelf->TOP__DOT__Csr__DOT__mtvec),64);
        tracep->chgCData(oldp+42,((0x1fU & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+43,((0x1fU & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                            >> 0x14U))),5);
        tracep->chgSData(oldp+44,((vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                   >> 0x14U)),12);
        tracep->chgBit(oldp+45,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             | ((4U 
                                                 == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                | ((5U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((6U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0xcU)))))))))))));
        tracep->chgCData(oldp+46,((0x1fU & ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                >> 7U)
                                             : ((1U 
                                                 == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                 ? 
                                                (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                 >> 7U)
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 7U)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 7U)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                      >> 7U)))))))))),5);
        tracep->chgBit(oldp+47,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             & ((4U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                & ((5U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((6U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & ((0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0xcU))) 
                                                         | (IData)(
                                                                   ((0U 
                                                                     == 
                                                                     (0x300000U 
                                                                      & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                                                    & (2U 
                                                                       != 
                                                                       (3U 
                                                                        & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                           >> 0x14U))))))))))))))));
        tracep->chgQData(oldp+48,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                    ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? 0ULL
                                               : ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 0ULL
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
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((3U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0xcU)))
                                                          ? 
                                                         (vlSelf->TOP__DOT__ID__DOT__csrVal 
                                                          & (~ vlSelf->TOP__DOT__ID__DOT__rsVal))
                                                          : 
                                                         ((2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                               >> 0xcU)))
                                                           ? 
                                                          (vlSelf->TOP__DOT__ID__DOT__csrVal 
                                                           | vlSelf->TOP__DOT__ID__DOT__rsVal)
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                >> 0xcU)))
                                                            ? vlSelf->TOP__DOT__ID__DOT__rs1Val
                                                            : 0ULL)))
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0x14U)))
                                                          ? 0ULL
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__IF_ID__DOT__pc
                                                           : 0ULL)))
                                                        : 0ULL))))))))),64);
        tracep->chgSData(oldp+50,((0xfffU & ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                 >> 0x14U)
                                              : ((1U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 0x14U)
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                   >> 0x14U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 
                                                     (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                      >> 0x14U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                       ? 
                                                      (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                       >> 0x14U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                        ? 
                                                       ((0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 
                                                        (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0x14U)))
                                                          ? 
                                                         (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                               >> 0x14U)))
                                                           ? 0x305U
                                                           : 
                                                          (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0x14U))))
                                                        : 
                                                       (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                        >> 0x14U))))))))))),12);
        tracep->chgQData(oldp+51,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
        tracep->chgQData(oldp+53,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_120[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_120[0U])))),64);
        tracep->chgCData(oldp+55,(((0x33U == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__IF_ID__DOT__inst))
                                    ? 0U : ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->TOP__DOT__IF_ID__DOT__inst))
                                             ? 1U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_248)))),5);
        tracep->chgBit(oldp+56,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((3U == (0x7fU 
                                               & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                       & (~ (IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)))))));
        tracep->chgBit(oldp+57,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             & ((4U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                & ((5U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & (~ (IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)))))))))));
        tracep->chgBit(oldp+58,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                       >> 0xeU)))));
        tracep->chgCData(oldp+59,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                    ? 0U : (0xfU & 
                                            ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (0xfU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                        >> 0xcU))))
                                              : ((0U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0U
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 0U
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                          >> 0xcU)))
                                                      : 0U))))))))),4);
        tracep->chgQData(oldp+60,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                    ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? 0ULL
                                               : ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0ULL
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0ULL
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 0ULL
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 0ULL
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                       ? vlSelf->TOP__DOT__ID__DOT__rs2Val
                                                       : 0ULL)))))))),64);
        tracep->chgBit(oldp+62,(vlSelf->TOP__DOT__ID_io_stall_req_o));
        tracep->chgBit(oldp+63,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                  ? (0xffffffffU == vlSelf->TOP__DOT__IF_ID__DOT__inst)
                                  : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((4U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & ((5U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                    & ((6U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      (7U 
                                                                       & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                          >> 0xcU))))) 
                                                          & ((2U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                  >> 0x14U))) 
                                                             & (IData)(
                                                                       ((0x100000U 
                                                                         == 
                                                                         (0x300000U 
                                                                          & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                                                        & (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                               >> 0x14U)))))))))))))))));
        tracep->chgQData(oldp+64,(((0xaU == (IData)(vlSelf->TOP__DOT__EX_io_ex_fwd_o_rf_rd))
                                    ? (((QData)((IData)(
                                                        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                                    : ((0xaU == (IData)(vlSelf->TOP__DOT__MEM_io_mem_fwd_o_rf_rd))
                                        ? vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata
                                        : ((0xaU == (IData)(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_rd))
                                            ? vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wdata
                                            : vlSelf->TOP__DOT__Regfile__DOT__registers_10)))),64);
        tracep->chgBit(oldp+66,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_wen));
        tracep->chgBit(oldp+67,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wen));
        tracep->chgQData(oldp+68,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src1),64);
        tracep->chgQData(oldp+70,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src2),64);
        tracep->chgCData(oldp+72,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_opt),5);
        tracep->chgBit(oldp+73,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_store));
        tracep->chgBit(oldp+74,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_unsigned));
        tracep->chgCData(oldp+75,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_length),4);
        tracep->chgQData(oldp+76,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_sdata),64);
        tracep->chgBit(oldp+78,(vlSelf->TOP__DOT__ID_EX__DOT__stall));
        tracep->chgBit(oldp+79,(vlSelf->TOP__DOT__ID_EX__DOT__debug_exit));
        tracep->chgQData(oldp+80,(vlSelf->TOP__DOT__ID_EX__DOT__debug_a0),64);
        tracep->chgQData(oldp+82,(vlSelf->TOP__DOT__ID_EX__DOT__debug_pc),64);
        tracep->chgIData(oldp+84,(vlSelf->TOP__DOT__ID_EX__DOT__debug_inst),32);
        tracep->chgBit(oldp+85,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wen));
        tracep->chgCData(oldp+86,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_rd),5);
        tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wdata),64);
        tracep->chgBit(oldp+89,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wen));
        tracep->chgBit(oldp+90,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load));
        tracep->chgBit(oldp+91,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store));
        tracep->chgBit(oldp+92,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned));
        tracep->chgCData(oldp+93,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length),4);
        tracep->chgQData(oldp+94,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr),64);
        tracep->chgQData(oldp+96,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata),64);
        tracep->chgQData(oldp+98,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                    ? (((QData)((IData)(
                                                        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                    : ((4U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                        ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
                                            ? (((QData)((IData)(
                                                                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                            : (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U]))))
                                        : ((2U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                            ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                                : (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))))
                                            : ((1U 
                                                == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U] 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))))
                                                : 0ULL))))),64);
        tracep->chgBit(oldp+100,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_exit));
        tracep->chgQData(oldp+101,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_a0),64);
        tracep->chgQData(oldp+103,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_pc),64);
        tracep->chgIData(oldp+105,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_inst),32);
        tracep->chgBit(oldp+106,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wen));
        tracep->chgBit(oldp+107,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wen));
        tracep->chgBit(oldp+108,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_exit));
        tracep->chgQData(oldp+109,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_a0),64);
        tracep->chgQData(oldp+111,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_pc),64);
        tracep->chgIData(oldp+113,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_inst),32);
        tracep->chgQData(oldp+114,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+116,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+118,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+120,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+122,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+124,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+126,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+128,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+130,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+132,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+134,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+136,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+138,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+140,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+142,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+144,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+146,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+148,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+150,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+152,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+154,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+156,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+158,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+160,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+162,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+164,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+166,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+168,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+170,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+172,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+174,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
        tracep->chgQData(oldp+176,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
        tracep->chgQData(oldp+178,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
        tracep->chgCData(oldp+180,(((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                     ? 3U : 0U)),5);
        tracep->chgCData(oldp+181,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                     ? 3U : 0U)),5);
        tracep->chgBit(oldp+182,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                          ? 3U : 0U) 
                                        >> 1U))));
        tracep->chgBit(oldp+183,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                          ? 3U : 0U) 
                                        >> 1U))));
        tracep->chgBit(oldp+184,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                          ? 3U : 0U) 
                                        >> 2U))));
        tracep->chgBit(oldp+185,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                          ? 3U : 0U) 
                                        >> 2U))));
        tracep->chgBit(oldp+186,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                          ? 3U : 0U) 
                                        >> 3U))));
        tracep->chgBit(oldp+187,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                          ? 3U : 0U) 
                                        >> 3U))));
        tracep->chgBit(oldp+188,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                          ? 3U : 0U) 
                                        >> 4U))));
        tracep->chgBit(oldp+189,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                          ? 3U : 0U) 
                                        >> 4U))));
        tracep->chgQData(oldp+190,(vlSelf->TOP__DOT__ID__DOT__rs1Val),64);
        tracep->chgQData(oldp+192,(vlSelf->TOP__DOT__ID__DOT__rs2Val),64);
        tracep->chgQData(oldp+194,(vlSelf->TOP__DOT__ID__DOT__csrVal),64);
        tracep->chgCData(oldp+196,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+197,((0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst)),7);
        tracep->chgCData(oldp+198,((7U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                          >> 0xcU))),3);
        tracep->chgBit(oldp+199,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst))));
        tracep->chgBit(oldp+200,(((7U == (7U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                >> 0xcU)))
                                   ? (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                      >= vlSelf->TOP__DOT__ID__DOT__rs2Val)
                                   : ((6U == (7U & 
                                              (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                               >> 0xcU)))
                                       ? (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                          < vlSelf->TOP__DOT__ID__DOT__rs2Val)
                                       : ((5U == (7U 
                                                  & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0xcU)))
                                           ? VL_GTES_IQQ(64, vlSelf->TOP__DOT__ID__DOT__rs1Val, vlSelf->TOP__DOT__ID__DOT__rs2Val)
                                           : ((4U == 
                                               (7U 
                                                & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                   >> 0xcU)))
                                               ? VL_LTS_IQQ(64, vlSelf->TOP__DOT__ID__DOT__rs1Val, vlSelf->TOP__DOT__ID__DOT__rs2Val)
                                               : ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                                   != vlSelf->TOP__DOT__ID__DOT__rs2Val)
                                                   : (IData)(
                                                             ((0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                                              & (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                                                 == vlSelf->TOP__DOT__ID__DOT__rs2Val))))))))));
        tracep->chgQData(oldp+201,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
        tracep->chgCData(oldp+203,((3U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                          >> 0x14U))),2);
        tracep->chgIData(oldp+204,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgIData(oldp+205,((0xfffffU & (IData)(
                                                       (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgBit(oldp+206,(((0x80000000ULL <= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr) 
                                  & (0x87ffffffULL 
                                     >= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))));
        tracep->chgIData(oldp+207,((0xfffffU & ((IData)(1U) 
                                                + (IData)(
                                                          ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                            - 0x80000000ULL) 
                                                           >> 2U))))),20);
        tracep->chgIData(oldp+208,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                             - 0x80000000ULL) 
                                                            >> 2U))))]),32);
        tracep->chgIData(oldp+209,((0xfffffU & (IData)(
                                                       ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgIData(oldp+210,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & (IData)(
                                                        ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                          - 0x80000000ULL) 
                                                         >> 2U)))]),32);
        tracep->chgIData(oldp+211,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                            >> 0x20U))),32);
        tracep->chgBit(oldp+212,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                                  & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
        tracep->chgIData(oldp+213,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
        tracep->chgBit(oldp+214,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                                  & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load))));
        tracep->chgBit(oldp+215,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                                  & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
        tracep->chgQData(oldp+216,(vlSelf->TOP__DOT__Main_Memory__DOT__MMIO_RW_rdata),64);
        tracep->chgQData(oldp+218,(((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                     - 0x80000000ULL) 
                                    >> 2U)),62);
        tracep->chgQData(oldp+220,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
        tracep->chgCData(oldp+222,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))),2);
        tracep->chgQData(oldp+223,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                     ? 0xffffffffffffffffULL
                                     : (QData)((IData)(
                                                       ((4U 
                                                         == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                         ? 0xffffffffU
                                                         : 
                                                        ((2U 
                                                          == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                          ? 0xffffU
                                                          : 
                                                         ((1U 
                                                           == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                           ? 0xffU
                                                           : 0U))))))),64);
        VL_EXTEND_WQ(95,64, __Vtemp_hec567cc9__0, (
                                                   (8U 
                                                    == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                    ? 0xffffffffffffffffULL
                                                    : (QData)((IData)(
                                                                      ((4U 
                                                                        == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                        ? 0xffffffffU
                                                                        : 
                                                                       ((2U 
                                                                         == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                         ? 0xffffU
                                                                         : 
                                                                        ((1U 
                                                                          == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                          ? 0xffU
                                                                          : 0U)))))));
        VL_SHIFTL_WWI(95,95,5, __Vtemp_hfa4740a3__0, __Vtemp_hec567cc9__0, 
                      (0x18U & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr) 
                                << 3U)));
        __Vtemp_h1320bab3__0[0U] = __Vtemp_hfa4740a3__0[0U];
        __Vtemp_h1320bab3__0[1U] = __Vtemp_hfa4740a3__0[1U];
        __Vtemp_h1320bab3__0[2U] = (0x7fffffffU & __Vtemp_hfa4740a3__0[2U]);
        tracep->chgWData(oldp+225,(__Vtemp_h1320bab3__0),95);
        tracep->chgCData(oldp+228,((3U & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length) 
                                          >> 2U))),2);
        tracep->chgCData(oldp+229,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))),2);
        tracep->chgCData(oldp+230,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
        tracep->chgCData(oldp+231,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 8U))))),8);
        tracep->chgCData(oldp+232,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
        tracep->chgCData(oldp+233,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x18U))))),8);
        tracep->chgCData(oldp+234,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x10U))))),8);
        tracep->chgCData(oldp+235,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x28U))))),8);
        tracep->chgCData(oldp+236,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x20U))))),8);
        tracep->chgCData(oldp+237,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x38U))))),8);
        tracep->chgCData(oldp+238,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x30U))))),8);
        tracep->chgQData(oldp+239,((((QData)((IData)(
                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))),64);
    }
    tracep->chgBit(oldp+241,(vlSelf->clock));
    tracep->chgBit(oldp+242,(vlSelf->reset));
    tracep->chgQData(oldp+243,(vlSelf->io_timer_i),64);
    tracep->chgQData(oldp+245,(vlSelf->io_csrData_csrVal),64);
    tracep->chgQData(oldp+247,(vlSelf->io_csrData_epc),64);
    tracep->chgQData(oldp+249,(vlSelf->io_csrData_tvec),64);
    tracep->chgQData(oldp+251,(vlSelf->io_csrData_cause),64);
    tracep->chgQData(oldp+253,(vlSelf->io_csrData_status),64);
    tracep->chgCData(oldp+255,(vlSelf->io_stall_o),5);
    tracep->chgCData(oldp+256,(vlSelf->io_flush_o),5);
    tracep->chgQData(oldp+257,(vlSelf->io_regs_0),64);
    tracep->chgQData(oldp+259,(vlSelf->io_regs_1),64);
    tracep->chgQData(oldp+261,(vlSelf->io_regs_2),64);
    tracep->chgQData(oldp+263,(vlSelf->io_regs_3),64);
    tracep->chgQData(oldp+265,(vlSelf->io_regs_4),64);
    tracep->chgQData(oldp+267,(vlSelf->io_regs_5),64);
    tracep->chgQData(oldp+269,(vlSelf->io_regs_6),64);
    tracep->chgQData(oldp+271,(vlSelf->io_regs_7),64);
    tracep->chgQData(oldp+273,(vlSelf->io_regs_8),64);
    tracep->chgQData(oldp+275,(vlSelf->io_regs_9),64);
    tracep->chgQData(oldp+277,(vlSelf->io_regs_10),64);
    tracep->chgQData(oldp+279,(vlSelf->io_regs_11),64);
    tracep->chgQData(oldp+281,(vlSelf->io_regs_12),64);
    tracep->chgQData(oldp+283,(vlSelf->io_regs_13),64);
    tracep->chgQData(oldp+285,(vlSelf->io_regs_14),64);
    tracep->chgQData(oldp+287,(vlSelf->io_regs_15),64);
    tracep->chgQData(oldp+289,(vlSelf->io_regs_16),64);
    tracep->chgQData(oldp+291,(vlSelf->io_regs_17),64);
    tracep->chgQData(oldp+293,(vlSelf->io_regs_18),64);
    tracep->chgQData(oldp+295,(vlSelf->io_regs_19),64);
    tracep->chgQData(oldp+297,(vlSelf->io_regs_20),64);
    tracep->chgQData(oldp+299,(vlSelf->io_regs_21),64);
    tracep->chgQData(oldp+301,(vlSelf->io_regs_22),64);
    tracep->chgQData(oldp+303,(vlSelf->io_regs_23),64);
    tracep->chgQData(oldp+305,(vlSelf->io_regs_24),64);
    tracep->chgQData(oldp+307,(vlSelf->io_regs_25),64);
    tracep->chgQData(oldp+309,(vlSelf->io_regs_26),64);
    tracep->chgQData(oldp+311,(vlSelf->io_regs_27),64);
    tracep->chgQData(oldp+313,(vlSelf->io_regs_28),64);
    tracep->chgQData(oldp+315,(vlSelf->io_regs_29),64);
    tracep->chgQData(oldp+317,(vlSelf->io_regs_30),64);
    tracep->chgQData(oldp+319,(vlSelf->io_regs_31),64);
    tracep->chgQData(oldp+321,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+323,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+324,(vlSelf->io_o1),64);
    tracep->chgQData(oldp+326,(vlSelf->io_o2),64);
    tracep->chgQData(oldp+328,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+330,(vlSelf->io_src2),64);
}

void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_cleanup\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

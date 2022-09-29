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
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_64))));
        tracep->chgQData(oldp+1,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                   ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                 + vlSelf->TOP__DOT__ID__DOT__immI)
                                              : ((0U 
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
                                                                         & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      (0xfffU 
                                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11))))))
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
                                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                              >> 0x14U))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 0x14U)))))))
                                                     : 0ULL))))))),64);
        tracep->chgQData(oldp+3,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
        tracep->chgIData(oldp+5,(vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data),32);
        tracep->chgQData(oldp+6,(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val),64);
        tracep->chgQData(oldp+8,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
        tracep->chgQData(oldp+10,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgCData(oldp+12,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+14,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
        tracep->chgCData(oldp+15,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 7U))),5);
        tracep->chgQData(oldp+16,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
        tracep->chgQData(oldp+18,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_63[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_63[0U])))),64);
        tracep->chgCData(oldp+20,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
        tracep->chgBit(oldp+21,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (3U == (0x7fU 
                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
        tracep->chgBit(oldp+22,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
        tracep->chgBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
        tracep->chgCData(oldp+24,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67))),2);
        tracep->chgQData(oldp+25,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata),64);
        tracep->chgBit(oldp+27,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                  ? (0xffffffffU == vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)
                                  : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((4U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & ((5U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                    & (6U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
        tracep->chgCData(oldp+28,(((0x33U == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                    ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
        tracep->chgQData(oldp+29,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
        tracep->chgQData(oldp+31,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
        tracep->chgWData(oldp+33,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
        tracep->chgCData(oldp+37,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+38,((0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)),7);
        tracep->chgCData(oldp+39,((7U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 0xcU))),3);
        tracep->chgQData(oldp+40,(vlSelf->TOP__DOT__ID__DOT__immI),64);
        tracep->chgBit(oldp+42,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))));
        tracep->chgQData(oldp+43,((((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                           >> 0xbU))))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11)))))),64);
        tracep->chgSData(oldp+45,((0x7fffU & (vlSelf->TOP__DOT__IF__DOT__pc 
                                              >> 2U))),15);
        tracep->chgIData(oldp+46,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgQData(oldp+47,(((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_64))
                                    ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? 0ULL : ((1U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
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
                                                                           & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                                              >> 0xbU))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        (0xfffU 
                                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11))))))
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
                                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x14U))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x14U)))))))
                                                       : 0ULL))))))
                                    : (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelf->TOP__DOT__IF__DOT__pc))))),64);
        tracep->chgCData(oldp+49,((0x7fU & ((IData)(7U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+50,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(7U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+51,((0x7fU & ((IData)(6U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+52,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(6U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+53,((0x7fU & ((IData)(5U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+54,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(5U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+55,((0x7fU & ((IData)(4U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+56,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(4U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+57,((0x7fU & ((IData)(3U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+58,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(3U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+59,((0x7fU & ((IData)(2U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+60,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(2U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+61,((0x7fU & ((IData)(1U) 
                                            + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
        tracep->chgCData(oldp+62,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & ((IData)(1U) 
                                             + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
        tracep->chgCData(oldp+63,((0x7fU & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])),7);
        tracep->chgCData(oldp+64,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [(0x7fU & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])]),8);
        tracep->chgCData(oldp+65,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [0U]),8);
        tracep->chgCData(oldp+66,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [1U]),8);
        tracep->chgCData(oldp+67,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [2U]),8);
        tracep->chgCData(oldp+68,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [3U]),8);
        tracep->chgCData(oldp+69,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [4U]),8);
        tracep->chgCData(oldp+70,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [5U]),8);
        tracep->chgCData(oldp+71,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [6U]),8);
        tracep->chgCData(oldp+72,(vlSelf->TOP__DOT__MEM__DOT__ram
                                  [7U]),8);
        tracep->chgCData(oldp+73,((0xffU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata))),8);
        tracep->chgBit(oldp+74,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                                 & (0U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67))))));
        tracep->chgBit(oldp+75,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                                 & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_93))));
        tracep->chgCData(oldp+76,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 8U)))),8);
        tracep->chgBit(oldp+77,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                                 & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_100))));
        tracep->chgCData(oldp+78,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x10U)))),8);
        tracep->chgCData(oldp+79,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x18U)))),8);
        tracep->chgBit(oldp+80,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                                 & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_111))));
        tracep->chgCData(oldp+81,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x20U)))),8);
        tracep->chgCData(oldp+82,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x28U)))),8);
        tracep->chgCData(oldp+83,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x30U)))),8);
        tracep->chgCData(oldp+84,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x38U)))),8);
        tracep->chgQData(oldp+85,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                    ? 0xffffffffffffffffULL
                                    : (QData)((IData)(
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                                        ? 0xffffffffU
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                                         ? 0xffffU
                                                         : 0xffU)))))),64);
        tracep->chgQData(oldp+87,((((QData)((IData)(
                                                    ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(7U) 
                                                          + 
                                                          vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                      << 0x18U) 
                                                     | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(6U) 
                                                             + 
                                                             vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                         << 0x10U) 
                                                        | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                            [
                                                            (0x7fU 
                                                             & ((IData)(5U) 
                                                                + 
                                                                vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                            << 8U) 
                                                           | vlSelf->TOP__DOT__MEM__DOT__ram
                                                           [
                                                           (0x7fU 
                                                            & ((IData)(4U) 
                                                               + 
                                                               vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                                  [
                                                                  (0x7fU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                                  << 0x18U) 
                                                                 | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                                     [
                                                                     (0x7fU 
                                                                      & ((IData)(2U) 
                                                                         + 
                                                                         vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                                     << 0x10U) 
                                                                    | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                                        [
                                                                        (0x7fU 
                                                                         & ((IData)(1U) 
                                                                            + 
                                                                            vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                                        << 8U) 
                                                                       | vlSelf->TOP__DOT__MEM__DOT__ram
                                                                       [
                                                                       (0x7fU 
                                                                        & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])]))))))),64);
        tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
        tracep->chgQData(oldp+91,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                    ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                    : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                        ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                            ? (((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0x1fU))))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))
                                            : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                        : ((1U == (3U 
                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                            ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0xfU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                            : ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                : vlSelf->TOP__DOT__MEM__DOT__loadval))))),64);
        tracep->chgQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+103,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+105,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+107,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+109,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+111,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+113,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+115,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+117,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+119,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+121,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+123,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+125,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+127,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+129,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+131,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+133,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+135,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+137,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+139,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+141,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+143,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+145,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+147,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+149,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+151,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+153,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
        tracep->chgQData(oldp+155,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen)
                                     ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                                     : 0ULL)),64);
    }
    tracep->chgBit(oldp+157,(vlSelf->clock));
    tracep->chgBit(oldp+158,(vlSelf->reset));
    tracep->chgQData(oldp+159,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+161,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+162,(vlSelf->io_o),64);
    tracep->chgQData(oldp+164,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+166,(vlSelf->io_src2),64);
    tracep->chgCData(oldp+168,(vlSelf->io_instType),5);
    tracep->chgBit(oldp+169,(vlSelf->io_branch));
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

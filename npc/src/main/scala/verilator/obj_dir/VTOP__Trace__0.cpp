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
        tracep->chgBit(oldp+0,((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))));
        tracep->chgQData(oldp+1,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                   ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val 
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
        tracep->chgQData(oldp+6,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
        tracep->chgQData(oldp+8,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgCData(oldp+10,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 0xfU))),5);
        tracep->chgBit(oldp+11,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
        tracep->chgCData(oldp+12,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 7U))),5);
        tracep->chgQData(oldp+13,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
        tracep->chgQData(oldp+15,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
        tracep->chgCData(oldp+17,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
        tracep->chgBit(oldp+18,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (3U == (0x7fU 
                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
        tracep->chgBit(oldp+19,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
        tracep->chgBit(oldp+20,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
        tracep->chgCData(oldp+21,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
        tracep->chgBit(oldp+22,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
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
        tracep->chgCData(oldp+23,(((0x33U == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                    ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
        tracep->chgQData(oldp+24,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
        tracep->chgQData(oldp+26,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
        tracep->chgWData(oldp+28,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
        tracep->chgCData(oldp+32,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+33,((0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)),7);
        tracep->chgCData(oldp+34,((7U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 0xcU))),3);
        tracep->chgQData(oldp+35,(vlSelf->TOP__DOT__ID__DOT__immI),64);
        tracep->chgBit(oldp+37,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))));
        tracep->chgQData(oldp+38,((((- (QData)((IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                           >> 0xbU))))) 
                                    << 0xcU) | (QData)((IData)(
                                                               (0xfffU 
                                                                & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11)))))),64);
        tracep->chgSData(oldp+40,((0x7fffU & (vlSelf->TOP__DOT__IF__DOT__pc 
                                              >> 2U))),15);
        tracep->chgIData(oldp+41,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgQData(oldp+42,(((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
                                    ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? 0ULL : ((1U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val 
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
        tracep->chgCData(oldp+44,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
        tracep->chgCData(oldp+45,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
        tracep->chgCData(oldp+46,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
        tracep->chgCData(oldp+47,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
        tracep->chgCData(oldp+48,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
        tracep->chgCData(oldp+49,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
        tracep->chgCData(oldp+50,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
        tracep->chgCData(oldp+51,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
        tracep->chgCData(oldp+52,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
        tracep->chgCData(oldp+53,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
        tracep->chgCData(oldp+54,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
        tracep->chgCData(oldp+55,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
        tracep->chgCData(oldp+56,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
        tracep->chgCData(oldp+57,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
        tracep->chgCData(oldp+58,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
        tracep->chgCData(oldp+59,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
        tracep->chgCData(oldp+60,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                           >> 3U))),4);
        tracep->chgCData(oldp+61,(vlSelf->TOP__DOT__MEM__DOT__ram1
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+62,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__mask))),8);
        tracep->chgCData(oldp+63,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 8U)))),8);
        tracep->chgCData(oldp+64,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x10U)))),8);
        tracep->chgCData(oldp+65,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x18U)))),8);
        tracep->chgCData(oldp+66,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x20U)))),8);
        tracep->chgCData(oldp+67,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x28U)))),8);
        tracep->chgCData(oldp+68,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x30U)))),8);
        tracep->chgCData(oldp+69,((0xffU & (IData)(
                                                   (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                    >> 0x38U)))),8);
        tracep->chgCData(oldp+70,(vlSelf->TOP__DOT__MEM__DOT__ram2
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+71,(vlSelf->TOP__DOT__MEM__DOT__ram3
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+72,(vlSelf->TOP__DOT__MEM__DOT__ram4
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+73,(vlSelf->TOP__DOT__MEM__DOT__ram5
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+74,(vlSelf->TOP__DOT__MEM__DOT__ram6
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+75,(vlSelf->TOP__DOT__MEM__DOT__ram7
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+76,(vlSelf->TOP__DOT__MEM__DOT__ram8
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgQData(oldp+77,((0x1fffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                       << 0x1dU) | 
                                      ((QData)((IData)(
                                                       vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                       >> 3U)))),61);
        tracep->chgQData(oldp+79,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
        tracep->chgQData(oldp+81,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
        tracep->chgQData(oldp+83,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                    ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                    : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
        tracep->chgQData(oldp+85,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+91,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+103,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+105,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+107,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+109,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+111,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+113,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+115,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+117,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+119,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+121,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+123,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+125,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+127,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+129,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+131,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+133,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+135,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+137,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+139,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+141,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+143,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+145,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    }
    tracep->chgBit(oldp+147,(vlSelf->clock));
    tracep->chgBit(oldp+148,(vlSelf->reset));
    tracep->chgQData(oldp+149,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+151,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+152,(vlSelf->io_o),64);
    tracep->chgQData(oldp+154,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+156,(vlSelf->io_src2),64);
    tracep->chgCData(oldp+158,(vlSelf->io_instType),5);
    tracep->chgBit(oldp+159,(vlSelf->io_branch));
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

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
        tracep->chgQData(oldp+0,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgQData(oldp+2,(vlSelf->TOP__DOT__ID__DOT__pc),64);
        tracep->chgQData(oldp+4,(vlSelf->TOP__DOT__IF__DOT__pc),64);
        tracep->chgCData(oldp+6,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
        tracep->chgCData(oldp+7,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
        tracep->chgCData(oldp+8,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
        tracep->chgCData(oldp+9,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
        tracep->chgCData(oldp+10,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
        tracep->chgCData(oldp+11,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
        tracep->chgCData(oldp+12,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
        tracep->chgCData(oldp+13,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
        tracep->chgCData(oldp+14,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
        tracep->chgCData(oldp+15,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
        tracep->chgCData(oldp+16,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
        tracep->chgCData(oldp+17,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
        tracep->chgCData(oldp+18,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
        tracep->chgCData(oldp+19,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
        tracep->chgCData(oldp+20,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
        tracep->chgCData(oldp+21,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
        tracep->chgQData(oldp+22,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+24,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+26,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+28,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+30,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+32,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+34,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+36,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+38,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+40,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+42,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+44,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+46,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+48,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+50,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+52,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+54,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+56,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+58,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+60,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+62,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+64,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+66,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+68,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+70,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+72,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+74,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+76,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+78,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+80,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+82,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+84,((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))));
        tracep->chgQData(oldp+85,(vlSelf->TOP__DOT__ID_io_decInfo_branchOp_newPC),64);
        tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__IF_io_pc_o),64);
        tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
        tracep->chgBit(oldp+91,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
        tracep->chgQData(oldp+92,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
        tracep->chgQData(oldp+94,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
        tracep->chgCData(oldp+96,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
        tracep->chgBit(oldp+97,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
        tracep->chgBit(oldp+98,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
        tracep->chgCData(oldp+99,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
        tracep->chgQData(oldp+100,((((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
        tracep->chgQData(oldp+102,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
        tracep->chgWData(oldp+104,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
        tracep->chgCData(oldp+108,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+109,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))),4);
        tracep->chgCData(oldp+110,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__mask))),8);
        tracep->chgCData(oldp+111,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 8U)))),8);
        tracep->chgCData(oldp+112,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x10U)))),8);
        tracep->chgCData(oldp+113,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x18U)))),8);
        tracep->chgCData(oldp+114,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x20U)))),8);
        tracep->chgCData(oldp+115,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x28U)))),8);
        tracep->chgCData(oldp+116,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x30U)))),8);
        tracep->chgCData(oldp+117,((0xffU & (IData)(
                                                    (vlSelf->TOP__DOT__MEM__DOT__mask 
                                                     >> 0x38U)))),8);
        tracep->chgCData(oldp+118,(vlSelf->TOP__DOT__MEM__DOT__ram2
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+119,(vlSelf->TOP__DOT__MEM__DOT__ram3
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+120,(vlSelf->TOP__DOT__MEM__DOT__ram4
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+121,(vlSelf->TOP__DOT__MEM__DOT__ram5
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+122,(vlSelf->TOP__DOT__MEM__DOT__ram6
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+123,(vlSelf->TOP__DOT__MEM__DOT__ram7
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+124,(vlSelf->TOP__DOT__MEM__DOT__ram8
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgQData(oldp+125,((0x1fffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                        >> 3U)))),61);
        tracep->chgQData(oldp+127,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
        tracep->chgQData(oldp+129,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
        tracep->chgQData(oldp+131,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                     ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                     : ((2U == (3U 
                                                & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
                                         : ((1U == 
                                             (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                             ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                 ? 
                                                (((- (QData)((IData)(
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
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                  << 8U) 
                                                 | (QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                 : vlSelf->TOP__DOT__MEM__DOT__loadval))))),64);
    }
    tracep->chgBit(oldp+133,(vlSelf->clock));
    tracep->chgBit(oldp+134,(vlSelf->reset));
    tracep->chgIData(oldp+135,(vlSelf->io_inst_i),32);
    tracep->chgQData(oldp+136,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+138,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+139,(vlSelf->io_o),64);
    tracep->chgQData(oldp+141,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+143,(vlSelf->io_src2),64);
    tracep->chgCData(oldp+145,(vlSelf->io_instType),5);
    tracep->chgBit(oldp+146,(vlSelf->io_branch));
    tracep->chgCData(oldp+147,((0x1fU & (vlSelf->io_inst_o 
                                         >> 0xfU))),5);
    tracep->chgCData(oldp+148,((0x1fU & (vlSelf->io_inst_o 
                                         >> 7U))),5);
    tracep->chgBit(oldp+149,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->io_inst_o))))));
    tracep->chgBit(oldp+150,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->io_inst_o)
                               : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
    tracep->chgCData(oldp+151,(((0x33U == (0xfe00707fU 
                                           & vlSelf->io_inst_o))
                                 ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
    tracep->chgCData(oldp+152,((0x7fU & vlSelf->io_inst_o)),7);
    tracep->chgCData(oldp+153,((7U & (vlSelf->io_inst_o 
                                      >> 0xcU))),3);
    tracep->chgBit(oldp+154,((0x67U == (0x7fU & vlSelf->io_inst_o))));
    tracep->chgCData(oldp+155,(vlSelf->TOP__DOT__MEM__DOT__ram1
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}

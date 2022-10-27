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
    VlWide<3>/*95:0*/ __Vtemp_hb3bcce0a__0;
    VlWide<3>/*95:0*/ __Vtemp_hddfc4a8c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6cdd842a__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                    ? (0x67U == (0x7fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                    : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))));
        tracep->chgQData(oldp+1,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                   ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
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
                                                       : 0ULL))))))))),64);
        tracep->chgIData(oldp+3,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
        tracep->chgQData(oldp+4,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
        tracep->chgQData(oldp+6,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val),64);
        tracep->chgQData(oldp+8,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val),64);
        tracep->chgQData(oldp+10,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgQData(oldp+12,(vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal),64);
        tracep->chgQData(oldp+14,(vlSelf->TOP__DOT__Csr__DOT__mepc),64);
        tracep->chgQData(oldp+16,(vlSelf->TOP__DOT__Csr__DOT__mtvec),64);
        tracep->chgCData(oldp+18,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+19,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 0x14U))),5);
        tracep->chgSData(oldp+20,((vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                   >> 0x14U)),12);
        tracep->chgBit(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_rf_wen));
        tracep->chgCData(oldp+22,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 7U))),5);
        tracep->chgBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wen));
        tracep->chgQData(oldp+24,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata),64);
        tracep->chgSData(oldp+26,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr),12);
        tracep->chgQData(oldp+27,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
        tracep->chgQData(oldp+29,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))),64);
        tracep->chgCData(oldp+31,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt),5);
        tracep->chgBit(oldp+32,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_load));
        tracep->chgBit(oldp+33,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store));
        tracep->chgBit(oldp+34,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned));
        tracep->chgCData(oldp+35,((0xfU & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112))),4);
        tracep->chgQData(oldp+36,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),64);
        tracep->chgBit(oldp+38,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                  ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
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
                                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                          >> 0xcU))))) 
                                                          & ((2U 
                                                              != 
                                                              (3U 
                                                               & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                  >> 0x14U))) 
                                                             & (IData)(
                                                                       ((0x100000U 
                                                                         == 
                                                                         (0x300000U 
                                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                                                        & (0U 
                                                                           != 
                                                                           (3U 
                                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 0x14U)))))))))))))))));
        tracep->chgQData(oldp+39,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))),64);
        tracep->chgQData(oldp+41,(((8U == (0xfU & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                    ? (((QData)((IData)(
                                                        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                    : ((4U == (0xfU 
                                               & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                        ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
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
                                        : ((2U == (0xfU 
                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                            ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
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
                                                == 
                                                (0xfU 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
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
        tracep->chgQData(oldp+43,(vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata),64);
        tracep->chgQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+77,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+79,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+81,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+83,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+85,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+91,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+103,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+105,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
        tracep->chgQData(oldp+107,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
        tracep->chgQData(oldp+109,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
        tracep->chgCData(oldp+111,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+112,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
        tracep->chgCData(oldp+113,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                          >> 0xcU))),3);
        tracep->chgQData(oldp+114,(vlSelf->TOP__DOT__ID__DOT__immI),64);
        tracep->chgBit(oldp+116,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
        tracep->chgQData(oldp+117,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
        tracep->chgCData(oldp+119,((3U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                          >> 0x14U))),2);
        tracep->chgIData(oldp+120,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgQData(oldp+121,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                         ? (0x67U == 
                                            (0x7fU 
                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                         : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))
                                     ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                         ? 0ULL : (
                                                   (1U 
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
                                                        + vlSelf->TOP__DOT__IF__DOT__pc))))),64);
        tracep->chgIData(oldp+123,((0xfffffU & (IData)(
                                                       (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgBit(oldp+124,(((0x80000000ULL <= 
                                   (((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                  & (0x87ffffffULL 
                                     >= (((QData)((IData)(
                                                          vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))))));
        tracep->chgIData(oldp+125,((0xfffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (((((QData)((IData)(
                                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                            - 0x80000000ULL) 
                                                           >> 2U))))),20);
        tracep->chgIData(oldp+126,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (((((QData)((IData)(
                                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                             - 0x80000000ULL) 
                                                            >> 2U))))]),32);
        tracep->chgIData(oldp+127,((0xfffffU & (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgIData(oldp+128,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & (IData)(
                                                        (((((QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                          - 0x80000000ULL) 
                                                         >> 2U)))]),32);
        tracep->chgIData(oldp+129,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                            >> 0x20U))),32);
        tracep->chgBit(oldp+130,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                                  & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store))));
        tracep->chgIData(oldp+131,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
        tracep->chgBit(oldp+132,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                                  & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_load))));
        tracep->chgBit(oldp+133,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                                  & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store))));
        tracep->chgQData(oldp+134,(vlSelf->TOP__DOT__Main_Memory__DOT__MMIO_RW_rdata),64);
        tracep->chgQData(oldp+136,((((((QData)((IData)(
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                     - 0x80000000ULL) 
                                    >> 2U)),62);
        tracep->chgQData(oldp+138,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
        tracep->chgCData(oldp+140,((3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])),2);
        tracep->chgQData(oldp+141,(((8U == (0xfU & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                     ? 0xffffffffffffffffULL
                                     : (QData)((IData)(
                                                       ((4U 
                                                         == 
                                                         (0xfU 
                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                         ? 0xffffffffU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0xfU 
                                                           & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                          ? 0xffffU
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0xfU 
                                                            & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                           ? 0xffU
                                                           : 0U))))))),64);
        VL_EXTEND_WQ(95,64, __Vtemp_hb3bcce0a__0, (
                                                   (8U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                    ? 0xffffffffffffffffULL
                                                    : (QData)((IData)(
                                                                      ((4U 
                                                                        == 
                                                                        (0xfU 
                                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                        ? 0xffffffffU
                                                                        : 
                                                                       ((2U 
                                                                         == 
                                                                         (0xfU 
                                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                         ? 0xffffU
                                                                         : 
                                                                        ((1U 
                                                                          == 
                                                                          (0xfU 
                                                                           & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                          ? 0xffU
                                                                          : 0U)))))));
        VL_SHIFTL_WWI(95,95,5, __Vtemp_hddfc4a8c__0, __Vtemp_hb3bcce0a__0, 
                      (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
                                << 3U)));
        __Vtemp_h6cdd842a__0[0U] = __Vtemp_hddfc4a8c__0[0U];
        __Vtemp_h6cdd842a__0[1U] = __Vtemp_hddfc4a8c__0[1U];
        __Vtemp_h6cdd842a__0[2U] = (0x7fffffffU & __Vtemp_hddfc4a8c__0[2U]);
        tracep->chgWData(oldp+143,(__Vtemp_h6cdd842a__0),95);
        tracep->chgCData(oldp+146,((3U & ((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112) 
                                          >> 2U))),2);
        tracep->chgCData(oldp+147,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112))),2);
        tracep->chgCData(oldp+148,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
        tracep->chgCData(oldp+149,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 8U))))),8);
        tracep->chgCData(oldp+150,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
        tracep->chgCData(oldp+151,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x18U))))),8);
        tracep->chgCData(oldp+152,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x10U))))),8);
        tracep->chgCData(oldp+153,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x28U))))),8);
        tracep->chgCData(oldp+154,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x20U))))),8);
        tracep->chgCData(oldp+155,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x38U))))),8);
        tracep->chgCData(oldp+156,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_is_store)
                                              ? ((0x80U 
                                                  & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                  ? 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                              : (IData)(
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                         >> 0x30U))))),8);
        tracep->chgQData(oldp+157,((((QData)((IData)(
                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))),64);
    }
    tracep->chgBit(oldp+159,(vlSelf->clock));
    tracep->chgBit(oldp+160,(vlSelf->reset));
    tracep->chgQData(oldp+161,(vlSelf->io_timer_i),64);
    tracep->chgQData(oldp+163,(vlSelf->io_csrData_csrVal),64);
    tracep->chgQData(oldp+165,(vlSelf->io_csrData_epc),64);
    tracep->chgQData(oldp+167,(vlSelf->io_csrData_tvec),64);
    tracep->chgQData(oldp+169,(vlSelf->io_csrData_cause),64);
    tracep->chgQData(oldp+171,(vlSelf->io_csrData_status),64);
    tracep->chgQData(oldp+173,(vlSelf->io_regs_0),64);
    tracep->chgQData(oldp+175,(vlSelf->io_regs_1),64);
    tracep->chgQData(oldp+177,(vlSelf->io_regs_2),64);
    tracep->chgQData(oldp+179,(vlSelf->io_regs_3),64);
    tracep->chgQData(oldp+181,(vlSelf->io_regs_4),64);
    tracep->chgQData(oldp+183,(vlSelf->io_regs_5),64);
    tracep->chgQData(oldp+185,(vlSelf->io_regs_6),64);
    tracep->chgQData(oldp+187,(vlSelf->io_regs_7),64);
    tracep->chgQData(oldp+189,(vlSelf->io_regs_8),64);
    tracep->chgQData(oldp+191,(vlSelf->io_regs_9),64);
    tracep->chgQData(oldp+193,(vlSelf->io_regs_10),64);
    tracep->chgQData(oldp+195,(vlSelf->io_regs_11),64);
    tracep->chgQData(oldp+197,(vlSelf->io_regs_12),64);
    tracep->chgQData(oldp+199,(vlSelf->io_regs_13),64);
    tracep->chgQData(oldp+201,(vlSelf->io_regs_14),64);
    tracep->chgQData(oldp+203,(vlSelf->io_regs_15),64);
    tracep->chgQData(oldp+205,(vlSelf->io_regs_16),64);
    tracep->chgQData(oldp+207,(vlSelf->io_regs_17),64);
    tracep->chgQData(oldp+209,(vlSelf->io_regs_18),64);
    tracep->chgQData(oldp+211,(vlSelf->io_regs_19),64);
    tracep->chgQData(oldp+213,(vlSelf->io_regs_20),64);
    tracep->chgQData(oldp+215,(vlSelf->io_regs_21),64);
    tracep->chgQData(oldp+217,(vlSelf->io_regs_22),64);
    tracep->chgQData(oldp+219,(vlSelf->io_regs_23),64);
    tracep->chgQData(oldp+221,(vlSelf->io_regs_24),64);
    tracep->chgQData(oldp+223,(vlSelf->io_regs_25),64);
    tracep->chgQData(oldp+225,(vlSelf->io_regs_26),64);
    tracep->chgQData(oldp+227,(vlSelf->io_regs_27),64);
    tracep->chgQData(oldp+229,(vlSelf->io_regs_28),64);
    tracep->chgQData(oldp+231,(vlSelf->io_regs_29),64);
    tracep->chgQData(oldp+233,(vlSelf->io_regs_30),64);
    tracep->chgQData(oldp+235,(vlSelf->io_regs_31),64);
    tracep->chgQData(oldp+237,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+239,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+240,(vlSelf->io_o1),64);
    tracep->chgQData(oldp+242,(vlSelf->io_o2),64);
    tracep->chgQData(oldp+244,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+246,(vlSelf->io_src2),64);
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

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
    VlWide<3>/*95:0*/ __Vtemp_hfb1bc2e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h49cf1568__0;
    VlWide<3>/*95:0*/ __Vtemp_hc95bd1e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3ff98391__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__1;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__1;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__1;
    VlWide<3>/*95:0*/ __Vtemp_hdf6883be__0;
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
        tracep->chgBit(oldp+32,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (3U == (0x7fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))));
        tracep->chgBit(oldp+33,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore));
        tracep->chgBit(oldp+34,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned));
        tracep->chgCData(oldp+35,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112))),2);
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
        tracep->chgQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+77,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+79,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+81,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+83,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+85,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+87,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+89,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+91,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
        tracep->chgQData(oldp+103,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
        tracep->chgQData(oldp+105,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
        tracep->chgCData(oldp+107,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+108,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
        tracep->chgCData(oldp+109,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                          >> 0xcU))),3);
        tracep->chgQData(oldp+110,(vlSelf->TOP__DOT__ID__DOT__immI),64);
        tracep->chgBit(oldp+112,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
        tracep->chgQData(oldp+113,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
        tracep->chgCData(oldp+115,((3U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                          >> 0x14U))),2);
        tracep->chgIData(oldp+116,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgQData(oldp+117,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
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
        tracep->chgIData(oldp+119,((0xfffffU & (IData)(
                                                       (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgBit(oldp+120,(((0x80000000ULL <= 
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
        tracep->chgIData(oldp+121,((0xfffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (((((QData)((IData)(
                                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                            - 0x80000000ULL) 
                                                           >> 2U))))),20);
        tracep->chgIData(oldp+122,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & ((IData)(1U) 
                                                 + (IData)(
                                                           (((((QData)((IData)(
                                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                             - 0x80000000ULL) 
                                                            >> 2U))))]),32);
        tracep->chgIData(oldp+123,((0xfffffU & (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),20);
        tracep->chgIData(oldp+124,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                   [(0xfffffU & (IData)(
                                                        (((((QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                          - 0x80000000ULL) 
                                                         >> 2U)))]),32);
        tracep->chgIData(oldp+125,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                            >> 0x20U))),32);
        tracep->chgBit(oldp+126,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                                  & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore))));
        tracep->chgIData(oldp+127,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
        tracep->chgBit(oldp+128,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                                  & ((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)) 
                                     & ((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)) 
                                        & ((0xa0000100ULL 
                                            <= (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                           & (0xa0000108ULL 
                                              >= (((QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))))))));
        tracep->chgQData(oldp+129,((((((QData)((IData)(
                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                     - 0x80000000ULL) 
                                    >> 2U)),62);
        tracep->chgQData(oldp+131,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
        tracep->chgCData(oldp+133,((3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])),2);
        tracep->chgQData(oldp+134,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                     ? 0xffffffffffffffffULL
                                     : (QData)((IData)(
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                         ? 0xffffffffU
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (3U 
                                                           & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                          ? 0xffffU
                                                          : 0xffU)))))),64);
        VL_EXTEND_WQ(95,64, __Vtemp_hfb1bc2e8__0, (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                    ? 0xffffffffffffffffULL
                                                    : (QData)((IData)(
                                                                      ((2U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                        ? 0xffffffffU
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                         ? 0xffffU
                                                                         : 0xffU))))));
        VL_SHIFTL_WWI(95,95,5, __Vtemp_h49cf1568__0, __Vtemp_hfb1bc2e8__0, 
                      (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
                                << 3U)));
        __Vtemp_hc95bd1e4__0[0U] = __Vtemp_h49cf1568__0[0U];
        __Vtemp_hc95bd1e4__0[1U] = __Vtemp_h49cf1568__0[1U];
        __Vtemp_hc95bd1e4__0[2U] = (0x7fffffffU & __Vtemp_h49cf1568__0[2U]);
        tracep->chgWData(oldp+136,(__Vtemp_hc95bd1e4__0),95);
        tracep->chgWData(oldp+139,(vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp),95);
        VL_EXTEND_WQ(95,64, __Vtemp_h45976053__0, (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
        VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__0, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__0, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        if ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            __Vtemp_h3ff98391__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_h3ff98391__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_h3ff98391__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else if ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                __Vtemp_h3ff98391__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                __Vtemp_h3ff98391__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                __Vtemp_h3ff98391__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                __Vtemp_h3ff98391__0[0U] = __Vtemp_h45976053__0[0U];
                __Vtemp_h3ff98391__0[1U] = __Vtemp_h45976053__0[1U];
                __Vtemp_h3ff98391__0[2U] = __Vtemp_h45976053__0[2U];
            }
        } else if ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                __Vtemp_h3ff98391__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                __Vtemp_h3ff98391__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                __Vtemp_h3ff98391__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                __Vtemp_h3ff98391__0[0U] = __Vtemp_hbd746cff__0[0U];
                __Vtemp_h3ff98391__0[1U] = __Vtemp_hbd746cff__0[1U];
                __Vtemp_h3ff98391__0[2U] = __Vtemp_hbd746cff__0[2U];
            }
        } else if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
            __Vtemp_h3ff98391__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_h3ff98391__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_h3ff98391__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else {
            __Vtemp_h3ff98391__0[0U] = __Vtemp_h9b56c48b__0[0U];
            __Vtemp_h3ff98391__0[1U] = __Vtemp_h9b56c48b__0[1U];
            __Vtemp_h3ff98391__0[2U] = __Vtemp_h9b56c48b__0[2U];
        }
        tracep->chgWData(oldp+142,(__Vtemp_h3ff98391__0),95);
        tracep->chgCData(oldp+145,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
        tracep->chgCData(oldp+146,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+147,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+148,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+149,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+150,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+151,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+152,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
        tracep->chgCData(oldp+153,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
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
    }
    tracep->chgBit(oldp+154,(vlSelf->clock));
    tracep->chgBit(oldp+155,(vlSelf->reset));
    tracep->chgQData(oldp+156,(vlSelf->io_timer_i),64);
    tracep->chgQData(oldp+158,(vlSelf->io_csrData_csrVal),64);
    tracep->chgQData(oldp+160,(vlSelf->io_csrData_epc),64);
    tracep->chgQData(oldp+162,(vlSelf->io_csrData_tvec),64);
    tracep->chgQData(oldp+164,(vlSelf->io_csrData_cause),64);
    tracep->chgQData(oldp+166,(vlSelf->io_csrData_status),64);
    tracep->chgQData(oldp+168,(vlSelf->io_regs_0),64);
    tracep->chgQData(oldp+170,(vlSelf->io_regs_1),64);
    tracep->chgQData(oldp+172,(vlSelf->io_regs_2),64);
    tracep->chgQData(oldp+174,(vlSelf->io_regs_3),64);
    tracep->chgQData(oldp+176,(vlSelf->io_regs_4),64);
    tracep->chgQData(oldp+178,(vlSelf->io_regs_5),64);
    tracep->chgQData(oldp+180,(vlSelf->io_regs_6),64);
    tracep->chgQData(oldp+182,(vlSelf->io_regs_7),64);
    tracep->chgQData(oldp+184,(vlSelf->io_regs_8),64);
    tracep->chgQData(oldp+186,(vlSelf->io_regs_9),64);
    tracep->chgQData(oldp+188,(vlSelf->io_regs_10),64);
    tracep->chgQData(oldp+190,(vlSelf->io_regs_11),64);
    tracep->chgQData(oldp+192,(vlSelf->io_regs_12),64);
    tracep->chgQData(oldp+194,(vlSelf->io_regs_13),64);
    tracep->chgQData(oldp+196,(vlSelf->io_regs_14),64);
    tracep->chgQData(oldp+198,(vlSelf->io_regs_15),64);
    tracep->chgQData(oldp+200,(vlSelf->io_regs_16),64);
    tracep->chgQData(oldp+202,(vlSelf->io_regs_17),64);
    tracep->chgQData(oldp+204,(vlSelf->io_regs_18),64);
    tracep->chgQData(oldp+206,(vlSelf->io_regs_19),64);
    tracep->chgQData(oldp+208,(vlSelf->io_regs_20),64);
    tracep->chgQData(oldp+210,(vlSelf->io_regs_21),64);
    tracep->chgQData(oldp+212,(vlSelf->io_regs_22),64);
    tracep->chgQData(oldp+214,(vlSelf->io_regs_23),64);
    tracep->chgQData(oldp+216,(vlSelf->io_regs_24),64);
    tracep->chgQData(oldp+218,(vlSelf->io_regs_25),64);
    tracep->chgQData(oldp+220,(vlSelf->io_regs_26),64);
    tracep->chgQData(oldp+222,(vlSelf->io_regs_27),64);
    tracep->chgQData(oldp+224,(vlSelf->io_regs_28),64);
    tracep->chgQData(oldp+226,(vlSelf->io_regs_29),64);
    tracep->chgQData(oldp+228,(vlSelf->io_regs_30),64);
    tracep->chgQData(oldp+230,(vlSelf->io_regs_31),64);
    tracep->chgQData(oldp+232,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+234,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+235,(vlSelf->io_o1),64);
    tracep->chgQData(oldp+237,(vlSelf->io_o2),64);
    tracep->chgQData(oldp+239,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+241,(vlSelf->io_src2),64);
    VL_EXTEND_WQ(95,64, __Vtemp_h45976053__1, (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
    VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__1, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__1, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 7U))))) 
                                                << 8U) 
                                               | (QData)((IData)(
                                                                 (0xffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_hdf6883be__0, ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)
                                                ? 0ULL
                                                : ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)
                                                    ? vlSelf->io_timer_i
                                                    : 0ULL)));
    tracep->chgQData(oldp+243,((((QData)((IData)(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                    ? 
                                                   vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                     ? 
                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                      ? 
                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                      : 
                                                     __Vtemp_h45976053__1[1U])
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                      ? 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                       ? 
                                                      vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                       : 
                                                      __Vtemp_hbd746cff__1[1U])
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                       ? 
                                                      vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                       : 
                                                      __Vtemp_h9b56c48b__1[1U]))))
                                                   : 
                                                  __Vtemp_hdf6883be__0[1U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                               ? 
                                                              ((3U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                ? 
                                                               vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                 ? 
                                                                ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                  ? 
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                  : 
                                                                 __Vtemp_h45976053__1[0U])
                                                                 : 
                                                                ((1U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                                                  ? 
                                                                 ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                   ? 
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                   : 
                                                                  __Vtemp_hbd746cff__1[0U])
                                                                  : 
                                                                 ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                   ? 
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                   : 
                                                                  __Vtemp_h9b56c48b__1[0U]))))
                                                               : 
                                                              __Vtemp_hdf6883be__0[0U]))))),64);
    tracep->chgQData(oldp+245,(vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata),64);
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

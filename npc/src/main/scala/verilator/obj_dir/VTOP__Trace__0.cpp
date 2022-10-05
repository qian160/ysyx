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
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h8883d467__0;
    VlWide<3>/*95:0*/ __Vtemp_he39eabc1__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6722311__0;
    VlWide<3>/*95:0*/ __Vtemp_h1c2aa7b5__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__1;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__1;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__1;
    VlWide<3>/*95:0*/ __Vtemp_haaf55256__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                    ? (0x67U == (0x7fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                    : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? ((7U == 
                                               (7U 
                                                & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                   >> 0xcU)))
                                               ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                  >= vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                               : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   < vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTES_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 
                                                     (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                      != vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                      : (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x7000U 
                                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                                                 & (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                                    == vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))))))))
                                           : ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & (4U 
                                                 == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))));
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
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                            >> 7U))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0x800U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                           << 4U)) 
                                                                       | ((0x7e0U 
                                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 0x14U)) 
                                                                          | (0x1eU 
                                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 7U))))))))
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
                                                     : 0ULL))))))),64);
        tracep->chgIData(oldp+3,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
        tracep->chgQData(oldp+4,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
        tracep->chgQData(oldp+6,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val),64);
        tracep->chgQData(oldp+8,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val),64);
        tracep->chgQData(oldp+10,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
        tracep->chgCData(oldp+12,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 0x14U))),5);
        tracep->chgBit(oldp+14,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen));
        tracep->chgCData(oldp+15,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 7U))),5);
        tracep->chgQData(oldp+16,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
        tracep->chgQData(oldp+18,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
        tracep->chgCData(oldp+20,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt),5);
        tracep->chgBit(oldp+21,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (3U == (0x7fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))));
        tracep->chgBit(oldp+22,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore));
        tracep->chgBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned));
        tracep->chgCData(oldp+24,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
        tracep->chgQData(oldp+25,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),64);
        tracep->chgBit(oldp+27,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                  ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
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
        tracep->chgQData(oldp+28,((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))),64);
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
        VL_EXTEND_WQ(95,64, __Vtemp_h8883d467__0, ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)
                                                    ? 0ULL
                                                    : 
                                                   ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)
                                                     ? vlSelf->TOP__DOT__Main_Memory__DOT__rtc_past_time
                                                     : 0ULL)));
        tracep->chgQData(oldp+30,((((QData)((IData)(
                                                    ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                      ? 
                                                     ((3U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                       ? 
                                                      vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                        ? 
                                                       ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                         ? 
                                                        vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                         : 
                                                        __Vtemp_h45976053__0[1U])
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                         ? 
                                                        ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                          ? 
                                                         vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                          : 
                                                         __Vtemp_hbd746cff__0[1U])
                                                         : 
                                                        ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                          ? 
                                                         vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                          : 
                                                         __Vtemp_h9b56c48b__0[1U]))))
                                                      : 
                                                     __Vtemp_h8883d467__0[1U]))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)
                                                                  ? 
                                                                 ((3U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                   ? 
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                   : 
                                                                  ((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                    ? 
                                                                   ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                     ? 
                                                                    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                     : 
                                                                    __Vtemp_h45976053__0[0U])
                                                                    : 
                                                                   ((1U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                     ? 
                                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                      ? 
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                      : 
                                                                     __Vtemp_hbd746cff__0[0U])
                                                                     : 
                                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned)
                                                                      ? 
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                                      : 
                                                                     __Vtemp_h9b56c48b__0[0U]))))
                                                                  : 
                                                                 __Vtemp_h8883d467__0[0U]))))),64);
        tracep->chgQData(oldp+32,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
        tracep->chgCData(oldp+34,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
        tracep->chgCData(oldp+35,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
        tracep->chgCData(oldp+36,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xcU))),3);
        tracep->chgQData(oldp+37,(vlSelf->TOP__DOT__ID__DOT__immI),64);
        tracep->chgBit(oldp+39,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
        tracep->chgIData(oldp+40,(vlSelf->TOP__DOT__IF__DOT__pc),32);
        tracep->chgQData(oldp+41,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? (0x67U == 
                                           (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                        : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? ((7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   >= vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                    < vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_GTES_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 
                                                     VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 
                                                      (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                       != vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                       : (IData)(
                                                                 ((0U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                                                  & (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                                     == vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))))))))
                                               : ((2U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))
                                    ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? 0ULL : ((1U 
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
                                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 7U))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                             << 4U)) 
                                                                         | ((0x7e0U 
                                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x14U)) 
                                                                            | (0x1eU 
                                                                               & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 7U))))))))
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
                                                       : 0ULL))))))
                                    : (QData)((IData)(
                                                      ((IData)(4U) 
                                                       + vlSelf->TOP__DOT__IF__DOT__pc))))),64);
        tracep->chgIData(oldp+43,((0xfffffU & (IData)(
                                                      (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),20);
        tracep->chgBit(oldp+44,(((0x80000000ULL <= 
                                  (((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))) 
                                 & (0x87ffffffULL >= 
                                    (((QData)((IData)(
                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])))))));
        tracep->chgIData(oldp+45,((0xfffffU & ((IData)(1U) 
                                               + (IData)(
                                                         (((((QData)((IData)(
                                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                           - 0x80000000ULL) 
                                                          >> 2U))))),20);
        tracep->chgIData(oldp+46,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                  [(0xfffffU & ((IData)(1U) 
                                                + (IData)(
                                                          (((((QData)((IData)(
                                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                            - 0x80000000ULL) 
                                                           >> 2U))))]),32);
        tracep->chgIData(oldp+47,((0xfffffU & (IData)(
                                                      (((((QData)((IData)(
                                                                          vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),20);
        tracep->chgIData(oldp+48,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                  [(0xfffffU & (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))]),32);
        tracep->chgIData(oldp+49,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                  [0U]),32);
        tracep->chgIData(oldp+50,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                  [1U]),32);
        tracep->chgIData(oldp+51,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                           >> 0x20U))),32);
        tracep->chgBit(oldp+52,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                                 & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore))));
        tracep->chgIData(oldp+53,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
        tracep->chgQData(oldp+54,(vlSelf->TOP__DOT__Main_Memory__DOT__rtc_past_time),64);
        tracep->chgQData(oldp+56,((((((QData)((IData)(
                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                    - 0x80000000ULL) 
                                   >> 2U)),62);
        tracep->chgQData(oldp+58,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
        tracep->chgCData(oldp+60,((3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U])),2);
        tracep->chgQData(oldp+61,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                    ? 0xffffffffffffffffULL
                                    : (QData)((IData)(
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                        ? 0xffffffffU
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                         ? 0xffffU
                                                         : 0xffU)))))),64);
        VL_EXTEND_WQ(95,64, __Vtemp_he39eabc1__0, (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? 0xffffffffffffffffULL
                                                    : (QData)((IData)(
                                                                      ((2U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                        ? 0xffffffffU
                                                                        : 
                                                                       ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                                         ? 0xffffU
                                                                         : 0xffU))))));
        VL_SHIFTL_WWI(95,95,5, __Vtemp_hd6722311__0, __Vtemp_he39eabc1__0, 
                      (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U] 
                                << 3U)));
        __Vtemp_h1c2aa7b5__0[0U] = __Vtemp_hd6722311__0[0U];
        __Vtemp_h1c2aa7b5__0[1U] = __Vtemp_hd6722311__0[1U];
        __Vtemp_h1c2aa7b5__0[2U] = (0x7fffffffU & __Vtemp_hd6722311__0[2U]);
        tracep->chgWData(oldp+63,(__Vtemp_h1c2aa7b5__0),95);
        tracep->chgWData(oldp+66,(vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp),95);
        VL_EXTEND_WQ(95,64, __Vtemp_h45976053__1, (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
        VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__1, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 0xfU))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__1, (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                           >> 7U))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
        if ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
            __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else if ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                __Vtemp_haaf55256__0[0U] = __Vtemp_h45976053__1[0U];
                __Vtemp_haaf55256__0[1U] = __Vtemp_h45976053__1[1U];
                __Vtemp_haaf55256__0[2U] = __Vtemp_h45976053__1[2U];
            }
        } else if ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                __Vtemp_haaf55256__0[0U] = __Vtemp_hbd746cff__1[0U];
                __Vtemp_haaf55256__0[1U] = __Vtemp_hbd746cff__1[1U];
                __Vtemp_haaf55256__0[2U] = __Vtemp_hbd746cff__1[2U];
            }
        } else if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
            __Vtemp_haaf55256__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            __Vtemp_haaf55256__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            __Vtemp_haaf55256__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else {
            __Vtemp_haaf55256__0[0U] = __Vtemp_h9b56c48b__1[0U];
            __Vtemp_haaf55256__0[1U] = __Vtemp_h9b56c48b__1[1U];
            __Vtemp_haaf55256__0[2U] = __Vtemp_h9b56c48b__1[2U];
        }
        tracep->chgWData(oldp+69,(__Vtemp_haaf55256__0),95);
        tracep->chgCData(oldp+72,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
        tracep->chgCData(oldp+73,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 8U))))),8);
        tracep->chgCData(oldp+74,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                             : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
        tracep->chgCData(oldp+75,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x18U))))),8);
        tracep->chgCData(oldp+76,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((2U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x10U))))),8);
        tracep->chgCData(oldp+77,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x28U))))),8);
        tracep->chgCData(oldp+78,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x20U))))),8);
        tracep->chgCData(oldp+79,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x38U))))),8);
        tracep->chgCData(oldp+80,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                             ? ((0x80U 
                                                 & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                 ? 
                                                ((6U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                             : (IData)(
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                        >> 0x30U))))),8);
        tracep->chgQData(oldp+81,(((((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                   - 0xa0000048ULL)),64);
        tracep->chgBit(oldp+83,(((~ (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)) 
                                 & (4ULL == ((((QData)((IData)(
                                                               vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_189[0U]))) 
                                             - 0xa0000048ULL)))));
        tracep->chgQData(oldp+84,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+86,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+88,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+90,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+92,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+94,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+96,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+98,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+100,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+102,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+104,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+106,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+108,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+110,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+112,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+114,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+116,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+118,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+120,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+122,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+124,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+126,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+128,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+130,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+132,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+134,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+136,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+138,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+140,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+142,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+144,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    }
    tracep->chgBit(oldp+146,(vlSelf->clock));
    tracep->chgBit(oldp+147,(vlSelf->reset));
    tracep->chgQData(oldp+148,(vlSelf->io_timer_i),64);
    tracep->chgQData(oldp+150,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+152,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+153,(vlSelf->io_o),64);
    tracep->chgQData(oldp+155,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+157,(vlSelf->io_src2),64);
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
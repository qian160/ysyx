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
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
        tracep->chgCData(oldp+20,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
        tracep->chgBit(oldp+21,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & (3U == (0x7fU 
                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
        tracep->chgBit(oldp+22,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
        tracep->chgBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
        tracep->chgCData(oldp+24,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
        tracep->chgQData(oldp+25,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
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
                                                       ? vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val
                                                       : 0ULL)))))))),64);
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
        tracep->chgQData(oldp+47,(((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
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
        tracep->chgCData(oldp+49,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
        tracep->chgCData(oldp+50,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
        tracep->chgCData(oldp+51,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
        tracep->chgCData(oldp+52,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
        tracep->chgCData(oldp+53,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
        tracep->chgCData(oldp+54,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
        tracep->chgCData(oldp+55,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
        tracep->chgCData(oldp+56,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
        tracep->chgCData(oldp+57,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
        tracep->chgCData(oldp+58,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
        tracep->chgCData(oldp+59,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
        tracep->chgCData(oldp+60,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
        tracep->chgCData(oldp+61,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
        tracep->chgCData(oldp+62,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
        tracep->chgCData(oldp+63,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
        tracep->chgCData(oldp+64,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
        tracep->chgCData(oldp+65,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                           >> 3U))),4);
        tracep->chgCData(oldp+66,(vlSelf->TOP__DOT__MEM__DOT__ram1
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+67,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__sdata))),8);
        tracep->chgCData(oldp+68,(vlSelf->TOP__DOT__MEM__DOT__ram2[0]),8);
        tracep->chgCData(oldp+69,(vlSelf->TOP__DOT__MEM__DOT__ram2[1]),8);
        tracep->chgCData(oldp+70,(vlSelf->TOP__DOT__MEM__DOT__ram2[2]),8);
        tracep->chgCData(oldp+71,(vlSelf->TOP__DOT__MEM__DOT__ram2[3]),8);
        tracep->chgCData(oldp+72,(vlSelf->TOP__DOT__MEM__DOT__ram2[4]),8);
        tracep->chgCData(oldp+73,(vlSelf->TOP__DOT__MEM__DOT__ram2[5]),8);
        tracep->chgCData(oldp+74,(vlSelf->TOP__DOT__MEM__DOT__ram2[6]),8);
        tracep->chgCData(oldp+75,(vlSelf->TOP__DOT__MEM__DOT__ram2[7]),8);
        tracep->chgCData(oldp+76,(vlSelf->TOP__DOT__MEM__DOT__ram2[8]),8);
        tracep->chgCData(oldp+77,(vlSelf->TOP__DOT__MEM__DOT__ram2[9]),8);
        tracep->chgCData(oldp+78,(vlSelf->TOP__DOT__MEM__DOT__ram2[10]),8);
        tracep->chgCData(oldp+79,(vlSelf->TOP__DOT__MEM__DOT__ram2[11]),8);
        tracep->chgCData(oldp+80,(vlSelf->TOP__DOT__MEM__DOT__ram2[12]),8);
        tracep->chgCData(oldp+81,(vlSelf->TOP__DOT__MEM__DOT__ram2[13]),8);
        tracep->chgCData(oldp+82,(vlSelf->TOP__DOT__MEM__DOT__ram2[14]),8);
        tracep->chgCData(oldp+83,(vlSelf->TOP__DOT__MEM__DOT__ram2[15]),8);
        tracep->chgCData(oldp+84,(vlSelf->TOP__DOT__MEM__DOT__ram2
                                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                            >> 3U))]),8);
        tracep->chgCData(oldp+85,(vlSelf->TOP__DOT__MEM__DOT__ram3[0]),8);
        tracep->chgCData(oldp+86,(vlSelf->TOP__DOT__MEM__DOT__ram3[1]),8);
        tracep->chgCData(oldp+87,(vlSelf->TOP__DOT__MEM__DOT__ram3[2]),8);
        tracep->chgCData(oldp+88,(vlSelf->TOP__DOT__MEM__DOT__ram3[3]),8);
        tracep->chgCData(oldp+89,(vlSelf->TOP__DOT__MEM__DOT__ram3[4]),8);
        tracep->chgCData(oldp+90,(vlSelf->TOP__DOT__MEM__DOT__ram3[5]),8);
        tracep->chgCData(oldp+91,(vlSelf->TOP__DOT__MEM__DOT__ram3[6]),8);
        tracep->chgCData(oldp+92,(vlSelf->TOP__DOT__MEM__DOT__ram3[7]),8);
        tracep->chgCData(oldp+93,(vlSelf->TOP__DOT__MEM__DOT__ram3[8]),8);
        tracep->chgCData(oldp+94,(vlSelf->TOP__DOT__MEM__DOT__ram3[9]),8);
        tracep->chgCData(oldp+95,(vlSelf->TOP__DOT__MEM__DOT__ram3[10]),8);
        tracep->chgCData(oldp+96,(vlSelf->TOP__DOT__MEM__DOT__ram3[11]),8);
        tracep->chgCData(oldp+97,(vlSelf->TOP__DOT__MEM__DOT__ram3[12]),8);
        tracep->chgCData(oldp+98,(vlSelf->TOP__DOT__MEM__DOT__ram3[13]),8);
        tracep->chgCData(oldp+99,(vlSelf->TOP__DOT__MEM__DOT__ram3[14]),8);
        tracep->chgCData(oldp+100,(vlSelf->TOP__DOT__MEM__DOT__ram3[15]),8);
        tracep->chgCData(oldp+101,(vlSelf->TOP__DOT__MEM__DOT__ram3
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+102,(vlSelf->TOP__DOT__MEM__DOT__ram4[0]),8);
        tracep->chgCData(oldp+103,(vlSelf->TOP__DOT__MEM__DOT__ram4[1]),8);
        tracep->chgCData(oldp+104,(vlSelf->TOP__DOT__MEM__DOT__ram4[2]),8);
        tracep->chgCData(oldp+105,(vlSelf->TOP__DOT__MEM__DOT__ram4[3]),8);
        tracep->chgCData(oldp+106,(vlSelf->TOP__DOT__MEM__DOT__ram4[4]),8);
        tracep->chgCData(oldp+107,(vlSelf->TOP__DOT__MEM__DOT__ram4[5]),8);
        tracep->chgCData(oldp+108,(vlSelf->TOP__DOT__MEM__DOT__ram4[6]),8);
        tracep->chgCData(oldp+109,(vlSelf->TOP__DOT__MEM__DOT__ram4[7]),8);
        tracep->chgCData(oldp+110,(vlSelf->TOP__DOT__MEM__DOT__ram4[8]),8);
        tracep->chgCData(oldp+111,(vlSelf->TOP__DOT__MEM__DOT__ram4[9]),8);
        tracep->chgCData(oldp+112,(vlSelf->TOP__DOT__MEM__DOT__ram4[10]),8);
        tracep->chgCData(oldp+113,(vlSelf->TOP__DOT__MEM__DOT__ram4[11]),8);
        tracep->chgCData(oldp+114,(vlSelf->TOP__DOT__MEM__DOT__ram4[12]),8);
        tracep->chgCData(oldp+115,(vlSelf->TOP__DOT__MEM__DOT__ram4[13]),8);
        tracep->chgCData(oldp+116,(vlSelf->TOP__DOT__MEM__DOT__ram4[14]),8);
        tracep->chgCData(oldp+117,(vlSelf->TOP__DOT__MEM__DOT__ram4[15]),8);
        tracep->chgCData(oldp+118,(vlSelf->TOP__DOT__MEM__DOT__ram4
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+119,(vlSelf->TOP__DOT__MEM__DOT__ram5[0]),8);
        tracep->chgCData(oldp+120,(vlSelf->TOP__DOT__MEM__DOT__ram5[1]),8);
        tracep->chgCData(oldp+121,(vlSelf->TOP__DOT__MEM__DOT__ram5[2]),8);
        tracep->chgCData(oldp+122,(vlSelf->TOP__DOT__MEM__DOT__ram5[3]),8);
        tracep->chgCData(oldp+123,(vlSelf->TOP__DOT__MEM__DOT__ram5[4]),8);
        tracep->chgCData(oldp+124,(vlSelf->TOP__DOT__MEM__DOT__ram5[5]),8);
        tracep->chgCData(oldp+125,(vlSelf->TOP__DOT__MEM__DOT__ram5[6]),8);
        tracep->chgCData(oldp+126,(vlSelf->TOP__DOT__MEM__DOT__ram5[7]),8);
        tracep->chgCData(oldp+127,(vlSelf->TOP__DOT__MEM__DOT__ram5[8]),8);
        tracep->chgCData(oldp+128,(vlSelf->TOP__DOT__MEM__DOT__ram5[9]),8);
        tracep->chgCData(oldp+129,(vlSelf->TOP__DOT__MEM__DOT__ram5[10]),8);
        tracep->chgCData(oldp+130,(vlSelf->TOP__DOT__MEM__DOT__ram5[11]),8);
        tracep->chgCData(oldp+131,(vlSelf->TOP__DOT__MEM__DOT__ram5[12]),8);
        tracep->chgCData(oldp+132,(vlSelf->TOP__DOT__MEM__DOT__ram5[13]),8);
        tracep->chgCData(oldp+133,(vlSelf->TOP__DOT__MEM__DOT__ram5[14]),8);
        tracep->chgCData(oldp+134,(vlSelf->TOP__DOT__MEM__DOT__ram5[15]),8);
        tracep->chgCData(oldp+135,(vlSelf->TOP__DOT__MEM__DOT__ram5
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+136,(vlSelf->TOP__DOT__MEM__DOT__ram6[0]),8);
        tracep->chgCData(oldp+137,(vlSelf->TOP__DOT__MEM__DOT__ram6[1]),8);
        tracep->chgCData(oldp+138,(vlSelf->TOP__DOT__MEM__DOT__ram6[2]),8);
        tracep->chgCData(oldp+139,(vlSelf->TOP__DOT__MEM__DOT__ram6[3]),8);
        tracep->chgCData(oldp+140,(vlSelf->TOP__DOT__MEM__DOT__ram6[4]),8);
        tracep->chgCData(oldp+141,(vlSelf->TOP__DOT__MEM__DOT__ram6[5]),8);
        tracep->chgCData(oldp+142,(vlSelf->TOP__DOT__MEM__DOT__ram6[6]),8);
        tracep->chgCData(oldp+143,(vlSelf->TOP__DOT__MEM__DOT__ram6[7]),8);
        tracep->chgCData(oldp+144,(vlSelf->TOP__DOT__MEM__DOT__ram6[8]),8);
        tracep->chgCData(oldp+145,(vlSelf->TOP__DOT__MEM__DOT__ram6[9]),8);
        tracep->chgCData(oldp+146,(vlSelf->TOP__DOT__MEM__DOT__ram6[10]),8);
        tracep->chgCData(oldp+147,(vlSelf->TOP__DOT__MEM__DOT__ram6[11]),8);
        tracep->chgCData(oldp+148,(vlSelf->TOP__DOT__MEM__DOT__ram6[12]),8);
        tracep->chgCData(oldp+149,(vlSelf->TOP__DOT__MEM__DOT__ram6[13]),8);
        tracep->chgCData(oldp+150,(vlSelf->TOP__DOT__MEM__DOT__ram6[14]),8);
        tracep->chgCData(oldp+151,(vlSelf->TOP__DOT__MEM__DOT__ram6[15]),8);
        tracep->chgCData(oldp+152,(vlSelf->TOP__DOT__MEM__DOT__ram6
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+153,(vlSelf->TOP__DOT__MEM__DOT__ram7[0]),8);
        tracep->chgCData(oldp+154,(vlSelf->TOP__DOT__MEM__DOT__ram7[1]),8);
        tracep->chgCData(oldp+155,(vlSelf->TOP__DOT__MEM__DOT__ram7[2]),8);
        tracep->chgCData(oldp+156,(vlSelf->TOP__DOT__MEM__DOT__ram7[3]),8);
        tracep->chgCData(oldp+157,(vlSelf->TOP__DOT__MEM__DOT__ram7[4]),8);
        tracep->chgCData(oldp+158,(vlSelf->TOP__DOT__MEM__DOT__ram7[5]),8);
        tracep->chgCData(oldp+159,(vlSelf->TOP__DOT__MEM__DOT__ram7[6]),8);
        tracep->chgCData(oldp+160,(vlSelf->TOP__DOT__MEM__DOT__ram7[7]),8);
        tracep->chgCData(oldp+161,(vlSelf->TOP__DOT__MEM__DOT__ram7[8]),8);
        tracep->chgCData(oldp+162,(vlSelf->TOP__DOT__MEM__DOT__ram7[9]),8);
        tracep->chgCData(oldp+163,(vlSelf->TOP__DOT__MEM__DOT__ram7[10]),8);
        tracep->chgCData(oldp+164,(vlSelf->TOP__DOT__MEM__DOT__ram7[11]),8);
        tracep->chgCData(oldp+165,(vlSelf->TOP__DOT__MEM__DOT__ram7[12]),8);
        tracep->chgCData(oldp+166,(vlSelf->TOP__DOT__MEM__DOT__ram7[13]),8);
        tracep->chgCData(oldp+167,(vlSelf->TOP__DOT__MEM__DOT__ram7[14]),8);
        tracep->chgCData(oldp+168,(vlSelf->TOP__DOT__MEM__DOT__ram7[15]),8);
        tracep->chgCData(oldp+169,(vlSelf->TOP__DOT__MEM__DOT__ram7
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgCData(oldp+170,(vlSelf->TOP__DOT__MEM__DOT__ram8[0]),8);
        tracep->chgCData(oldp+171,(vlSelf->TOP__DOT__MEM__DOT__ram8[1]),8);
        tracep->chgCData(oldp+172,(vlSelf->TOP__DOT__MEM__DOT__ram8[2]),8);
        tracep->chgCData(oldp+173,(vlSelf->TOP__DOT__MEM__DOT__ram8[3]),8);
        tracep->chgCData(oldp+174,(vlSelf->TOP__DOT__MEM__DOT__ram8[4]),8);
        tracep->chgCData(oldp+175,(vlSelf->TOP__DOT__MEM__DOT__ram8[5]),8);
        tracep->chgCData(oldp+176,(vlSelf->TOP__DOT__MEM__DOT__ram8[6]),8);
        tracep->chgCData(oldp+177,(vlSelf->TOP__DOT__MEM__DOT__ram8[7]),8);
        tracep->chgCData(oldp+178,(vlSelf->TOP__DOT__MEM__DOT__ram8[8]),8);
        tracep->chgCData(oldp+179,(vlSelf->TOP__DOT__MEM__DOT__ram8[9]),8);
        tracep->chgCData(oldp+180,(vlSelf->TOP__DOT__MEM__DOT__ram8[10]),8);
        tracep->chgCData(oldp+181,(vlSelf->TOP__DOT__MEM__DOT__ram8[11]),8);
        tracep->chgCData(oldp+182,(vlSelf->TOP__DOT__MEM__DOT__ram8[12]),8);
        tracep->chgCData(oldp+183,(vlSelf->TOP__DOT__MEM__DOT__ram8[13]),8);
        tracep->chgCData(oldp+184,(vlSelf->TOP__DOT__MEM__DOT__ram8[14]),8);
        tracep->chgCData(oldp+185,(vlSelf->TOP__DOT__MEM__DOT__ram8[15]),8);
        tracep->chgCData(oldp+186,(vlSelf->TOP__DOT__MEM__DOT__ram8
                                   [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                             >> 3U))]),8);
        tracep->chgQData(oldp+187,((0x1fffffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                        >> 3U)))),61);
        tracep->chgQData(oldp+189,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
        tracep->chgQData(oldp+191,((((QData)((IData)(
                                                     ((vlSelf->TOP__DOT__MEM__DOT__ram1
                                                       [
                                                       (0xfU 
                                                        & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                           >> 3U))] 
                                                       << 0x18U) 
                                                      | ((vlSelf->TOP__DOT__MEM__DOT__ram2
                                                          [
                                                          (0xfU 
                                                           & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                              >> 3U))] 
                                                          << 0x10U) 
                                                         | ((vlSelf->TOP__DOT__MEM__DOT__ram3
                                                             [
                                                             (0xfU 
                                                              & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                 >> 3U))] 
                                                             << 8U) 
                                                            | vlSelf->TOP__DOT__MEM__DOT__ram4
                                                            [
                                                            (0xfU 
                                                             & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                >> 3U))]))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((vlSelf->TOP__DOT__MEM__DOT__ram5
                                                                   [
                                                                   (0xfU 
                                                                    & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                       >> 3U))] 
                                                                   << 0x18U) 
                                                                  | ((vlSelf->TOP__DOT__MEM__DOT__ram6
                                                                      [
                                                                      (0xfU 
                                                                       & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                          >> 3U))] 
                                                                      << 0x10U) 
                                                                     | ((vlSelf->TOP__DOT__MEM__DOT__ram7
                                                                         [
                                                                         (0xfU 
                                                                          & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                             >> 3U))] 
                                                                         << 8U) 
                                                                        | vlSelf->TOP__DOT__MEM__DOT__ram8
                                                                        [
                                                                        (0xfU 
                                                                         & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                                            >> 3U))]))))))),64);
        tracep->chgQData(oldp+193,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
        tracep->chgQData(oldp+195,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
        tracep->chgQData(oldp+197,(vlSelf->TOP__DOT__MEM__DOT__sdata),64);
        tracep->chgQData(oldp+199,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
        tracep->chgQData(oldp+201,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
        tracep->chgQData(oldp+203,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
        tracep->chgQData(oldp+205,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
        tracep->chgQData(oldp+207,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
        tracep->chgQData(oldp+209,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
        tracep->chgQData(oldp+211,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
        tracep->chgQData(oldp+213,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
        tracep->chgQData(oldp+215,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
        tracep->chgQData(oldp+217,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
        tracep->chgQData(oldp+219,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
        tracep->chgQData(oldp+221,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
        tracep->chgQData(oldp+223,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
        tracep->chgQData(oldp+225,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
        tracep->chgQData(oldp+227,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
        tracep->chgQData(oldp+229,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
        tracep->chgQData(oldp+231,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
        tracep->chgQData(oldp+233,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
        tracep->chgQData(oldp+235,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
        tracep->chgQData(oldp+237,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
        tracep->chgQData(oldp+239,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
        tracep->chgQData(oldp+241,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
        tracep->chgQData(oldp+243,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
        tracep->chgQData(oldp+245,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
        tracep->chgQData(oldp+247,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
        tracep->chgQData(oldp+249,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
        tracep->chgQData(oldp+251,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
        tracep->chgQData(oldp+253,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
        tracep->chgQData(oldp+255,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
        tracep->chgQData(oldp+257,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
        tracep->chgQData(oldp+259,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    }
    tracep->chgBit(oldp+261,(vlSelf->clock));
    tracep->chgBit(oldp+262,(vlSelf->reset));
    tracep->chgQData(oldp+263,(vlSelf->io_pc_o),64);
    tracep->chgIData(oldp+265,(vlSelf->io_inst_o),32);
    tracep->chgQData(oldp+266,(vlSelf->io_o),64);
    tracep->chgQData(oldp+268,(vlSelf->io_src1),64);
    tracep->chgQData(oldp+270,(vlSelf->io_src2),64);
    tracep->chgCData(oldp+272,(vlSelf->io_instType),5);
    tracep->chgBit(oldp+273,(vlSelf->io_branch));
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

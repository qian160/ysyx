// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTOP__Syms.h"


VL_ATTR_COLD void VTOP___024root__trace_init_sub__TOP__0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+77,"clock", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declQuad(c+79,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+81,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+84,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+85,"io_o", false,-1, 63,0);
    tracep->declQuad(c+87,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+89,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+77,"clock", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declQuad(c+79,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+81,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+84,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+85,"io_o", false,-1, 63,0);
    tracep->declQuad(c+87,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+89,"io_src2", false,-1, 63,0);
    tracep->declQuad(c+82,"IF_io_pc_i", false,-1, 63,0);
    tracep->declBus(c+84,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+84,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBus(c+84,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+91,"ID_io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declBus(c+93,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+94,"ID_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"ID_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"ID_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"ID_io_decInfo_aluop", false,-1, 4,0);
    tracep->declBus(c+94,"EX_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"EX_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"EX_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"EX_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"EX_io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+7,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+94,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+94,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+94,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+94,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+94,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+77,"Regfile_clock", false,-1);
    tracep->declBit(c+78,"Regfile_reset", false,-1);
    tracep->declBus(c+93,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+7,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+94,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+91,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+94,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+7,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declArray(c+10,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+84,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+91,"io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declBus(c+93,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+94,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declQuad(c+95,"imm_I", false,-1, 63,0);
    tracep->declBus(c+14,"decRes_0", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declQuad(c+82,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+84,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+82,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+84,"io_inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+7,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+77,"clock", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declBus(c+93,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+7,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+91,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+15,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+17,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+19,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+21,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+23,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+25,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+27,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+29,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+31,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+33,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+37,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+39,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+41,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+43,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+45,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+47,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+49,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+51,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+53,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+55,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+57,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+59,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+61,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+63,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+65,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+67,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+69,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+71,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+73,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+75,"registers_30", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+7,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+94,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+8,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_init_top\n"); );
    // Body
    VTOP___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTOP___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTOP___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTOP___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTOP___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_top_0\n"); );
    // Init
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTOP___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTOP___024root__trace_full_sub_0(VTOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->TOP__DOT__ID_io_decInfo_src1),64);
    tracep->fullQData(oldp+3,(vlSelf->TOP__DOT__ID_io_decInfo_src2),64);
    tracep->fullCData(oldp+5,(((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? 1U : 0U)),5);
    tracep->fullCData(oldp+6,(vlSelf->TOP__DOT__ID_io_decInfo_aluop),5);
    tracep->fullBit(oldp+7,(((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                              ? 1U : 0U)));
    tracep->fullQData(oldp+8,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    tracep->fullWData(oldp+10,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+14,(vlSelf->TOP__DOT__ID__DOT__decRes_0),4);
    tracep->fullQData(oldp+15,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+19,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+21,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+23,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+27,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+29,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+31,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+33,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+39,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+43,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+45,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+47,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+49,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+51,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+53,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+55,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+57,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+59,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+61,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+63,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+65,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+67,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+69,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+71,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+73,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+75,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullBit(oldp+77,(vlSelf->clock));
    tracep->fullBit(oldp+78,(vlSelf->reset));
    tracep->fullQData(oldp+79,(vlSelf->io_pc_i),64);
    tracep->fullIData(oldp+81,(vlSelf->io_inst_i),32);
    tracep->fullQData(oldp+82,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+84,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+85,(vlSelf->io_o),64);
    tracep->fullQData(oldp+87,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+89,(vlSelf->io_src2),64);
    tracep->fullQData(oldp+91,(((0x1eU == (0x1fU & 
                                           (vlSelf->io_inst_o 
                                            >> 0xfU)))
                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                 : ((0x1dU == (0x1fU 
                                               & (vlSelf->io_inst_o 
                                                  >> 0xfU)))
                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                     : ((0x1cU == (0x1fU 
                                                   & (vlSelf->io_inst_o 
                                                      >> 0xfU)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                         : ((0x1bU 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst_o 
                                                    >> 0xfU)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                             : vlSelf->TOP__DOT__Regfile__DOT___GEN_88))))),64);
    tracep->fullCData(oldp+93,((0x1fU & (vlSelf->io_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+94,((0x1fU & (vlSelf->io_inst_o 
                                         >> 7U))),5);
    tracep->fullQData(oldp+95,((((- (QData)((IData)(
                                                    (vlSelf->io_inst_o 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (vlSelf->io_inst_o 
                                                             >> 0x14U))))),64);
}

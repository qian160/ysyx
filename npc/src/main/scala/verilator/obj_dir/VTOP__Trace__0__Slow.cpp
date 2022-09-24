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
    tracep->declBit(c+78,"clock", false,-1);
    tracep->declBit(c+79,"reset", false,-1);
    tracep->declQuad(c+80,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+82,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+85,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+86,"io_o", false,-1, 63,0);
    tracep->declQuad(c+88,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+90,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+78,"clock", false,-1);
    tracep->declBit(c+79,"reset", false,-1);
    tracep->declQuad(c+80,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+82,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+85,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+86,"io_o", false,-1, 63,0);
    tracep->declQuad(c+88,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+90,"io_src2", false,-1, 63,0);
    tracep->declQuad(c+83,"IF_io_pc_i", false,-1, 63,0);
    tracep->declBus(c+85,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+85,"IF_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+83,"IF_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+85,"IF_io_debug_inst", false,-1, 31,0);
    tracep->declBus(c+85,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"ID_io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+92,"ID_io_regSrc_rs2Val", false,-1, 63,0);
    tracep->declBus(c+94,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+95,"ID_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"ID_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"ID_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"ID_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"ID_io_decInfo_aluop", false,-1, 4,0);
    tracep->declQuad(c+83,"ID_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"ID_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+95,"EX_io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"EX_io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"EX_io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"EX_io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"EX_io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+8,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+95,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+83,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+8,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+95,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+8,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+95,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+83,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+8,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+95,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+8,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+95,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+83,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+85,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+78,"Regfile_clock", false,-1);
    tracep->declBit(c+79,"Regfile_reset", false,-1);
    tracep->declBus(c+94,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+8,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+95,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+1,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+92,"Regfile_io_readRes_rs2Val", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+95,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declBit(c+8,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_o_inst", false,-1, 31,0);
    tracep->declArray(c+11,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+85,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+1,"io_regSrc_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+92,"io_regSrc_rs2Val", false,-1, 63,0);
    tracep->declBus(c+94,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+95,"io_decInfo_rd", false,-1, 4,0);
    tracep->declQuad(c+1,"io_decInfo_src1", false,-1, 63,0);
    tracep->declQuad(c+3,"io_decInfo_src2", false,-1, 63,0);
    tracep->declBus(c+5,"io_decInfo_wen", false,-1, 4,0);
    tracep->declBus(c+6,"io_decInfo_aluop", false,-1, 4,0);
    tracep->declQuad(c+83,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_o_inst", false,-1, 31,0);
    tracep->declQuad(c+96,"imm_I", false,-1, 63,0);
    tracep->declBus(c+15,"decRes_0", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declQuad(c+83,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+85,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+83,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+85,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+83,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+8,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+8,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+7,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+78,"clock", false,-1);
    tracep->declBit(c+79,"reset", false,-1);
    tracep->declBus(c+94,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+8,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+1,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+92,"io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+16,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+18,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+20,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+22,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+24,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+26,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+28,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+30,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+32,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+34,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+36,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+38,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+40,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+42,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+44,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+46,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+48,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+50,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+52,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+54,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+56,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+58,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+60,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+62,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+64,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+66,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+68,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+70,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+72,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+74,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+76,"registers_30", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+8,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+8,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+95,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+9,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+7,"io_debug_exit", false,-1);
    tracep->declQuad(c+83,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+85,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+7,"DEBUG_exit", false,-1);
    tracep->declQuad(c+83,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+85,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+98,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+7,"exit", false,-1);
    tracep->declQuad(c+83,"pc", false,-1, 63,0);
    tracep->declQuad(c+98,"a0", false,-1, 63,0);
    tracep->declBus(c+85,"inst", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    tracep->fullQData(oldp+1,(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val),64);
    tracep->fullQData(oldp+3,(vlSelf->TOP__DOT__ID_io_decInfo_src2),64);
    tracep->fullCData(oldp+5,((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))),5);
    tracep->fullCData(oldp+6,(vlSelf->TOP__DOT__ID_io_decInfo_aluop),5);
    tracep->fullBit(oldp+7,((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))));
    tracep->fullBit(oldp+8,((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))));
    tracep->fullQData(oldp+9,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    tracep->fullWData(oldp+11,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+15,(vlSelf->TOP__DOT__ID__DOT__decRes_0),4);
    tracep->fullQData(oldp+16,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+18,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+20,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+22,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+24,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+26,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+28,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+30,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+32,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+34,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+36,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+38,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+40,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+42,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+44,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+46,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+48,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+50,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+52,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+54,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+56,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+58,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+60,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+62,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+64,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+66,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+68,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+70,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+72,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+74,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+76,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullBit(oldp+78,(vlSelf->clock));
    tracep->fullBit(oldp+79,(vlSelf->reset));
    tracep->fullQData(oldp+80,(vlSelf->io_pc_i),64);
    tracep->fullIData(oldp+82,(vlSelf->io_inst_i),32);
    tracep->fullQData(oldp+83,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+85,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+86,(vlSelf->io_o),64);
    tracep->fullQData(oldp+88,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+90,(vlSelf->io_src2),64);
    tracep->fullQData(oldp+92,(((0x1eU == (0x1fU & 
                                           (vlSelf->io_inst_o 
                                            >> 0xfU)))
                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                 : vlSelf->TOP__DOT__Regfile__DOT___GEN_91)),64);
    tracep->fullCData(oldp+94,((0x1fU & (vlSelf->io_inst_o 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+95,((0x1fU & (vlSelf->io_inst_o 
                                         >> 7U))),5);
    tracep->fullQData(oldp+96,((((- (QData)((IData)(
                                                    (vlSelf->io_inst_o 
                                                     >> 0x1fU)))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (vlSelf->io_inst_o 
                                                             >> 0x14U))))),64);
    tracep->fullQData(oldp+98,(0ULL),64);
}

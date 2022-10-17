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
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declQuad(c+158,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+160,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+162,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+164,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+166,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+168,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+170,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+172,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+174,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+176,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+178,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+180,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+182,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+184,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+186,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+188,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+190,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+192,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+194,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+196,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+198,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+200,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+202,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+204,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+206,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+208,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+210,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+212,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+214,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+216,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+218,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+220,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+222,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+224,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+226,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+228,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+230,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+232,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+234,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+236,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+237,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+239,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+241,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+243,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declQuad(c+158,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+160,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+162,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+164,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+166,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+168,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+170,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+172,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+174,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+176,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+178,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+180,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+182,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+184,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+186,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+188,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+190,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+192,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+194,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+196,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+198,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+200,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+202,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+204,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+206,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+208,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+210,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+212,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+214,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+216,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+218,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+220,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+222,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+224,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+226,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+228,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+230,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+232,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+234,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+236,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+237,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+239,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+241,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+243,"io_src2", false,-1, 63,0);
    tracep->declBit(c+156,"IF_clock", false,-1);
    tracep->declBit(c+157,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+156,"ID_clock", false,-1);
    tracep->declBit(c+157,"ID_reset", false,-1);
    tracep->declBus(c+4,"ID_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"ID_io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_rfData_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_rfData_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"ID_io_rfData_i_a0", false,-1, 63,0);
    tracep->declQuad(c+13,"ID_io_csrData_i_csrVal", false,-1, 63,0);
    tracep->declQuad(c+15,"ID_io_csrData_i_epc", false,-1, 63,0);
    tracep->declQuad(c+17,"ID_io_csrData_i_tvec", false,-1, 63,0);
    tracep->declBus(c+19,"ID_io_readOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+20,"ID_io_readOp_o_rs2", false,-1, 4,0);
    tracep->declBus(c+21,"ID_io_readOp_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+22,"ID_io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+23,"ID_io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+24,"ID_io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+25,"ID_io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"ID_io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+28,"ID_io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"ID_io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+32,"ID_io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"ID_io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+33,"ID_io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+34,"ID_io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBit(c+35,"ID_io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+36,"ID_io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+37,"ID_io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+39,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+22,"EX_io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+23,"EX_io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+24,"EX_io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+25,"EX_io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"EX_io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+28,"EX_io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"EX_io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+32,"EX_io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+33,"EX_io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+34,"EX_io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBit(c+35,"EX_io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+36,"EX_io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+37,"EX_io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+22,"EX_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"EX_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+40,"EX_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"EX_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"EX_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"EX_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"EX_io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+34,"EX_io_memOp_o_isStore", false,-1);
    tracep->declBit(c+35,"EX_io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+36,"EX_io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+40,"EX_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"EX_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+39,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+39,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+22,"MEM_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+23,"MEM_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+40,"MEM_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"MEM_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+25,"MEM_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"MEM_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"MEM_io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+34,"MEM_io_memOp_i_isStore", false,-1);
    tracep->declBit(c+35,"MEM_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+36,"MEM_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+40,"MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+245,"MEM_io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+22,"MEM_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"MEM_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"MEM_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"MEM_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"MEM_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"MEM_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+39,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+22,"WB_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+23,"WB_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"WB_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"WB_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+25,"WB_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"WB_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+22,"WB_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"WB_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"WB_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"WB_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"WB_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"WB_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+11,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+156,"Regfile_clock", false,-1);
    tracep->declBit(c+157,"Regfile_reset", false,-1);
    tracep->declBus(c+19,"Regfile_io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+20,"Regfile_io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+22,"Regfile_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+23,"Regfile_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"Regfile_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+42,"Regfile_io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+44,"Regfile_io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+46,"Regfile_io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+48,"Regfile_io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+50,"Regfile_io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+52,"Regfile_io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+54,"Regfile_io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+56,"Regfile_io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+58,"Regfile_io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+60,"Regfile_io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+62,"Regfile_io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+64,"Regfile_io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+66,"Regfile_io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+68,"Regfile_io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+70,"Regfile_io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+72,"Regfile_io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+74,"Regfile_io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+76,"Regfile_io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+78,"Regfile_io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+80,"Regfile_io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+82,"Regfile_io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+84,"Regfile_io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+86,"Regfile_io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+88,"Regfile_io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+90,"Regfile_io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+92,"Regfile_io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+94,"Regfile_io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+96,"Regfile_io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+98,"Regfile_io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+100,"Regfile_io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+102,"Regfile_io_regs_o_31", false,-1, 63,0);
    tracep->declBit(c+156,"Csr_clock", false,-1);
    tracep->declBit(c+157,"Csr_reset", false,-1);
    tracep->declBus(c+21,"Csr_io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+24,"Csr_io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+25,"Csr_io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"Csr_io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+13,"Csr_io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+15,"Csr_io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+17,"Csr_io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+104,"Csr_io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+106,"Csr_io_csrData_o_status", false,-1, 63,0);
    tracep->declBit(c+156,"Main_Memory_clock", false,-1);
    tracep->declBit(c+157,"Main_Memory_reset", false,-1);
    tracep->declQuad(c+158,"Main_Memory_io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+5,"Main_Memory_io_pc_i", false,-1, 63,0);
    tracep->declBit(c+34,"Main_Memory_io_memOp_i_isStore", false,-1);
    tracep->declBit(c+35,"Main_Memory_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+36,"Main_Memory_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+40,"Main_Memory_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"Main_Memory_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"Main_Memory_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+245,"Main_Memory_io_loadVal_o", false,-1, 63,0);
    tracep->pushNamePrefix("Csr ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declBus(c+21,"io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+24,"io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+13,"io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+15,"io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+17,"io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+104,"io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+106,"io_csrData_o_status", false,-1, 63,0);
    tracep->declQuad(c+15,"mepc", false,-1, 63,0);
    tracep->declQuad(c+104,"mcause", false,-1, 63,0);
    tracep->declQuad(c+106,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+17,"mtvec", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+22,"io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+23,"io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+24,"io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+28,"io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+32,"io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+33,"io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+34,"io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBit(c+35,"io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+36,"io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+37,"io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+40,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+34,"io_memOp_o_isStore", false,-1);
    tracep->declBit(c+35,"io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+36,"io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+40,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+39,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"io_rfData_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_rfData_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_rfData_i_a0", false,-1, 63,0);
    tracep->declQuad(c+13,"io_csrData_i_csrVal", false,-1, 63,0);
    tracep->declQuad(c+15,"io_csrData_i_epc", false,-1, 63,0);
    tracep->declQuad(c+17,"io_csrData_i_tvec", false,-1, 63,0);
    tracep->declBus(c+19,"io_readOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+20,"io_readOp_o_rs2", false,-1, 4,0);
    tracep->declBus(c+21,"io_readOp_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+22,"io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+23,"io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+24,"io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+28,"io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+30,"io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+32,"io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+33,"io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+34,"io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBit(c+35,"io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+36,"io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+37,"io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+39,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+108,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+109,"opcode", false,-1, 6,0);
    tracep->declBus(c+110,"fct3", false,-1, 2,0);
    tracep->declBus(c+21,"csrAddr", false,-1, 11,0);
    tracep->declQuad(c+111,"immI", false,-1, 63,0);
    tracep->declBit(c+113,"is_jalr", false,-1);
    tracep->declQuad(c+114,"rsVal", false,-1, 63,0);
    tracep->declBus(c+116,"inst_p2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declQuad(c+118,"nextPC", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+22,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+23,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+40,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+33,"io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+34,"io_memOp_i_isStore", false,-1);
    tracep->declBit(c+35,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+36,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+40,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+245,"io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+22,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+39,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Memory ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declQuad(c+158,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declBit(c+34,"io_memOp_i_isStore", false,-1);
    tracep->declBit(c+35,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+36,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+40,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+37,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+245,"io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+249,"ram_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+120,"ram_io_inst_o_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+4,"ram_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+121,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+122,"ram_dword_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+123,"ram_dword_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+121,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+124,"ram_dword_MPORT_1_addr", false,-1, 19,0);
    tracep->declBus(c+125,"ram_dword_MPORT_1_data", false,-1, 31,0);
    tracep->declBit(c+121,"ram_test0_MPORT_en", false,-1);
    tracep->declBus(c+250,"ram_test0_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+126,"ram_test0_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+121,"ram_test1_MPORT_en", false,-1);
    tracep->declBus(c+251,"ram_test1_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+127,"ram_test1_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+128,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+122,"ram_MPORT_addr", false,-1, 19,0);
    tracep->declBit(c+249,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+129,"ram_MPORT_en", false,-1);
    tracep->declBus(c+130,"ram_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+124,"ram_MPORT_1_addr", false,-1, 19,0);
    tracep->declBit(c+249,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+129,"ram_MPORT_1_en", false,-1);
    tracep->declQuad(c+131,"addr", false,-1, 61,0);
    tracep->declQuad(c+133,"dword", false,-1, 63,0);
    tracep->declBus(c+135,"offset", false,-1, 1,0);
    tracep->declQuad(c+136,"byteMask", false,-1, 63,0);
    tracep->declArray(c+138,"mask", false,-1, 94,0);
    tracep->declArray(c+141,"loadVal_temp", false,-1, 94,0);
    tracep->declArray(c+144,"loadVal", false,-1, 94,0);
    tracep->declBus(c+147,"store_en", false,-1, 7,0);
    tracep->declBus(c+148,"temp_1", false,-1, 7,0);
    tracep->declBus(c+149,"temp_0", false,-1, 7,0);
    tracep->declBus(c+150,"temp_3", false,-1, 7,0);
    tracep->declBus(c+151,"temp_2", false,-1, 7,0);
    tracep->declBus(c+152,"temp_5", false,-1, 7,0);
    tracep->declBus(c+153,"temp_4", false,-1, 7,0);
    tracep->declBus(c+154,"temp_7", false,-1, 7,0);
    tracep->declBus(c+155,"temp_6", false,-1, 7,0);
    tracep->declBus(c+126,"test0", false,-1, 31,0);
    tracep->declBus(c+127,"test1", false,-1, 31,0);
    tracep->declBus(c+252,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+156,"clock", false,-1);
    tracep->declBit(c+157,"reset", false,-1);
    tracep->declBus(c+19,"io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+20,"io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+22,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+23,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+42,"io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+44,"io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+46,"io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+48,"io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+50,"io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+52,"io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+54,"io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+56,"io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+58,"io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+60,"io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+62,"io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+64,"io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+66,"io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+68,"io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+70,"io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+72,"io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+74,"io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+76,"io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+78,"io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+80,"io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+82,"io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+84,"io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+86,"io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+88,"io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+90,"io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+92,"io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+94,"io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+96,"io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+98,"io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+100,"io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+102,"io_regs_o_31", false,-1, 63,0);
    tracep->declQuad(c+42,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+44,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+46,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+48,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+50,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+52,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+54,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+56,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+58,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+60,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+62,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+64,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+66,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+68,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+70,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+72,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+74,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+76,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+78,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+80,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+82,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+84,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+86,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+88,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+90,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+92,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+94,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+96,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+98,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+100,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+102,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+22,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+23,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+22,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+23,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+247,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+24,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+25,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+39,"io_debug_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+39,"DEBUG_exit", false,-1);
    tracep->declQuad(c+5,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+4,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+11,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+39,"exit", false,-1);
    tracep->declQuad(c+5,"pc", false,-1, 63,0);
    tracep->declQuad(c+11,"a0", false,-1, 63,0);
    tracep->declBus(c+4,"inst", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hfb1bc2e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h49cf1568__0;
    VlWide<3>/*95:0*/ __Vtemp_hc95bd1e4__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h3ff98391__0;
    // Body
    tracep->fullBit(oldp+1,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                             & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? (0x67U == (0x7fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                 : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))));
    tracep->fullQData(oldp+2,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                              + vlSelf->TOP__DOT__ID__DOT__immI)
                                           : ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? 0ULL
                                               : ((3U 
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
    tracep->fullIData(oldp+4,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
    tracep->fullQData(oldp+5,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val),64);
    tracep->fullQData(oldp+11,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+13,(vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal),64);
    tracep->fullQData(oldp+15,(vlSelf->TOP__DOT__Csr__DOT__mepc),64);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__Csr__DOT__mtvec),64);
    tracep->fullCData(oldp+19,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+20,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0x14U))),5);
    tracep->fullSData(oldp+21,((vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                >> 0x14U)),12);
    tracep->fullBit(oldp+22,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_rf_wen));
    tracep->fullCData(oldp+23,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 7U))),5);
    tracep->fullBit(oldp+24,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wen));
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata),64);
    tracep->fullSData(oldp+27,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr),12);
    tracep->fullQData(oldp+28,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
    tracep->fullQData(oldp+30,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))),64);
    tracep->fullCData(oldp+32,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt),5);
    tracep->fullBit(oldp+33,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+34,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore));
    tracep->fullBit(oldp+35,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned));
    tracep->fullCData(oldp+36,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112))),2);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),64);
    tracep->fullBit(oldp+39,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                               : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
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
    tracep->fullQData(oldp+40,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))),64);
    tracep->fullQData(oldp+42,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+44,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+46,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+48,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+50,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+52,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+54,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+56,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+58,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+60,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+62,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+64,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+66,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+68,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+70,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+72,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+74,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+76,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+78,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+80,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+82,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+84,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+86,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+88,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+90,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+92,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+94,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+96,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+98,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+100,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+102,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullQData(oldp+104,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
    tracep->fullQData(oldp+106,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
    tracep->fullCData(oldp+108,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+109,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
    tracep->fullCData(oldp+110,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                       >> 0xcU))),3);
    tracep->fullQData(oldp+111,(vlSelf->TOP__DOT__ID__DOT__immI),64);
    tracep->fullBit(oldp+113,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
    tracep->fullQData(oldp+114,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
    tracep->fullCData(oldp+116,((3U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                       >> 0x14U))),2);
    tracep->fullIData(oldp+117,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullQData(oldp+118,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                      ? (0x67U == (0x7fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                      : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))
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
    tracep->fullIData(oldp+120,((0xfffffU & (IData)(
                                                    (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullBit(oldp+121,(((0x80000000ULL <= (((QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                               & (0x87ffffffULL >= 
                                  (((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))))));
    tracep->fullIData(oldp+122,((0xfffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U))))),20);
    tracep->fullIData(oldp+123,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (((((QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                          - 0x80000000ULL) 
                                                         >> 2U))))]),32);
    tracep->fullIData(oldp+124,((0xfffffU & (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullIData(oldp+125,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & (IData)(
                                                     (((((QData)((IData)(
                                                                         vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                       - 0x80000000ULL) 
                                                      >> 2U)))]),32);
    tracep->fullIData(oldp+126,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [0U]),32);
    tracep->fullIData(oldp+127,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [1U]),32);
    tracep->fullIData(oldp+128,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+129,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                               & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore))));
    tracep->fullIData(oldp+130,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
    tracep->fullQData(oldp+131,((((((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                  - 0x80000000ULL) 
                                 >> 2U)),62);
    tracep->fullQData(oldp+133,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
    tracep->fullCData(oldp+135,((3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])),2);
    tracep->fullQData(oldp+136,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
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
    VL_EXTEND_WQ(95,64, __Vtemp_hfb1bc2e8__0, ((3U 
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
    tracep->fullWData(oldp+138,(__Vtemp_hc95bd1e4__0),95);
    tracep->fullWData(oldp+141,(vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp),95);
    VL_EXTEND_WQ(95,64, __Vtemp_h45976053__0, (((QData)((IData)(
                                                                (- (IData)(
                                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0x1fU))))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))));
    VL_EXTEND_WQ(95,64, __Vtemp_hbd746cff__0, (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                       >> 0xfU))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))));
    VL_EXTEND_WQ(95,64, __Vtemp_h9b56c48b__0, (((- (QData)((IData)(
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
    tracep->fullWData(oldp+144,(__Vtemp_h3ff98391__0),95);
    tracep->fullCData(oldp+147,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
    tracep->fullCData(oldp+148,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((1U 
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
    tracep->fullCData(oldp+149,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((0U 
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
    tracep->fullCData(oldp+150,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((3U 
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
    tracep->fullCData(oldp+151,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((2U 
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
    tracep->fullCData(oldp+152,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((5U 
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
    tracep->fullCData(oldp+153,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((4U 
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
    tracep->fullCData(oldp+154,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((7U 
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
    tracep->fullCData(oldp+155,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((6U 
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
    tracep->fullBit(oldp+156,(vlSelf->clock));
    tracep->fullBit(oldp+157,(vlSelf->reset));
    tracep->fullQData(oldp+158,(vlSelf->io_timer_i),64);
    tracep->fullQData(oldp+160,(vlSelf->io_csrData_csrVal),64);
    tracep->fullQData(oldp+162,(vlSelf->io_csrData_epc),64);
    tracep->fullQData(oldp+164,(vlSelf->io_csrData_tvec),64);
    tracep->fullQData(oldp+166,(vlSelf->io_csrData_cause),64);
    tracep->fullQData(oldp+168,(vlSelf->io_csrData_status),64);
    tracep->fullQData(oldp+170,(vlSelf->io_regs_0),64);
    tracep->fullQData(oldp+172,(vlSelf->io_regs_1),64);
    tracep->fullQData(oldp+174,(vlSelf->io_regs_2),64);
    tracep->fullQData(oldp+176,(vlSelf->io_regs_3),64);
    tracep->fullQData(oldp+178,(vlSelf->io_regs_4),64);
    tracep->fullQData(oldp+180,(vlSelf->io_regs_5),64);
    tracep->fullQData(oldp+182,(vlSelf->io_regs_6),64);
    tracep->fullQData(oldp+184,(vlSelf->io_regs_7),64);
    tracep->fullQData(oldp+186,(vlSelf->io_regs_8),64);
    tracep->fullQData(oldp+188,(vlSelf->io_regs_9),64);
    tracep->fullQData(oldp+190,(vlSelf->io_regs_10),64);
    tracep->fullQData(oldp+192,(vlSelf->io_regs_11),64);
    tracep->fullQData(oldp+194,(vlSelf->io_regs_12),64);
    tracep->fullQData(oldp+196,(vlSelf->io_regs_13),64);
    tracep->fullQData(oldp+198,(vlSelf->io_regs_14),64);
    tracep->fullQData(oldp+200,(vlSelf->io_regs_15),64);
    tracep->fullQData(oldp+202,(vlSelf->io_regs_16),64);
    tracep->fullQData(oldp+204,(vlSelf->io_regs_17),64);
    tracep->fullQData(oldp+206,(vlSelf->io_regs_18),64);
    tracep->fullQData(oldp+208,(vlSelf->io_regs_19),64);
    tracep->fullQData(oldp+210,(vlSelf->io_regs_20),64);
    tracep->fullQData(oldp+212,(vlSelf->io_regs_21),64);
    tracep->fullQData(oldp+214,(vlSelf->io_regs_22),64);
    tracep->fullQData(oldp+216,(vlSelf->io_regs_23),64);
    tracep->fullQData(oldp+218,(vlSelf->io_regs_24),64);
    tracep->fullQData(oldp+220,(vlSelf->io_regs_25),64);
    tracep->fullQData(oldp+222,(vlSelf->io_regs_26),64);
    tracep->fullQData(oldp+224,(vlSelf->io_regs_27),64);
    tracep->fullQData(oldp+226,(vlSelf->io_regs_28),64);
    tracep->fullQData(oldp+228,(vlSelf->io_regs_29),64);
    tracep->fullQData(oldp+230,(vlSelf->io_regs_30),64);
    tracep->fullQData(oldp+232,(vlSelf->io_regs_31),64);
    tracep->fullQData(oldp+234,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+236,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+237,(vlSelf->io_o1),64);
    tracep->fullQData(oldp+239,(vlSelf->io_o2),64);
    tracep->fullQData(oldp+241,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+243,(vlSelf->io_src2),64);
    tracep->fullQData(oldp+245,((((QData)((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_153[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__Main_Memory__DOT___GEN_153[0U])))),64);
    tracep->fullQData(oldp+247,(vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata),64);
    tracep->fullBit(oldp+249,(1U));
    tracep->fullIData(oldp+250,(0U),20);
    tracep->fullIData(oldp+251,(1U),20);
    tracep->fullIData(oldp+252,(vlSelf->TOP__DOT__Main_Memory__DOT__initvar),32);
}

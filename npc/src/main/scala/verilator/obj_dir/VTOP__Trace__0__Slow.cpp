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
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declQuad(c+243,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+245,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+247,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+249,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+251,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+253,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+255,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+257,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+259,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+261,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+263,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+265,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+267,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+269,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+271,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+273,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+275,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+277,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+279,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+281,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+283,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+285,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+287,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+289,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+291,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+293,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+295,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+297,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+299,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+301,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+303,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+305,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+307,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+309,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+311,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+313,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+315,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+317,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+319,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+321,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+322,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+328,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declQuad(c+243,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+245,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+247,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+249,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+251,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+253,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+255,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+257,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+259,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+261,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+263,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+265,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+267,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+269,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+271,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+273,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+275,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+277,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+279,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+281,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+283,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+285,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+287,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+289,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+291,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+293,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+295,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+297,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+299,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+301,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+303,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+305,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+307,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+309,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+311,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+313,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+315,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+317,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+319,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+321,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+322,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+324,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+326,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+328,"io_src2", false,-1, 63,0);
    tracep->declBit(c+241,"IF_clock", false,-1);
    tracep->declBit(c+242,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+2,"IF_io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+3,"IF_io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+5,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+5,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+241,"ID_clock", false,-1);
    tracep->declBit(c+242,"ID_reset", false,-1);
    tracep->declBus(c+8,"ID_io_inst_i", false,-1, 31,0);
    tracep->declBus(c+9,"ID_io_fwd_i_ex_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+10,"ID_io_fwd_i_ex_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+12,"ID_io_fwd_i_ex_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"ID_io_fwd_i_ex_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"ID_io_fwd_i_mem_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"ID_io_fwd_i_mem_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"ID_io_fwd_i_mem_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"ID_io_fwd_i_mem_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"ID_io_fwd_i_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"ID_io_fwd_i_wb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"ID_io_fwd_i_wb_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"ID_io_fwd_i_wb_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"ID_io_fwd_i_prev_rd", false,-1, 4,0);
    tracep->declBit(c+28,"ID_io_fwd_i_prev_is_load", false,-1);
    tracep->declQuad(c+29,"ID_io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+31,"ID_io_rfData_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"ID_io_rfData_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"ID_io_rfData_i_a0", false,-1, 63,0);
    tracep->declQuad(c+37,"ID_io_csrData_i_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"ID_io_csrData_i_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"ID_io_csrData_i_tvec", false,-1, 63,0);
    tracep->declBus(c+43,"ID_io_readOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"ID_io_readOp_o_rs2", false,-1, 4,0);
    tracep->declBus(c+45,"ID_io_readOp_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+46,"ID_io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+47,"ID_io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+48,"ID_io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+49,"ID_io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+51,"ID_io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+52,"ID_io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+54,"ID_io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+56,"ID_io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+2,"ID_io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+3,"ID_io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+57,"ID_io_decInfo_o_memOp_is_load", false,-1);
    tracep->declBit(c+58,"ID_io_decInfo_o_memOp_is_store", false,-1);
    tracep->declBit(c+59,"ID_io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+60,"ID_io_decInfo_o_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+61,"ID_io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+63,"ID_io_stall_req_o", false,-1);
    tracep->declBit(c+2,"ID_io_flush_req_o", false,-1);
    tracep->declBit(c+64,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+241,"EX_clock", false,-1);
    tracep->declBit(c+67,"EX_io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+27,"EX_io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+68,"EX_io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+10,"EX_io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"EX_io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+69,"EX_io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+71,"EX_io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+73,"EX_io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+28,"EX_io_decInfo_i_memOp_is_load", false,-1);
    tracep->declBit(c+74,"EX_io_decInfo_i_memOp_is_store", false,-1);
    tracep->declBit(c+75,"EX_io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+76,"EX_io_decInfo_i_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+77,"EX_io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+67,"EX_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+27,"EX_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"EX_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+68,"EX_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+10,"EX_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"EX_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+28,"EX_io_memOp_o_is_load", false,-1);
    tracep->declBit(c+74,"EX_io_memOp_o_is_store", false,-1);
    tracep->declBit(c+75,"EX_io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+76,"EX_io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+13,"EX_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+77,"EX_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBus(c+9,"EX_io_ex_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+10,"EX_io_ex_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+12,"EX_io_ex_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"EX_io_ex_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+79,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+80,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+84,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+79,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+80,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+84,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+241,"MEM_clock", false,-1);
    tracep->declBit(c+242,"MEM_reset", false,-1);
    tracep->declBit(c+85,"MEM_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+86,"MEM_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+87,"MEM_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"MEM_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+90,"MEM_io_memOp_i_is_load", false,-1);
    tracep->declBit(c+91,"MEM_io_memOp_i_is_store", false,-1);
    tracep->declBit(c+92,"MEM_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+93,"MEM_io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+94,"MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+98,"MEM_io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+85,"MEM_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+86,"MEM_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"MEM_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+15,"MEM_io_mem_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"MEM_io_mem_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"MEM_io_mem_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_io_mem_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+100,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+101,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+105,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+100,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+101,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+105,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+106,"WB_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+24,"WB_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"WB_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+22,"WB_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"WB_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+106,"WB_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"WB_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"WB_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"WB_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"WB_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"WB_io_wb_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"WB_io_wb_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"WB_io_wb_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_wb_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+108,"WB_io_debug_i_exit", false,-1);
    tracep->declQuad(c+109,"WB_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+111,"WB_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+113,"WB_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+241,"Regfile_clock", false,-1);
    tracep->declBit(c+242,"Regfile_reset", false,-1);
    tracep->declBus(c+43,"Regfile_io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"Regfile_io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+106,"Regfile_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+24,"Regfile_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"Regfile_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+31,"Regfile_io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"Regfile_io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"Regfile_io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+114,"Regfile_io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+116,"Regfile_io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+118,"Regfile_io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+120,"Regfile_io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+122,"Regfile_io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+124,"Regfile_io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+126,"Regfile_io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+128,"Regfile_io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+130,"Regfile_io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+132,"Regfile_io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+35,"Regfile_io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+134,"Regfile_io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+136,"Regfile_io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+138,"Regfile_io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+140,"Regfile_io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+142,"Regfile_io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+144,"Regfile_io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+146,"Regfile_io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+148,"Regfile_io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+150,"Regfile_io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+152,"Regfile_io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+154,"Regfile_io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+156,"Regfile_io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+158,"Regfile_io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+160,"Regfile_io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+162,"Regfile_io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+164,"Regfile_io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+166,"Regfile_io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+168,"Regfile_io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+170,"Regfile_io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+172,"Regfile_io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+174,"Regfile_io_regs_o_31", false,-1, 63,0);
    tracep->declBit(c+241,"Csr_clock", false,-1);
    tracep->declBit(c+242,"Csr_reset", false,-1);
    tracep->declBus(c+45,"Csr_io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+107,"Csr_io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+22,"Csr_io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"Csr_io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"Csr_io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"Csr_io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"Csr_io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+176,"Csr_io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+178,"Csr_io_csrData_o_status", false,-1, 63,0);
    tracep->declBit(c+241,"Main_Memory_clock", false,-1);
    tracep->declQuad(c+6,"Main_Memory_io_pc_i", false,-1, 63,0);
    tracep->declBit(c+90,"Main_Memory_io_memOp_i_is_load", false,-1);
    tracep->declBit(c+91,"Main_Memory_io_memOp_i_is_store", false,-1);
    tracep->declBit(c+92,"Main_Memory_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+93,"Main_Memory_io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+94,"Main_Memory_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"Main_Memory_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+5,"Main_Memory_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+98,"Main_Memory_io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+63,"Control_io_id_stall_req", false,-1);
    tracep->declBit(c+2,"Control_io_id_flush_req", false,-1);
    tracep->declBus(c+180,"Control_io_stall_o", false,-1, 4,0);
    tracep->declBus(c+181,"Control_io_flush_o", false,-1, 4,0);
    tracep->declBit(c+241,"IF_ID_clock", false,-1);
    tracep->declBit(c+242,"IF_ID_reset", false,-1);
    tracep->declBit(c+182,"IF_ID_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+183,"IF_ID_io_ctrl_i_flush", false,-1);
    tracep->declBus(c+5,"IF_ID_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"IF_ID_io_pc_i", false,-1, 63,0);
    tracep->declBus(c+8,"IF_ID_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+29,"IF_ID_io_pc_o", false,-1, 63,0);
    tracep->declBit(c+241,"ID_EX_clock", false,-1);
    tracep->declBit(c+242,"ID_EX_reset", false,-1);
    tracep->declBit(c+184,"ID_EX_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+185,"ID_EX_io_ctrl_i_flush", false,-1);
    tracep->declBit(c+46,"ID_EX_io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+47,"ID_EX_io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+48,"ID_EX_io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+49,"ID_EX_io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+51,"ID_EX_io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+52,"ID_EX_io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+54,"ID_EX_io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+56,"ID_EX_io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+57,"ID_EX_io_decInfo_i_memOp_is_load", false,-1);
    tracep->declBit(c+58,"ID_EX_io_decInfo_i_memOp_is_store", false,-1);
    tracep->declBit(c+59,"ID_EX_io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+60,"ID_EX_io_decInfo_i_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+61,"ID_EX_io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+64,"ID_EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"ID_EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"ID_EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"ID_EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+67,"ID_EX_io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+27,"ID_EX_io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+68,"ID_EX_io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+10,"ID_EX_io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"ID_EX_io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+69,"ID_EX_io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+71,"ID_EX_io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+73,"ID_EX_io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+28,"ID_EX_io_decInfo_o_memOp_is_load", false,-1);
    tracep->declBit(c+74,"ID_EX_io_decInfo_o_memOp_is_store", false,-1);
    tracep->declBit(c+75,"ID_EX_io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+76,"ID_EX_io_decInfo_o_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+77,"ID_EX_io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"ID_EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+80,"ID_EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"ID_EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+84,"ID_EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+241,"EX_MEM_clock", false,-1);
    tracep->declBit(c+242,"EX_MEM_reset", false,-1);
    tracep->declBit(c+186,"EX_MEM_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+187,"EX_MEM_io_ctrl_i_flush", false,-1);
    tracep->declBit(c+67,"EX_MEM_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+27,"EX_MEM_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"EX_MEM_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+68,"EX_MEM_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+10,"EX_MEM_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"EX_MEM_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+28,"EX_MEM_io_memOp_i_is_load", false,-1);
    tracep->declBit(c+74,"EX_MEM_io_memOp_i_is_store", false,-1);
    tracep->declBit(c+75,"EX_MEM_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+76,"EX_MEM_io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+13,"EX_MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+77,"EX_MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"EX_MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+80,"EX_MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"EX_MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+84,"EX_MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+85,"EX_MEM_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+86,"EX_MEM_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+87,"EX_MEM_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"EX_MEM_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"EX_MEM_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"EX_MEM_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+90,"EX_MEM_io_memOp_o_is_load", false,-1);
    tracep->declBit(c+91,"EX_MEM_io_memOp_o_is_store", false,-1);
    tracep->declBit(c+92,"EX_MEM_io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+93,"EX_MEM_io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+94,"EX_MEM_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"EX_MEM_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+100,"EX_MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+101,"EX_MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"EX_MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+105,"EX_MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+241,"MEM_WB_clock", false,-1);
    tracep->declBit(c+242,"MEM_WB_reset", false,-1);
    tracep->declBit(c+188,"MEM_WB_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+189,"MEM_WB_io_ctrl_i_flush", false,-1);
    tracep->declBit(c+85,"MEM_WB_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+86,"MEM_WB_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_WB_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"MEM_WB_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_WB_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_WB_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+100,"MEM_WB_io_debug_i_exit", false,-1);
    tracep->declQuad(c+101,"MEM_WB_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"MEM_WB_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+105,"MEM_WB_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+108,"MEM_WB_io_debug_o_exit", false,-1);
    tracep->declQuad(c+109,"MEM_WB_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+111,"MEM_WB_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+113,"MEM_WB_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+106,"MEM_WB_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"MEM_WB_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"MEM_WB_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"MEM_WB_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"MEM_WB_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"MEM_WB_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->pushNamePrefix("Control ");
    tracep->declBit(c+63,"io_id_stall_req", false,-1);
    tracep->declBit(c+2,"io_id_flush_req", false,-1);
    tracep->declBus(c+180,"io_stall_o", false,-1, 4,0);
    tracep->declBus(c+181,"io_flush_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Csr ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+45,"io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+107,"io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+176,"io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+178,"io_csrData_o_status", false,-1, 63,0);
    tracep->declQuad(c+39,"mepc", false,-1, 63,0);
    tracep->declQuad(c+176,"mcause", false,-1, 63,0);
    tracep->declQuad(c+178,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+41,"mtvec", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+67,"io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+27,"io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+68,"io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+10,"io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+69,"io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+71,"io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+73,"io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+28,"io_decInfo_i_memOp_is_load", false,-1);
    tracep->declBit(c+74,"io_decInfo_i_memOp_is_store", false,-1);
    tracep->declBit(c+75,"io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+76,"io_decInfo_i_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+77,"io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+67,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+27,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+68,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+10,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+28,"io_memOp_o_is_load", false,-1);
    tracep->declBit(c+74,"io_memOp_o_is_store", false,-1);
    tracep->declBit(c+75,"io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+76,"io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+13,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+77,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_ex_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+10,"io_ex_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+12,"io_ex_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"io_ex_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+79,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+80,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+79,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+80,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+190,"is_calculating_on_address", false,-1);
    tracep->declQuad(c+13,"aluRes", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+186,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+187,"io_ctrl_i_flush", false,-1);
    tracep->declBit(c+67,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+27,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+68,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+10,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+28,"io_memOp_i_is_load", false,-1);
    tracep->declBit(c+74,"io_memOp_i_is_store", false,-1);
    tracep->declBit(c+75,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+76,"io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+13,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+77,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+80,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+85,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+86,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+87,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+90,"io_memOp_o_is_load", false,-1);
    tracep->declBit(c+91,"io_memOp_o_is_store", false,-1);
    tracep->declBit(c+92,"io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+93,"io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+94,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+100,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+101,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+105,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+85,"writeOp_rf_wen", false,-1);
    tracep->declBus(c+86,"writeOp_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+87,"writeOp_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"writeOp_csr_wen", false,-1);
    tracep->declQuad(c+16,"writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"writeOp_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+90,"memOp_is_load", false,-1);
    tracep->declBit(c+91,"memOp_is_store", false,-1);
    tracep->declBit(c+92,"memOp_unsigned", false,-1);
    tracep->declBus(c+93,"memOp_length", false,-1, 3,0);
    tracep->declQuad(c+94,"memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+100,"debug_exit", false,-1);
    tracep->declQuad(c+101,"debug_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"debug_pc", false,-1, 63,0);
    tracep->declBus(c+105,"debug_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+8,"io_inst_i", false,-1, 31,0);
    tracep->declBus(c+9,"io_fwd_i_ex_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+10,"io_fwd_i_ex_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+12,"io_fwd_i_ex_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+13,"io_fwd_i_ex_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_fwd_i_mem_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"io_fwd_i_mem_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"io_fwd_i_mem_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_fwd_i_mem_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_fwd_i_wb_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"io_fwd_i_wb_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_fwd_i_wb_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_fwd_i_wb_rf_wdata", false,-1, 63,0);
    tracep->declBus(c+27,"io_fwd_i_prev_rd", false,-1, 4,0);
    tracep->declBit(c+28,"io_fwd_i_prev_is_load", false,-1);
    tracep->declQuad(c+29,"io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+31,"io_rfData_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"io_rfData_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"io_rfData_i_a0", false,-1, 63,0);
    tracep->declQuad(c+37,"io_csrData_i_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"io_csrData_i_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"io_csrData_i_tvec", false,-1, 63,0);
    tracep->declBus(c+43,"io_readOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"io_readOp_o_rs2", false,-1, 4,0);
    tracep->declBus(c+45,"io_readOp_o_csrAddr", false,-1, 11,0);
    tracep->declBit(c+46,"io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+47,"io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+48,"io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+49,"io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+51,"io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+52,"io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+54,"io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+56,"io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+2,"io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+3,"io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+57,"io_decInfo_o_memOp_is_load", false,-1);
    tracep->declBit(c+58,"io_decInfo_o_memOp_is_store", false,-1);
    tracep->declBit(c+59,"io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+60,"io_decInfo_o_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+61,"io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+63,"io_stall_req_o", false,-1);
    tracep->declBit(c+2,"io_flush_req_o", false,-1);
    tracep->declBit(c+64,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+43,"rs1", false,-1, 4,0);
    tracep->declBus(c+44,"rs2", false,-1, 4,0);
    tracep->declBus(c+45,"csrAddr", false,-1, 11,0);
    tracep->declQuad(c+191,"rs1Val", false,-1, 63,0);
    tracep->declQuad(c+193,"rs2Val", false,-1, 63,0);
    tracep->declQuad(c+195,"csrVal", false,-1, 63,0);
    tracep->declBus(c+197,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+198,"opcode", false,-1, 6,0);
    tracep->declBus(c+199,"fct3", false,-1, 2,0);
    tracep->declBit(c+200,"is_jalr", false,-1);
    tracep->declQuad(c+201,"rsVal", false,-1, 63,0);
    tracep->declBus(c+203,"inst_p2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+184,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+185,"io_ctrl_i_flush", false,-1);
    tracep->declBit(c+46,"io_decInfo_i_writeOp_rf_wen", false,-1);
    tracep->declBus(c+47,"io_decInfo_i_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+48,"io_decInfo_i_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+49,"io_decInfo_i_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+51,"io_decInfo_i_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+52,"io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+54,"io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+56,"io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+57,"io_decInfo_i_memOp_is_load", false,-1);
    tracep->declBit(c+58,"io_decInfo_i_memOp_is_store", false,-1);
    tracep->declBit(c+59,"io_decInfo_i_memOp_unsigned", false,-1);
    tracep->declBus(c+60,"io_decInfo_i_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+61,"io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+64,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+67,"io_decInfo_o_writeOp_rf_wen", false,-1);
    tracep->declBus(c+27,"io_decInfo_o_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+68,"io_decInfo_o_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+10,"io_decInfo_o_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"io_decInfo_o_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+69,"io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+71,"io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+73,"io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+28,"io_decInfo_o_memOp_is_load", false,-1);
    tracep->declBit(c+74,"io_decInfo_o_memOp_is_store", false,-1);
    tracep->declBit(c+75,"io_decInfo_o_memOp_unsigned", false,-1);
    tracep->declBus(c+76,"io_decInfo_o_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+77,"io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+80,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+84,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+67,"decInfo_writeOp_rf_wen", false,-1);
    tracep->declBus(c+27,"decInfo_writeOp_rf_rd", false,-1, 4,0);
    tracep->declBit(c+68,"decInfo_writeOp_csr_wen", false,-1);
    tracep->declQuad(c+10,"decInfo_writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+9,"decInfo_writeOp_csr_waddr", false,-1, 11,0);
    tracep->declQuad(c+69,"decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+71,"decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+73,"decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+28,"decInfo_memOp_is_load", false,-1);
    tracep->declBit(c+74,"decInfo_memOp_is_store", false,-1);
    tracep->declBit(c+75,"decInfo_memOp_unsigned", false,-1);
    tracep->declBus(c+76,"decInfo_memOp_length", false,-1, 3,0);
    tracep->declQuad(c+77,"decInfo_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"debug_exit", false,-1);
    tracep->declQuad(c+80,"debug_a0", false,-1, 63,0);
    tracep->declQuad(c+82,"debug_pc", false,-1, 63,0);
    tracep->declBus(c+84,"debug_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+1,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+2,"io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+3,"io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_o", false,-1, 31,0);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+182,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+183,"io_ctrl_i_flush", false,-1);
    tracep->declBus(c+5,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+8,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+29,"io_pc_o", false,-1, 63,0);
    tracep->declQuad(c+29,"pc", false,-1, 63,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+85,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+86,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+87,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+90,"io_memOp_i_is_load", false,-1);
    tracep->declBit(c+91,"io_memOp_i_is_store", false,-1);
    tracep->declBit(c+92,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+93,"io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+94,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+98,"io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+85,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+86,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+15,"io_mem_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"io_mem_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"io_mem_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_mem_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+100,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+101,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+105,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+100,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+101,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+105,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBit(c+188,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+189,"io_ctrl_i_flush", false,-1);
    tracep->declBit(c+85,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+86,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+89,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+100,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+101,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+103,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+105,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+108,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+109,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+111,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+113,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+106,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+106,"writeOp_rf_wen", false,-1);
    tracep->declBus(c+24,"writeOp_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"writeOp_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"writeOp_csr_wen", false,-1);
    tracep->declQuad(c+22,"writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"writeOp_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+108,"debug_exit", false,-1);
    tracep->declQuad(c+109,"debug_a0", false,-1, 63,0);
    tracep->declQuad(c+111,"debug_pc", false,-1, 63,0);
    tracep->declBus(c+113,"debug_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Memory ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declQuad(c+6,"io_pc_i", false,-1, 63,0);
    tracep->declBit(c+90,"io_memOp_i_is_load", false,-1);
    tracep->declBit(c+91,"io_memOp_i_is_store", false,-1);
    tracep->declBit(c+92,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+93,"io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+94,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+98,"io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+330,"ram_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+205,"ram_io_inst_o_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+5,"ram_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+206,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+207,"ram_dword_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+208,"ram_dword_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+206,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+209,"ram_dword_MPORT_1_addr", false,-1, 19,0);
    tracep->declBus(c+210,"ram_dword_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+211,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+207,"ram_MPORT_addr", false,-1, 19,0);
    tracep->declBit(c+330,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+212,"ram_MPORT_en", false,-1);
    tracep->declBus(c+213,"ram_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+209,"ram_MPORT_1_addr", false,-1, 19,0);
    tracep->declBit(c+330,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+212,"ram_MPORT_1_en", false,-1);
    tracep->declBit(c+214,"MMIO_RW_read_en", false,-1);
    tracep->declBit(c+215,"MMIO_RW_write_en", false,-1);
    tracep->declQuad(c+94,"MMIO_RW_addr", false,-1, 63,0);
    tracep->declQuad(c+96,"MMIO_RW_wdata", false,-1, 63,0);
    tracep->declBus(c+93,"MMIO_RW_length", false,-1, 3,0);
    tracep->declQuad(c+216,"MMIO_RW_rdata", false,-1, 63,0);
    tracep->declQuad(c+218,"addr", false,-1, 61,0);
    tracep->declQuad(c+220,"dword", false,-1, 63,0);
    tracep->declBus(c+222,"offset", false,-1, 1,0);
    tracep->declQuad(c+223,"byteMask", false,-1, 63,0);
    tracep->declArray(c+225,"mask", false,-1, 94,0);
    tracep->declBus(c+228,"store_en_hi", false,-1, 1,0);
    tracep->declBus(c+229,"store_en_lo", false,-1, 1,0);
    tracep->declBus(c+230,"store_en", false,-1, 7,0);
    tracep->declBus(c+231,"temp_1", false,-1, 7,0);
    tracep->declBus(c+232,"temp_0", false,-1, 7,0);
    tracep->declBus(c+233,"temp_3", false,-1, 7,0);
    tracep->declBus(c+234,"temp_2", false,-1, 7,0);
    tracep->declBus(c+235,"temp_5", false,-1, 7,0);
    tracep->declBus(c+236,"temp_4", false,-1, 7,0);
    tracep->declBus(c+237,"temp_7", false,-1, 7,0);
    tracep->declBus(c+238,"temp_6", false,-1, 7,0);
    tracep->declQuad(c+239,"loadVal_temp", false,-1, 63,0);
    tracep->declBus(c+331,"initvar", false,-1, 31,0);
    tracep->pushNamePrefix("MMIO_RW ");
    tracep->declBit(c+214,"read_en", false,-1);
    tracep->declBit(c+215,"write_en", false,-1);
    tracep->declQuad(c+94,"addr", false,-1, 63,0);
    tracep->declBus(c+93,"length", false,-1, 3,0);
    tracep->declQuad(c+96,"wdata", false,-1, 63,0);
    tracep->declQuad(c+216,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+241,"clock", false,-1);
    tracep->declBit(c+242,"reset", false,-1);
    tracep->declBus(c+43,"io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+106,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+24,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+31,"io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+114,"io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+116,"io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+118,"io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+120,"io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+122,"io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+124,"io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+126,"io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+128,"io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+130,"io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+132,"io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+35,"io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+134,"io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+136,"io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+138,"io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+140,"io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+142,"io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+144,"io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+146,"io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+148,"io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+150,"io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+152,"io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+154,"io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+156,"io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+158,"io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+160,"io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+162,"io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+164,"io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+166,"io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+168,"io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+170,"io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+172,"io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+174,"io_regs_o_31", false,-1, 63,0);
    tracep->declQuad(c+114,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+116,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+118,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+120,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+122,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+124,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+126,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+128,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+130,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+132,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+134,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+136,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+138,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+140,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+142,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+144,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+146,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+148,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+150,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+152,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+154,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+156,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+158,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+160,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+162,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+164,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+166,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+168,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+170,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+172,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+174,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+106,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+106,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+107,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"io_wb_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"io_wb_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_wb_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_wb_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+108,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+109,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+111,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+113,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+108,"DEBUG_exit", false,-1);
    tracep->declQuad(c+111,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+113,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+109,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+108,"exit", false,-1);
    tracep->declQuad(c+111,"pc", false,-1, 63,0);
    tracep->declQuad(c+109,"a0", false,-1, 63,0);
    tracep->declBus(c+113,"inst", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_hec567cc9__0;
    VlWide<3>/*95:0*/ __Vtemp_hfa4740a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h1320bab3__0;
    // Body
    tracep->fullBit(oldp+1,(((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                              ? 1U : 0U)));
    tracep->fullBit(oldp+2,(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen));
    tracep->fullQData(oldp+3,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__ID__DOT__rs1Val 
                                              + vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_4)
                                           : ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? 0ULL
                                               : ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__IF_ID__DOT__pc 
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
                                                    (vlSelf->TOP__DOT__IF_ID__DOT__pc 
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
                                                         & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 0ULL
                                                        : 
                                                       ((2U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Csr__DOT__mepc
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Csr__DOT__mtvec
                                                          : 0ULL)))
                                                       : 0ULL))))))))),64);
    tracep->fullIData(oldp+5,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
    tracep->fullQData(oldp+6,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
    tracep->fullIData(oldp+8,(vlSelf->TOP__DOT__IF_ID__DOT__inst),32);
    tracep->fullSData(oldp+9,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_waddr),12);
    tracep->fullQData(oldp+10,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wdata),64);
    tracep->fullCData(oldp+12,(vlSelf->TOP__DOT__EX_io_ex_fwd_o_rf_rd),5);
    tracep->fullQData(oldp+13,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))),64);
    tracep->fullSData(oldp+15,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_waddr),12);
    tracep->fullQData(oldp+16,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wdata),64);
    tracep->fullCData(oldp+18,(vlSelf->TOP__DOT__MEM_io_mem_fwd_o_rf_rd),5);
    tracep->fullQData(oldp+19,(vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata),64);
    tracep->fullSData(oldp+21,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_waddr),12);
    tracep->fullQData(oldp+22,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wdata),64);
    tracep->fullCData(oldp+24,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_rd),5);
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wdata),64);
    tracep->fullCData(oldp+27,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_rd),5);
    tracep->fullBit(oldp+28,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_load));
    tracep->fullQData(oldp+29,(vlSelf->TOP__DOT__IF_ID__DOT__pc),64);
    tracep->fullQData(oldp+31,(((0x1fU == (0x1fU & 
                                           (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                            >> 0xfU)))
                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                 : ((0x1eU == (0x1fU 
                                               & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 0xfU)))
                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                     : ((0x1dU == (0x1fU 
                                                   & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                      >> 0xfU)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                         : ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0xfU)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                             : ((0x1bU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                 : vlSelf->TOP__DOT__Regfile__DOT___GEN_90)))))),64);
    tracep->fullQData(oldp+33,(((0x1fU == (0x1fU & 
                                           (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                            >> 0x14U)))
                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                 : ((0x1eU == (0x1fU 
                                               & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 0x14U)))
                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                     : ((0x1dU == (0x1fU 
                                                   & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                      >> 0x14U)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                         : ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0x14U)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                             : ((0x1bU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                 : vlSelf->TOP__DOT__Regfile__DOT___GEN_122)))))),64);
    tracep->fullQData(oldp+35,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullQData(oldp+37,(vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal),64);
    tracep->fullQData(oldp+39,(vlSelf->TOP__DOT__Csr__DOT__mepc),64);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__Csr__DOT__mtvec),64);
    tracep->fullCData(oldp+43,((0x1fU & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                         >> 0x14U))),5);
    tracep->fullSData(oldp+45,((vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                >> 0x14U)),12);
    tracep->fullBit(oldp+46,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          | ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             | ((5U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                & ((6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & (0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                          >> 0xcU)))))))))))));
    tracep->fullCData(oldp+47,((0x1fU & ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                          ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                             >> 7U)
                                          : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                 >> 7U)
                                              : ((0U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 7U)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                   >> 7U))))))),5);
    tracep->fullBit(oldp+48,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             & ((5U 
                                                 != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                & ((6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0xcU))) 
                                                      | (IData)(
                                                                ((0U 
                                                                  == 
                                                                  (0x300000U 
                                                                   & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                                                 & (2U 
                                                                    != 
                                                                    (3U 
                                                                     & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                        >> 0x14U))))))))))))))));
    tracep->fullQData(oldp+49,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                            ? 0ULL : 
                                           ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? 0ULL
                                             : ((3U 
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
                                                    ? 0ULL
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    ((0U 
                                                      != 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                          >> 0xcU)))
                                                      ? 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0xcU)))
                                                       ? 
                                                      (vlSelf->TOP__DOT__ID__DOT__csrVal 
                                                       & (~ vlSelf->TOP__DOT__ID__DOT__rsVal))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                            >> 0xcU)))
                                                        ? 
                                                       (vlSelf->TOP__DOT__ID__DOT__csrVal 
                                                        | vlSelf->TOP__DOT__ID__DOT__rsVal)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0xcU)))
                                                         ? vlSelf->TOP__DOT__ID__DOT__rs1Val
                                                         : 0ULL)))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0x14U)))
                                                       ? 0ULL
                                                       : 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__IF_ID__DOT__pc
                                                        : 0ULL)))
                                                     : 0ULL))))))))),64);
    tracep->fullSData(oldp+51,((0xfffU & ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                              >> 0x14U)
                                           : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                  >> 0x14U)
                                               : ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                   >> 0x14U)
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                    >> 0x14U)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                     >> 0x14U)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 
                                                     (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                      >> 0x14U)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                       ? 
                                                      (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                       >> 0x14U)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                        ? 
                                                       ((0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                             >> 0xcU)))
                                                         ? 
                                                        (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                         >> 0x14U)
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                              >> 0x14U)))
                                                          ? 
                                                         (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                          >> 0x14U)
                                                          : 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                               >> 0x14U)))
                                                           ? 0x305U
                                                           : 
                                                          (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0x14U))))
                                                        : 
                                                       (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                        >> 0x14U))))))))))),12);
    tracep->fullQData(oldp+52,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
    tracep->fullQData(oldp+54,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_117[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_117[0U])))),64);
    tracep->fullCData(oldp+56,(((0x33U == (0xfe00707fU 
                                           & vlSelf->TOP__DOT__IF_ID__DOT__inst))
                                 ? 0U : ((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->TOP__DOT__IF_ID__DOT__inst))
                                          ? 1U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_248)))),5);
    tracep->fullBit(oldp+57,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst))))));
    tracep->fullBit(oldp+58,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                       & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                             & (5U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))))));
    tracep->fullBit(oldp+59,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                    >> 0xeU)))));
    tracep->fullCData(oldp+60,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? 0U : (0xfU & ((1U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (0xfU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                         >> 0xcU))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 0U
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                           >> 0xcU)))
                                                       : 0U))))))))),4);
    tracep->fullQData(oldp+61,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                            ? 0ULL : 
                                           ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? 0ULL
                                             : ((3U 
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
                                                    ? vlSelf->TOP__DOT__ID__DOT__rs2Val
                                                    : 0ULL)))))))),64);
    tracep->fullBit(oldp+63,(vlSelf->TOP__DOT__ID_io_stall_req_o));
    tracep->fullBit(oldp+64,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->TOP__DOT__IF_ID__DOT__inst)
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
                                                                    & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                       >> 0xcU))))) 
                                                       & ((2U 
                                                           != 
                                                           (3U 
                                                            & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                               >> 0x14U))) 
                                                          & (IData)(
                                                                    ((0x100000U 
                                                                      == 
                                                                      (0x300000U 
                                                                       & vlSelf->TOP__DOT__IF_ID__DOT__inst)) 
                                                                     & (0U 
                                                                        != 
                                                                        (3U 
                                                                         & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                                                            >> 0x14U)))))))))))))))));
    tracep->fullQData(oldp+65,(((0xaU == (IData)(vlSelf->TOP__DOT__EX_io_ex_fwd_o_rf_rd))
                                 ? (((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                                 : ((0xaU == (IData)(vlSelf->TOP__DOT__MEM_io_mem_fwd_o_rf_rd))
                                     ? vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata
                                     : ((0xaU == (IData)(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_rd))
                                         ? vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wdata
                                         : vlSelf->TOP__DOT__Regfile__DOT__registers_10)))),64);
    tracep->fullBit(oldp+67,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_rf_wen));
    tracep->fullBit(oldp+68,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_writeOp_csr_wen));
    tracep->fullQData(oldp+69,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src1),64);
    tracep->fullQData(oldp+71,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_src2),64);
    tracep->fullCData(oldp+73,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_aluOp_opt),5);
    tracep->fullBit(oldp+74,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_is_store));
    tracep->fullBit(oldp+75,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_unsigned));
    tracep->fullCData(oldp+76,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_length),4);
    tracep->fullQData(oldp+77,(vlSelf->TOP__DOT__ID_EX__DOT__decInfo_memOp_sdata),64);
    tracep->fullBit(oldp+79,(vlSelf->TOP__DOT__ID_EX__DOT__debug_exit));
    tracep->fullQData(oldp+80,(vlSelf->TOP__DOT__ID_EX__DOT__debug_a0),64);
    tracep->fullQData(oldp+82,(vlSelf->TOP__DOT__ID_EX__DOT__debug_pc),64);
    tracep->fullIData(oldp+84,(vlSelf->TOP__DOT__ID_EX__DOT__debug_inst),32);
    tracep->fullBit(oldp+85,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wen));
    tracep->fullCData(oldp+86,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_rd),5);
    tracep->fullQData(oldp+87,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wdata),64);
    tracep->fullBit(oldp+89,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wen));
    tracep->fullBit(oldp+90,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load));
    tracep->fullBit(oldp+91,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store));
    tracep->fullBit(oldp+92,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned));
    tracep->fullCData(oldp+93,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length),4);
    tracep->fullQData(oldp+94,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr),64);
    tracep->fullQData(oldp+96,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata),64);
    tracep->fullQData(oldp+98,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                 ? (((QData)((IData)(
                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                 : ((4U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                     ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
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
                                     : ((2U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                         ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
                                             ? (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))
                                             : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U] 
                                                                        >> 0xfU))))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))))
                                         : ((1U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                             ? ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned)
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
    tracep->fullBit(oldp+100,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_exit));
    tracep->fullQData(oldp+101,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_a0),64);
    tracep->fullQData(oldp+103,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_pc),64);
    tracep->fullIData(oldp+105,(vlSelf->TOP__DOT__EX_MEM__DOT__debug_inst),32);
    tracep->fullBit(oldp+106,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wen));
    tracep->fullBit(oldp+107,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wen));
    tracep->fullBit(oldp+108,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_exit));
    tracep->fullQData(oldp+109,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_a0),64);
    tracep->fullQData(oldp+111,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_pc),64);
    tracep->fullIData(oldp+113,(vlSelf->TOP__DOT__MEM_WB__DOT__debug_inst),32);
    tracep->fullQData(oldp+114,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+116,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+118,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+120,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+122,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+124,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+126,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+128,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+130,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+132,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+134,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+136,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+138,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+140,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+142,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+144,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+146,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+148,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+150,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+152,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+154,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+156,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+158,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+160,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+162,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+164,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+166,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+168,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+170,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+172,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+174,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullQData(oldp+176,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
    tracep->fullQData(oldp+178,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
    tracep->fullCData(oldp+180,(((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                  ? 3U : 0U)),5);
    tracep->fullCData(oldp+181,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                  ? 3U : 0U)),5);
    tracep->fullBit(oldp+182,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 1U))));
    tracep->fullBit(oldp+183,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 1U))));
    tracep->fullBit(oldp+184,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 2U))));
    tracep->fullBit(oldp+185,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 2U))));
    tracep->fullBit(oldp+186,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 3U))));
    tracep->fullBit(oldp+187,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 3U))));
    tracep->fullBit(oldp+188,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 4U))));
    tracep->fullBit(oldp+189,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 4U))));
    tracep->fullBit(oldp+190,(vlSelf->TOP__DOT__EX__DOT__is_calculating_on_address));
    tracep->fullQData(oldp+191,(vlSelf->TOP__DOT__ID__DOT__rs1Val),64);
    tracep->fullQData(oldp+193,(vlSelf->TOP__DOT__ID__DOT__rs2Val),64);
    tracep->fullQData(oldp+195,(vlSelf->TOP__DOT__ID__DOT__csrVal),64);
    tracep->fullCData(oldp+197,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+198,((0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst)),7);
    tracep->fullCData(oldp+199,((7U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                       >> 0xcU))),3);
    tracep->fullBit(oldp+200,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst))));
    tracep->fullQData(oldp+201,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
    tracep->fullCData(oldp+203,((3U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                       >> 0x14U))),2);
    tracep->fullIData(oldp+204,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullIData(oldp+205,((0xfffffU & (IData)(
                                                    (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullBit(oldp+206,(((0x80000000ULL <= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr) 
                               & (0x87ffffffULL >= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))));
    tracep->fullIData(oldp+207,((0xfffffU & ((IData)(1U) 
                                             + (IData)(
                                                       ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                         - 0x80000000ULL) 
                                                        >> 2U))))),20);
    tracep->fullIData(oldp+208,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                          - 0x80000000ULL) 
                                                         >> 2U))))]),32);
    tracep->fullIData(oldp+209,((0xfffffU & (IData)(
                                                    ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullIData(oldp+210,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & (IData)(
                                                     ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                       - 0x80000000ULL) 
                                                      >> 2U)))]),32);
    tracep->fullIData(oldp+211,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+212,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
    tracep->fullIData(oldp+213,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
    tracep->fullBit(oldp+214,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load))));
    tracep->fullBit(oldp+215,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
    tracep->fullQData(oldp+216,(vlSelf->TOP__DOT__Main_Memory__DOT__MMIO_RW_rdata),64);
    tracep->fullQData(oldp+218,(((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                  - 0x80000000ULL) 
                                 >> 2U)),62);
    tracep->fullQData(oldp+220,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
    tracep->fullCData(oldp+222,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))),2);
    tracep->fullQData(oldp+223,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                  ? 0xffffffffffffffffULL
                                  : (QData)((IData)(
                                                    ((4U 
                                                      == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                      ? 0xffffffffU
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                       ? 0xffffU
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                        ? 0xffU
                                                        : 0U))))))),64);
    VL_EXTEND_WQ(95,64, __Vtemp_hec567cc9__0, ((8U 
                                                == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                ? 0xffffffffffffffffULL
                                                : (QData)((IData)(
                                                                  ((4U 
                                                                    == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                    ? 0xffffffffU
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                     ? 0xffffU
                                                                     : 
                                                                    ((1U 
                                                                      == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
                                                                      ? 0xffU
                                                                      : 0U)))))));
    VL_SHIFTL_WWI(95,95,5, __Vtemp_hfa4740a3__0, __Vtemp_hec567cc9__0, 
                  (0x18U & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr) 
                            << 3U)));
    __Vtemp_h1320bab3__0[0U] = __Vtemp_hfa4740a3__0[0U];
    __Vtemp_h1320bab3__0[1U] = __Vtemp_hfa4740a3__0[1U];
    __Vtemp_h1320bab3__0[2U] = (0x7fffffffU & __Vtemp_hfa4740a3__0[2U]);
    tracep->fullWData(oldp+225,(__Vtemp_h1320bab3__0),95);
    tracep->fullCData(oldp+228,((3U & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length) 
                                       >> 2U))),2);
    tracep->fullCData(oldp+229,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))),2);
    tracep->fullCData(oldp+230,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
    tracep->fullCData(oldp+231,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 8U))))),8);
    tracep->fullCData(oldp+232,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                           : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
    tracep->fullCData(oldp+233,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((3U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x18U))))),8);
    tracep->fullCData(oldp+234,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x10U))))),8);
    tracep->fullCData(oldp+235,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x28U))))),8);
    tracep->fullCData(oldp+236,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((4U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x20U))))),8);
    tracep->fullCData(oldp+237,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((7U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x38U))))),8);
    tracep->fullCData(oldp+238,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
                                           ? ((0x80U 
                                               & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                               ? ((6U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (3U 
                                                        & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr)))))
                                                   ? (IData)(
                                                             (vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata 
                                                              >> 0x38U))
                                                   : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                               : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                           : (IData)(
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                      >> 0x30U))))),8);
    tracep->fullQData(oldp+239,((((QData)((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))),64);
    tracep->fullBit(oldp+241,(vlSelf->clock));
    tracep->fullBit(oldp+242,(vlSelf->reset));
    tracep->fullQData(oldp+243,(vlSelf->io_timer_i),64);
    tracep->fullQData(oldp+245,(vlSelf->io_csrData_csrVal),64);
    tracep->fullQData(oldp+247,(vlSelf->io_csrData_epc),64);
    tracep->fullQData(oldp+249,(vlSelf->io_csrData_tvec),64);
    tracep->fullQData(oldp+251,(vlSelf->io_csrData_cause),64);
    tracep->fullQData(oldp+253,(vlSelf->io_csrData_status),64);
    tracep->fullQData(oldp+255,(vlSelf->io_regs_0),64);
    tracep->fullQData(oldp+257,(vlSelf->io_regs_1),64);
    tracep->fullQData(oldp+259,(vlSelf->io_regs_2),64);
    tracep->fullQData(oldp+261,(vlSelf->io_regs_3),64);
    tracep->fullQData(oldp+263,(vlSelf->io_regs_4),64);
    tracep->fullQData(oldp+265,(vlSelf->io_regs_5),64);
    tracep->fullQData(oldp+267,(vlSelf->io_regs_6),64);
    tracep->fullQData(oldp+269,(vlSelf->io_regs_7),64);
    tracep->fullQData(oldp+271,(vlSelf->io_regs_8),64);
    tracep->fullQData(oldp+273,(vlSelf->io_regs_9),64);
    tracep->fullQData(oldp+275,(vlSelf->io_regs_10),64);
    tracep->fullQData(oldp+277,(vlSelf->io_regs_11),64);
    tracep->fullQData(oldp+279,(vlSelf->io_regs_12),64);
    tracep->fullQData(oldp+281,(vlSelf->io_regs_13),64);
    tracep->fullQData(oldp+283,(vlSelf->io_regs_14),64);
    tracep->fullQData(oldp+285,(vlSelf->io_regs_15),64);
    tracep->fullQData(oldp+287,(vlSelf->io_regs_16),64);
    tracep->fullQData(oldp+289,(vlSelf->io_regs_17),64);
    tracep->fullQData(oldp+291,(vlSelf->io_regs_18),64);
    tracep->fullQData(oldp+293,(vlSelf->io_regs_19),64);
    tracep->fullQData(oldp+295,(vlSelf->io_regs_20),64);
    tracep->fullQData(oldp+297,(vlSelf->io_regs_21),64);
    tracep->fullQData(oldp+299,(vlSelf->io_regs_22),64);
    tracep->fullQData(oldp+301,(vlSelf->io_regs_23),64);
    tracep->fullQData(oldp+303,(vlSelf->io_regs_24),64);
    tracep->fullQData(oldp+305,(vlSelf->io_regs_25),64);
    tracep->fullQData(oldp+307,(vlSelf->io_regs_26),64);
    tracep->fullQData(oldp+309,(vlSelf->io_regs_27),64);
    tracep->fullQData(oldp+311,(vlSelf->io_regs_28),64);
    tracep->fullQData(oldp+313,(vlSelf->io_regs_29),64);
    tracep->fullQData(oldp+315,(vlSelf->io_regs_30),64);
    tracep->fullQData(oldp+317,(vlSelf->io_regs_31),64);
    tracep->fullQData(oldp+319,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+321,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+322,(vlSelf->io_o1),64);
    tracep->fullQData(oldp+324,(vlSelf->io_o2),64);
    tracep->fullQData(oldp+326,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+328,(vlSelf->io_src2),64);
    tracep->fullBit(oldp+330,(1U));
    tracep->fullIData(oldp+331,(vlSelf->TOP__DOT__Main_Memory__DOT__initvar),32);
}

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
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declQuad(c+223,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+225,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+227,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+229,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+231,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+233,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+235,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+237,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+239,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+241,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+243,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+245,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+247,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+249,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+251,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+253,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+255,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+257,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+259,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+261,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+263,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+265,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+267,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+269,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+271,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+273,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+275,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+277,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+279,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+281,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+283,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+285,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+287,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+289,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+291,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+293,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+295,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+297,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+299,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+301,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+302,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+304,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+306,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+308,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declQuad(c+223,"io_timer_i", false,-1, 63,0);
    tracep->declQuad(c+225,"io_csrData_csrVal", false,-1, 63,0);
    tracep->declQuad(c+227,"io_csrData_epc", false,-1, 63,0);
    tracep->declQuad(c+229,"io_csrData_tvec", false,-1, 63,0);
    tracep->declQuad(c+231,"io_csrData_cause", false,-1, 63,0);
    tracep->declQuad(c+233,"io_csrData_status", false,-1, 63,0);
    tracep->declQuad(c+235,"io_regs_0", false,-1, 63,0);
    tracep->declQuad(c+237,"io_regs_1", false,-1, 63,0);
    tracep->declQuad(c+239,"io_regs_2", false,-1, 63,0);
    tracep->declQuad(c+241,"io_regs_3", false,-1, 63,0);
    tracep->declQuad(c+243,"io_regs_4", false,-1, 63,0);
    tracep->declQuad(c+245,"io_regs_5", false,-1, 63,0);
    tracep->declQuad(c+247,"io_regs_6", false,-1, 63,0);
    tracep->declQuad(c+249,"io_regs_7", false,-1, 63,0);
    tracep->declQuad(c+251,"io_regs_8", false,-1, 63,0);
    tracep->declQuad(c+253,"io_regs_9", false,-1, 63,0);
    tracep->declQuad(c+255,"io_regs_10", false,-1, 63,0);
    tracep->declQuad(c+257,"io_regs_11", false,-1, 63,0);
    tracep->declQuad(c+259,"io_regs_12", false,-1, 63,0);
    tracep->declQuad(c+261,"io_regs_13", false,-1, 63,0);
    tracep->declQuad(c+263,"io_regs_14", false,-1, 63,0);
    tracep->declQuad(c+265,"io_regs_15", false,-1, 63,0);
    tracep->declQuad(c+267,"io_regs_16", false,-1, 63,0);
    tracep->declQuad(c+269,"io_regs_17", false,-1, 63,0);
    tracep->declQuad(c+271,"io_regs_18", false,-1, 63,0);
    tracep->declQuad(c+273,"io_regs_19", false,-1, 63,0);
    tracep->declQuad(c+275,"io_regs_20", false,-1, 63,0);
    tracep->declQuad(c+277,"io_regs_21", false,-1, 63,0);
    tracep->declQuad(c+279,"io_regs_22", false,-1, 63,0);
    tracep->declQuad(c+281,"io_regs_23", false,-1, 63,0);
    tracep->declQuad(c+283,"io_regs_24", false,-1, 63,0);
    tracep->declQuad(c+285,"io_regs_25", false,-1, 63,0);
    tracep->declQuad(c+287,"io_regs_26", false,-1, 63,0);
    tracep->declQuad(c+289,"io_regs_27", false,-1, 63,0);
    tracep->declQuad(c+291,"io_regs_28", false,-1, 63,0);
    tracep->declQuad(c+293,"io_regs_29", false,-1, 63,0);
    tracep->declQuad(c+295,"io_regs_30", false,-1, 63,0);
    tracep->declQuad(c+297,"io_regs_31", false,-1, 63,0);
    tracep->declQuad(c+299,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+301,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+302,"io_o1", false,-1, 63,0);
    tracep->declQuad(c+304,"io_o2", false,-1, 63,0);
    tracep->declQuad(c+306,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+308,"io_src2", false,-1, 63,0);
    tracep->declBit(c+221,"IF_clock", false,-1);
    tracep->declBit(c+222,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+2,"IF_io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+3,"IF_io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+5,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+5,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+221,"ID_clock", false,-1);
    tracep->declBit(c+222,"ID_reset", false,-1);
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
    tracep->declBit(c+64,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+64,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+79,"MEM_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+18,"MEM_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+80,"MEM_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"MEM_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+83,"MEM_io_memOp_i_is_load", false,-1);
    tracep->declBit(c+84,"MEM_io_memOp_i_is_store", false,-1);
    tracep->declBit(c+85,"MEM_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+86,"MEM_io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+87,"MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+91,"MEM_io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+79,"MEM_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+18,"MEM_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"MEM_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+15,"MEM_io_mem_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"MEM_io_mem_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"MEM_io_mem_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_io_mem_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+64,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+93,"WB_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+24,"WB_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"WB_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+22,"WB_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"WB_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+93,"WB_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"WB_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"WB_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"WB_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"WB_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"WB_io_wb_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"WB_io_wb_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"WB_io_wb_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"WB_io_wb_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+65,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+8,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+221,"Regfile_clock", false,-1);
    tracep->declBit(c+222,"Regfile_reset", false,-1);
    tracep->declBus(c+43,"Regfile_io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"Regfile_io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+93,"Regfile_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+24,"Regfile_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"Regfile_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+31,"Regfile_io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"Regfile_io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"Regfile_io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+95,"Regfile_io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+97,"Regfile_io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+99,"Regfile_io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+101,"Regfile_io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+103,"Regfile_io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+105,"Regfile_io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+107,"Regfile_io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+109,"Regfile_io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+111,"Regfile_io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+113,"Regfile_io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+35,"Regfile_io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+115,"Regfile_io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+117,"Regfile_io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+119,"Regfile_io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+121,"Regfile_io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+123,"Regfile_io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+125,"Regfile_io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+127,"Regfile_io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+129,"Regfile_io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+131,"Regfile_io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+133,"Regfile_io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+135,"Regfile_io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+137,"Regfile_io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+139,"Regfile_io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+141,"Regfile_io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+143,"Regfile_io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+145,"Regfile_io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+147,"Regfile_io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+149,"Regfile_io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+151,"Regfile_io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+153,"Regfile_io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+155,"Regfile_io_regs_o_31", false,-1, 63,0);
    tracep->declBit(c+221,"Csr_clock", false,-1);
    tracep->declBit(c+222,"Csr_reset", false,-1);
    tracep->declBus(c+45,"Csr_io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+94,"Csr_io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+22,"Csr_io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"Csr_io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"Csr_io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"Csr_io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"Csr_io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+157,"Csr_io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+159,"Csr_io_csrData_o_status", false,-1, 63,0);
    tracep->declBit(c+221,"Main_Memory_clock", false,-1);
    tracep->declQuad(c+6,"Main_Memory_io_pc_i", false,-1, 63,0);
    tracep->declBit(c+83,"Main_Memory_io_memOp_i_is_load", false,-1);
    tracep->declBit(c+84,"Main_Memory_io_memOp_i_is_store", false,-1);
    tracep->declBit(c+85,"Main_Memory_io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+86,"Main_Memory_io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+87,"Main_Memory_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"Main_Memory_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+5,"Main_Memory_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+91,"Main_Memory_io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+63,"Control_io_id_stall_req", false,-1);
    tracep->declBit(c+2,"Control_io_id_flush_req", false,-1);
    tracep->declBus(c+161,"Control_io_stall_o", false,-1, 4,0);
    tracep->declBus(c+162,"Control_io_flush_o", false,-1, 4,0);
    tracep->declBit(c+221,"IF_ID_clock", false,-1);
    tracep->declBit(c+222,"IF_ID_reset", false,-1);
    tracep->declBit(c+163,"IF_ID_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+164,"IF_ID_io_ctrl_i_flush", false,-1);
    tracep->declBus(c+5,"IF_ID_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"IF_ID_io_pc_i", false,-1, 63,0);
    tracep->declBus(c+8,"IF_ID_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+29,"IF_ID_io_pc_o", false,-1, 63,0);
    tracep->declBit(c+221,"ID_EX_clock", false,-1);
    tracep->declBit(c+222,"ID_EX_reset", false,-1);
    tracep->declBit(c+165,"ID_EX_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+166,"ID_EX_io_ctrl_i_flush", false,-1);
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
    tracep->declBit(c+221,"EX_MEM_clock", false,-1);
    tracep->declBit(c+222,"EX_MEM_reset", false,-1);
    tracep->declBit(c+167,"EX_MEM_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+168,"EX_MEM_io_ctrl_i_flush", false,-1);
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
    tracep->declBit(c+79,"EX_MEM_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+18,"EX_MEM_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+80,"EX_MEM_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"EX_MEM_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"EX_MEM_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"EX_MEM_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+83,"EX_MEM_io_memOp_o_is_load", false,-1);
    tracep->declBit(c+84,"EX_MEM_io_memOp_o_is_store", false,-1);
    tracep->declBit(c+85,"EX_MEM_io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+86,"EX_MEM_io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+87,"EX_MEM_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"EX_MEM_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+221,"MEM_WB_clock", false,-1);
    tracep->declBit(c+222,"MEM_WB_reset", false,-1);
    tracep->declBit(c+169,"MEM_WB_io_ctrl_i_stall", false,-1);
    tracep->declBit(c+170,"MEM_WB_io_ctrl_i_flush", false,-1);
    tracep->declBit(c+79,"MEM_WB_io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+18,"MEM_WB_io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"MEM_WB_io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"MEM_WB_io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"MEM_WB_io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"MEM_WB_io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+93,"MEM_WB_io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"MEM_WB_io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"MEM_WB_io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"MEM_WB_io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"MEM_WB_io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"MEM_WB_io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->pushNamePrefix("Control ");
    tracep->declBit(c+63,"io_id_stall_req", false,-1);
    tracep->declBit(c+2,"io_id_flush_req", false,-1);
    tracep->declBus(c+161,"io_stall_o", false,-1, 4,0);
    tracep->declBus(c+162,"io_flush_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Csr ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBus(c+45,"io_csrAddr_i", false,-1, 11,0);
    tracep->declBit(c+94,"io_writeOp_i_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_i_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_i_waddr", false,-1, 11,0);
    tracep->declQuad(c+37,"io_csrData_o_csrVal", false,-1, 63,0);
    tracep->declQuad(c+39,"io_csrData_o_epc", false,-1, 63,0);
    tracep->declQuad(c+41,"io_csrData_o_tvec", false,-1, 63,0);
    tracep->declQuad(c+157,"io_csrData_o_cause", false,-1, 63,0);
    tracep->declQuad(c+159,"io_csrData_o_status", false,-1, 63,0);
    tracep->declQuad(c+39,"mepc", false,-1, 63,0);
    tracep->declQuad(c+157,"mcause", false,-1, 63,0);
    tracep->declQuad(c+159,"mstatus", false,-1, 63,0);
    tracep->declQuad(c+41,"mtvec", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX ");
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
    tracep->declBit(c+64,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+64,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("EX_MEM ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBit(c+167,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+168,"io_ctrl_i_flush", false,-1);
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
    tracep->declBit(c+79,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+18,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+80,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+83,"io_memOp_o_is_load", false,-1);
    tracep->declBit(c+84,"io_memOp_o_is_store", false,-1);
    tracep->declBit(c+85,"io_memOp_o_unsigned", false,-1);
    tracep->declBus(c+86,"io_memOp_o_length", false,-1, 3,0);
    tracep->declQuad(c+87,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+79,"writeOp_rf_wen", false,-1);
    tracep->declBus(c+18,"writeOp_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+80,"writeOp_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"writeOp_csr_wen", false,-1);
    tracep->declQuad(c+16,"writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"writeOp_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+83,"memOp_is_load", false,-1);
    tracep->declBit(c+84,"memOp_is_store", false,-1);
    tracep->declBit(c+85,"memOp_unsigned", false,-1);
    tracep->declBus(c+86,"memOp_length", false,-1, 3,0);
    tracep->declQuad(c+87,"memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"memOp_sdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
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
    tracep->declQuad(c+171,"rs1Val", false,-1, 63,0);
    tracep->declQuad(c+173,"rs2Val", false,-1, 63,0);
    tracep->declQuad(c+175,"csrVal", false,-1, 63,0);
    tracep->declBus(c+177,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+178,"opcode", false,-1, 6,0);
    tracep->declBus(c+179,"fct3", false,-1, 2,0);
    tracep->declBit(c+180,"is_jalr", false,-1);
    tracep->declQuad(c+181,"rsVal", false,-1, 63,0);
    tracep->declBus(c+183,"inst_p2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID_EX ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBit(c+165,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+166,"io_ctrl_i_flush", false,-1);
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
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBit(c+1,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+2,"io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+3,"io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_o", false,-1, 31,0);
    tracep->declBus(c+184,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF_ID ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBit(c+163,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+164,"io_ctrl_i_flush", false,-1);
    tracep->declBus(c+5,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+6,"io_pc_i", false,-1, 63,0);
    tracep->declBus(c+8,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+29,"io_pc_o", false,-1, 63,0);
    tracep->declQuad(c+29,"pc", false,-1, 63,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+79,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+18,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+80,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+83,"io_memOp_i_is_load", false,-1);
    tracep->declBit(c+84,"io_memOp_i_is_store", false,-1);
    tracep->declBit(c+85,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+86,"io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+87,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+91,"io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+79,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+18,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+15,"io_mem_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+16,"io_mem_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+18,"io_mem_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_mem_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+64,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM_WB ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBit(c+169,"io_ctrl_i_stall", false,-1);
    tracep->declBit(c+170,"io_ctrl_i_flush", false,-1);
    tracep->declBit(c+79,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+18,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+19,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+82,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+16,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+15,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+93,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+93,"writeOp_rf_wen", false,-1);
    tracep->declBus(c+24,"writeOp_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"writeOp_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"writeOp_csr_wen", false,-1);
    tracep->declQuad(c+22,"writeOp_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"writeOp_csr_waddr", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Memory ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declQuad(c+6,"io_pc_i", false,-1, 63,0);
    tracep->declBit(c+83,"io_memOp_i_is_load", false,-1);
    tracep->declBit(c+84,"io_memOp_i_is_store", false,-1);
    tracep->declBit(c+85,"io_memOp_i_unsigned", false,-1);
    tracep->declBus(c+86,"io_memOp_i_length", false,-1, 3,0);
    tracep->declQuad(c+87,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+5,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+91,"io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+310,"ram_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+185,"ram_io_inst_o_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+5,"ram_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+186,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+187,"ram_dword_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+188,"ram_dword_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+186,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+189,"ram_dword_MPORT_1_addr", false,-1, 19,0);
    tracep->declBus(c+190,"ram_dword_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+191,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+187,"ram_MPORT_addr", false,-1, 19,0);
    tracep->declBit(c+310,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+192,"ram_MPORT_en", false,-1);
    tracep->declBus(c+193,"ram_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+189,"ram_MPORT_1_addr", false,-1, 19,0);
    tracep->declBit(c+310,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+192,"ram_MPORT_1_en", false,-1);
    tracep->declBit(c+194,"MMIO_RW_read_en", false,-1);
    tracep->declBit(c+195,"MMIO_RW_write_en", false,-1);
    tracep->declQuad(c+87,"MMIO_RW_addr", false,-1, 63,0);
    tracep->declQuad(c+89,"MMIO_RW_wdata", false,-1, 63,0);
    tracep->declBus(c+86,"MMIO_RW_length", false,-1, 3,0);
    tracep->declQuad(c+196,"MMIO_RW_rdata", false,-1, 63,0);
    tracep->declQuad(c+198,"addr", false,-1, 61,0);
    tracep->declQuad(c+200,"dword", false,-1, 63,0);
    tracep->declBus(c+202,"offset", false,-1, 1,0);
    tracep->declQuad(c+203,"byteMask", false,-1, 63,0);
    tracep->declArray(c+205,"mask", false,-1, 94,0);
    tracep->declBus(c+208,"store_en_hi", false,-1, 1,0);
    tracep->declBus(c+209,"store_en_lo", false,-1, 1,0);
    tracep->declBus(c+210,"store_en", false,-1, 7,0);
    tracep->declBus(c+211,"temp_1", false,-1, 7,0);
    tracep->declBus(c+212,"temp_0", false,-1, 7,0);
    tracep->declBus(c+213,"temp_3", false,-1, 7,0);
    tracep->declBus(c+214,"temp_2", false,-1, 7,0);
    tracep->declBus(c+215,"temp_5", false,-1, 7,0);
    tracep->declBus(c+216,"temp_4", false,-1, 7,0);
    tracep->declBus(c+217,"temp_7", false,-1, 7,0);
    tracep->declBus(c+218,"temp_6", false,-1, 7,0);
    tracep->declQuad(c+219,"loadVal_temp", false,-1, 63,0);
    tracep->declBus(c+311,"initvar", false,-1, 31,0);
    tracep->pushNamePrefix("MMIO_RW ");
    tracep->declBit(c+194,"read_en", false,-1);
    tracep->declBit(c+195,"write_en", false,-1);
    tracep->declQuad(c+87,"addr", false,-1, 63,0);
    tracep->declBus(c+86,"length", false,-1, 3,0);
    tracep->declQuad(c+89,"wdata", false,-1, 63,0);
    tracep->declQuad(c+196,"rdata", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+221,"clock", false,-1);
    tracep->declBit(c+222,"reset", false,-1);
    tracep->declBus(c+43,"io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+44,"io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+93,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+24,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+31,"io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+33,"io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+35,"io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+95,"io_regs_o_0", false,-1, 63,0);
    tracep->declQuad(c+97,"io_regs_o_1", false,-1, 63,0);
    tracep->declQuad(c+99,"io_regs_o_2", false,-1, 63,0);
    tracep->declQuad(c+101,"io_regs_o_3", false,-1, 63,0);
    tracep->declQuad(c+103,"io_regs_o_4", false,-1, 63,0);
    tracep->declQuad(c+105,"io_regs_o_5", false,-1, 63,0);
    tracep->declQuad(c+107,"io_regs_o_6", false,-1, 63,0);
    tracep->declQuad(c+109,"io_regs_o_7", false,-1, 63,0);
    tracep->declQuad(c+111,"io_regs_o_8", false,-1, 63,0);
    tracep->declQuad(c+113,"io_regs_o_9", false,-1, 63,0);
    tracep->declQuad(c+35,"io_regs_o_10", false,-1, 63,0);
    tracep->declQuad(c+115,"io_regs_o_11", false,-1, 63,0);
    tracep->declQuad(c+117,"io_regs_o_12", false,-1, 63,0);
    tracep->declQuad(c+119,"io_regs_o_13", false,-1, 63,0);
    tracep->declQuad(c+121,"io_regs_o_14", false,-1, 63,0);
    tracep->declQuad(c+123,"io_regs_o_15", false,-1, 63,0);
    tracep->declQuad(c+125,"io_regs_o_16", false,-1, 63,0);
    tracep->declQuad(c+127,"io_regs_o_17", false,-1, 63,0);
    tracep->declQuad(c+129,"io_regs_o_18", false,-1, 63,0);
    tracep->declQuad(c+131,"io_regs_o_19", false,-1, 63,0);
    tracep->declQuad(c+133,"io_regs_o_20", false,-1, 63,0);
    tracep->declQuad(c+135,"io_regs_o_21", false,-1, 63,0);
    tracep->declQuad(c+137,"io_regs_o_22", false,-1, 63,0);
    tracep->declQuad(c+139,"io_regs_o_23", false,-1, 63,0);
    tracep->declQuad(c+141,"io_regs_o_24", false,-1, 63,0);
    tracep->declQuad(c+143,"io_regs_o_25", false,-1, 63,0);
    tracep->declQuad(c+145,"io_regs_o_26", false,-1, 63,0);
    tracep->declQuad(c+147,"io_regs_o_27", false,-1, 63,0);
    tracep->declQuad(c+149,"io_regs_o_28", false,-1, 63,0);
    tracep->declQuad(c+151,"io_regs_o_29", false,-1, 63,0);
    tracep->declQuad(c+153,"io_regs_o_30", false,-1, 63,0);
    tracep->declQuad(c+155,"io_regs_o_31", false,-1, 63,0);
    tracep->declQuad(c+95,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+97,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+99,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+101,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+103,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+105,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+107,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+109,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+111,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+113,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+35,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+115,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+117,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+119,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+121,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+123,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+125,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+127,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+129,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+131,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+133,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+135,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+137,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+139,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+141,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+143,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+145,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+147,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+149,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+151,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+153,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+155,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+93,"io_writeOp_i_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_i_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_i_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"io_writeOp_i_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_i_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_i_csr_waddr", false,-1, 11,0);
    tracep->declBit(c+93,"io_writeOp_o_rf_wen", false,-1);
    tracep->declBus(c+24,"io_writeOp_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeOp_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+94,"io_writeOp_o_csr_wen", false,-1);
    tracep->declQuad(c+22,"io_writeOp_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+21,"io_writeOp_o_csr_waddr", false,-1, 11,0);
    tracep->declBus(c+21,"io_wb_fwd_o_csr_addr", false,-1, 11,0);
    tracep->declQuad(c+22,"io_wb_fwd_o_csr_wdata", false,-1, 63,0);
    tracep->declBus(c+24,"io_wb_fwd_o_rf_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_wb_fwd_o_rf_wdata", false,-1, 63,0);
    tracep->declBit(c+64,"io_debug_exit", false,-1);
    tracep->declQuad(c+65,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+29,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+8,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+64,"DEBUG_exit", false,-1);
    tracep->declQuad(c+29,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+8,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+65,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+64,"exit", false,-1);
    tracep->declQuad(c+29,"pc", false,-1, 63,0);
    tracep->declQuad(c+65,"a0", false,-1, 63,0);
    tracep->declBus(c+8,"inst", false,-1, 31,0);
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
    tracep->fullCData(oldp+18,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_rd),5);
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
                                 : ((0xaU == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_rd))
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
    tracep->fullBit(oldp+79,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wen));
    tracep->fullQData(oldp+80,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_rf_wdata),64);
    tracep->fullBit(oldp+82,(vlSelf->TOP__DOT__EX_MEM__DOT__writeOp_csr_wen));
    tracep->fullBit(oldp+83,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load));
    tracep->fullBit(oldp+84,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store));
    tracep->fullBit(oldp+85,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_unsigned));
    tracep->fullCData(oldp+86,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length),4);
    tracep->fullQData(oldp+87,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr),64);
    tracep->fullQData(oldp+89,(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_sdata),64);
    tracep->fullQData(oldp+91,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
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
    tracep->fullBit(oldp+93,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_rf_wen));
    tracep->fullBit(oldp+94,(vlSelf->TOP__DOT__MEM_WB__DOT__writeOp_csr_wen));
    tracep->fullQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+103,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+105,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+107,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+109,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+111,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+113,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+115,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+117,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+119,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+121,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+123,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+125,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+127,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+129,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+131,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+133,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+135,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+137,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+139,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+141,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+143,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+145,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+147,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+149,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+151,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+153,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+155,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullQData(oldp+157,(vlSelf->TOP__DOT__Csr__DOT__mcause),64);
    tracep->fullQData(oldp+159,(vlSelf->TOP__DOT__Csr__DOT__mstatus),64);
    tracep->fullCData(oldp+161,(((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                  ? 3U : 0U)),5);
    tracep->fullCData(oldp+162,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                  ? 3U : 0U)),5);
    tracep->fullBit(oldp+163,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 1U))));
    tracep->fullBit(oldp+164,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 1U))));
    tracep->fullBit(oldp+165,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 2U))));
    tracep->fullBit(oldp+166,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 2U))));
    tracep->fullBit(oldp+167,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 3U))));
    tracep->fullBit(oldp+168,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 3U))));
    tracep->fullBit(oldp+169,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_stall_req_o)
                                       ? 3U : 0U) >> 4U))));
    tracep->fullBit(oldp+170,((1U & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_branchOp_happen)
                                       ? 3U : 0U) >> 4U))));
    tracep->fullQData(oldp+171,(vlSelf->TOP__DOT__ID__DOT__rs1Val),64);
    tracep->fullQData(oldp+173,(vlSelf->TOP__DOT__ID__DOT__rs2Val),64);
    tracep->fullQData(oldp+175,(vlSelf->TOP__DOT__ID__DOT__csrVal),64);
    tracep->fullCData(oldp+177,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+178,((0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst)),7);
    tracep->fullCData(oldp+179,((7U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                       >> 0xcU))),3);
    tracep->fullBit(oldp+180,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF_ID__DOT__inst))));
    tracep->fullQData(oldp+181,(vlSelf->TOP__DOT__ID__DOT__rsVal),64);
    tracep->fullCData(oldp+183,((3U & (vlSelf->TOP__DOT__IF_ID__DOT__inst 
                                       >> 0x14U))),2);
    tracep->fullIData(oldp+184,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullIData(oldp+185,((0xfffffU & (IData)(
                                                    (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullBit(oldp+186,(((0x80000000ULL <= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr) 
                               & (0x87ffffffULL >= vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))));
    tracep->fullIData(oldp+187,((0xfffffU & ((IData)(1U) 
                                             + (IData)(
                                                       ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                         - 0x80000000ULL) 
                                                        >> 2U))))),20);
    tracep->fullIData(oldp+188,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & ((IData)(1U) 
                                              + (IData)(
                                                        ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                          - 0x80000000ULL) 
                                                         >> 2U))))]),32);
    tracep->fullIData(oldp+189,((0xfffffU & (IData)(
                                                    ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))),20);
    tracep->fullIData(oldp+190,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                [(0xfffffU & (IData)(
                                                     ((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                                       - 0x80000000ULL) 
                                                      >> 2U)))]),32);
    tracep->fullIData(oldp+191,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_62 
                                         >> 0x20U))),32);
    tracep->fullBit(oldp+192,(((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
    tracep->fullIData(oldp+193,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_62)),32);
    tracep->fullBit(oldp+194,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_load))));
    tracep->fullBit(oldp+195,(((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
                               & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store))));
    tracep->fullQData(oldp+196,(vlSelf->TOP__DOT__Main_Memory__DOT__MMIO_RW_rdata),64);
    tracep->fullQData(oldp+198,(((vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr 
                                  - 0x80000000ULL) 
                                 >> 2U)),62);
    tracep->fullQData(oldp+200,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
    tracep->fullCData(oldp+202,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_addr))),2);
    tracep->fullQData(oldp+203,(((8U == (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))
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
    tracep->fullWData(oldp+205,(__Vtemp_h1320bab3__0),95);
    tracep->fullCData(oldp+208,((3U & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length) 
                                       >> 2U))),2);
    tracep->fullCData(oldp+209,((3U & (IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_length))),2);
    tracep->fullCData(oldp+210,(vlSelf->TOP__DOT__Main_Memory__DOT__store_en),8);
    tracep->fullCData(oldp+211,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+212,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+213,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+214,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+215,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+216,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+217,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullCData(oldp+218,((0xffU & ((IData)(vlSelf->TOP__DOT__EX_MEM__DOT__memOp_is_store)
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
    tracep->fullQData(oldp+219,((((QData)((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__Main_Memory__DOT___GEN_151[0U])))),64);
    tracep->fullBit(oldp+221,(vlSelf->clock));
    tracep->fullBit(oldp+222,(vlSelf->reset));
    tracep->fullQData(oldp+223,(vlSelf->io_timer_i),64);
    tracep->fullQData(oldp+225,(vlSelf->io_csrData_csrVal),64);
    tracep->fullQData(oldp+227,(vlSelf->io_csrData_epc),64);
    tracep->fullQData(oldp+229,(vlSelf->io_csrData_tvec),64);
    tracep->fullQData(oldp+231,(vlSelf->io_csrData_cause),64);
    tracep->fullQData(oldp+233,(vlSelf->io_csrData_status),64);
    tracep->fullQData(oldp+235,(vlSelf->io_regs_0),64);
    tracep->fullQData(oldp+237,(vlSelf->io_regs_1),64);
    tracep->fullQData(oldp+239,(vlSelf->io_regs_2),64);
    tracep->fullQData(oldp+241,(vlSelf->io_regs_3),64);
    tracep->fullQData(oldp+243,(vlSelf->io_regs_4),64);
    tracep->fullQData(oldp+245,(vlSelf->io_regs_5),64);
    tracep->fullQData(oldp+247,(vlSelf->io_regs_6),64);
    tracep->fullQData(oldp+249,(vlSelf->io_regs_7),64);
    tracep->fullQData(oldp+251,(vlSelf->io_regs_8),64);
    tracep->fullQData(oldp+253,(vlSelf->io_regs_9),64);
    tracep->fullQData(oldp+255,(vlSelf->io_regs_10),64);
    tracep->fullQData(oldp+257,(vlSelf->io_regs_11),64);
    tracep->fullQData(oldp+259,(vlSelf->io_regs_12),64);
    tracep->fullQData(oldp+261,(vlSelf->io_regs_13),64);
    tracep->fullQData(oldp+263,(vlSelf->io_regs_14),64);
    tracep->fullQData(oldp+265,(vlSelf->io_regs_15),64);
    tracep->fullQData(oldp+267,(vlSelf->io_regs_16),64);
    tracep->fullQData(oldp+269,(vlSelf->io_regs_17),64);
    tracep->fullQData(oldp+271,(vlSelf->io_regs_18),64);
    tracep->fullQData(oldp+273,(vlSelf->io_regs_19),64);
    tracep->fullQData(oldp+275,(vlSelf->io_regs_20),64);
    tracep->fullQData(oldp+277,(vlSelf->io_regs_21),64);
    tracep->fullQData(oldp+279,(vlSelf->io_regs_22),64);
    tracep->fullQData(oldp+281,(vlSelf->io_regs_23),64);
    tracep->fullQData(oldp+283,(vlSelf->io_regs_24),64);
    tracep->fullQData(oldp+285,(vlSelf->io_regs_25),64);
    tracep->fullQData(oldp+287,(vlSelf->io_regs_26),64);
    tracep->fullQData(oldp+289,(vlSelf->io_regs_27),64);
    tracep->fullQData(oldp+291,(vlSelf->io_regs_28),64);
    tracep->fullQData(oldp+293,(vlSelf->io_regs_29),64);
    tracep->fullQData(oldp+295,(vlSelf->io_regs_30),64);
    tracep->fullQData(oldp+297,(vlSelf->io_regs_31),64);
    tracep->fullQData(oldp+299,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+301,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+302,(vlSelf->io_o1),64);
    tracep->fullQData(oldp+304,(vlSelf->io_o2),64);
    tracep->fullQData(oldp+306,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+308,(vlSelf->io_src2),64);
    tracep->fullBit(oldp+310,(1U));
    tracep->fullIData(oldp+311,(vlSelf->TOP__DOT__Main_Memory__DOT__initvar),32);
}

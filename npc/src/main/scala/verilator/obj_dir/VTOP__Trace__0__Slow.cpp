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
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declQuad(c+147,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+149,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+150,"io_o", false,-1, 63,0);
    tracep->declQuad(c+152,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+154,"io_src2", false,-1, 63,0);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declQuad(c+147,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+149,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+150,"io_o", false,-1, 63,0);
    tracep->declQuad(c+152,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+154,"io_src2", false,-1, 63,0);
    tracep->declBit(c+145,"IF_clock", false,-1);
    tracep->declBit(c+146,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+145,"ID_clock", false,-1);
    tracep->declBit(c+146,"ID_reset", false,-1);
    tracep->declBus(c+4,"ID_io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"ID_io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_regVal_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_regVal_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"ID_io_regVal_i_a0", false,-1, 63,0);
    tracep->declBus(c+13,"ID_io_readRfOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"ID_io_readRfOp_o_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"ID_io_decInfo_o_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"ID_io_decInfo_o_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"ID_io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"ID_io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"ID_io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"ID_io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"ID_io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBus(c+24,"ID_io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"ID_io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+27,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+15,"EX_io_decInfo_i_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"EX_io_decInfo_i_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"EX_io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"EX_io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"EX_io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBus(c+24,"EX_io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"EX_io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"EX_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"EX_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+28,"EX_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"EX_io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_memOp_o_isStore", false,-1);
    tracep->declBus(c+24,"EX_io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+28,"EX_io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"EX_io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+27,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+27,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+145,"MEM_clock", false,-1);
    tracep->declBit(c+146,"MEM_reset", false,-1);
    tracep->declBit(c+15,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+28,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"MEM_io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"MEM_io_memOp_i_isStore", false,-1);
    tracep->declBus(c+24,"MEM_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+28,"MEM_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"MEM_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+30,"MEM_io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+15,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+27,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+145,"WB_clock", false,-1);
    tracep->declBit(c+146,"WB_reset", false,-1);
    tracep->declBit(c+15,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+11,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+145,"Regfile_clock", false,-1);
    tracep->declBit(c+146,"Regfile_reset", false,-1);
    tracep->declBus(c+13,"Regfile_io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"Regfile_io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"Regfile_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"Regfile_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"Regfile_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_readRes_o_a0", false,-1, 63,0);
    tracep->declBit(c+145,"Main_Memory_clock", false,-1);
    tracep->declBit(c+146,"Main_Memory_reset", false,-1);
    tracep->declQuad(c+5,"Main_Memory_io_pc_i", false,-1, 63,0);
    tracep->declBit(c+22,"Main_Memory_io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"Main_Memory_io_memOp_i_isStore", false,-1);
    tracep->declBus(c+24,"Main_Memory_io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+28,"Main_Memory_io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"Main_Memory_io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"Main_Memory_io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+30,"Main_Memory_io_loadVal_o", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+15,"io_decInfo_i_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_i_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_i_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_i_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_i_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"io_decInfo_i_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_i_memOp_isStore", false,-1);
    tracep->declBus(c+24,"io_decInfo_i_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"io_decInfo_i_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+28,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_o_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_o_isStore", false,-1);
    tracep->declBus(c+24,"io_memOp_o_length", false,-1, 1,0);
    tracep->declQuad(c+28,"io_memOp_o_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"io_memOp_o_sdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->declArray(c+34,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regVal_i_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regVal_i_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regVal_i_a0", false,-1, 63,0);
    tracep->declBus(c+13,"io_readRfOp_o_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_o_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_decInfo_o_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_o_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_o_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_o_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_o_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"io_decInfo_o_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_decInfo_o_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"io_decInfo_o_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_o_memOp_isStore", false,-1);
    tracep->declBus(c+24,"io_decInfo_o_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"io_decInfo_o_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+38,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"fct3", false,-1, 2,0);
    tracep->declQuad(c+41,"immI", false,-1, 63,0);
    tracep->declBit(c+43,"is_jalr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_i_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_i_newPC", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_i", false,-1, 31,0);
    tracep->declQuad(c+5,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declBus(c+44,"pc", false,-1, 31,0);
    tracep->declQuad(c+45,"nextPC", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+28,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_i_isStore", false,-1);
    tracep->declBus(c+24,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+28,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declQuad(c+30,"io_loadVal_i", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+27,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_o_inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Main_Memory ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declQuad(c+5,"io_pc_i", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_i_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_i_isStore", false,-1);
    tracep->declBus(c+24,"io_memOp_i_length", false,-1, 1,0);
    tracep->declQuad(c+28,"io_memOp_i_addr", false,-1, 63,0);
    tracep->declQuad(c+25,"io_memOp_i_sdata", false,-1, 63,0);
    tracep->declBus(c+4,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+30,"io_loadVal_o", false,-1, 63,0);
    tracep->declBit(c+156,"ram_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+47,"ram_io_inst_o_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+4,"ram_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+156,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+48,"ram_dword_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+49,"ram_dword_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+156,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+50,"ram_dword_MPORT_1_addr", false,-1, 19,0);
    tracep->declBus(c+51,"ram_dword_MPORT_1_data", false,-1, 31,0);
    tracep->declBit(c+156,"ram_test0_MPORT_en", false,-1);
    tracep->declBus(c+157,"ram_test0_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+52,"ram_test0_MPORT_data", false,-1, 31,0);
    tracep->declBit(c+156,"ram_test1_MPORT_en", false,-1);
    tracep->declBus(c+158,"ram_test1_MPORT_addr", false,-1, 19,0);
    tracep->declBus(c+53,"ram_test1_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+54,"ram_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+48,"ram_MPORT_addr", false,-1, 19,0);
    tracep->declBit(c+156,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+23,"ram_MPORT_en", false,-1);
    tracep->declBus(c+55,"ram_MPORT_1_data", false,-1, 31,0);
    tracep->declBus(c+50,"ram_MPORT_1_addr", false,-1, 19,0);
    tracep->declBit(c+156,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+23,"ram_MPORT_1_en", false,-1);
    tracep->declQuad(c+56,"addr", false,-1, 61,0);
    tracep->declQuad(c+58,"dword", false,-1, 63,0);
    tracep->declBus(c+60,"offset", false,-1, 1,0);
    tracep->declQuad(c+61,"loadMask", false,-1, 63,0);
    tracep->declArray(c+63,"mask", false,-1, 94,0);
    tracep->declArray(c+66,"loadVal_temp", false,-1, 94,0);
    tracep->declArray(c+69,"loadVal", false,-1, 94,0);
    tracep->declBus(c+72,"store_en", false,-1, 7,0);
    tracep->declBus(c+73,"temp_1", false,-1, 7,0);
    tracep->declBus(c+74,"temp_0", false,-1, 7,0);
    tracep->declBus(c+75,"temp_3", false,-1, 7,0);
    tracep->declBus(c+76,"temp_2", false,-1, 7,0);
    tracep->declBus(c+77,"temp_5", false,-1, 7,0);
    tracep->declBus(c+78,"temp_4", false,-1, 7,0);
    tracep->declBus(c+79,"temp_7", false,-1, 7,0);
    tracep->declBus(c+80,"temp_6", false,-1, 7,0);
    tracep->declBus(c+52,"test0", false,-1, 31,0);
    tracep->declBus(c+53,"test1", false,-1, 31,0);
    tracep->declBus(c+159,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBus(c+13,"io_readRfOp_i_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_i_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_o_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_o_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_readRes_o_a0", false,-1, 63,0);
    tracep->declQuad(c+81,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+83,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+85,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+87,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+89,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+91,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+93,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+95,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+97,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+99,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+101,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+103,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+105,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+107,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+109,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+111,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+113,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+115,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+117,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+119,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+121,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+123,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+125,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+127,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+129,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+131,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+133,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+135,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+137,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+139,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+141,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+145,"clock", false,-1);
    tracep->declBit(c+146,"reset", false,-1);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+27,"io_debug_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+5,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+4,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+27,"DEBUG_exit", false,-1);
    tracep->declQuad(c+5,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+4,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+11,"DEBUG_a0", false,-1, 63,0);
    tracep->declQuad(c+143,"foo", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+27,"exit", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp_h45329c4b__0;
    VlWide<3>/*95:0*/ __Vtemp_he39eabc1__0;
    VlWide<3>/*95:0*/ __Vtemp_h0f6e9438__0;
    VlWide<3>/*95:0*/ __Vtemp_h10b05922__0;
    VlWide<3>/*95:0*/ __Vtemp_h45329c4b__1;
    VlWide<3>/*95:0*/ __Vtemp_h657847ab__0;
    // Body
    tracep->fullBit(oldp+1,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                             & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                 ? (0x67U == (0x7fU 
                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                 : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                    & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                        ? ((7U == (7U 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0xcU)))
                                            ? (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1)
                                            : ((6U 
                                                == 
                                                (7U 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xcU)))
                                                ? (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1)
                                                : (
                                                   (5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
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
                                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1))))))))
                                        : ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))));
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
                                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                              >> 0x14U))))) 
                                                       << 0xcU) 
                                                      | (QData)((IData)(
                                                                        ((0x800U 
                                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 0x14U)))))))
                                                     : 0ULL))))))),64);
    tracep->fullIData(oldp+4,(vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data),32);
    tracep->fullQData(oldp+5,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val),64);
    tracep->fullQData(oldp+11,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+14,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+15,(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen));
    tracep->fullCData(oldp+16,((0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 7U))),5);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1),64);
    tracep->fullQData(oldp+19,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
    tracep->fullCData(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt),5);
    tracep->fullBit(oldp+22,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore));
    tracep->fullCData(oldp+24,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
    tracep->fullQData(oldp+25,(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata),64);
    tracep->fullBit(oldp+27,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                               : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
    tracep->fullQData(oldp+28,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    VL_EXTEND_WQ(95,64, __Vtemp_h45329c4b__0, ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))))));
    tracep->fullQData(oldp+30,((((QData)((IData)(((3U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                   ? 
                                                  vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U]
                                                   : 
                                                  __Vtemp_h45329c4b__0[1U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                               ? 
                                                              vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]
                                                               : 
                                                              __Vtemp_h45329c4b__0[0U]))))),64);
    tracep->fullQData(oldp+32,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
    tracep->fullWData(oldp+34,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+38,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+39,((0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)),7);
    tracep->fullCData(oldp+40,((7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                      >> 0xcU))),3);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__ID__DOT__immI),64);
    tracep->fullBit(oldp+43,((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))));
    tracep->fullIData(oldp+44,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullQData(oldp+45,((((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                     ? (0x67U == (0x7fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                     : ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                            ? ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xcU)))
                                                ? (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1)
                                                : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    VL_GTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
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
                                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_happen_T_1))))))))
                                            : ((2U 
                                                != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                               & (4U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))
                                 ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                     ? 0ULL : ((1U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   + vlSelf->TOP__DOT__ID__DOT__immI)
                                                : (
                                                   (0U 
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
                                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x14U))))) 
                                                         << 0xcU) 
                                                        | (QData)((IData)(
                                                                          ((0x800U 
                                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 9U)) 
                                                                           | (0x7feU 
                                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x14U)))))))
                                                       : 0ULL))))))
                                 : (QData)((IData)(
                                                   ((IData)(4U) 
                                                    + vlSelf->TOP__DOT__IF__DOT__pc))))),64);
    tracep->fullIData(oldp+47,((0xfffffU & (IData)(
                                                   (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                     - 0x80000000ULL) 
                                                    >> 2U)))),20);
    tracep->fullIData(oldp+48,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (((((QData)((IData)(
                                                                          vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))) 
                                                        - 0x80000000ULL) 
                                                       >> 2U))))),20);
    tracep->fullIData(oldp+49,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                               [(0xfffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (((((QData)((IData)(
                                                                           vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))) 
                                                         - 0x80000000ULL) 
                                                        >> 2U))))]),32);
    tracep->fullIData(oldp+50,((0xfffffU & (IData)(
                                                   (((((QData)((IData)(
                                                                       vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))) 
                                                     - 0x80000000ULL) 
                                                    >> 2U)))),20);
    tracep->fullIData(oldp+51,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                               [(0xfffffU & (IData)(
                                                    (((((QData)((IData)(
                                                                        vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))) 
                                                      - 0x80000000ULL) 
                                                     >> 2U)))]),32);
    tracep->fullIData(oldp+52,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                               [0U]),32);
    tracep->fullIData(oldp+53,(vlSelf->TOP__DOT__Main_Memory__DOT__ram
                               [1U]),32);
    tracep->fullIData(oldp+54,((IData)((vlSelf->TOP__DOT__Main_Memory__DOT___T_29 
                                        >> 0x20U))),32);
    tracep->fullIData(oldp+55,((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_29)),32);
    tracep->fullQData(oldp+56,((((((QData)((IData)(
                                                   vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))) 
                                 - 0x80000000ULL) >> 2U)),62);
    tracep->fullQData(oldp+58,(vlSelf->TOP__DOT__Main_Memory__DOT__dword),64);
    tracep->fullCData(oldp+60,((3U & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])),2);
    tracep->fullQData(oldp+61,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
    VL_EXTEND_WQ(95,64, __Vtemp_he39eabc1__0, ((3U 
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
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h0f6e9438__0, __Vtemp_he39eabc1__0, 
                  (0x18U & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                            << 3U)));
    __Vtemp_h10b05922__0[0U] = __Vtemp_h0f6e9438__0[0U];
    __Vtemp_h10b05922__0[1U] = __Vtemp_h0f6e9438__0[1U];
    __Vtemp_h10b05922__0[2U] = (0x7fffffffU & __Vtemp_h0f6e9438__0[2U]);
    tracep->fullWData(oldp+63,(__Vtemp_h10b05922__0),95);
    tracep->fullWData(oldp+66,(vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp),95);
    VL_EXTEND_WQ(95,64, __Vtemp_h45329c4b__1, ((2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))
                                                : (
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 0xfU))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U]))))
                                                    : 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
                                                                            >> 7U))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U])))))));
    if ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))) {
        __Vtemp_h657847ab__0[0U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
        __Vtemp_h657847ab__0[1U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
        __Vtemp_h657847ab__0[2U] = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
    } else {
        __Vtemp_h657847ab__0[0U] = __Vtemp_h45329c4b__1[0U];
        __Vtemp_h657847ab__0[1U] = __Vtemp_h45329c4b__1[1U];
        __Vtemp_h657847ab__0[2U] = __Vtemp_h45329c4b__1[2U];
    }
    tracep->fullWData(oldp+69,(__Vtemp_h657847ab__0),95);
    tracep->fullCData(oldp+72,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                 ? 0xffU : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_2))),8);
    tracep->fullCData(oldp+73,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 8U))))),8);
    tracep->fullCData(oldp+74,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((0U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108))
                                          : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))),8);
    tracep->fullCData(oldp+75,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x18U))))),8);
    tracep->fullCData(oldp+76,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((2U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x10U))))),8);
    tracep->fullCData(oldp+77,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x28U))))),8);
    tracep->fullCData(oldp+78,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x20U))))),8);
    tracep->fullCData(oldp+79,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x38U))))),8);
    tracep->fullCData(oldp+80,((0xffU & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                          ? ((0x80U 
                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___store_en_lut_io_memOp_i_length))
                                              ? ((6U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(7U) 
                                                      + 
                                                      (3U 
                                                       & vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))))
                                                  ? (IData)(
                                                            (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                                             >> 0x38U))
                                                  : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                              : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114))
                                          : (IData)(
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                                     >> 0x30U))))),8);
    tracep->fullQData(oldp+81,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+83,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+85,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+87,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+89,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+91,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+93,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+95,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+97,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+99,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+101,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+103,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+105,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+107,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+109,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+111,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+113,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+115,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+117,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+119,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+121,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+123,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+125,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+127,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+129,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+131,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+133,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+135,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+137,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+139,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+141,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullQData(oldp+143,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeRfOp_wen)
                                  ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                                  : 0ULL)),64);
    tracep->fullBit(oldp+145,(vlSelf->clock));
    tracep->fullBit(oldp+146,(vlSelf->reset));
    tracep->fullQData(oldp+147,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+149,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+150,(vlSelf->io_o),64);
    tracep->fullQData(oldp+152,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+154,(vlSelf->io_src2),64);
    tracep->fullBit(oldp+156,(1U));
    tracep->fullIData(oldp+157,(0U),20);
    tracep->fullIData(oldp+158,(1U),20);
    tracep->fullIData(oldp+159,(vlSelf->TOP__DOT__Main_Memory__DOT__initvar),32);
}

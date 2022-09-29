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
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declQuad(c+152,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+154,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+155,"io_o", false,-1, 63,0);
    tracep->declQuad(c+157,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+159,"io_src2", false,-1, 63,0);
    tracep->declBus(c+161,"io_instType", false,-1, 4,0);
    tracep->declBit(c+162,"io_branch", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declQuad(c+152,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+154,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+155,"io_o", false,-1, 63,0);
    tracep->declQuad(c+157,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+159,"io_src2", false,-1, 63,0);
    tracep->declBus(c+161,"io_instType", false,-1, 4,0);
    tracep->declBit(c+162,"io_branch", false,-1);
    tracep->declBit(c+150,"IF_clock", false,-1);
    tracep->declBit(c+151,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+150,"ID_clock", false,-1);
    tracep->declBit(c+151,"ID_reset", false,-1);
    tracep->declBus(c+6,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"ID_io_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"ID_io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+13,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"ID_io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"ID_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"ID_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"ID_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"ID_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"ID_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"ID_io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"ID_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"ID_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+24,"ID_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+25,"ID_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"ID_io_decInfo_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+29,"ID_io_instType", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_branch", false,-1);
    tracep->declBit(c+15,"EX_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"EX_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"EX_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"EX_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"EX_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"EX_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+24,"EX_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+25,"EX_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"EX_io_decInfo_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+30,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"EX_io_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"EX_io_memOp_isStore", false,-1);
    tracep->declBit(c+24,"EX_io_memOp_sign", false,-1);
    tracep->declBus(c+25,"EX_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+30,"EX_io_memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"EX_io_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+150,"MEM_clock", false,-1);
    tracep->declBit(c+151,"MEM_reset", false,-1);
    tracep->declBit(c+15,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+30,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"MEM_io_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"MEM_io_memOp_isStore", false,-1);
    tracep->declBit(c+24,"MEM_io_memOp_sign", false,-1);
    tracep->declBus(c+25,"MEM_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+30,"MEM_io_memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"MEM_io_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+150,"WB_clock", false,-1);
    tracep->declBit(c+151,"WB_reset", false,-1);
    tracep->declBit(c+15,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+11,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+6,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+150,"Regfile_clock", false,-1);
    tracep->declBit(c+151,"Regfile_reset", false,-1);
    tracep->declBus(c+13,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"Regfile_io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_readRes_a0", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+15,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+22,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+25,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"io_decInfo_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+30,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_memOp_sign", false,-1);
    tracep->declBus(c+25,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+30,"io_memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    tracep->declArray(c+34,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declBus(c+6,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+13,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+17,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+19,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+21,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+22,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+25,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+26,"io_decInfo_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+29,"io_instType", false,-1, 4,0);
    tracep->declBit(c+1,"io_branch", false,-1);
    tracep->declBus(c+38,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+39,"opcode", false,-1, 6,0);
    tracep->declBus(c+40,"fct3", false,-1, 2,0);
    tracep->declQuad(c+41,"immI", false,-1, 63,0);
    tracep->declBit(c+43,"is_jalr", false,-1);
    tracep->declQuad(c+44,"immB", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"io_inst_o", false,-1, 31,0);
    tracep->declBit(c+163,"inst_rom_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+46,"inst_rom_io_inst_o_MPORT_addr", false,-1, 14,0);
    tracep->declBus(c+6,"inst_rom_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declQuad(c+48,"nextPC", false,-1, 63,0);
    tracep->declBus(c+164,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+30,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+22,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+23,"io_memOp_isStore", false,-1);
    tracep->declBit(c+24,"io_memOp_sign", false,-1);
    tracep->declBus(c+25,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+30,"io_memOp_addr", false,-1, 63,0);
    tracep->declQuad(c+26,"io_memOp_sdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+28,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+163,"ram_dword_MPORT_en", false,-1);
    tracep->declBus(c+50,"ram_dword_MPORT_addr", false,-1, 6,0);
    tracep->declBus(c+51,"ram_dword_MPORT_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+52,"ram_dword_MPORT_1_addr", false,-1, 6,0);
    tracep->declBus(c+53,"ram_dword_MPORT_1_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_2_en", false,-1);
    tracep->declBus(c+54,"ram_dword_MPORT_2_addr", false,-1, 6,0);
    tracep->declBus(c+55,"ram_dword_MPORT_2_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_3_en", false,-1);
    tracep->declBus(c+56,"ram_dword_MPORT_3_addr", false,-1, 6,0);
    tracep->declBus(c+57,"ram_dword_MPORT_3_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_4_en", false,-1);
    tracep->declBus(c+58,"ram_dword_MPORT_4_addr", false,-1, 6,0);
    tracep->declBus(c+59,"ram_dword_MPORT_4_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_5_en", false,-1);
    tracep->declBus(c+60,"ram_dword_MPORT_5_addr", false,-1, 6,0);
    tracep->declBus(c+61,"ram_dword_MPORT_5_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_6_en", false,-1);
    tracep->declBus(c+62,"ram_dword_MPORT_6_addr", false,-1, 6,0);
    tracep->declBus(c+63,"ram_dword_MPORT_6_data", false,-1, 7,0);
    tracep->declBit(c+163,"ram_dword_MPORT_7_en", false,-1);
    tracep->declBus(c+64,"ram_dword_MPORT_7_addr", false,-1, 6,0);
    tracep->declBus(c+65,"ram_dword_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+64,"ram_MPORT_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_mask", false,-1);
    tracep->declBit(c+67,"ram_MPORT_en", false,-1);
    tracep->declBus(c+66,"ram_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+64,"ram_MPORT_1_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_1_mask", false,-1);
    tracep->declBit(c+68,"ram_MPORT_1_en", false,-1);
    tracep->declBus(c+69,"ram_MPORT_2_data", false,-1, 7,0);
    tracep->declBus(c+62,"ram_MPORT_2_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_2_mask", false,-1);
    tracep->declBit(c+68,"ram_MPORT_2_en", false,-1);
    tracep->declBus(c+66,"ram_MPORT_3_data", false,-1, 7,0);
    tracep->declBus(c+64,"ram_MPORT_3_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_3_mask", false,-1);
    tracep->declBit(c+70,"ram_MPORT_3_en", false,-1);
    tracep->declBus(c+69,"ram_MPORT_4_data", false,-1, 7,0);
    tracep->declBus(c+62,"ram_MPORT_4_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_4_mask", false,-1);
    tracep->declBit(c+70,"ram_MPORT_4_en", false,-1);
    tracep->declBus(c+71,"ram_MPORT_5_data", false,-1, 7,0);
    tracep->declBus(c+60,"ram_MPORT_5_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_5_mask", false,-1);
    tracep->declBit(c+70,"ram_MPORT_5_en", false,-1);
    tracep->declBus(c+72,"ram_MPORT_6_data", false,-1, 7,0);
    tracep->declBus(c+58,"ram_MPORT_6_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_6_mask", false,-1);
    tracep->declBit(c+70,"ram_MPORT_6_en", false,-1);
    tracep->declBus(c+66,"ram_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+64,"ram_MPORT_7_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_7_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_7_en", false,-1);
    tracep->declBus(c+69,"ram_MPORT_8_data", false,-1, 7,0);
    tracep->declBus(c+62,"ram_MPORT_8_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_8_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_8_en", false,-1);
    tracep->declBus(c+71,"ram_MPORT_9_data", false,-1, 7,0);
    tracep->declBus(c+60,"ram_MPORT_9_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_9_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_9_en", false,-1);
    tracep->declBus(c+72,"ram_MPORT_10_data", false,-1, 7,0);
    tracep->declBus(c+58,"ram_MPORT_10_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_10_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_10_en", false,-1);
    tracep->declBus(c+74,"ram_MPORT_11_data", false,-1, 7,0);
    tracep->declBus(c+56,"ram_MPORT_11_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_11_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_11_en", false,-1);
    tracep->declBus(c+75,"ram_MPORT_12_data", false,-1, 7,0);
    tracep->declBus(c+54,"ram_MPORT_12_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_12_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_12_en", false,-1);
    tracep->declBus(c+76,"ram_MPORT_13_data", false,-1, 7,0);
    tracep->declBus(c+52,"ram_MPORT_13_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_13_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_13_en", false,-1);
    tracep->declBus(c+77,"ram_MPORT_14_data", false,-1, 7,0);
    tracep->declBus(c+50,"ram_MPORT_14_addr", false,-1, 6,0);
    tracep->declBit(c+163,"ram_MPORT_14_mask", false,-1);
    tracep->declBit(c+73,"ram_MPORT_14_en", false,-1);
    tracep->declQuad(c+78,"readMask", false,-1, 63,0);
    tracep->declQuad(c+80,"dword", false,-1, 63,0);
    tracep->declQuad(c+82,"loadval", false,-1, 63,0);
    tracep->declQuad(c+84,"loadVal", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declBus(c+13,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_readRes_a0", false,-1, 63,0);
    tracep->declQuad(c+86,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+88,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+90,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+92,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+94,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+96,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+98,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+100,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+102,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+104,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+106,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+108,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+110,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+112,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+114,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+116,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+118,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+120,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+122,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+124,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+126,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+128,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+130,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+132,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+134,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+136,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+138,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+140,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+142,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+144,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+146,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+150,"clock", false,-1);
    tracep->declBit(c+151,"reset", false,-1);
    tracep->declBit(c+15,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+15,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+28,"io_debug_exit", false,-1);
    tracep->declQuad(c+11,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+28,"DEBUG_exit", false,-1);
    tracep->declQuad(c+4,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+6,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+11,"DEBUG_a0", false,-1, 63,0);
    tracep->declQuad(c+148,"foo", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+28,"exit", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declQuad(c+11,"a0", false,-1, 63,0);
    tracep->declBus(c+6,"inst", false,-1, 31,0);
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
    tracep->fullBit(oldp+1,(vlSelf->TOP__DOT__ID_io_decInfo_branchOp_happen));
    tracep->fullQData(oldp+2,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
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
    tracep->fullQData(oldp+4,((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))),64);
    tracep->fullIData(oldp+6,(vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data),32);
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
    tracep->fullQData(oldp+11,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+14,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 0x14U))),5);
    tracep->fullBit(oldp+15,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
    tracep->fullCData(oldp+16,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 7U))),5);
    tracep->fullQData(oldp+17,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
    tracep->fullQData(oldp+19,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_63[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_63[0U])))),64);
    tracep->fullCData(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
    tracep->fullBit(oldp+22,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
    tracep->fullBit(oldp+24,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
    tracep->fullCData(oldp+25,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67))),2);
    tracep->fullQData(oldp+26,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata),64);
    tracep->fullBit(oldp+28,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                               ? (0xffffffffU == vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)
                               : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                           & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((5U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & (6U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))))));
    tracep->fullCData(oldp+29,(((0x33U == (0xfe00707fU 
                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                 ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
    tracep->fullQData(oldp+30,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    tracep->fullQData(oldp+32,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
    tracep->fullWData(oldp+34,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+38,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+39,((0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)),7);
    tracep->fullCData(oldp+40,((7U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                      >> 0xcU))),3);
    tracep->fullQData(oldp+41,(vlSelf->TOP__DOT__ID__DOT__immI),64);
    tracep->fullBit(oldp+43,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))));
    tracep->fullQData(oldp+44,((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                        >> 0xbU))))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11)))))),64);
    tracep->fullSData(oldp+46,((0x7fffU & (vlSelf->TOP__DOT__IF__DOT__pc 
                                           >> 2U))),15);
    tracep->fullIData(oldp+47,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullQData(oldp+48,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_branchOp_happen)
                                 ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                     ? 0ULL : ((1U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
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
    tracep->fullCData(oldp+50,((0x7fU & ((IData)(7U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+51,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(7U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+52,((0x7fU & ((IData)(6U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+53,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(6U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+54,((0x7fU & ((IData)(5U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+55,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(5U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+56,((0x7fU & ((IData)(4U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+57,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(4U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+58,((0x7fU & ((IData)(3U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+59,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(3U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+60,((0x7fU & ((IData)(2U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+61,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(2U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+62,((0x7fU & ((IData)(1U) 
                                         + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))),7);
    tracep->fullCData(oldp+63,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & ((IData)(1U) 
                                          + vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]),8);
    tracep->fullCData(oldp+64,((0x7fU & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])),7);
    tracep->fullCData(oldp+65,(vlSelf->TOP__DOT__MEM__DOT__ram
                               [(0x7fU & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])]),8);
    tracep->fullCData(oldp+66,((0xffU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata))),8);
    tracep->fullBit(oldp+67,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                              & (0U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67))))));
    tracep->fullBit(oldp+68,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                              & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_93))));
    tracep->fullCData(oldp+69,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 8U)))),8);
    tracep->fullBit(oldp+70,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                              & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_100))));
    tracep->fullCData(oldp+71,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x10U)))),8);
    tracep->fullCData(oldp+72,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x18U)))),8);
    tracep->fullBit(oldp+73,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore) 
                              & (IData)(vlSelf->TOP__DOT__MEM__DOT___GEN_111))));
    tracep->fullCData(oldp+74,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x20U)))),8);
    tracep->fullCData(oldp+75,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x28U)))),8);
    tracep->fullCData(oldp+76,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x30U)))),8);
    tracep->fullCData(oldp+77,((0xffU & (IData)((vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                 >> 0x38U)))),8);
    tracep->fullQData(oldp+78,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                 ? 0xffffffffffffffffULL
                                 : (QData)((IData)(
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                                     ? 0xffffffffU
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                                      ? 0xffffU
                                                      : 0xffU)))))),64);
    tracep->fullQData(oldp+80,((((QData)((IData)(((
                                                   vlSelf->TOP__DOT__MEM__DOT__ram
                                                   [
                                                   (0x7fU 
                                                    & ((IData)(7U) 
                                                       + 
                                                       vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                   << 0x18U) 
                                                  | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                      [
                                                      (0x7fU 
                                                       & ((IData)(6U) 
                                                          + 
                                                          vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                      << 0x10U) 
                                                     | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                         [
                                                         (0x7fU 
                                                          & ((IData)(5U) 
                                                             + 
                                                             vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                         << 8U) 
                                                        | vlSelf->TOP__DOT__MEM__DOT__ram
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(4U) 
                                                            + 
                                                            vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))]))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                               [
                                                               (0x7fU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                                  [
                                                                  (0x7fU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TOP__DOT__MEM__DOT__ram
                                                                     [
                                                                     (0x7fU 
                                                                      & ((IData)(1U) 
                                                                         + 
                                                                         vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))] 
                                                                     << 8U) 
                                                                    | vlSelf->TOP__DOT__MEM__DOT__ram
                                                                    [
                                                                    (0x7fU 
                                                                     & vlSelf->TOP__DOT__EX__DOT__aluRes[0U])]))))))),64);
    tracep->fullQData(oldp+82,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
    tracep->fullQData(oldp+84,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                 ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                 : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
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
                                     : ((1U == (3U 
                                                & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_67)))
                                         ? ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                             ? (((- (QData)((IData)(
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
                                             ? (((- (QData)((IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                             : vlSelf->TOP__DOT__MEM__DOT__loadval))))),64);
    tracep->fullQData(oldp+86,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+88,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+90,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+92,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+94,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+96,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+98,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+100,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+102,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+104,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+106,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+108,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+110,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+112,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+114,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+116,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+118,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+120,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+122,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+124,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+126,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+128,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+130,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+132,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+134,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+136,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+138,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+140,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+142,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+144,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+146,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullQData(oldp+148,(((IData)(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen)
                                  ? vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata
                                  : 0ULL)),64);
    tracep->fullBit(oldp+150,(vlSelf->clock));
    tracep->fullBit(oldp+151,(vlSelf->reset));
    tracep->fullQData(oldp+152,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+154,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+155,(vlSelf->io_o),64);
    tracep->fullQData(oldp+157,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+159,(vlSelf->io_src2),64);
    tracep->fullCData(oldp+161,(vlSelf->io_instType),5);
    tracep->fullBit(oldp+162,(vlSelf->io_branch));
    tracep->fullBit(oldp+163,(1U));
    tracep->fullIData(oldp+164,(vlSelf->TOP__DOT__IF__DOT__initvar),32);
}

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
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declQuad(c+264,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+266,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+267,"io_o", false,-1, 63,0);
    tracep->declQuad(c+269,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+271,"io_src2", false,-1, 63,0);
    tracep->declBus(c+273,"io_instType", false,-1, 4,0);
    tracep->declBit(c+274,"io_branch", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declQuad(c+264,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+266,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+267,"io_o", false,-1, 63,0);
    tracep->declQuad(c+269,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+271,"io_src2", false,-1, 63,0);
    tracep->declBus(c+273,"io_instType", false,-1, 4,0);
    tracep->declBit(c+274,"io_branch", false,-1);
    tracep->declBit(c+262,"IF_clock", false,-1);
    tracep->declBit(c+263,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+262,"ID_clock", false,-1);
    tracep->declBit(c+263,"ID_reset", false,-1);
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
    tracep->declBit(c+262,"EX_clock", false,-1);
    tracep->declBit(c+263,"EX_reset", false,-1);
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
    tracep->declBit(c+262,"MEM_clock", false,-1);
    tracep->declBit(c+263,"MEM_reset", false,-1);
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
    tracep->declBit(c+262,"WB_clock", false,-1);
    tracep->declBit(c+263,"WB_reset", false,-1);
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
    tracep->declBit(c+262,"Regfile_clock", false,-1);
    tracep->declBit(c+263,"Regfile_reset", false,-1);
    tracep->declBus(c+13,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"Regfile_io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"Regfile_io_readRes_a0", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
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
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
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
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"io_inst_o", false,-1, 31,0);
    tracep->declBit(c+275,"inst_rom_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+46,"inst_rom_io_inst_o_MPORT_addr", false,-1, 14,0);
    tracep->declBus(c+6,"inst_rom_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+47,"pc", false,-1, 31,0);
    tracep->declQuad(c+48,"nextPC", false,-1, 63,0);
    tracep->declBus(c+276,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
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
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+50+i*1,"ram1", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram1_dword_MPORT_en", false,-1);
    tracep->declBus(c+66,"ram1_dword_MPORT_addr", false,-1, 3,0);
    tracep->declBus(c+67,"ram1_dword_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram1_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram1_MPORT_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram1_MPORT_mask", false,-1);
    tracep->declBit(c+23,"ram1_MPORT_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+69+i*1,"ram2", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram2_dword_MPORT_1_en", false,-1);
    tracep->declBus(c+66,"ram2_dword_MPORT_1_addr", false,-1, 3,0);
    tracep->declBus(c+85,"ram2_dword_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram2_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram2_MPORT_1_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram2_MPORT_1_mask", false,-1);
    tracep->declBit(c+23,"ram2_MPORT_1_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+86+i*1,"ram3", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram3_dword_MPORT_2_en", false,-1);
    tracep->declBus(c+66,"ram3_dword_MPORT_2_addr", false,-1, 3,0);
    tracep->declBus(c+102,"ram3_dword_MPORT_2_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram3_MPORT_2_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram3_MPORT_2_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram3_MPORT_2_mask", false,-1);
    tracep->declBit(c+23,"ram3_MPORT_2_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+103+i*1,"ram4", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram4_dword_MPORT_3_en", false,-1);
    tracep->declBus(c+66,"ram4_dword_MPORT_3_addr", false,-1, 3,0);
    tracep->declBus(c+119,"ram4_dword_MPORT_3_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram4_MPORT_3_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram4_MPORT_3_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram4_MPORT_3_mask", false,-1);
    tracep->declBit(c+23,"ram4_MPORT_3_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+120+i*1,"ram5", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram5_dword_MPORT_4_en", false,-1);
    tracep->declBus(c+66,"ram5_dword_MPORT_4_addr", false,-1, 3,0);
    tracep->declBus(c+136,"ram5_dword_MPORT_4_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram5_MPORT_4_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram5_MPORT_4_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram5_MPORT_4_mask", false,-1);
    tracep->declBit(c+23,"ram5_MPORT_4_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+137+i*1,"ram6", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram6_dword_MPORT_5_en", false,-1);
    tracep->declBus(c+66,"ram6_dword_MPORT_5_addr", false,-1, 3,0);
    tracep->declBus(c+153,"ram6_dword_MPORT_5_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram6_MPORT_5_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram6_MPORT_5_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram6_MPORT_5_mask", false,-1);
    tracep->declBit(c+23,"ram6_MPORT_5_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+154+i*1,"ram7", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram7_dword_MPORT_6_en", false,-1);
    tracep->declBus(c+66,"ram7_dword_MPORT_6_addr", false,-1, 3,0);
    tracep->declBus(c+170,"ram7_dword_MPORT_6_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram7_MPORT_6_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram7_MPORT_6_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram7_MPORT_6_mask", false,-1);
    tracep->declBit(c+23,"ram7_MPORT_6_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+171+i*1,"ram8", true,(i+0), 7,0);
    }
    tracep->declBit(c+275,"ram8_dword_MPORT_7_en", false,-1);
    tracep->declBus(c+66,"ram8_dword_MPORT_7_addr", false,-1, 3,0);
    tracep->declBus(c+187,"ram8_dword_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+68,"ram8_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+66,"ram8_MPORT_7_addr", false,-1, 3,0);
    tracep->declBit(c+275,"ram8_MPORT_7_mask", false,-1);
    tracep->declBit(c+23,"ram8_MPORT_7_en", false,-1);
    tracep->declQuad(c+188,"addr", false,-1, 60,0);
    tracep->declQuad(c+190,"mask", false,-1, 63,0);
    tracep->declQuad(c+192,"dword", false,-1, 63,0);
    tracep->declQuad(c+194,"loadval", false,-1, 63,0);
    tracep->declQuad(c+196,"loadVal", false,-1, 63,0);
    tracep->declQuad(c+198,"sdata", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
    tracep->declBus(c+13,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBus(c+14,"io_readRfOp_rs2", false,-1, 4,0);
    tracep->declBit(c+15,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+16,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+32,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+11,"io_readRes_a0", false,-1, 63,0);
    tracep->declQuad(c+200,"registers_0", false,-1, 63,0);
    tracep->declQuad(c+202,"registers_1", false,-1, 63,0);
    tracep->declQuad(c+204,"registers_2", false,-1, 63,0);
    tracep->declQuad(c+206,"registers_3", false,-1, 63,0);
    tracep->declQuad(c+208,"registers_4", false,-1, 63,0);
    tracep->declQuad(c+210,"registers_5", false,-1, 63,0);
    tracep->declQuad(c+212,"registers_6", false,-1, 63,0);
    tracep->declQuad(c+214,"registers_7", false,-1, 63,0);
    tracep->declQuad(c+216,"registers_8", false,-1, 63,0);
    tracep->declQuad(c+218,"registers_9", false,-1, 63,0);
    tracep->declQuad(c+11,"registers_10", false,-1, 63,0);
    tracep->declQuad(c+220,"registers_11", false,-1, 63,0);
    tracep->declQuad(c+222,"registers_12", false,-1, 63,0);
    tracep->declQuad(c+224,"registers_13", false,-1, 63,0);
    tracep->declQuad(c+226,"registers_14", false,-1, 63,0);
    tracep->declQuad(c+228,"registers_15", false,-1, 63,0);
    tracep->declQuad(c+230,"registers_16", false,-1, 63,0);
    tracep->declQuad(c+232,"registers_17", false,-1, 63,0);
    tracep->declQuad(c+234,"registers_18", false,-1, 63,0);
    tracep->declQuad(c+236,"registers_19", false,-1, 63,0);
    tracep->declQuad(c+238,"registers_20", false,-1, 63,0);
    tracep->declQuad(c+240,"registers_21", false,-1, 63,0);
    tracep->declQuad(c+242,"registers_22", false,-1, 63,0);
    tracep->declQuad(c+244,"registers_23", false,-1, 63,0);
    tracep->declQuad(c+246,"registers_24", false,-1, 63,0);
    tracep->declQuad(c+248,"registers_25", false,-1, 63,0);
    tracep->declQuad(c+250,"registers_26", false,-1, 63,0);
    tracep->declQuad(c+252,"registers_27", false,-1, 63,0);
    tracep->declQuad(c+254,"registers_28", false,-1, 63,0);
    tracep->declQuad(c+256,"registers_29", false,-1, 63,0);
    tracep->declQuad(c+258,"registers_30", false,-1, 63,0);
    tracep->declQuad(c+260,"registers_31", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBit(c+262,"clock", false,-1);
    tracep->declBit(c+263,"reset", false,-1);
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
    tracep->fullBit(oldp+1,((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))));
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
    tracep->fullQData(oldp+19,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
    tracep->fullCData(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
    tracep->fullBit(oldp+22,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+23,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
    tracep->fullBit(oldp+24,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
    tracep->fullCData(oldp+25,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
    tracep->fullQData(oldp+26,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
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
                                                    ? vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val
                                                    : 0ULL)))))))),64);
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
    tracep->fullQData(oldp+48,(((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
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
    tracep->fullCData(oldp+50,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
    tracep->fullCData(oldp+51,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
    tracep->fullCData(oldp+52,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
    tracep->fullCData(oldp+53,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
    tracep->fullCData(oldp+54,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
    tracep->fullCData(oldp+55,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
    tracep->fullCData(oldp+56,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
    tracep->fullCData(oldp+57,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
    tracep->fullCData(oldp+58,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
    tracep->fullCData(oldp+59,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
    tracep->fullCData(oldp+60,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
    tracep->fullCData(oldp+61,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
    tracep->fullCData(oldp+62,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
    tracep->fullCData(oldp+63,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
    tracep->fullCData(oldp+64,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
    tracep->fullCData(oldp+65,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
    tracep->fullCData(oldp+66,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                        >> 3U))),4);
    tracep->fullCData(oldp+67,(vlSelf->TOP__DOT__MEM__DOT__ram1
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+68,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__sdata))),8);
    tracep->fullCData(oldp+69,(vlSelf->TOP__DOT__MEM__DOT__ram2[0]),8);
    tracep->fullCData(oldp+70,(vlSelf->TOP__DOT__MEM__DOT__ram2[1]),8);
    tracep->fullCData(oldp+71,(vlSelf->TOP__DOT__MEM__DOT__ram2[2]),8);
    tracep->fullCData(oldp+72,(vlSelf->TOP__DOT__MEM__DOT__ram2[3]),8);
    tracep->fullCData(oldp+73,(vlSelf->TOP__DOT__MEM__DOT__ram2[4]),8);
    tracep->fullCData(oldp+74,(vlSelf->TOP__DOT__MEM__DOT__ram2[5]),8);
    tracep->fullCData(oldp+75,(vlSelf->TOP__DOT__MEM__DOT__ram2[6]),8);
    tracep->fullCData(oldp+76,(vlSelf->TOP__DOT__MEM__DOT__ram2[7]),8);
    tracep->fullCData(oldp+77,(vlSelf->TOP__DOT__MEM__DOT__ram2[8]),8);
    tracep->fullCData(oldp+78,(vlSelf->TOP__DOT__MEM__DOT__ram2[9]),8);
    tracep->fullCData(oldp+79,(vlSelf->TOP__DOT__MEM__DOT__ram2[10]),8);
    tracep->fullCData(oldp+80,(vlSelf->TOP__DOT__MEM__DOT__ram2[11]),8);
    tracep->fullCData(oldp+81,(vlSelf->TOP__DOT__MEM__DOT__ram2[12]),8);
    tracep->fullCData(oldp+82,(vlSelf->TOP__DOT__MEM__DOT__ram2[13]),8);
    tracep->fullCData(oldp+83,(vlSelf->TOP__DOT__MEM__DOT__ram2[14]),8);
    tracep->fullCData(oldp+84,(vlSelf->TOP__DOT__MEM__DOT__ram2[15]),8);
    tracep->fullCData(oldp+85,(vlSelf->TOP__DOT__MEM__DOT__ram2
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+86,(vlSelf->TOP__DOT__MEM__DOT__ram3[0]),8);
    tracep->fullCData(oldp+87,(vlSelf->TOP__DOT__MEM__DOT__ram3[1]),8);
    tracep->fullCData(oldp+88,(vlSelf->TOP__DOT__MEM__DOT__ram3[2]),8);
    tracep->fullCData(oldp+89,(vlSelf->TOP__DOT__MEM__DOT__ram3[3]),8);
    tracep->fullCData(oldp+90,(vlSelf->TOP__DOT__MEM__DOT__ram3[4]),8);
    tracep->fullCData(oldp+91,(vlSelf->TOP__DOT__MEM__DOT__ram3[5]),8);
    tracep->fullCData(oldp+92,(vlSelf->TOP__DOT__MEM__DOT__ram3[6]),8);
    tracep->fullCData(oldp+93,(vlSelf->TOP__DOT__MEM__DOT__ram3[7]),8);
    tracep->fullCData(oldp+94,(vlSelf->TOP__DOT__MEM__DOT__ram3[8]),8);
    tracep->fullCData(oldp+95,(vlSelf->TOP__DOT__MEM__DOT__ram3[9]),8);
    tracep->fullCData(oldp+96,(vlSelf->TOP__DOT__MEM__DOT__ram3[10]),8);
    tracep->fullCData(oldp+97,(vlSelf->TOP__DOT__MEM__DOT__ram3[11]),8);
    tracep->fullCData(oldp+98,(vlSelf->TOP__DOT__MEM__DOT__ram3[12]),8);
    tracep->fullCData(oldp+99,(vlSelf->TOP__DOT__MEM__DOT__ram3[13]),8);
    tracep->fullCData(oldp+100,(vlSelf->TOP__DOT__MEM__DOT__ram3[14]),8);
    tracep->fullCData(oldp+101,(vlSelf->TOP__DOT__MEM__DOT__ram3[15]),8);
    tracep->fullCData(oldp+102,(vlSelf->TOP__DOT__MEM__DOT__ram3
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+103,(vlSelf->TOP__DOT__MEM__DOT__ram4[0]),8);
    tracep->fullCData(oldp+104,(vlSelf->TOP__DOT__MEM__DOT__ram4[1]),8);
    tracep->fullCData(oldp+105,(vlSelf->TOP__DOT__MEM__DOT__ram4[2]),8);
    tracep->fullCData(oldp+106,(vlSelf->TOP__DOT__MEM__DOT__ram4[3]),8);
    tracep->fullCData(oldp+107,(vlSelf->TOP__DOT__MEM__DOT__ram4[4]),8);
    tracep->fullCData(oldp+108,(vlSelf->TOP__DOT__MEM__DOT__ram4[5]),8);
    tracep->fullCData(oldp+109,(vlSelf->TOP__DOT__MEM__DOT__ram4[6]),8);
    tracep->fullCData(oldp+110,(vlSelf->TOP__DOT__MEM__DOT__ram4[7]),8);
    tracep->fullCData(oldp+111,(vlSelf->TOP__DOT__MEM__DOT__ram4[8]),8);
    tracep->fullCData(oldp+112,(vlSelf->TOP__DOT__MEM__DOT__ram4[9]),8);
    tracep->fullCData(oldp+113,(vlSelf->TOP__DOT__MEM__DOT__ram4[10]),8);
    tracep->fullCData(oldp+114,(vlSelf->TOP__DOT__MEM__DOT__ram4[11]),8);
    tracep->fullCData(oldp+115,(vlSelf->TOP__DOT__MEM__DOT__ram4[12]),8);
    tracep->fullCData(oldp+116,(vlSelf->TOP__DOT__MEM__DOT__ram4[13]),8);
    tracep->fullCData(oldp+117,(vlSelf->TOP__DOT__MEM__DOT__ram4[14]),8);
    tracep->fullCData(oldp+118,(vlSelf->TOP__DOT__MEM__DOT__ram4[15]),8);
    tracep->fullCData(oldp+119,(vlSelf->TOP__DOT__MEM__DOT__ram4
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+120,(vlSelf->TOP__DOT__MEM__DOT__ram5[0]),8);
    tracep->fullCData(oldp+121,(vlSelf->TOP__DOT__MEM__DOT__ram5[1]),8);
    tracep->fullCData(oldp+122,(vlSelf->TOP__DOT__MEM__DOT__ram5[2]),8);
    tracep->fullCData(oldp+123,(vlSelf->TOP__DOT__MEM__DOT__ram5[3]),8);
    tracep->fullCData(oldp+124,(vlSelf->TOP__DOT__MEM__DOT__ram5[4]),8);
    tracep->fullCData(oldp+125,(vlSelf->TOP__DOT__MEM__DOT__ram5[5]),8);
    tracep->fullCData(oldp+126,(vlSelf->TOP__DOT__MEM__DOT__ram5[6]),8);
    tracep->fullCData(oldp+127,(vlSelf->TOP__DOT__MEM__DOT__ram5[7]),8);
    tracep->fullCData(oldp+128,(vlSelf->TOP__DOT__MEM__DOT__ram5[8]),8);
    tracep->fullCData(oldp+129,(vlSelf->TOP__DOT__MEM__DOT__ram5[9]),8);
    tracep->fullCData(oldp+130,(vlSelf->TOP__DOT__MEM__DOT__ram5[10]),8);
    tracep->fullCData(oldp+131,(vlSelf->TOP__DOT__MEM__DOT__ram5[11]),8);
    tracep->fullCData(oldp+132,(vlSelf->TOP__DOT__MEM__DOT__ram5[12]),8);
    tracep->fullCData(oldp+133,(vlSelf->TOP__DOT__MEM__DOT__ram5[13]),8);
    tracep->fullCData(oldp+134,(vlSelf->TOP__DOT__MEM__DOT__ram5[14]),8);
    tracep->fullCData(oldp+135,(vlSelf->TOP__DOT__MEM__DOT__ram5[15]),8);
    tracep->fullCData(oldp+136,(vlSelf->TOP__DOT__MEM__DOT__ram5
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+137,(vlSelf->TOP__DOT__MEM__DOT__ram6[0]),8);
    tracep->fullCData(oldp+138,(vlSelf->TOP__DOT__MEM__DOT__ram6[1]),8);
    tracep->fullCData(oldp+139,(vlSelf->TOP__DOT__MEM__DOT__ram6[2]),8);
    tracep->fullCData(oldp+140,(vlSelf->TOP__DOT__MEM__DOT__ram6[3]),8);
    tracep->fullCData(oldp+141,(vlSelf->TOP__DOT__MEM__DOT__ram6[4]),8);
    tracep->fullCData(oldp+142,(vlSelf->TOP__DOT__MEM__DOT__ram6[5]),8);
    tracep->fullCData(oldp+143,(vlSelf->TOP__DOT__MEM__DOT__ram6[6]),8);
    tracep->fullCData(oldp+144,(vlSelf->TOP__DOT__MEM__DOT__ram6[7]),8);
    tracep->fullCData(oldp+145,(vlSelf->TOP__DOT__MEM__DOT__ram6[8]),8);
    tracep->fullCData(oldp+146,(vlSelf->TOP__DOT__MEM__DOT__ram6[9]),8);
    tracep->fullCData(oldp+147,(vlSelf->TOP__DOT__MEM__DOT__ram6[10]),8);
    tracep->fullCData(oldp+148,(vlSelf->TOP__DOT__MEM__DOT__ram6[11]),8);
    tracep->fullCData(oldp+149,(vlSelf->TOP__DOT__MEM__DOT__ram6[12]),8);
    tracep->fullCData(oldp+150,(vlSelf->TOP__DOT__MEM__DOT__ram6[13]),8);
    tracep->fullCData(oldp+151,(vlSelf->TOP__DOT__MEM__DOT__ram6[14]),8);
    tracep->fullCData(oldp+152,(vlSelf->TOP__DOT__MEM__DOT__ram6[15]),8);
    tracep->fullCData(oldp+153,(vlSelf->TOP__DOT__MEM__DOT__ram6
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+154,(vlSelf->TOP__DOT__MEM__DOT__ram7[0]),8);
    tracep->fullCData(oldp+155,(vlSelf->TOP__DOT__MEM__DOT__ram7[1]),8);
    tracep->fullCData(oldp+156,(vlSelf->TOP__DOT__MEM__DOT__ram7[2]),8);
    tracep->fullCData(oldp+157,(vlSelf->TOP__DOT__MEM__DOT__ram7[3]),8);
    tracep->fullCData(oldp+158,(vlSelf->TOP__DOT__MEM__DOT__ram7[4]),8);
    tracep->fullCData(oldp+159,(vlSelf->TOP__DOT__MEM__DOT__ram7[5]),8);
    tracep->fullCData(oldp+160,(vlSelf->TOP__DOT__MEM__DOT__ram7[6]),8);
    tracep->fullCData(oldp+161,(vlSelf->TOP__DOT__MEM__DOT__ram7[7]),8);
    tracep->fullCData(oldp+162,(vlSelf->TOP__DOT__MEM__DOT__ram7[8]),8);
    tracep->fullCData(oldp+163,(vlSelf->TOP__DOT__MEM__DOT__ram7[9]),8);
    tracep->fullCData(oldp+164,(vlSelf->TOP__DOT__MEM__DOT__ram7[10]),8);
    tracep->fullCData(oldp+165,(vlSelf->TOP__DOT__MEM__DOT__ram7[11]),8);
    tracep->fullCData(oldp+166,(vlSelf->TOP__DOT__MEM__DOT__ram7[12]),8);
    tracep->fullCData(oldp+167,(vlSelf->TOP__DOT__MEM__DOT__ram7[13]),8);
    tracep->fullCData(oldp+168,(vlSelf->TOP__DOT__MEM__DOT__ram7[14]),8);
    tracep->fullCData(oldp+169,(vlSelf->TOP__DOT__MEM__DOT__ram7[15]),8);
    tracep->fullCData(oldp+170,(vlSelf->TOP__DOT__MEM__DOT__ram7
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullCData(oldp+171,(vlSelf->TOP__DOT__MEM__DOT__ram8[0]),8);
    tracep->fullCData(oldp+172,(vlSelf->TOP__DOT__MEM__DOT__ram8[1]),8);
    tracep->fullCData(oldp+173,(vlSelf->TOP__DOT__MEM__DOT__ram8[2]),8);
    tracep->fullCData(oldp+174,(vlSelf->TOP__DOT__MEM__DOT__ram8[3]),8);
    tracep->fullCData(oldp+175,(vlSelf->TOP__DOT__MEM__DOT__ram8[4]),8);
    tracep->fullCData(oldp+176,(vlSelf->TOP__DOT__MEM__DOT__ram8[5]),8);
    tracep->fullCData(oldp+177,(vlSelf->TOP__DOT__MEM__DOT__ram8[6]),8);
    tracep->fullCData(oldp+178,(vlSelf->TOP__DOT__MEM__DOT__ram8[7]),8);
    tracep->fullCData(oldp+179,(vlSelf->TOP__DOT__MEM__DOT__ram8[8]),8);
    tracep->fullCData(oldp+180,(vlSelf->TOP__DOT__MEM__DOT__ram8[9]),8);
    tracep->fullCData(oldp+181,(vlSelf->TOP__DOT__MEM__DOT__ram8[10]),8);
    tracep->fullCData(oldp+182,(vlSelf->TOP__DOT__MEM__DOT__ram8[11]),8);
    tracep->fullCData(oldp+183,(vlSelf->TOP__DOT__MEM__DOT__ram8[12]),8);
    tracep->fullCData(oldp+184,(vlSelf->TOP__DOT__MEM__DOT__ram8[13]),8);
    tracep->fullCData(oldp+185,(vlSelf->TOP__DOT__MEM__DOT__ram8[14]),8);
    tracep->fullCData(oldp+186,(vlSelf->TOP__DOT__MEM__DOT__ram8[15]),8);
    tracep->fullCData(oldp+187,(vlSelf->TOP__DOT__MEM__DOT__ram8
                                [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                          >> 3U))]),8);
    tracep->fullQData(oldp+188,((0x1fffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                     << 0x1dU) | ((QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                                  >> 3U)))),61);
    tracep->fullQData(oldp+190,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
    tracep->fullQData(oldp+192,((((QData)((IData)((
                                                   (vlSelf->TOP__DOT__MEM__DOT__ram1
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
    tracep->fullQData(oldp+194,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
    tracep->fullQData(oldp+196,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                  ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                  : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
    tracep->fullQData(oldp+198,(vlSelf->TOP__DOT__MEM__DOT__sdata),64);
    tracep->fullQData(oldp+200,(vlSelf->TOP__DOT__Regfile__DOT__registers_0),64);
    tracep->fullQData(oldp+202,(vlSelf->TOP__DOT__Regfile__DOT__registers_1),64);
    tracep->fullQData(oldp+204,(vlSelf->TOP__DOT__Regfile__DOT__registers_2),64);
    tracep->fullQData(oldp+206,(vlSelf->TOP__DOT__Regfile__DOT__registers_3),64);
    tracep->fullQData(oldp+208,(vlSelf->TOP__DOT__Regfile__DOT__registers_4),64);
    tracep->fullQData(oldp+210,(vlSelf->TOP__DOT__Regfile__DOT__registers_5),64);
    tracep->fullQData(oldp+212,(vlSelf->TOP__DOT__Regfile__DOT__registers_6),64);
    tracep->fullQData(oldp+214,(vlSelf->TOP__DOT__Regfile__DOT__registers_7),64);
    tracep->fullQData(oldp+216,(vlSelf->TOP__DOT__Regfile__DOT__registers_8),64);
    tracep->fullQData(oldp+218,(vlSelf->TOP__DOT__Regfile__DOT__registers_9),64);
    tracep->fullQData(oldp+220,(vlSelf->TOP__DOT__Regfile__DOT__registers_11),64);
    tracep->fullQData(oldp+222,(vlSelf->TOP__DOT__Regfile__DOT__registers_12),64);
    tracep->fullQData(oldp+224,(vlSelf->TOP__DOT__Regfile__DOT__registers_13),64);
    tracep->fullQData(oldp+226,(vlSelf->TOP__DOT__Regfile__DOT__registers_14),64);
    tracep->fullQData(oldp+228,(vlSelf->TOP__DOT__Regfile__DOT__registers_15),64);
    tracep->fullQData(oldp+230,(vlSelf->TOP__DOT__Regfile__DOT__registers_16),64);
    tracep->fullQData(oldp+232,(vlSelf->TOP__DOT__Regfile__DOT__registers_17),64);
    tracep->fullQData(oldp+234,(vlSelf->TOP__DOT__Regfile__DOT__registers_18),64);
    tracep->fullQData(oldp+236,(vlSelf->TOP__DOT__Regfile__DOT__registers_19),64);
    tracep->fullQData(oldp+238,(vlSelf->TOP__DOT__Regfile__DOT__registers_20),64);
    tracep->fullQData(oldp+240,(vlSelf->TOP__DOT__Regfile__DOT__registers_21),64);
    tracep->fullQData(oldp+242,(vlSelf->TOP__DOT__Regfile__DOT__registers_22),64);
    tracep->fullQData(oldp+244,(vlSelf->TOP__DOT__Regfile__DOT__registers_23),64);
    tracep->fullQData(oldp+246,(vlSelf->TOP__DOT__Regfile__DOT__registers_24),64);
    tracep->fullQData(oldp+248,(vlSelf->TOP__DOT__Regfile__DOT__registers_25),64);
    tracep->fullQData(oldp+250,(vlSelf->TOP__DOT__Regfile__DOT__registers_26),64);
    tracep->fullQData(oldp+252,(vlSelf->TOP__DOT__Regfile__DOT__registers_27),64);
    tracep->fullQData(oldp+254,(vlSelf->TOP__DOT__Regfile__DOT__registers_28),64);
    tracep->fullQData(oldp+256,(vlSelf->TOP__DOT__Regfile__DOT__registers_29),64);
    tracep->fullQData(oldp+258,(vlSelf->TOP__DOT__Regfile__DOT__registers_30),64);
    tracep->fullQData(oldp+260,(vlSelf->TOP__DOT__Regfile__DOT__registers_31),64);
    tracep->fullBit(oldp+262,(vlSelf->clock));
    tracep->fullBit(oldp+263,(vlSelf->reset));
    tracep->fullQData(oldp+264,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+266,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+267,(vlSelf->io_o),64);
    tracep->fullQData(oldp+269,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+271,(vlSelf->io_src2),64);
    tracep->fullCData(oldp+273,(vlSelf->io_instType),5);
    tracep->fullBit(oldp+274,(vlSelf->io_branch));
    tracep->fullBit(oldp+275,(1U));
    tracep->fullIData(oldp+276,(vlSelf->TOP__DOT__IF__DOT__initvar),32);
}

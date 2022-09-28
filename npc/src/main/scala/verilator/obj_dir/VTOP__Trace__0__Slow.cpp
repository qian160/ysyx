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
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declQuad(c+150,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+152,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+153,"io_o", false,-1, 63,0);
    tracep->declQuad(c+155,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+157,"io_src2", false,-1, 63,0);
    tracep->declBus(c+159,"io_instType", false,-1, 4,0);
    tracep->declBit(c+160,"io_branch", false,-1);
    tracep->pushNamePrefix("TOP ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declQuad(c+150,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+152,"io_inst_o", false,-1, 31,0);
    tracep->declQuad(c+153,"io_o", false,-1, 63,0);
    tracep->declQuad(c+155,"io_src1", false,-1, 63,0);
    tracep->declQuad(c+157,"io_src2", false,-1, 63,0);
    tracep->declBus(c+159,"io_instType", false,-1, 4,0);
    tracep->declBit(c+160,"io_branch", false,-1);
    tracep->declBit(c+148,"IF_clock", false,-1);
    tracep->declBit(c+149,"IF_reset", false,-1);
    tracep->declBit(c+1,"IF_io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"IF_io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"IF_io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"IF_io_inst_o", false,-1, 31,0);
    tracep->declBit(c+148,"ID_clock", false,-1);
    tracep->declBit(c+149,"ID_reset", false,-1);
    tracep->declBus(c+6,"ID_io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"ID_io_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+7,"ID_io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+9,"ID_io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+11,"ID_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+12,"ID_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"ID_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+14,"ID_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+16,"ID_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+18,"ID_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"ID_io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+19,"ID_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"ID_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+21,"ID_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+22,"ID_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+23,"ID_io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"ID_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"ID_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"ID_io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+24,"ID_io_instType", false,-1, 4,0);
    tracep->declBit(c+1,"ID_io_branch", false,-1);
    tracep->declBit(c+148,"EX_clock", false,-1);
    tracep->declBit(c+149,"EX_reset", false,-1);
    tracep->declBit(c+12,"EX_io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"EX_io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+14,"EX_io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+16,"EX_io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+18,"EX_io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+19,"EX_io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"EX_io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+21,"EX_io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+22,"EX_io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+12,"EX_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"EX_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"EX_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+19,"EX_io_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"EX_io_memOp_isStore", false,-1);
    tracep->declBit(c+21,"EX_io_memOp_sign", false,-1);
    tracep->declBus(c+22,"EX_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"EX_io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+23,"EX_io_debug_i_exit", false,-1);
    tracep->declQuad(c+9,"EX_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"EX_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"EX_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+23,"EX_io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"EX_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"EX_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"EX_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+148,"MEM_clock", false,-1);
    tracep->declBit(c+12,"MEM_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+13,"MEM_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"MEM_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+19,"MEM_io_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"MEM_io_memOp_isStore", false,-1);
    tracep->declBit(c+21,"MEM_io_memOp_sign", false,-1);
    tracep->declBus(c+22,"MEM_io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"MEM_io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+12,"MEM_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+13,"MEM_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"MEM_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+23,"MEM_io_debug_i_exit", false,-1);
    tracep->declQuad(c+9,"MEM_io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"MEM_io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"MEM_io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+23,"MEM_io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"MEM_io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"MEM_io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"MEM_io_debug_o_inst", false,-1, 31,0);
    tracep->declBit(c+148,"WB_clock", false,-1);
    tracep->declBit(c+149,"WB_reset", false,-1);
    tracep->declBit(c+12,"WB_io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+13,"WB_io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"WB_io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+12,"WB_io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+13,"WB_io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"WB_io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+23,"WB_io_debug_exit", false,-1);
    tracep->declQuad(c+9,"WB_io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"WB_io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+6,"WB_io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+148,"Regfile_clock", false,-1);
    tracep->declBit(c+149,"Regfile_reset", false,-1);
    tracep->declBus(c+11,"Regfile_io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+12,"Regfile_io_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"Regfile_io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"Regfile_io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+7,"Regfile_io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+9,"Regfile_io_readRes_a0", false,-1, 63,0);
    tracep->pushNamePrefix("EX ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declBit(c+12,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+14,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+16,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+18,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+19,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+21,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+22,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+12,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declBit(c+19,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"io_memOp_isStore", false,-1);
    tracep->declBit(c+21,"io_memOp_sign", false,-1);
    tracep->declBus(c+22,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+23,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+23,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    tracep->declArray(c+29,"aluRes", false,-1, 126,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declBus(c+6,"io_inst", false,-1, 31,0);
    tracep->declQuad(c+4,"io_pc", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regVal_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+7,"io_regVal_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_regVal_a0", false,-1, 63,0);
    tracep->declBus(c+11,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+12,"io_decInfo_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"io_decInfo_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+14,"io_decInfo_aluOp_src1", false,-1, 63,0);
    tracep->declQuad(c+16,"io_decInfo_aluOp_src2", false,-1, 63,0);
    tracep->declBus(c+18,"io_decInfo_aluOp_opt", false,-1, 4,0);
    tracep->declBit(c+1,"io_decInfo_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_decInfo_branchOp_newPC", false,-1, 63,0);
    tracep->declBit(c+19,"io_decInfo_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"io_decInfo_memOp_isStore", false,-1);
    tracep->declBit(c+21,"io_decInfo_memOp_sign", false,-1);
    tracep->declBus(c+22,"io_decInfo_memOp_length", false,-1, 1,0);
    tracep->declBit(c+23,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    tracep->declBus(c+24,"io_instType", false,-1, 4,0);
    tracep->declBit(c+1,"io_branch", false,-1);
    tracep->declBus(c+33,"decRes_0", false,-1, 4,0);
    tracep->declBus(c+34,"opcode", false,-1, 6,0);
    tracep->declBus(c+35,"fct3", false,-1, 2,0);
    tracep->declQuad(c+36,"immI", false,-1, 63,0);
    tracep->declBit(c+38,"is_jalr", false,-1);
    tracep->declQuad(c+39,"immB", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IF ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declBit(c+1,"io_branchOp_happen", false,-1);
    tracep->declQuad(c+2,"io_branchOp_newPC", false,-1, 63,0);
    tracep->declQuad(c+4,"io_pc_o", false,-1, 63,0);
    tracep->declBus(c+6,"io_inst_o", false,-1, 31,0);
    tracep->declBit(c+161,"inst_rom_io_inst_o_MPORT_en", false,-1);
    tracep->declBus(c+41,"inst_rom_io_inst_o_MPORT_addr", false,-1, 14,0);
    tracep->declBus(c+6,"inst_rom_io_inst_o_MPORT_data", false,-1, 31,0);
    tracep->declBus(c+42,"pc", false,-1, 31,0);
    tracep->declQuad(c+43,"nextPC", false,-1, 63,0);
    tracep->declBus(c+162,"initvar", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+12,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+25,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+19,"io_memOp_isLoad", false,-1);
    tracep->declBit(c+20,"io_memOp_isStore", false,-1);
    tracep->declBit(c+21,"io_memOp_sign", false,-1);
    tracep->declBus(c+22,"io_memOp_length", false,-1, 1,0);
    tracep->declQuad(c+25,"io_memOp_addr", false,-1, 63,0);
    tracep->declBit(c+12,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+23,"io_debug_i_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_i_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_i_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_i_inst", false,-1, 31,0);
    tracep->declBit(c+23,"io_debug_o_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_o_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_o_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_o_inst", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+45+i*1,"ram1", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram1_loadval_MPORT_en", false,-1);
    tracep->declBus(c+61,"ram1_loadval_MPORT_addr", false,-1, 3,0);
    tracep->declBus(c+62,"ram1_loadval_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+63,"ram1_MPORT_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_en", false,-1);
    tracep->declBus(c+64,"ram1_MPORT_1_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_1_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_1_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_1_en", false,-1);
    tracep->declBus(c+65,"ram1_MPORT_2_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_2_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_2_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_2_en", false,-1);
    tracep->declBus(c+66,"ram1_MPORT_3_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_3_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_3_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_3_en", false,-1);
    tracep->declBus(c+67,"ram1_MPORT_4_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_4_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_4_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_4_en", false,-1);
    tracep->declBus(c+68,"ram1_MPORT_5_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_5_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_5_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_5_en", false,-1);
    tracep->declBus(c+69,"ram1_MPORT_6_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_6_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_6_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_6_en", false,-1);
    tracep->declBus(c+70,"ram1_MPORT_7_data", false,-1, 7,0);
    tracep->declBus(c+61,"ram1_MPORT_7_addr", false,-1, 3,0);
    tracep->declBit(c+161,"ram1_MPORT_7_mask", false,-1);
    tracep->declBit(c+20,"ram1_MPORT_7_en", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+163+i*1,"ram2", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram2_loadval_MPORT_1_en", false,-1);
    tracep->declBus(c+61,"ram2_loadval_MPORT_1_addr", false,-1, 3,0);
    tracep->declBus(c+71,"ram2_loadval_MPORT_1_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+179+i*1,"ram3", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram3_loadval_MPORT_2_en", false,-1);
    tracep->declBus(c+61,"ram3_loadval_MPORT_2_addr", false,-1, 3,0);
    tracep->declBus(c+72,"ram3_loadval_MPORT_2_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+195+i*1,"ram4", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram4_loadval_MPORT_3_en", false,-1);
    tracep->declBus(c+61,"ram4_loadval_MPORT_3_addr", false,-1, 3,0);
    tracep->declBus(c+73,"ram4_loadval_MPORT_3_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+211+i*1,"ram5", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram5_loadval_MPORT_4_en", false,-1);
    tracep->declBus(c+61,"ram5_loadval_MPORT_4_addr", false,-1, 3,0);
    tracep->declBus(c+74,"ram5_loadval_MPORT_4_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+227+i*1,"ram6", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram6_loadval_MPORT_5_en", false,-1);
    tracep->declBus(c+61,"ram6_loadval_MPORT_5_addr", false,-1, 3,0);
    tracep->declBus(c+75,"ram6_loadval_MPORT_5_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+243+i*1,"ram7", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram7_loadval_MPORT_6_en", false,-1);
    tracep->declBus(c+61,"ram7_loadval_MPORT_6_addr", false,-1, 3,0);
    tracep->declBus(c+76,"ram7_loadval_MPORT_6_data", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+259+i*1,"ram8", true,(i+0), 7,0);
    }
    tracep->declBit(c+161,"ram8_loadval_MPORT_7_en", false,-1);
    tracep->declBus(c+61,"ram8_loadval_MPORT_7_addr", false,-1, 3,0);
    tracep->declBus(c+77,"ram8_loadval_MPORT_7_data", false,-1, 7,0);
    tracep->declQuad(c+78,"addr", false,-1, 60,0);
    tracep->declQuad(c+80,"mask", false,-1, 63,0);
    tracep->declQuad(c+82,"loadval", false,-1, 63,0);
    tracep->declQuad(c+84,"loadVal", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Regfile ");
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declBus(c+11,"io_readRfOp_rs1", false,-1, 4,0);
    tracep->declBit(c+12,"io_writeRfOp_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"io_writeRfOp_wdata", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_rs1Val", false,-1, 63,0);
    tracep->declQuad(c+7,"io_readRes_rs2Val", false,-1, 63,0);
    tracep->declQuad(c+9,"io_readRes_a0", false,-1, 63,0);
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
    tracep->declQuad(c+9,"registers_10", false,-1, 63,0);
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
    tracep->declBit(c+148,"clock", false,-1);
    tracep->declBit(c+149,"reset", false,-1);
    tracep->declBit(c+12,"io_writeRfOp_i_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_i_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"io_writeRfOp_i_wdata", false,-1, 63,0);
    tracep->declBit(c+12,"io_writeRfOp_o_wen", false,-1);
    tracep->declBus(c+13,"io_writeRfOp_o_rd", false,-1, 4,0);
    tracep->declQuad(c+27,"io_writeRfOp_o_wdata", false,-1, 63,0);
    tracep->declBit(c+23,"io_debug_exit", false,-1);
    tracep->declQuad(c+9,"io_debug_a0", false,-1, 63,0);
    tracep->declQuad(c+4,"io_debug_pc", false,-1, 63,0);
    tracep->declBus(c+6,"io_debug_inst", false,-1, 31,0);
    tracep->declBit(c+23,"DEBUG_exit", false,-1);
    tracep->declQuad(c+4,"DEBUG_pc", false,-1, 63,0);
    tracep->declBus(c+6,"DEBUG_inst", false,-1, 31,0);
    tracep->declQuad(c+9,"DEBUG_a0", false,-1, 63,0);
    tracep->pushNamePrefix("DEBUG ");
    tracep->declBit(c+23,"exit", false,-1);
    tracep->declQuad(c+4,"pc", false,-1, 63,0);
    tracep->declQuad(c+9,"a0", false,-1, 63,0);
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
                                           ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val 
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
    tracep->fullQData(oldp+7,(vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val),64);
    tracep->fullQData(oldp+9,(vlSelf->TOP__DOT__Regfile__DOT__registers_10),64);
    tracep->fullCData(oldp+11,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 0xfU))),5);
    tracep->fullBit(oldp+12,(vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen));
    tracep->fullCData(oldp+13,((0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                         >> 7U))),5);
    tracep->fullQData(oldp+14,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1),64);
    tracep->fullQData(oldp+16,((((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))),64);
    tracep->fullCData(oldp+18,(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt),5);
    tracep->fullBit(oldp+19,(((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                              & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                 & (3U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))));
    tracep->fullBit(oldp+20,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore));
    tracep->fullBit(oldp+21,(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign));
    tracep->fullCData(oldp+22,((3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61))),2);
    tracep->fullBit(oldp+23,(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
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
    tracep->fullCData(oldp+24,(((0x33U == (0xfe00707fU 
                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                 ? 0U : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_187))),5);
    tracep->fullQData(oldp+25,((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))),64);
    tracep->fullQData(oldp+27,(vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata),64);
    tracep->fullWData(oldp+29,(vlSelf->TOP__DOT__EX__DOT__aluRes),127);
    tracep->fullCData(oldp+33,(vlSelf->TOP__DOT__ID__DOT__decRes_0),5);
    tracep->fullCData(oldp+34,((0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)),7);
    tracep->fullCData(oldp+35,((7U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                      >> 0xcU))),3);
    tracep->fullQData(oldp+36,(vlSelf->TOP__DOT__ID__DOT__immI),64);
    tracep->fullBit(oldp+38,((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))));
    tracep->fullQData(oldp+39,((((- (QData)((IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11) 
                                                        >> 0xbU))))) 
                                 << 0xcU) | (QData)((IData)(
                                                            (0xfffU 
                                                             & (IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11)))))),64);
    tracep->fullSData(oldp+41,((0x7fffU & (vlSelf->TOP__DOT__IF__DOT__pc 
                                           >> 2U))),15);
    tracep->fullIData(oldp+42,(vlSelf->TOP__DOT__IF__DOT__pc),32);
    tracep->fullQData(oldp+43,(((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
                                 ? ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                     ? 0ULL : ((1U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? (vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val 
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
    tracep->fullCData(oldp+45,(vlSelf->TOP__DOT__MEM__DOT__ram1[0]),8);
    tracep->fullCData(oldp+46,(vlSelf->TOP__DOT__MEM__DOT__ram1[1]),8);
    tracep->fullCData(oldp+47,(vlSelf->TOP__DOT__MEM__DOT__ram1[2]),8);
    tracep->fullCData(oldp+48,(vlSelf->TOP__DOT__MEM__DOT__ram1[3]),8);
    tracep->fullCData(oldp+49,(vlSelf->TOP__DOT__MEM__DOT__ram1[4]),8);
    tracep->fullCData(oldp+50,(vlSelf->TOP__DOT__MEM__DOT__ram1[5]),8);
    tracep->fullCData(oldp+51,(vlSelf->TOP__DOT__MEM__DOT__ram1[6]),8);
    tracep->fullCData(oldp+52,(vlSelf->TOP__DOT__MEM__DOT__ram1[7]),8);
    tracep->fullCData(oldp+53,(vlSelf->TOP__DOT__MEM__DOT__ram1[8]),8);
    tracep->fullCData(oldp+54,(vlSelf->TOP__DOT__MEM__DOT__ram1[9]),8);
    tracep->fullCData(oldp+55,(vlSelf->TOP__DOT__MEM__DOT__ram1[10]),8);
    tracep->fullCData(oldp+56,(vlSelf->TOP__DOT__MEM__DOT__ram1[11]),8);
    tracep->fullCData(oldp+57,(vlSelf->TOP__DOT__MEM__DOT__ram1[12]),8);
    tracep->fullCData(oldp+58,(vlSelf->TOP__DOT__MEM__DOT__ram1[13]),8);
    tracep->fullCData(oldp+59,(vlSelf->TOP__DOT__MEM__DOT__ram1[14]),8);
    tracep->fullCData(oldp+60,(vlSelf->TOP__DOT__MEM__DOT__ram1[15]),8);
    tracep->fullCData(oldp+61,((0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                        >> 3U))),4);
    tracep->fullCData(oldp+62,(vlSelf->TOP__DOT__MEM__DOT__ram1
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+63,((0xffU & (IData)(vlSelf->TOP__DOT__MEM__DOT__mask))),8);
    tracep->fullCData(oldp+64,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 8U)))),8);
    tracep->fullCData(oldp+65,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x10U)))),8);
    tracep->fullCData(oldp+66,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x18U)))),8);
    tracep->fullCData(oldp+67,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x20U)))),8);
    tracep->fullCData(oldp+68,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x28U)))),8);
    tracep->fullCData(oldp+69,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x30U)))),8);
    tracep->fullCData(oldp+70,((0xffU & (IData)((vlSelf->TOP__DOT__MEM__DOT__mask 
                                                 >> 0x38U)))),8);
    tracep->fullCData(oldp+71,(vlSelf->TOP__DOT__MEM__DOT__ram2
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+72,(vlSelf->TOP__DOT__MEM__DOT__ram3
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+73,(vlSelf->TOP__DOT__MEM__DOT__ram4
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+74,(vlSelf->TOP__DOT__MEM__DOT__ram5
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+75,(vlSelf->TOP__DOT__MEM__DOT__ram6
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+76,(vlSelf->TOP__DOT__MEM__DOT__ram7
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullCData(oldp+77,(vlSelf->TOP__DOT__MEM__DOT__ram8
                               [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                         >> 3U))]),8);
    tracep->fullQData(oldp+78,((0x1fffffffffffffffULL 
                                & (((QData)((IData)(
                                                    vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                    << 0x1dU) | ((QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT__aluRes[0U])) 
                                                 >> 3U)))),61);
    tracep->fullQData(oldp+80,(vlSelf->TOP__DOT__MEM__DOT__mask),64);
    tracep->fullQData(oldp+82,(vlSelf->TOP__DOT__MEM__DOT__loadval),64);
    tracep->fullQData(oldp+84,(((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
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
    tracep->fullBit(oldp+148,(vlSelf->clock));
    tracep->fullBit(oldp+149,(vlSelf->reset));
    tracep->fullQData(oldp+150,(vlSelf->io_pc_o),64);
    tracep->fullIData(oldp+152,(vlSelf->io_inst_o),32);
    tracep->fullQData(oldp+153,(vlSelf->io_o),64);
    tracep->fullQData(oldp+155,(vlSelf->io_src1),64);
    tracep->fullQData(oldp+157,(vlSelf->io_src2),64);
    tracep->fullCData(oldp+159,(vlSelf->io_instType),5);
    tracep->fullBit(oldp+160,(vlSelf->io_branch));
    tracep->fullBit(oldp+161,(1U));
    tracep->fullIData(oldp+162,(vlSelf->TOP__DOT__IF__DOT__initvar),32);
    tracep->fullCData(oldp+163,(vlSelf->TOP__DOT__MEM__DOT__ram2[0]),8);
    tracep->fullCData(oldp+164,(vlSelf->TOP__DOT__MEM__DOT__ram2[1]),8);
    tracep->fullCData(oldp+165,(vlSelf->TOP__DOT__MEM__DOT__ram2[2]),8);
    tracep->fullCData(oldp+166,(vlSelf->TOP__DOT__MEM__DOT__ram2[3]),8);
    tracep->fullCData(oldp+167,(vlSelf->TOP__DOT__MEM__DOT__ram2[4]),8);
    tracep->fullCData(oldp+168,(vlSelf->TOP__DOT__MEM__DOT__ram2[5]),8);
    tracep->fullCData(oldp+169,(vlSelf->TOP__DOT__MEM__DOT__ram2[6]),8);
    tracep->fullCData(oldp+170,(vlSelf->TOP__DOT__MEM__DOT__ram2[7]),8);
    tracep->fullCData(oldp+171,(vlSelf->TOP__DOT__MEM__DOT__ram2[8]),8);
    tracep->fullCData(oldp+172,(vlSelf->TOP__DOT__MEM__DOT__ram2[9]),8);
    tracep->fullCData(oldp+173,(vlSelf->TOP__DOT__MEM__DOT__ram2[10]),8);
    tracep->fullCData(oldp+174,(vlSelf->TOP__DOT__MEM__DOT__ram2[11]),8);
    tracep->fullCData(oldp+175,(vlSelf->TOP__DOT__MEM__DOT__ram2[12]),8);
    tracep->fullCData(oldp+176,(vlSelf->TOP__DOT__MEM__DOT__ram2[13]),8);
    tracep->fullCData(oldp+177,(vlSelf->TOP__DOT__MEM__DOT__ram2[14]),8);
    tracep->fullCData(oldp+178,(vlSelf->TOP__DOT__MEM__DOT__ram2[15]),8);
    tracep->fullCData(oldp+179,(vlSelf->TOP__DOT__MEM__DOT__ram3[0]),8);
    tracep->fullCData(oldp+180,(vlSelf->TOP__DOT__MEM__DOT__ram3[1]),8);
    tracep->fullCData(oldp+181,(vlSelf->TOP__DOT__MEM__DOT__ram3[2]),8);
    tracep->fullCData(oldp+182,(vlSelf->TOP__DOT__MEM__DOT__ram3[3]),8);
    tracep->fullCData(oldp+183,(vlSelf->TOP__DOT__MEM__DOT__ram3[4]),8);
    tracep->fullCData(oldp+184,(vlSelf->TOP__DOT__MEM__DOT__ram3[5]),8);
    tracep->fullCData(oldp+185,(vlSelf->TOP__DOT__MEM__DOT__ram3[6]),8);
    tracep->fullCData(oldp+186,(vlSelf->TOP__DOT__MEM__DOT__ram3[7]),8);
    tracep->fullCData(oldp+187,(vlSelf->TOP__DOT__MEM__DOT__ram3[8]),8);
    tracep->fullCData(oldp+188,(vlSelf->TOP__DOT__MEM__DOT__ram3[9]),8);
    tracep->fullCData(oldp+189,(vlSelf->TOP__DOT__MEM__DOT__ram3[10]),8);
    tracep->fullCData(oldp+190,(vlSelf->TOP__DOT__MEM__DOT__ram3[11]),8);
    tracep->fullCData(oldp+191,(vlSelf->TOP__DOT__MEM__DOT__ram3[12]),8);
    tracep->fullCData(oldp+192,(vlSelf->TOP__DOT__MEM__DOT__ram3[13]),8);
    tracep->fullCData(oldp+193,(vlSelf->TOP__DOT__MEM__DOT__ram3[14]),8);
    tracep->fullCData(oldp+194,(vlSelf->TOP__DOT__MEM__DOT__ram3[15]),8);
    tracep->fullCData(oldp+195,(vlSelf->TOP__DOT__MEM__DOT__ram4[0]),8);
    tracep->fullCData(oldp+196,(vlSelf->TOP__DOT__MEM__DOT__ram4[1]),8);
    tracep->fullCData(oldp+197,(vlSelf->TOP__DOT__MEM__DOT__ram4[2]),8);
    tracep->fullCData(oldp+198,(vlSelf->TOP__DOT__MEM__DOT__ram4[3]),8);
    tracep->fullCData(oldp+199,(vlSelf->TOP__DOT__MEM__DOT__ram4[4]),8);
    tracep->fullCData(oldp+200,(vlSelf->TOP__DOT__MEM__DOT__ram4[5]),8);
    tracep->fullCData(oldp+201,(vlSelf->TOP__DOT__MEM__DOT__ram4[6]),8);
    tracep->fullCData(oldp+202,(vlSelf->TOP__DOT__MEM__DOT__ram4[7]),8);
    tracep->fullCData(oldp+203,(vlSelf->TOP__DOT__MEM__DOT__ram4[8]),8);
    tracep->fullCData(oldp+204,(vlSelf->TOP__DOT__MEM__DOT__ram4[9]),8);
    tracep->fullCData(oldp+205,(vlSelf->TOP__DOT__MEM__DOT__ram4[10]),8);
    tracep->fullCData(oldp+206,(vlSelf->TOP__DOT__MEM__DOT__ram4[11]),8);
    tracep->fullCData(oldp+207,(vlSelf->TOP__DOT__MEM__DOT__ram4[12]),8);
    tracep->fullCData(oldp+208,(vlSelf->TOP__DOT__MEM__DOT__ram4[13]),8);
    tracep->fullCData(oldp+209,(vlSelf->TOP__DOT__MEM__DOT__ram4[14]),8);
    tracep->fullCData(oldp+210,(vlSelf->TOP__DOT__MEM__DOT__ram4[15]),8);
    tracep->fullCData(oldp+211,(vlSelf->TOP__DOT__MEM__DOT__ram5[0]),8);
    tracep->fullCData(oldp+212,(vlSelf->TOP__DOT__MEM__DOT__ram5[1]),8);
    tracep->fullCData(oldp+213,(vlSelf->TOP__DOT__MEM__DOT__ram5[2]),8);
    tracep->fullCData(oldp+214,(vlSelf->TOP__DOT__MEM__DOT__ram5[3]),8);
    tracep->fullCData(oldp+215,(vlSelf->TOP__DOT__MEM__DOT__ram5[4]),8);
    tracep->fullCData(oldp+216,(vlSelf->TOP__DOT__MEM__DOT__ram5[5]),8);
    tracep->fullCData(oldp+217,(vlSelf->TOP__DOT__MEM__DOT__ram5[6]),8);
    tracep->fullCData(oldp+218,(vlSelf->TOP__DOT__MEM__DOT__ram5[7]),8);
    tracep->fullCData(oldp+219,(vlSelf->TOP__DOT__MEM__DOT__ram5[8]),8);
    tracep->fullCData(oldp+220,(vlSelf->TOP__DOT__MEM__DOT__ram5[9]),8);
    tracep->fullCData(oldp+221,(vlSelf->TOP__DOT__MEM__DOT__ram5[10]),8);
    tracep->fullCData(oldp+222,(vlSelf->TOP__DOT__MEM__DOT__ram5[11]),8);
    tracep->fullCData(oldp+223,(vlSelf->TOP__DOT__MEM__DOT__ram5[12]),8);
    tracep->fullCData(oldp+224,(vlSelf->TOP__DOT__MEM__DOT__ram5[13]),8);
    tracep->fullCData(oldp+225,(vlSelf->TOP__DOT__MEM__DOT__ram5[14]),8);
    tracep->fullCData(oldp+226,(vlSelf->TOP__DOT__MEM__DOT__ram5[15]),8);
    tracep->fullCData(oldp+227,(vlSelf->TOP__DOT__MEM__DOT__ram6[0]),8);
    tracep->fullCData(oldp+228,(vlSelf->TOP__DOT__MEM__DOT__ram6[1]),8);
    tracep->fullCData(oldp+229,(vlSelf->TOP__DOT__MEM__DOT__ram6[2]),8);
    tracep->fullCData(oldp+230,(vlSelf->TOP__DOT__MEM__DOT__ram6[3]),8);
    tracep->fullCData(oldp+231,(vlSelf->TOP__DOT__MEM__DOT__ram6[4]),8);
    tracep->fullCData(oldp+232,(vlSelf->TOP__DOT__MEM__DOT__ram6[5]),8);
    tracep->fullCData(oldp+233,(vlSelf->TOP__DOT__MEM__DOT__ram6[6]),8);
    tracep->fullCData(oldp+234,(vlSelf->TOP__DOT__MEM__DOT__ram6[7]),8);
    tracep->fullCData(oldp+235,(vlSelf->TOP__DOT__MEM__DOT__ram6[8]),8);
    tracep->fullCData(oldp+236,(vlSelf->TOP__DOT__MEM__DOT__ram6[9]),8);
    tracep->fullCData(oldp+237,(vlSelf->TOP__DOT__MEM__DOT__ram6[10]),8);
    tracep->fullCData(oldp+238,(vlSelf->TOP__DOT__MEM__DOT__ram6[11]),8);
    tracep->fullCData(oldp+239,(vlSelf->TOP__DOT__MEM__DOT__ram6[12]),8);
    tracep->fullCData(oldp+240,(vlSelf->TOP__DOT__MEM__DOT__ram6[13]),8);
    tracep->fullCData(oldp+241,(vlSelf->TOP__DOT__MEM__DOT__ram6[14]),8);
    tracep->fullCData(oldp+242,(vlSelf->TOP__DOT__MEM__DOT__ram6[15]),8);
    tracep->fullCData(oldp+243,(vlSelf->TOP__DOT__MEM__DOT__ram7[0]),8);
    tracep->fullCData(oldp+244,(vlSelf->TOP__DOT__MEM__DOT__ram7[1]),8);
    tracep->fullCData(oldp+245,(vlSelf->TOP__DOT__MEM__DOT__ram7[2]),8);
    tracep->fullCData(oldp+246,(vlSelf->TOP__DOT__MEM__DOT__ram7[3]),8);
    tracep->fullCData(oldp+247,(vlSelf->TOP__DOT__MEM__DOT__ram7[4]),8);
    tracep->fullCData(oldp+248,(vlSelf->TOP__DOT__MEM__DOT__ram7[5]),8);
    tracep->fullCData(oldp+249,(vlSelf->TOP__DOT__MEM__DOT__ram7[6]),8);
    tracep->fullCData(oldp+250,(vlSelf->TOP__DOT__MEM__DOT__ram7[7]),8);
    tracep->fullCData(oldp+251,(vlSelf->TOP__DOT__MEM__DOT__ram7[8]),8);
    tracep->fullCData(oldp+252,(vlSelf->TOP__DOT__MEM__DOT__ram7[9]),8);
    tracep->fullCData(oldp+253,(vlSelf->TOP__DOT__MEM__DOT__ram7[10]),8);
    tracep->fullCData(oldp+254,(vlSelf->TOP__DOT__MEM__DOT__ram7[11]),8);
    tracep->fullCData(oldp+255,(vlSelf->TOP__DOT__MEM__DOT__ram7[12]),8);
    tracep->fullCData(oldp+256,(vlSelf->TOP__DOT__MEM__DOT__ram7[13]),8);
    tracep->fullCData(oldp+257,(vlSelf->TOP__DOT__MEM__DOT__ram7[14]),8);
    tracep->fullCData(oldp+258,(vlSelf->TOP__DOT__MEM__DOT__ram7[15]),8);
    tracep->fullCData(oldp+259,(vlSelf->TOP__DOT__MEM__DOT__ram8[0]),8);
    tracep->fullCData(oldp+260,(vlSelf->TOP__DOT__MEM__DOT__ram8[1]),8);
    tracep->fullCData(oldp+261,(vlSelf->TOP__DOT__MEM__DOT__ram8[2]),8);
    tracep->fullCData(oldp+262,(vlSelf->TOP__DOT__MEM__DOT__ram8[3]),8);
    tracep->fullCData(oldp+263,(vlSelf->TOP__DOT__MEM__DOT__ram8[4]),8);
    tracep->fullCData(oldp+264,(vlSelf->TOP__DOT__MEM__DOT__ram8[5]),8);
    tracep->fullCData(oldp+265,(vlSelf->TOP__DOT__MEM__DOT__ram8[6]),8);
    tracep->fullCData(oldp+266,(vlSelf->TOP__DOT__MEM__DOT__ram8[7]),8);
    tracep->fullCData(oldp+267,(vlSelf->TOP__DOT__MEM__DOT__ram8[8]),8);
    tracep->fullCData(oldp+268,(vlSelf->TOP__DOT__MEM__DOT__ram8[9]),8);
    tracep->fullCData(oldp+269,(vlSelf->TOP__DOT__MEM__DOT__ram8[10]),8);
    tracep->fullCData(oldp+270,(vlSelf->TOP__DOT__MEM__DOT__ram8[11]),8);
    tracep->fullCData(oldp+271,(vlSelf->TOP__DOT__MEM__DOT__ram8[12]),8);
    tracep->fullCData(oldp+272,(vlSelf->TOP__DOT__MEM__DOT__ram8[13]),8);
    tracep->fullCData(oldp+273,(vlSelf->TOP__DOT__MEM__DOT__ram8[14]),8);
    tracep->fullCData(oldp+274,(vlSelf->TOP__DOT__MEM__DOT__ram8[15]),8);
}

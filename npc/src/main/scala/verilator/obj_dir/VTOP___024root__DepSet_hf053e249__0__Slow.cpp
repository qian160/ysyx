// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTOP__Syms.h"
#include "VTOP___024root.h"

void VTOP___024unit____Vdpiimwrap_vga_update_TOP____024unit(std::string s);

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___settle__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__0;
    VlWide<3>/*95:0*/ __Vtemp_h12d5adeb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__1;
    VlWide<3>/*95:0*/ __Vtemp_h6e016bcf__2;
    VlWide<3>/*95:0*/ __Vtemp_hcc93d1e0__0;
    VlWide<4>/*127:0*/ __Vtemp_h599f8521__0;
    VlWide<4>/*127:0*/ __Vtemp_h40fff369__0;
    VlWide<4>/*127:0*/ __Vtemp_h494ecee6__0;
    VlWide<4>/*127:0*/ __Vtemp_h59a031f2__0;
    VlWide<4>/*127:0*/ __Vtemp_h4100257a__0;
    VlWide<4>/*127:0*/ __Vtemp_h2f574ed7__0;
    VlWide<4>/*127:0*/ __Vtemp_h599f8521__1;
    VlWide<4>/*127:0*/ __Vtemp_he8bda1a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h0debb3cb__0;
    VlWide<4>/*127:0*/ __Vtemp_h603456c9__0;
    VlWide<4>/*127:0*/ __Vtemp_h6705f6be__0;
    VlWide<4>/*127:0*/ __Vtemp_h69f01b3b__0;
    VlWide<4>/*127:0*/ __Vtemp_h67072e73__0;
    VlWide<4>/*127:0*/ __Vtemp_hb416e61a__0;
    VlWide<4>/*127:0*/ __Vtemp_h380dd3eb__0;
    VlWide<4>/*127:0*/ __Vtemp_h92974c38__0;
    VlWide<4>/*127:0*/ __Vtemp_h772440ef__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6f42b1d__0;
    VlWide<4>/*127:0*/ __Vtemp_h31640910__0;
    VlWide<4>/*127:0*/ __Vtemp_h63910909__0;
    VlWide<4>/*127:0*/ __Vtemp_h6385b8e4__0;
    VlWide<4>/*127:0*/ __Vtemp_h86e6681e__0;
    VlWide<4>/*127:0*/ __Vtemp_h694e1b02__0;
    VlWide<4>/*127:0*/ __Vtemp_h67411b09__0;
    VlWide<4>/*127:0*/ __Vtemp_h692bf7e5__0;
    VlWide<3>/*95:0*/ __Vtemp_h597d9c60__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6d71b49__0;
    VlWide<3>/*95:0*/ __Vtemp_h415d4a18__0;
    VlWide<3>/*95:0*/ __Vtemp_hba08b2ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h8cdc7978__0;
    VlWide<3>/*95:0*/ __Vtemp_hd0a93f6f__0;
    VlWide<4>/*127:0*/ __Vtemp_h5caf4398__0;
    VlWide<4>/*127:0*/ __Vtemp_h0d63960f__0;
    VlWide<5>/*159:0*/ __Vtemp_h59a58cdc__0;
    VlWide<5>/*159:0*/ __Vtemp_ha26f5680__0;
    VlWide<3>/*95:0*/ __Vtemp_h415de8e7__0;
    VlWide<5>/*159:0*/ __Vtemp_ha8e0b4b8__0;
    VlWide<5>/*159:0*/ __Vtemp_h3412402a__0;
    VlWide<5>/*159:0*/ __Vtemp_h4ac83dc7__0;
    VlWide<4>/*127:0*/ __Vtemp_h85100470__0;
    VlWide<4>/*127:0*/ __Vtemp_h22a2c21f__0;
    VlWide<4>/*127:0*/ __Vtemp_h9eae70cd__0;
    VlWide<4>/*127:0*/ __Vtemp_ha512ec9a__0;
    VlWide<4>/*127:0*/ __Vtemp_h2d7527d0__0;
    VlWide<4>/*127:0*/ __Vtemp_h95ce9d44__0;
    VlWide<3>/*95:0*/ __Vtemp_hc9c1da9f__0;
    VlWide<3>/*95:0*/ __Vtemp_hfb1bc2e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h49cf1568__0;
    VlWide<3>/*95:0*/ __Vtemp_h86f7ce9f__0;
    VlWide<3>/*95:0*/ __Vtemp_hda19d0ba__0;
    VlWide<3>/*95:0*/ __Vtemp_h45976053__0;
    VlWide<3>/*95:0*/ __Vtemp_hbd746cff__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b56c48b__0;
    VlWide<3>/*95:0*/ __Vtemp_h9771ecc3__0;
    // Body
    vlSelf->io_csrData_epc = vlSelf->TOP__DOT__Csr__DOT__mepc;
    vlSelf->io_csrData_tvec = vlSelf->TOP__DOT__Csr__DOT__mtvec;
    vlSelf->io_csrData_cause = vlSelf->TOP__DOT__Csr__DOT__mcause;
    vlSelf->io_csrData_status = vlSelf->TOP__DOT__Csr__DOT__mstatus;
    vlSelf->io_regs_0 = vlSelf->TOP__DOT__Regfile__DOT__registers_0;
    vlSelf->io_regs_1 = vlSelf->TOP__DOT__Regfile__DOT__registers_1;
    vlSelf->io_regs_2 = vlSelf->TOP__DOT__Regfile__DOT__registers_2;
    vlSelf->io_regs_3 = vlSelf->TOP__DOT__Regfile__DOT__registers_3;
    vlSelf->io_regs_4 = vlSelf->TOP__DOT__Regfile__DOT__registers_4;
    vlSelf->io_regs_5 = vlSelf->TOP__DOT__Regfile__DOT__registers_5;
    vlSelf->io_regs_6 = vlSelf->TOP__DOT__Regfile__DOT__registers_6;
    vlSelf->io_regs_7 = vlSelf->TOP__DOT__Regfile__DOT__registers_7;
    vlSelf->io_regs_8 = vlSelf->TOP__DOT__Regfile__DOT__registers_8;
    vlSelf->io_regs_9 = vlSelf->TOP__DOT__Regfile__DOT__registers_9;
    vlSelf->io_regs_10 = vlSelf->TOP__DOT__Regfile__DOT__registers_10;
    vlSelf->io_regs_11 = vlSelf->TOP__DOT__Regfile__DOT__registers_11;
    vlSelf->io_regs_12 = vlSelf->TOP__DOT__Regfile__DOT__registers_12;
    vlSelf->io_regs_13 = vlSelf->TOP__DOT__Regfile__DOT__registers_13;
    vlSelf->io_regs_14 = vlSelf->TOP__DOT__Regfile__DOT__registers_14;
    vlSelf->io_regs_15 = vlSelf->TOP__DOT__Regfile__DOT__registers_15;
    vlSelf->io_regs_16 = vlSelf->TOP__DOT__Regfile__DOT__registers_16;
    vlSelf->io_regs_17 = vlSelf->TOP__DOT__Regfile__DOT__registers_17;
    vlSelf->io_regs_18 = vlSelf->TOP__DOT__Regfile__DOT__registers_18;
    vlSelf->io_regs_19 = vlSelf->TOP__DOT__Regfile__DOT__registers_19;
    vlSelf->io_regs_20 = vlSelf->TOP__DOT__Regfile__DOT__registers_20;
    vlSelf->io_regs_21 = vlSelf->TOP__DOT__Regfile__DOT__registers_21;
    vlSelf->io_regs_22 = vlSelf->TOP__DOT__Regfile__DOT__registers_22;
    vlSelf->io_regs_23 = vlSelf->TOP__DOT__Regfile__DOT__registers_23;
    vlSelf->io_regs_24 = vlSelf->TOP__DOT__Regfile__DOT__registers_24;
    vlSelf->io_regs_25 = vlSelf->TOP__DOT__Regfile__DOT__registers_25;
    vlSelf->io_regs_26 = vlSelf->TOP__DOT__Regfile__DOT__registers_26;
    vlSelf->io_regs_27 = vlSelf->TOP__DOT__Regfile__DOT__registers_27;
    vlSelf->io_regs_28 = vlSelf->TOP__DOT__Regfile__DOT__registers_28;
    vlSelf->io_regs_29 = vlSelf->TOP__DOT__Regfile__DOT__registers_29;
    vlSelf->io_regs_30 = vlSelf->TOP__DOT__Regfile__DOT__registers_30;
    vlSelf->io_regs_31 = vlSelf->TOP__DOT__Regfile__DOT__registers_31;
    vlSelf->io_pc_o = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
        = vlSelf->TOP__DOT__Main_Memory__DOT__ram[(0xfffffU 
                                                   & (IData)(
                                                             (((QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)) 
                                                               - 0x80000000ULL) 
                                                              >> 2U)))];
    vlSelf->io_inst_o = vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data;
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_13 
        = ((0x1000U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                       >> 0x13U)) | ((0x800U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                            >> 7U)))));
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_branchOp_newPC_T_24 
        = ((0x100000U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                         >> 0xbU)) | ((0xff000U & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data) 
                                      | ((0x800U & 
                                          (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                               >> 0x14U)))));
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16 
        = ((0xfe0U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                      >> 0x14U)) | (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 7U)));
    vlSelf->TOP__DOT__ID__DOT__immI = (((- (QData)((IData)(
                                                           (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                    >> 0x14U))));
    vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal = ((0x305U 
                                                  == 
                                                  (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                   >> 0x14U))
                                                  ? vlSelf->TOP__DOT__Csr__DOT__mtvec
                                                  : 
                                                 ((0x300U 
                                                   == 
                                                   (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0x14U))
                                                   ? vlSelf->TOP__DOT__Csr__DOT__mstatus
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U))
                                                    ? vlSelf->TOP__DOT__Csr__DOT__mcause
                                                    : 
                                                   ((0x341U 
                                                     == 
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U))
                                                     ? vlSelf->TOP__DOT__Csr__DOT__mepc
                                                     : 0ULL))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_203 = ((0x501bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 0x1cU
                                                 : 
                                                ((0x4000501bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0x1dU
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0x19U
                                                   : 
                                                  ((0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0x1aU
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0x1bU
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0x1cU
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0x1dU
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0x18U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0x15U
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0x16U
                                                             : 
                                                            ((0x200603bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0x14U
                                                              : 
                                                             ((0x200703bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0x17U
                                                               : 0U)))))))))))))));
    vlSelf->TOP__DOT__Regfile__DOT___GEN_77 = ((0xdU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                                : (
                                                   (0xcU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                     : 
                                                    ((0xaU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                       : 
                                                      ((8U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                           : 
                                                          ((4U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                            : 
                                                           ((3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                             : 
                                                            ((2U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                               : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    vlSelf->TOP__DOT__Regfile__DOT___GEN_109 = ((0xdU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                                 : 
                                                ((0xcU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                             : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_140 = ((0x4000501bU 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 1U
                                                 : 
                                                ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4000503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x200703bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == 
                                                               (0xfff0007fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 6U
                                                               : 7U)))))))))))))));
    vlSelf->io_csrData_csrVal = vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal;
    vlSelf->TOP__DOT__ID__DOT___decRes_T_218 = ((0x2006033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 0x11U
                                                 : 
                                                ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0x13U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 4U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 5U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 6U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 7U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0xaU
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0x1eU
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0x1fU
                                                            : 
                                                           ((0x73U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x1bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0x19U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0x1bU
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_203))))))))))))))));
    vlSelf->TOP__DOT__Regfile__DOT___GEN_90 = ((0x1aU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                                : (
                                                   (0x19U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                      : 
                                                     ((0x16U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                       : 
                                                      ((0x15U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                        : 
                                                       ((0x14U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                         : 
                                                        ((0x13U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                          : 
                                                         ((0x12U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                           : 
                                                          ((0x11U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                            : 
                                                           ((0x10U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                             : 
                                                            ((0xfU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                  >> 0xfU)))
                                                              ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                              : 
                                                             ((0xeU 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                   >> 0xfU)))
                                                               ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                               : vlSelf->TOP__DOT__Regfile__DOT___GEN_77)))))))))))));
    vlSelf->TOP__DOT__Regfile__DOT___GEN_122 = ((0x1aU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                                 : 
                                                ((0x19U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                                  : 
                                                 ((0x18U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                >> 0x14U)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                 >> 0x14U)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                             : vlSelf->TOP__DOT__Regfile__DOT___GEN_109)))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_155 = ((0x2007033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 0U
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 3U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 3U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 3U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 3U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 4U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 2U
                                                           : 
                                                          ((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x101bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x501bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_140))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_233 = ((0x5013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 8U
                                                 : 
                                                ((0x40005013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 9U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0xbU
                                                           : 
                                                          ((0x2001033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0xcU
                                                            : 
                                                           ((0x2002033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0xeU
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0x10U
                                                              : 
                                                             ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0x12U
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_218))))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val = 
        ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
          : ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                 >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
              : ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                     >> 0xfU))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                  : ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xfU)))
                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                      : ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 0xfU)))
                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                          : vlSelf->TOP__DOT__Regfile__DOT___GEN_90)))));
    vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val = 
        ((0x1fU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                             >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
          : ((0x1eU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                 >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
              : ((0x1dU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                     >> 0x14U))) ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                  : ((0x1cU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0x14U)))
                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                      : ((0x1bU == (0x1fU & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                             >> 0x14U)))
                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                          : vlSelf->TOP__DOT__Regfile__DOT___GEN_122)))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_170 = ((0x40005013U 
                                                 == 
                                                 (0xfc00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 1U
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 1U
                                                  : 
                                                 ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_155))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_248 = ((0x1033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 7U
                                                 : 
                                                ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 2U
                                                  : 
                                                 ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 4U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 8U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 9U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 6U
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 3U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 4U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 5U
                                                             : 
                                                            ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 6U
                                                              : 
                                                             ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 7U
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_233))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT__rsVal = ((0x4000U & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                                         ? (((- (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                    >> 0x13U))))) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                  >> 0xfU)))))
                                         : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_185 = ((0x2033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                 ? 0U
                                                 : 
                                                ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_170))))))))))))))));
    if ((0x33U == (0xfe00707fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt = 0U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else if ((0x40000033U == (0xfe00707fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt = 1U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else {
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt 
            = vlSelf->TOP__DOT__ID__DOT___decRes_T_248;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = ((0x1033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                ? 0U
                                                : (IData)(vlSelf->TOP__DOT__ID__DOT___decRes_T_185));
    }
    if (VL_UNLIKELY(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                      ? (0xffffffffU == vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)
                      : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                         & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                            & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                               & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((5U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & ((6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
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
                                                                   >> 0x14U))))))))))))))))) {
        if ((0ULL != vlSelf->TOP__DOT__Regfile__DOT__registers_10)) {
            VL_WRITEF("\n\n hit \033[1;31mbad\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data);
        } else {
            VL_WRITEF("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data);
        }
        VL_FINISH_MT("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/verilator/verilog/DEBUG.v", 16, "");
    }
    vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_rf_wen 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                 | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                    & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                       | ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          | ((5U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                             & ((6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                & (0U != (7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                >> 0xcU)))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wen 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                 & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                    & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                       & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          & ((5U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                             & ((6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                & ((0U != (7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                 >> 0xcU))) 
                                   | (IData)(((0U == 
                                               (0x300000U 
                                                & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data)) 
                                              & (2U 
                                                 != 
                                                 (3U 
                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U))))))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr 
        = (0xfffU & ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                      ? (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                         >> 0x14U) : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                       ? (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                          >> 0x14U)
                                       : ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                              >> 0x14U)
                                           : ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                               ? (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                  >> 0x14U)
                                               : ((2U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                   >> 0x14U)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                    >> 0x14U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                     ? 
                                                    (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                     >> 0x14U)
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                      ? 
                                                     ((0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 
                                                      (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0x14U)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (3U 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? 
                                                       (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0x14U)
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? 0x305U
                                                         : 
                                                        (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0x14U))))
                                                      : 
                                                     (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0x14U))))))))));
    vlSelf->TOP__DOT__ID__DOT___GEN_83 = ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                          & ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                              ? ((7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                      >> 0xcU)))
                                                  ? 
                                                 (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                  >= vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                  : 
                                                 ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                   < vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                        >> 0xcU)))
                                                    ? 
                                                   VL_GTES_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
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
                                                                 & (vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val 
                                                                    == vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))))))))
                                              : ((2U 
                                                  != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                 & ((4U 
                                                     == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                    | ((5U 
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
                                                                 == 
                                                                 (3U 
                                                                  & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                     >> 0x14U))) 
                                                                | (0U 
                                                                   == 
                                                                   (3U 
                                                                    & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                       >> 0x14U)))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                 & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                    & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                       & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                          & (5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata 
        = ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
            ? 0ULL : ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                       ? 0ULL : ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                  ? 0ULL : ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? 0ULL
                                             : ((2U 
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
                                                      & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? 
                                                     (vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal 
                                                      & (~ vlSelf->TOP__DOT__ID__DOT__rsVal))
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0xcU)))
                                                       ? 
                                                      (vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal 
                                                       | vlSelf->TOP__DOT__ID__DOT__rsVal)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                            >> 0xcU)))
                                                        ? vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val
                                                        : 0ULL)))
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? 0ULL
                                                      : 
                                                     ((0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                                                       : 0ULL)))
                                                    : 0ULL))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned 
        = ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
           & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
              & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                 >> 0xeU)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = 0U;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 
                                               (3U 
                                                & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                   >> 0xcU)));
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 0U);
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 0U);
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 0U);
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 0U);
    } else if ((5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 
                                               (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                >> 0xcU));
    } else {
        vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_112 = (7U & 0U);
    }
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__0, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h12d5adeb__0, ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                ? 4ULL
                                                : vlSelf->TOP__DOT__ID__DOT__immI));
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__1, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h6e016bcf__2, vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_hcc93d1e0__0, ((4U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 4ULL
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(vlSelf->TOP__DOT__ID__DOT___io_decInfo_o_aluOp_src2_T_16)))
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
                                                      : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val)
                                                     : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs2Val))));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = __Vtemp_h6e016bcf__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = __Vtemp_h6e016bcf__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = __Vtemp_h6e016bcf__0[2U];
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = __Vtemp_h12d5adeb__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = __Vtemp_h12d5adeb__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = __Vtemp_h12d5adeb__0[2U];
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = ((0x67U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val);
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = __Vtemp_h6e016bcf__1[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = __Vtemp_h6e016bcf__1[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = __Vtemp_h6e016bcf__1[2U];
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = __Vtemp_h6e016bcf__2[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = __Vtemp_h6e016bcf__2[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = __Vtemp_h6e016bcf__2[2U];
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val;
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = ((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                               >> 0xcU))))) 
                                                   << 0xcU);
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = (
                                                   ((IData)(
                                                            (((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                              << 0x14U) 
                                                             | (QData)((IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0xcU))))) 
                                                    >> 0x14U) 
                                                   | ((IData)(
                                                              ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                                 << 0x14U) 
                                                                | (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0xcU)))) 
                                                               >> 0x20U)) 
                                                      << 0xcU));
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = ((IData)(
                                                           ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                              << 0x14U) 
                                                             | (QData)((IData)(
                                                                               (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                                                                >> 0xcU)))) 
                                                            >> 0x20U)) 
                                                   >> 0x14U);
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = ((0x37U == (0x7fU & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                ? 0ULL : (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)));
    } else {
        vlSelf->TOP__DOT__ID__DOT___GEN_108[0U] = __Vtemp_hcc93d1e0__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[1U] = __Vtemp_hcc93d1e0__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_108[2U] = __Vtemp_hcc93d1e0__0[2U];
        vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
            = ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                : ((5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                    ? vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val
                    : ((6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                        ? ((0U != (7U & (vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data 
                                         >> 0xcU)))
                            ? vlSelf->TOP__DOT__Csr_io_csrData_o_csrVal
                            : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val)
                        : vlSelf->TOP__DOT__Regfile_io_readRes_o_rs1Val)));
    }
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : (((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                              & ((1U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 
                                                 (0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))
                                                  : (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_83)))
                                              ? ((7U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
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
                                                                 + vlSelf->TOP__DOT__IF__DOT__pc)))));
    vlSelf->io_o2 = vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata;
    if ((0x305U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr))) {
        vlSelf->TOP__DOT__Csr__DOT___GEN_1 = vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata;
        vlSelf->TOP__DOT__Csr__DOT___GEN_2 = vlSelf->TOP__DOT__Csr__DOT__mstatus;
    } else {
        vlSelf->TOP__DOT__Csr__DOT___GEN_1 = vlSelf->TOP__DOT__Csr__DOT__mtvec;
        vlSelf->TOP__DOT__Csr__DOT___GEN_2 = ((0x300U 
                                               == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_waddr))
                                               ? vlSelf->TOP__DOT__ID_io_decInfo_o_writeOp_csr_wdata
                                               : vlSelf->TOP__DOT__Csr__DOT__mstatus);
    }
    vlSelf->TOP__DOT__Main_Memory__DOT__store_en = 
        ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
          ? 0xffU : ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                      ? 0xfU : ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))
                                 ? 3U : 1U)));
    vlSelf->io_src2 = (((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])));
    vlSelf->io_src1 = vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1;
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_126 = VL_DIV_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                          vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_133 = VL_MODDIV_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                             vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_68 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                               >> (0x1fU 
                                                   & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]));
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_77 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                             (0x1fU 
                                                              & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]));
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_109 = VL_MODDIVS_III(32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1), 
                                                              vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_34 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                               + vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_42 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1) 
                                               - vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]);
    VL_EXTEND_WQ(128,64, __Vtemp_h599f8521__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_EXTEND_WQ(128,64, __Vtemp_h40fff369__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))));
    VL_MUL_W(4, __Vtemp_h494ecee6__0, __Vtemp_h599f8521__0, __Vtemp_h40fff369__0);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[0U] = __Vtemp_h494ecee6__0[0U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[1U] = __Vtemp_h494ecee6__0[1U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[2U] = __Vtemp_h494ecee6__0[2U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[3U] = __Vtemp_h494ecee6__0[3U];
    VL_EXTENDS_WQ(128,64, __Vtemp_h59a031f2__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_EXTENDS_WQ(128,64, __Vtemp_h4100257a__0, (((QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))));
    VL_MULS_WWW(128, __Vtemp_h2f574ed7__0, __Vtemp_h59a031f2__0, __Vtemp_h4100257a__0);
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[0U] = __Vtemp_h2f574ed7__0[0U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[1U] = __Vtemp_h2f574ed7__0[1U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[2U] = __Vtemp_h2f574ed7__0[2U];
    vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[3U] = __Vtemp_h2f574ed7__0[3U];
    VL_EXTEND_WQ(127,64, __Vtemp_h599f8521__1, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_he8bda1a2__0, __Vtemp_h599f8521__1, 
                  (0x3fU & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]));
    __Vtemp_h0debb3cb__0[0U] = __Vtemp_he8bda1a2__0[0U];
    __Vtemp_h0debb3cb__0[1U] = __Vtemp_he8bda1a2__0[1U];
    __Vtemp_h0debb3cb__0[2U] = __Vtemp_he8bda1a2__0[2U];
    __Vtemp_h0debb3cb__0[3U] = (0x7fffffffU & __Vtemp_he8bda1a2__0[3U]);
    VL_EXTEND_WW(128,127, __Vtemp_h603456c9__0, __Vtemp_h0debb3cb__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h6705f6be__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                & (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h69f01b3b__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                | (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h67072e73__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                ^ (
                                                   ((QData)((IData)(
                                                                    vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_hb416e61a__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp_h380dd3eb__0, ((0xbU 
                                                 == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[0U])))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                  ? (QData)((IData)(
                                                                    (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                                     < 
                                                                     (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))))))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                   ? (QData)((IData)(
                                                                     VL_LTS_IQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))))))
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))
                                                    ? 
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                    - 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))))
                                                    : 
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                    + 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))))))));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_h603456c9__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_h603456c9__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_h603456c9__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_h603456c9__0[3U];
    } else if ((6U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_h6705f6be__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_h6705f6be__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_h6705f6be__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_h6705f6be__0[3U];
    } else if ((5U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_h69f01b3b__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_h69f01b3b__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_h69f01b3b__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_h69f01b3b__0[3U];
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_h67072e73__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_h67072e73__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_h67072e73__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_h67072e73__0[3U];
    } else if ((0xcU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_hb416e61a__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_hb416e61a__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_hb416e61a__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_hb416e61a__0[3U];
    } else if ((0xdU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_15[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U] 
            = __Vtemp_h380dd3eb__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U] 
            = __Vtemp_h380dd3eb__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U] 
            = __Vtemp_h380dd3eb__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U] 
            = __Vtemp_h380dd3eb__0[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h92974c38__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (0xffffffffULL 
                                                                                & (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])) 
                                                                                >> 0x1fU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x7fffffffffffffffULL 
                                                                   & ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                      << 
                                                                      (0x1fU 
                                                                       & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))))));
    VL_EXTEND_WQ(128,64, __Vtemp_h772440ef__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                                * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))) 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1)) 
                                                                   * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))))));
    VL_EXTEND_WQ(128,64, __Vtemp_ha6f42b1d__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_42 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_42))));
    VL_EXTEND_WQ(128,64, __Vtemp_h31640910__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_34 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_34))));
    VL_EXTEND_WQ(128,64, __Vtemp_h63910909__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                              (0x3fU 
                                                               & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])));
    VL_EXTEND_WQ(128,64, __Vtemp_h6385b8e4__0, (vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])));
    if ((0x1bU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_h92974c38__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_h92974c38__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_h92974c38__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_h92974c38__0[3U];
    } else if ((0x18U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_h772440ef__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_h772440ef__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_h772440ef__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_h772440ef__0[3U];
    } else if ((0x1aU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_ha6f42b1d__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_ha6f42b1d__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_ha6f42b1d__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_ha6f42b1d__0[3U];
    } else if ((0x19U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_h31640910__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_h31640910__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_h31640910__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_h31640910__0[3U];
    } else if ((9U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_h63910909__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_h63910909__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_h63910909__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_h63910909__0[3U];
    } else if ((8U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = __Vtemp_h6385b8e4__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = __Vtemp_h6385b8e4__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = __Vtemp_h6385b8e4__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = __Vtemp_h6385b8e4__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_155[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_h86e6681e__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_109 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_109))));
    VL_EXTEND_WQ(128,64, __Vtemp_h694e1b02__0, VL_MODDIV_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                             (((QData)((IData)(
                                                                               vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h67411b09__0, VL_MODDIVS_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                              (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTEND_WQ(128,64, __Vtemp_h692bf7e5__0, VL_DIV_QQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1, 
                                                          (((QData)((IData)(
                                                                            vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->TOP__DOT__ID__DOT___GEN_108[0U])))));
    VL_EXTENDS_WQ(65,64, __Vtemp_h597d9c60__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    __Vtemp_hd6d71b49__0[0U] = __Vtemp_h597d9c60__0[0U];
    __Vtemp_hd6d71b49__0[1U] = __Vtemp_h597d9c60__0[1U];
    __Vtemp_hd6d71b49__0[2U] = (1U & __Vtemp_h597d9c60__0[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp_h415d4a18__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))));
    __Vtemp_hba08b2ca__0[0U] = __Vtemp_h415d4a18__0[0U];
    __Vtemp_hba08b2ca__0[1U] = __Vtemp_h415d4a18__0[1U];
    __Vtemp_hba08b2ca__0[2U] = (1U & __Vtemp_h415d4a18__0[2U]);
    VL_DIVS_WWW(65, __Vtemp_h8cdc7978__0, __Vtemp_hd6d71b49__0, __Vtemp_hba08b2ca__0);
    __Vtemp_hd0a93f6f__0[0U] = __Vtemp_h8cdc7978__0[0U];
    __Vtemp_hd0a93f6f__0[1U] = __Vtemp_h8cdc7978__0[1U];
    __Vtemp_hd0a93f6f__0[2U] = (1U & __Vtemp_h8cdc7978__0[2U]);
    VL_EXTEND_WW(128,65, __Vtemp_h5caf4398__0, __Vtemp_hd0a93f6f__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h0d63960f__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__EX__DOT___aluRes_T_13[2U]))));
    VL_EXTENDS_WQ(129,64, __Vtemp_h59a58cdc__0, vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1);
    __Vtemp_ha26f5680__0[0U] = __Vtemp_h59a58cdc__0[0U];
    __Vtemp_ha26f5680__0[1U] = __Vtemp_h59a58cdc__0[1U];
    __Vtemp_ha26f5680__0[2U] = __Vtemp_h59a58cdc__0[2U];
    __Vtemp_ha26f5680__0[3U] = __Vtemp_h59a58cdc__0[3U];
    __Vtemp_ha26f5680__0[4U] = (1U & __Vtemp_h59a58cdc__0[4U]);
    VL_EXTEND_WQ(65,64, __Vtemp_h415de8e7__0, (((QData)((IData)(
                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))));
    VL_EXTENDS_WW(129,65, __Vtemp_ha8e0b4b8__0, __Vtemp_h415de8e7__0);
    __Vtemp_h3412402a__0[0U] = __Vtemp_ha8e0b4b8__0[0U];
    __Vtemp_h3412402a__0[1U] = __Vtemp_ha8e0b4b8__0[1U];
    __Vtemp_h3412402a__0[2U] = __Vtemp_ha8e0b4b8__0[2U];
    __Vtemp_h3412402a__0[3U] = __Vtemp_ha8e0b4b8__0[3U];
    __Vtemp_h3412402a__0[4U] = (1U & __Vtemp_ha8e0b4b8__0[4U]);
    VL_MULS_WWW(129, __Vtemp_h4ac83dc7__0, __Vtemp_ha26f5680__0, __Vtemp_h3412402a__0);
    VL_EXTEND_WQ(128,64, __Vtemp_h85100470__0, (((QData)((IData)(
                                                                 __Vtemp_h4ac83dc7__0[3U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_h4ac83dc7__0[2U]))));
    VL_EXTEND_WQ(128,64, __Vtemp_h22a2c21f__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_77 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_77))));
    VL_EXTEND_WQ(128,64, __Vtemp_h9eae70cd__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_68 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_68))));
    if ((0x14U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h86e6681e__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h86e6681e__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h86e6681e__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h86e6681e__0[3U];
    } else if ((0x13U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h694e1b02__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h694e1b02__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h694e1b02__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h694e1b02__0[3U];
    } else if ((0x11U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h67411b09__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h67411b09__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h67411b09__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h67411b09__0[3U];
    } else if ((0x12U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h692bf7e5__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h692bf7e5__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h692bf7e5__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h692bf7e5__0[3U];
    } else if ((0x10U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h5caf4398__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h5caf4398__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h5caf4398__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h5caf4398__0[3U];
    } else if ((0xcU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h0d63960f__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h0d63960f__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h0d63960f__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h0d63960f__0[3U];
    } else if ((0xeU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h85100470__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h85100470__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h85100470__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h85100470__0[3U];
    } else if ((0x1dU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h22a2c21f__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h22a2c21f__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h22a2c21f__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h22a2c21f__0[3U];
    } else if ((0x1cU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = __Vtemp_h9eae70cd__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = __Vtemp_h9eae70cd__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = __Vtemp_h9eae70cd__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = __Vtemp_h9eae70cd__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_167[3U];
    }
    VL_EXTEND_WQ(128,64, __Vtemp_ha512ec9a__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_133 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_133))));
    VL_EXTEND_WQ(128,64, __Vtemp_h2d7527d0__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (vlSelf->TOP__DOT__EX__DOT___aluRes_T_126 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_126))));
    VL_EXTEND_WQ(128,64, __Vtemp_h95ce9d44__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (3ULL 
                                                                                & (VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1))), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, 
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))) 
                                                                                >> 0x1fU)))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  (0x1ffffffffULL 
                                                                   & VL_DIVS_QQQ(33, 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_src1))), 
                                                                                (0x1ffffffffULL 
                                                                                & VL_EXTENDS_QI(33,32, 
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_108[0U]))))))));
    if ((0x17U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
            = __Vtemp_ha512ec9a__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U] 
            = __Vtemp_ha512ec9a__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[2U] 
            = __Vtemp_ha512ec9a__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[3U] 
            = __Vtemp_ha512ec9a__0[3U];
    } else if ((0x16U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
            = __Vtemp_h2d7527d0__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U] 
            = __Vtemp_h2d7527d0__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[2U] 
            = __Vtemp_h2d7527d0__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[3U] 
            = __Vtemp_h2d7527d0__0[3U];
    } else if ((0x15U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
            = __Vtemp_h95ce9d44__0[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U] 
            = __Vtemp_h95ce9d44__0[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[2U] 
            = __Vtemp_h95ce9d44__0[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[3U] 
            = __Vtemp_h95ce9d44__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[0U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[1U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[2U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[2U];
        vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[3U] 
            = vlSelf->TOP__DOT__EX__DOT___aluRes_T_185[3U];
    }
    vlSelf->TOP__DOT__Main_Memory__DOT___T_2 = ((0x80000000ULL 
                                                 <= 
                                                 (((QData)((IData)(
                                                                   vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                                & (0x87ffffffULL 
                                                   >= 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))));
    vlSelf->TOP__DOT__Main_Memory__DOT___T_69 = ((0xa00003f8ULL 
                                                  <= 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                                 & (0xa0000400ULL 
                                                    >= 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))));
    vlSelf->TOP__DOT__Main_Memory__DOT___T_74 = ((0xa0000048ULL 
                                                  <= 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                                 & (0xa0000050ULL 
                                                    >= 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))));
    vlSelf->TOP__DOT__Main_Memory__DOT___T_77 = ((0xa0000100ULL 
                                                  <= 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))) 
                                                 & (0xa0000108ULL 
                                                    >= 
                                                    (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))));
    vlSelf->TOP__DOT__Main_Memory__DOT__dword = (((QData)((IData)(
                                                                  vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                                                  [
                                                                  (0xfffffU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(
                                                                                (((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                                                - 0x80000000ULL) 
                                                                                >> 2U))))])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->TOP__DOT__Main_Memory__DOT__ram
                                                                   [
                                                                   (0xfffffU 
                                                                    & (IData)(
                                                                              (((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                                                - 0x80000000ULL) 
                                                                               >> 2U)))])));
    if (((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_2)) 
         & ((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)) 
            & ((~ (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)) 
               & ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_77) 
                  & ((0ULL != ((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                               - 0xa0000100ULL)) & 
                     ((2ULL != ((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                - 0xa0000100ULL)) & 
                      (4ULL == ((((QData)((IData)(vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                - 0xa0000100ULL))))))))) {
        VTOP___024unit____Vdpiimwrap_vga_update_TOP____024unit(
                                                               std::string("\nvga sync...do nothing now\n"));
    }
    VL_EXTEND_WQ(95,64, __Vtemp_hc9c1da9f__0, vlSelf->TOP__DOT__Main_Memory__DOT__dword);
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
    __Vtemp_h86f7ce9f__0[0U] = (__Vtemp_hc9c1da9f__0[0U] 
                                & __Vtemp_h49cf1568__0[0U]);
    __Vtemp_h86f7ce9f__0[1U] = (__Vtemp_hc9c1da9f__0[1U] 
                                & __Vtemp_h49cf1568__0[1U]);
    __Vtemp_h86f7ce9f__0[2U] = (__Vtemp_hc9c1da9f__0[2U] 
                                & __Vtemp_h49cf1568__0[2U]);
    VL_SHIFTR_WWI(95,95,5, __Vtemp_hda19d0ba__0, __Vtemp_h86f7ce9f__0, 
                  (0x18U & (vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U] 
                            << 3U)));
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U] 
        = __Vtemp_hda19d0ba__0[0U];
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U] 
        = __Vtemp_hda19d0ba__0[1U];
    vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U] 
        = (0x7fffffffU & __Vtemp_hda19d0ba__0[2U]);
    if ((1U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_16 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x20U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_17 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x28U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_18 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x30U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_19 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x38U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_12 
            = (0xffU & ((0U == (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))
                         ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                         : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_13 
            = (0xffU & ((1U == (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))
                         ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                         : (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                    >> 8U))));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_14 
            = (0xffU & ((2U == (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))
                         ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                         : (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                    >> 0x10U))));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_15 
            = (0xffU & ((3U == (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))
                         ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata)
                         : (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                    >> 0x18U))));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_16 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x20U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_17 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x28U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_18 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x30U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_19 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x38U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_12 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_13 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 8U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_14 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x10U)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_15 
            = (0xffU & (IData)((vlSelf->TOP__DOT__Main_Memory__DOT__dword 
                                >> 0x18U)));
    }
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
    VL_EXTEND_WQ(95,64, __Vtemp_h9771ecc3__0, ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_69)
                                                ? 0ULL
                                                : ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_74)
                                                    ? vlSelf->io_timer_i
                                                    : (QData)((IData)(
                                                                      ((IData)(vlSelf->TOP__DOT__Main_Memory__DOT___T_77)
                                                                        ? 
                                                                       ((0ULL 
                                                                         == 
                                                                         ((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                                          - 0xa0000100ULL))
                                                                         ? 0x12cU
                                                                         : 
                                                                        ((2ULL 
                                                                          == 
                                                                          ((((QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))) 
                                                                           - 0xa0000100ULL))
                                                                          ? 0x190U
                                                                          : 0U))
                                                                        : 0U))))));
    if (vlSelf->TOP__DOT__Main_Memory__DOT___T_2) {
        if ((3U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else if ((2U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                    = __Vtemp_h45976053__0[0U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                    = __Vtemp_h45976053__0[1U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                    = __Vtemp_h45976053__0[2U];
            }
        } else if ((1U == (3U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_112)))) {
            if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                    = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
            } else {
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                    = __Vtemp_hbd746cff__0[0U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                    = __Vtemp_hbd746cff__0[1U];
                vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                    = __Vtemp_hbd746cff__0[2U];
            }
        } else if (vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_unsigned) {
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[0U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[1U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                = vlSelf->TOP__DOT__Main_Memory__DOT__loadVal_temp[2U];
        } else {
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
                = __Vtemp_h9b56c48b__0[0U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
                = __Vtemp_h9b56c48b__0[1U];
            vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
                = __Vtemp_h9b56c48b__0[2U];
        }
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U] 
            = __Vtemp_h9771ecc3__0[0U];
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U] 
            = __Vtemp_h9771ecc3__0[1U];
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[2U] 
            = __Vtemp_h9771ecc3__0[2U];
    }
    if ((0x10U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_80 
            = (0xffU & ((4U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_16)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_81 
            = (0xffU & ((5U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_17)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_82 
            = (0xffU & ((6U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_18)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_83 
            = (0xffU & ((7U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_19)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_80 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_16));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_81 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_17));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_82 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_18));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_83 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_19));
    }
    if ((2U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_28 
            = (0xffU & ((0U == (3U & ((IData)(1U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 8U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_12)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_29 
            = (0xffU & ((1U == (3U & ((IData)(1U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 8U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_13)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_30 
            = (0xffU & ((2U == (3U & ((IData)(1U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 8U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_14)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_31 
            = (0xffU & ((3U == (3U & ((IData)(1U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 8U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_15)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_28 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_12));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_29 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_13));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_30 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_14));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_31 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_15));
    }
    vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata = (
                                                   ((7U 
                                                     != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                    & ((1U 
                                                        == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                       & (3U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->TOP__DOT__Main_Memory__DOT__ram_io_inst_o_MPORT_data))))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__Main_Memory__DOT___GEN_163[0U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))));
    if ((0x20U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_96 
            = (0xffU & ((4U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_80)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_97 
            = (0xffU & ((5U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_81)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_98 
            = (0xffU & ((6U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_82)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_99 
            = (0xffU & ((7U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_83)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_96 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_80));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_97 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_81));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_98 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_82));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_99 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_83));
    }
    if ((4U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_44 
            = (0xffU & ((0U == (3U & ((IData)(2U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x10U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_28)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_45 
            = (0xffU & ((1U == (3U & ((IData)(2U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x10U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_29)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_46 
            = (0xffU & ((2U == (3U & ((IData)(2U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x10U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_30)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_47 
            = (0xffU & ((3U == (3U & ((IData)(2U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x10U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_31)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_44 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_28));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_45 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_29));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_46 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_30));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_47 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_31));
    }
    vlSelf->io_o1 = vlSelf->TOP__DOT__MEM_io_writeOp_o_rf_wdata;
    if ((0x40U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112 
            = (0xffU & ((4U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_96)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113 
            = (0xffU & ((5U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_97)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114 
            = (0xffU & ((6U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_98)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115 
            = (0xffU & ((7U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_99)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_112 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_96));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_113 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_97));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_114 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_98));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_115 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_99));
    }
    if ((8U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_60 
            = (0xffU & ((0U == (3U & ((IData)(3U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x18U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_44)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_61 
            = (0xffU & ((1U == (3U & ((IData)(3U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x18U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_45)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_62 
            = (0xffU & ((2U == (3U & ((IData)(3U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x18U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_46)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_63 
            = (0xffU & ((3U == (3U & ((IData)(3U) + 
                                      vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U])))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x18U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_47)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_60 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_44));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_61 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_45));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_62 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_46));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_63 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_47));
    }
    if ((0x10U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_76 
            = (0xffU & ((0U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_60)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_77 
            = (0xffU & ((1U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_61)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_78 
            = (0xffU & ((2U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_62)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_79 
            = (0xffU & ((3U == (7U & ((IData)(4U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x20U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_63)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_76 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_60));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_77 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_61));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_78 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_62));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_79 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_63));
    }
    if ((0x20U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_92 
            = (0xffU & ((0U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_76)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_93 
            = (0xffU & ((1U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_77)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_94 
            = (0xffU & ((2U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_78)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_95 
            = (0xffU & ((3U == (7U & ((IData)(5U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x28U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_79)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_92 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_76));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_93 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_77));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_94 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_78));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_95 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_79));
    }
    if ((0x40U & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))) {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108 
            = (0xffU & ((0U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_92)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109 
            = (0xffU & ((1U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_93)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110 
            = (0xffU & ((2U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_94)));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111 
            = (0xffU & ((3U == (7U & ((IData)(6U) + 
                                      (3U & vlSelf->TOP__DOT__EX__DOT___aluRes_T_191[0U]))))
                         ? (IData)((vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_sdata 
                                    >> 0x30U)) : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_95)));
    } else {
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_108 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_92));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_109 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_93));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_110 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_94));
        vlSelf->TOP__DOT__Main_Memory__DOT___GEN_111 
            = (0xffU & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT___GEN_95));
    }
    vlSelf->TOP__DOT__Main_Memory__DOT___T_62 = (((QData)((IData)(
                                                                  ((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                      ? 
                                                                     ((0x80U 
                                                                       & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                       ? 
                                                                      ((7U 
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
                                                                                >> 0x38U))) 
                                                                    << 0x18U) 
                                                                   | ((0xff0000U 
                                                                       & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                            ? 
                                                                           ((0x80U 
                                                                             & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                             ? 
                                                                            ((6U 
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
                                                                                >> 0x30U))) 
                                                                          << 0x10U)) 
                                                                      | ((0xff00U 
                                                                          & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                               ? 
                                                                              ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                ? 
                                                                               ((5U 
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
                                                                                >> 0x28U))) 
                                                                             << 8U)) 
                                                                         | (0xffU 
                                                                            & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                ? 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((4U 
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
                                                                                >> 0x20U))))))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                       ? 
                                                                      ((0x80U 
                                                                        & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                        ? 
                                                                       ((3U 
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
                                                                                >> 0x18U))) 
                                                                     << 0x18U) 
                                                                    | ((0xff0000U 
                                                                        & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                             ? 
                                                                            ((0x80U 
                                                                              & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                              ? 
                                                                             ((2U 
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
                                                                                >> 0x10U))) 
                                                                           << 0x10U)) 
                                                                       | ((0xff00U 
                                                                           & (((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                ? 
                                                                               ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((1U 
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
                                                                                >> 8U))) 
                                                                              << 8U)) 
                                                                          | (0xffU 
                                                                             & ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_o_memOp_isStore)
                                                                                 ? 
                                                                                ((0x80U 
                                                                                & (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__store_en))
                                                                                 ? 
                                                                                ((0U 
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
                                                                                 : (IData)(vlSelf->TOP__DOT__Main_Memory__DOT__dword)))))))));
}

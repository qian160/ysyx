// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

extern const VlWide<16>/*511:0*/ VTOP__ConstPool__CONST_h07e49054_0;

VL_ATTR_COLD void VTOP___024root___initial__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(16, VTOP__ConstPool__CONST_h07e49054_0)
                 ,  &(vlSelf->TOP__DOT__IF__DOT__inst_rom)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___settle__TOP__0\n"); );
    // Init
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_140;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_155;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_170;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_185;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_207;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_222;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_237;
    CData/*0:0*/ TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1;
    SData/*11:0*/ TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_10;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_30;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_38;
    QData/*63:0*/ TOP__DOT__EX__DOT___aluRes_T_55;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_69;
    VlWide<4>/*126:0*/ TOP__DOT__EX__DOT___aluRes_T_91;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_77;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_90;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_109;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_122;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__0;
    VlWide<3>/*95:0*/ __Vtemp_h3703b819__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__1;
    VlWide<3>/*95:0*/ __Vtemp_h5f65369a__2;
    VlWide<3>/*95:0*/ __Vtemp_h2398d8f7__0;
    VlWide<3>/*95:0*/ __Vtemp_hcf491a8e__0;
    VlWide<3>/*95:0*/ __Vtemp_h59d0471c__0;
    VlWide<3>/*95:0*/ __Vtemp_hcf491a8e__1;
    VlWide<3>/*95:0*/ __Vtemp_h9a6e1f03__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf74b300__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1b92fdf__0;
    VlWide<4>/*127:0*/ __Vtemp_he4e2805c__0;
    VlWide<4>/*127:0*/ __Vtemp_h76d3e020__0;
    VlWide<4>/*127:0*/ __Vtemp_hcf74b300__1;
    VlWide<4>/*127:0*/ __Vtemp_h50d33f4b__0;
    VlWide<4>/*127:0*/ __Vtemp_haff70034__0;
    VlWide<4>/*127:0*/ __Vtemp_h27371b3d__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d15b800__0;
    VlWide<4>/*127:0*/ __Vtemp_h8d15b800__1;
    VlWide<4>/*127:0*/ __Vtemp_he0adbe15__0;
    VlWide<4>/*127:0*/ __Vtemp_h709a6ac4__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a75dcf3__0;
    VlWide<4>/*127:0*/ __Vtemp_h76bf409d__0;
    // Body
    vlSelf->io_pc_o = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
        = vlSelf->TOP__DOT__IF__DOT__inst_rom[(0x7fffU 
                                               & (vlSelf->TOP__DOT__IF__DOT__pc 
                                                  >> 2U))];
    vlSelf->io_inst_o = vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data;
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11 
        = ((0x1000U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                       >> 0x13U)) | ((0x800U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                            >> 7U)))));
    TOP__DOT__ID__DOT___decRes_T_207 = ((0x17U == (0x7fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0x19U : 
                                        ((0x73U == 
                                          (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                          ? 0U : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0x10U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0x12U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0x13U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0x14U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0x10U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0x11U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0x12U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0x13U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0x14U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0xbU
                                                               : 0U)))))))))))))));
    TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16 
        = ((0xfe0U & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                      >> 0x14U)) | (0x1fU & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                             >> 7U)));
    vlSelf->TOP__DOT__ID__DOT__immI = (((- (QData)((IData)(
                                                           (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                    >> 0x14U))));
    TOP__DOT__Regfile__DOT___GEN_77 = ((0xdU == (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                        : ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                            : ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                             : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__Regfile__DOT___GEN_109 = ((0xdU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                         : ((0xcU == 
                                             (0x1fU 
                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                 >> 0x14U)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                             : ((0xbU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                 : 
                                                ((0xaU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                    : 
                                                   ((7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                           : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_140 = ((0x4000501bU 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 1U : ((0x3bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4000003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x4000503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x200003bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x200403bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x200503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x200603bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x200703bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x100073U 
                                                               == 
                                                               (0xfff0007fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 6U
                                                               : 7U)))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_222 = ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0xcU : (
                                                   (0x2002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0xdU
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0x1bU
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0x1cU
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0x1dU
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 4U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 5U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 6U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 7U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                                ? 0xaU
                                                                : 
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                                 ? 0x18U
                                                                 : (IData)(TOP__DOT__ID__DOT___decRes_T_207))))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_90 = ((0x1aU == (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                        : ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                            : ((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                             : TOP__DOT__Regfile__DOT___GEN_77)))))))))))));
    TOP__DOT__Regfile__DOT___GEN_122 = ((0x1aU == (0x1fU 
                                                   & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                         : ((0x19U 
                                             == (0x1fU 
                                                 & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                    >> 0x14U)))
                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                             : ((0x18U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0x14U)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                 : 
                                                ((0x17U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                      >> 0x14U)))
                                                  ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                  : 
                                                 ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                       >> 0x14U)))
                                                   ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                   : 
                                                  ((0x15U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0x14U)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                              >> 0x14U)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                               >> 0x14U)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                           : TOP__DOT__Regfile__DOT___GEN_109)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_155 = ((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0U : ((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 3U
                                                  : 
                                                 ((0x1063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 3U
                                                   : 
                                                  ((0x4063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 3U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 3U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 3U
                                                       : 
                                                      ((0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 4U
                                                        : 
                                                       ((0x67U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 2U
                                                          : 
                                                         ((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 2U
                                                           : 
                                                          ((0x73U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 6U
                                                            : 
                                                           ((0x1bU 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x101bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x501bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_140))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_237 = ((0x4013U == 
                                         (0x707fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 4U : ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 5U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 6U
                                                   : 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 7U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 8U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0xbU
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_222))))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val = (
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                        : TOP__DOT__Regfile__DOT___GEN_90)))));
    vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val = (
                                                   (0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0x14U)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0x14U)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0x14U)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                                      : 
                                                     ((0x1cU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0x14U)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                       : 
                                                      ((0x1bU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0x14U)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                        : TOP__DOT__Regfile__DOT___GEN_122)))));
    TOP__DOT__ID__DOT___decRes_T_170 = ((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 1U : ((3U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 1U
                                                  : 
                                                 ((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 1U
                                                     : 
                                                    ((0x5003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x23U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 5U
                                                       : 
                                                      ((0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 5U
                                                        : 
                                                       ((0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 5U
                                                         : 
                                                        ((0x2000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x2001033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x2002033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2004033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x2005033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 0U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_155))))))))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt = ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 1U
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 7U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 2U
                                                     : 
                                                    ((0x3033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 3U
                                                      : 
                                                     ((0x4033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 4U
                                                       : 
                                                      ((0x5033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 8U
                                                        : 
                                                       ((0x40005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 9U
                                                         : 
                                                        ((0x6033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 5U
                                                          : 
                                                         ((0x7033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 6U
                                                           : 
                                                          ((0x13U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x2013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 2U
                                                             : 
                                                            ((0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 3U
                                                              : (IData)(TOP__DOT__ID__DOT___decRes_T_237))))))))))))));
    TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1 
        = (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
           == vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    TOP__DOT__ID__DOT___decRes_T_185 = ((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                         ? 0U : ((0x3033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : 
                                                 ((0x4033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                   ? 0U
                                                   : 
                                                  ((0x5033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                    ? 0U
                                                    : 
                                                   ((0x40005033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                     ? 0U
                                                     : 
                                                    ((0x6033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                      ? 0U
                                                      : 
                                                     ((0x7033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                       ? 0U
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                         ? 1U
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                          ? 1U
                                                          : 
                                                         ((0x4013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                           ? 1U
                                                           : 
                                                          ((0x6013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                            ? 1U
                                                            : 
                                                           ((0x7013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                             ? 1U
                                                             : 
                                                            ((0x1013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                              ? 1U
                                                              : 
                                                             ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_170))))))))))))))));
    vlSelf->TOP__DOT__ID__DOT___decRes_T_187 = ((0x40000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                 ? 0U
                                                 : 
                                                ((0x1033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                  ? 0U
                                                  : (IData)(TOP__DOT__ID__DOT___decRes_T_185)));
    if ((0x33U == (0xfe00707fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))) {
        vlSelf->io_instType = 0U;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = 0U;
    } else {
        vlSelf->io_instType = vlSelf->TOP__DOT__ID__DOT___decRes_T_187;
        vlSelf->TOP__DOT__ID__DOT__decRes_0 = vlSelf->TOP__DOT__ID__DOT___decRes_T_187;
    }
    vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen = 
        ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
         & ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
            | ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
               | ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                  & ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                     | (4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))));
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore = 
        ((7U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
         & ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
            & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
               & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                  & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                     & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                        & (5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))));
    if (VL_UNLIKELY(((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                      ? (0xffffffffU == vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)
                      : ((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                         & ((0U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                            & ((3U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                               & ((2U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                  & ((4U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                     & ((5U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                        & (6U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))))))))))) {
        if ((0ULL != vlSelf->TOP__DOT__Regfile__DOT__registers_10)) {
            VL_WRITEF("\n\n hit \033[1;31mbad\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data);
        } else {
            VL_WRITEF("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x\n",
                      64,(QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)),
                      32,vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data);
        }
        VL_FINISH_MT("verilog/DEBUG.v", 16, "");
    }
    vlSelf->TOP__DOT__ID__DOT___GEN_58 = ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                           ? 0ULL : 
                                          ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                            ? (QData)((IData)(
                                                              (0x67U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))
                                            : ((0U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 0ULL
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   ((7U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                         >> 0xcU)))
                                                     ? (QData)((IData)(TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1))
                                                     : 
                                                    ((6U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                          >> 0xcU)))
                                                      ? (QData)((IData)(TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1))
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                           >> 0xcU)))
                                                       ? (QData)((IData)(
                                                                         VL_GTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val)))
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                            >> 0xcU)))
                                                        ? (QData)((IData)(
                                                                          VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val)))
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                             >> 0xcU)))
                                                         ? 
                                                        (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                         ^ vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val)
                                                         : (QData)((IData)(
                                                                           ((0U 
                                                                             == 
                                                                             (0x7000U 
                                                                              & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data)) 
                                                                            & (IData)(TOP__DOT__ID__DOT___io_decInfo_branchOp_happen_T_1)))))))))
                                                    : (QData)((IData)(
                                                                      ((2U 
                                                                        != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                                       & (4U 
                                                                          == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign = ((7U 
                                                   != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                  & ((1U 
                                                      == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                     & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                        >> 0xeU)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = 0U;
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 
                                              (3U & 
                                               (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                >> 0xcU)));
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = ((0x67U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                ? (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc))
                : vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val);
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = ((0x37U == (0x7fU & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                ? 0ULL : (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc)));
    } else if ((4U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
        vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U & 0U);
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = (QData)((IData)(vlSelf->TOP__DOT__IF__DOT__pc));
    } else {
        if ((5U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
            vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                = vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val;
            vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U 
                                                  & (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                     >> 0xcU));
        } else {
            vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = 0ULL;
            vlSelf->TOP__DOT__ID__DOT___GEN_61 = (7U 
                                                  & 0U);
        }
        vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
            = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    }
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__0, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h3703b819__0, ((0x67U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))
                                                ? 4ULL
                                                : vlSelf->TOP__DOT__ID__DOT__immI));
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__1, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h5f65369a__2, vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val);
    VL_EXTEND_WQ(76,64, __Vtemp_h2398d8f7__0, ((4U 
                                                == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                ? 4ULL
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16) 
                                                                            >> 0xbU))))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(TOP__DOT__ID__DOT___io_decInfo_aluOp_src2_T_16)))
                                                    : vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val)));
    if ((7U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__0[2U];
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h3703b819__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h3703b819__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h3703b819__0[2U];
    } else if ((0U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__1[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__1[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__1[2U];
    } else if ((3U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h5f65369a__2[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h5f65369a__2[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h5f65369a__2[2U];
    } else if ((2U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = ((IData)(
                                                          (((- (QData)((IData)(
                                                                               (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                            << 0x14U) 
                                                           | (QData)((IData)(
                                                                             (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                              >> 0xcU))))) 
                                                  << 0xcU);
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = (((IData)(
                                                           (((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 0xcU))))) 
                                                   >> 0x14U) 
                                                  | ((IData)(
                                                             ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                                << 0x14U) 
                                                               | (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0xcU)))) 
                                                              >> 0x20U)) 
                                                     << 0xcU));
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = ((IData)(
                                                          ((((- (QData)((IData)(
                                                                                (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                                >> 0x1fU)))) 
                                                             << 0x14U) 
                                                            | (QData)((IData)(
                                                                              (vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data 
                                                                               >> 0xcU)))) 
                                                           >> 0x20U)) 
                                                  >> 0x14U);
    } else {
        vlSelf->TOP__DOT__ID__DOT___GEN_57[0U] = __Vtemp_h2398d8f7__0[0U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[1U] = __Vtemp_h2398d8f7__0[1U];
        vlSelf->TOP__DOT__ID__DOT___GEN_57[2U] = __Vtemp_h2398d8f7__0[2U];
    }
    vlSelf->io_branch = (1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58));
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = ((IData)(vlSelf->reset)
                                          ? 0x80000000ULL
                                          : ((1U & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_58))
                                              ? ((7U 
                                                  == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
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
                                                                 + vlSelf->TOP__DOT__IF__DOT__pc)))));
    vlSelf->io_src1 = vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1;
    vlSelf->io_src2 = (((QData)((IData)(vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    TOP__DOT__EX__DOT___aluRes_T_30 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1) 
                                       + vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    TOP__DOT__EX__DOT___aluRes_T_38 = ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1) 
                                       - vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]);
    VL_EXTEND_WQ(95,64, __Vtemp_hcf491a8e__0, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h59d0471c__0, __Vtemp_hcf491a8e__0, 
                  (0x1fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(95,64, __Vtemp_hcf491a8e__1, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_h9a6e1f03__0, __Vtemp_hcf491a8e__1, 
                  (0x1fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    TOP__DOT__EX__DOT___aluRes_T_55 = (((QData)((IData)(
                                                        (- (IData)(
                                                                   (__Vtemp_h59d0471c__0[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_h9a6e1f03__0[0U])));
    TOP__DOT__EX__DOT___aluRes_T_69 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1), 
                                                     (0x1fU 
                                                      & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(128,64, __Vtemp_hcf74b300__0, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_EXTEND_WQ(128,64, __Vtemp_ha1b92fdf__0, (((QData)((IData)(
                                                                 vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))));
    VL_MUL_W(4, __Vtemp_he4e2805c__0, __Vtemp_hcf74b300__0, __Vtemp_ha1b92fdf__0);
    TOP__DOT__EX__DOT___aluRes_T_10[0U] = __Vtemp_he4e2805c__0[0U];
    TOP__DOT__EX__DOT___aluRes_T_10[1U] = __Vtemp_he4e2805c__0[1U];
    TOP__DOT__EX__DOT___aluRes_T_10[2U] = __Vtemp_he4e2805c__0[2U];
    TOP__DOT__EX__DOT___aluRes_T_10[3U] = __Vtemp_he4e2805c__0[3U];
    VL_EXTEND_WQ(127,64, __Vtemp_h76d3e020__0, (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                >> 
                                                (0x3fU 
                                                 & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    VL_EXTEND_WQ(127,64, __Vtemp_hcf74b300__1, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h50d33f4b__0, __Vtemp_hcf74b300__1, 
                  (0x3fU & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]));
    VL_EXTEND_WQ(127,64, __Vtemp_haff70034__0, ((6U 
                                                 == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                 ? 
                                                (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                  ? 
                                                 (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                  | (((QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                   ? 
                                                  (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                   ^ 
                                                   (((QData)((IData)(
                                                                     vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     TOP__DOT__EX__DOT___aluRes_T_10[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_10[2U])))
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_10[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       TOP__DOT__EX__DOT___aluRes_T_10[0U])))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                                         < 
                                                                         (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                       ? (QData)((IData)(
                                                                         VL_LTS_IQQ(64, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1, 
                                                                                (((QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))
                                                        ? 
                                                       (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                        - 
                                                        (((QData)((IData)(
                                                                          vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))))
                                                        : 
                                                       (vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 
                                                        + 
                                                        (((QData)((IData)(
                                                                          vlSelf->TOP__DOT__ID__DOT___GEN_57[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))))))))));
    if ((8U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_h76d3e020__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_h76d3e020__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_h76d3e020__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_h76d3e020__0[3U]);
    } else if ((7U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_h50d33f4b__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_h50d33f4b__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_h50d33f4b__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_h50d33f4b__0[3U]);
    } else {
        TOP__DOT__EX__DOT___aluRes_T_91[0U] = __Vtemp_haff70034__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_91[1U] = __Vtemp_haff70034__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_91[2U] = __Vtemp_haff70034__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_91[3U] = (0x7fffffffU 
                                               & __Vtemp_haff70034__0[3U]);
    }
    VL_EXTEND_WQ(127,64, __Vtemp_h27371b3d__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_69 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_69))));
    VL_EXTEND_WQ(127,64, __Vtemp_h8d15b800__0, TOP__DOT__EX__DOT___aluRes_T_55);
    VL_EXTEND_WQ(127,64, __Vtemp_h8d15b800__1, TOP__DOT__EX__DOT___aluRes_T_55);
    VL_EXTEND_WQ(127,64, __Vtemp_he0adbe15__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1)) 
                                                                                * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U]))) 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1)) 
                                                                   * (QData)((IData)(
                                                                                vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])))))));
    VL_EXTEND_WQ(127,64, __Vtemp_h709a6ac4__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_38 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_38))));
    VL_EXTEND_WQ(127,64, __Vtemp_h9a75dcf3__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_30 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_30))));
    VL_EXTEND_WQ(127,64, __Vtemp_h76bf409d__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1, 
                                                              (0x3fU 
                                                               & vlSelf->TOP__DOT__ID__DOT___GEN_57[0U])));
    if ((0x14U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h27371b3d__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h27371b3d__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h27371b3d__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h27371b3d__0[3U];
    } else if ((0x13U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h8d15b800__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h8d15b800__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h8d15b800__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h8d15b800__0[3U];
    } else if ((0x12U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h8d15b800__1[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h8d15b800__1[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h8d15b800__1[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h8d15b800__1[3U];
    } else if ((0xfU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_he0adbe15__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_he0adbe15__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_he0adbe15__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_he0adbe15__0[3U];
    } else if ((0x11U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h709a6ac4__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h709a6ac4__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h709a6ac4__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h709a6ac4__0[3U];
    } else if ((0x10U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h9a75dcf3__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h9a75dcf3__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h9a75dcf3__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h9a75dcf3__0[3U];
    } else if ((9U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h76bf409d__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h76bf409d__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h76bf409d__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h76bf409d__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = TOP__DOT__EX__DOT___aluRes_T_91[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = TOP__DOT__EX__DOT___aluRes_T_91[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = TOP__DOT__EX__DOT___aluRes_T_91[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = TOP__DOT__EX__DOT___aluRes_T_91[3U];
    }
    vlSelf->TOP__DOT__MEM__DOT__ram1_MPORT_data = (0xffU 
                                                   & ((1U 
                                                       & ((0xffffU 
                                                           & ((IData)(1U) 
                                                              << 
                                                              (0xfU 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata)
                                                       : 
                                                      vlSelf->TOP__DOT__MEM__DOT__ram1
                                                      [
                                                      (0xfU 
                                                       & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                                                          >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram2_MPORT_2_data = 
        (0xffU & ((2U & ((0xffffU & ((IData)(1U) << 
                                     (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                         - (IData)(1U))) ? (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 8U))
                   : vlSelf->TOP__DOT__MEM__DOT__ram2
                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                            >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram3_MPORT_4_data = 
        (0xffU & ((4U & ((0xffffU & ((IData)(1U) << 
                                     (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                         - (IData)(1U))) ? (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x10U))
                   : vlSelf->TOP__DOT__MEM__DOT__ram3
                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                            >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram4_MPORT_6_data = 
        (0xffU & ((8U & ((0xffffU & ((IData)(1U) << 
                                     (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                         - (IData)(1U))) ? (IData)(
                                                   (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                    >> 0x18U))
                   : vlSelf->TOP__DOT__MEM__DOT__ram4
                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                            >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram5_MPORT_8_data = 
        (0xffU & ((0x10U & ((0xffffU & ((IData)(1U) 
                                        << (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                            - (IData)(1U))) ? (IData)(
                                                      (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                       >> 0x20U))
                   : vlSelf->TOP__DOT__MEM__DOT__ram5
                  [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                            >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram6_MPORT_10_data 
        = (0xffU & ((0x20U & ((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                              - (IData)(1U))) ? (IData)(
                                                        (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                         >> 0x28U))
                     : vlSelf->TOP__DOT__MEM__DOT__ram6
                    [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                              >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram7_MPORT_12_data 
        = (0xffU & ((0x40U & ((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                              - (IData)(1U))) ? (IData)(
                                                        (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                         >> 0x30U))
                     : vlSelf->TOP__DOT__MEM__DOT__ram7
                    [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                              >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__ram8_MPORT_14_data 
        = (0xffU & ((0x80U & ((0xffffU & ((IData)(1U) 
                                          << (0xfU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))))) 
                              - (IData)(1U))) ? (IData)(
                                                        (vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata 
                                                         >> 0x38U))
                     : vlSelf->TOP__DOT__MEM__DOT__ram8
                    [(0xfU & (vlSelf->TOP__DOT__EX__DOT__aluRes[0U] 
                              >> 3U))]));
    vlSelf->TOP__DOT__MEM__DOT__loadval = ((((QData)((IData)(
                                                             ((vlSelf->TOP__DOT__MEM__DOT__ram1
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
                                             << 0x20U) 
                                            | (QData)((IData)(
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
                                                                         >> 3U))])))))) 
                                           & ((3U == 
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
    vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata = ((
                                                   (7U 
                                                    != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                   & ((1U 
                                                       == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)) 
                                                      & (3U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data))))
                                                   ? 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                    ? vlSelf->TOP__DOT__MEM__DOT__loadval
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                     ? 
                                                    ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))
                                                      : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TOP__DOT__ID__DOT___GEN_61)))
                                                      ? 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 0xfU)))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(
                                                                         (0xffffU 
                                                                          & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                       : vlSelf->TOP__DOT__MEM__DOT__loadval)
                                                      : 
                                                     ((IData)(vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign)
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->TOP__DOT__MEM__DOT__loadval 
                                                                                >> 7U)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TOP__DOT__MEM__DOT__loadval)))))
                                                       : vlSelf->TOP__DOT__MEM__DOT__loadval))))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->TOP__DOT__EX__DOT__aluRes[0U]))));
    vlSelf->io_o = vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata;
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    VTOP___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Body
    VTOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VTOP___024root___final(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___final\n"); );
}

VL_ATTR_COLD void VTOP___024root___ctor_var_reset(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->io_inst_o = VL_RAND_RESET_I(32);
    vlSelf->io_o = VL_RAND_RESET_Q(64);
    vlSelf->io_src1 = VL_RAND_RESET_Q(64);
    vlSelf->io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->io_instType = VL_RAND_RESET_I(5);
    vlSelf->io_branch = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_decInfo_writeRfOp_wen = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_decInfo_aluOp_src1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_io_decInfo_aluOp_opt = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_isStore = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_sign = VL_RAND_RESET_I(1);
    vlSelf->TOP__DOT__ID_io_decInfo_memOp_sdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__MEM_io_writeRfOp_o_wdata = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile_io_readRes_rs2Val = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        vlSelf->TOP__DOT__IF__DOT__inst_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TOP__DOT__IF__DOT__inst_rom_io_inst_o_MPORT_data = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__IF__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__IF__DOT__initvar = VL_RAND_RESET_I(32);
    vlSelf->TOP__DOT__ID__DOT___decRes_T_187 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT__decRes_0 = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__ID__DOT__immI = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___io_decInfo_branchOp_newPC_T_11 = VL_RAND_RESET_I(13);
    VL_RAND_RESET_W(76, vlSelf->TOP__DOT__ID__DOT___GEN_57);
    vlSelf->TOP__DOT__ID__DOT___GEN_58 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT___GEN_61 = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(127, vlSelf->TOP__DOT__EX__DOT__aluRes);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram1[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram1_MPORT_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram2_MPORT_2_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram3_MPORT_4_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram4[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram4_MPORT_6_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram5[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram5_MPORT_8_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram6[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram6_MPORT_10_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram7[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram7_MPORT_12_data = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->TOP__DOT__MEM__DOT__ram8[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TOP__DOT__MEM__DOT__ram8_MPORT_14_data = VL_RAND_RESET_I(8);
    vlSelf->TOP__DOT__MEM__DOT__loadval = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_0 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_1 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_3 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_4 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_5 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_6 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_7 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_8 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_9 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_10 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_11 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_12 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_13 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_14 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_15 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_16 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_17 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_18 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_19 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_20 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_21 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_22 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_23 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_24 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_25 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_26 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_27 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_28 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_29 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_30 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__Regfile__DOT__registers_31 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

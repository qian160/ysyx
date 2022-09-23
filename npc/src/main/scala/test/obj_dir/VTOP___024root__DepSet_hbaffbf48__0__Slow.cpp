// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_ATTR_COLD void VTOP___024root___settle__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___settle__TOP__0\n"); );
    // Init
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_138;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_153;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_168;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_183;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_203;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_218;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_233;
    VlWide<4>/*127:0*/ TOP__DOT__EX__DOT___aluRes_T_12;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_31;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_38;
    QData/*63:0*/ TOP__DOT__EX__DOT___aluRes_T_52;
    IData/*31:0*/ TOP__DOT__EX__DOT___aluRes_T_64;
    VlWide<4>/*126:0*/ TOP__DOT__EX__DOT___aluRes_T_92;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_75;
    QData/*63:0*/ TOP__DOT__Regfile__DOT___GEN_88;
    VlWide<3>/*95:0*/ __Vtemp_h281df147__0;
    VlWide<3>/*95:0*/ __Vtemp_hfc76f316__0;
    VlWide<3>/*95:0*/ __Vtemp_h281df147__1;
    VlWide<3>/*95:0*/ __Vtemp_heb1fb61e__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bf79c9__0;
    VlWide<4>/*127:0*/ __Vtemp_h092506ed__0;
    VlWide<4>/*127:0*/ __Vtemp_h7beedd06__0;
    VlWide<4>/*127:0*/ __Vtemp_h81af1aeb__0;
    VlWide<4>/*127:0*/ __Vtemp_h2bee355b__0;
    VlWide<4>/*127:0*/ __Vtemp_h2b8642e6__0;
    VlWide<4>/*127:0*/ __Vtemp_h27bf79c9__1;
    VlWide<4>/*127:0*/ __Vtemp_h2078d96f__0;
    VlWide<4>/*127:0*/ __Vtemp_h36d1a331__0;
    VlWide<4>/*127:0*/ __Vtemp_h59a2cc8b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd96d439c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd96d439c__1;
    VlWide<4>/*127:0*/ __Vtemp_hb6c2ecdf__0;
    VlWide<4>/*127:0*/ __Vtemp_h709a6ac4__0;
    // Body
    vlSelf->io_pc_o = vlSelf->io_pc_i;
    vlSelf->io_inst_o = vlSelf->io_inst_i;
    TOP__DOT__ID__DOT___decRes_T_203 = ((0x17U == (0x7fU 
                                                   & vlSelf->io_inst_o))
                                         ? 0x19U : 
                                        ((0x73U == 
                                          (0x7fU & vlSelf->io_inst_o))
                                          ? 0U : ((0x1bU 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 0x10U
                                                   : 
                                                  ((0x101bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 0x12U
                                                    : 
                                                   ((0x501bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 0x13U
                                                     : 
                                                    ((0x4000501bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 0x14U
                                                      : 
                                                     ((0x3bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 0x10U
                                                       : 
                                                      ((0x4000003bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 0x11U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 0x12U
                                                         : 
                                                        ((0x503bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 0x13U
                                                          : 
                                                         ((0x4000503bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 0x14U
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 0U
                                                            : 
                                                           ((0x3003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 0U
                                                             : 
                                                            ((0x3023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 0U
                                                              : 
                                                             ((0x200003bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0xbU
                                                               : 0U)))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_75 = ((0xdU == (0x1fU 
                                                 & (vlSelf->io_inst_o 
                                                    >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_13
                                        : ((0xcU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst_o 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_12
                                            : ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst_o 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_11
                                                : (
                                                   (0xaU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst_o 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_10
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst_o 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_9
                                                     : 
                                                    ((8U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst_o 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_8
                                                      : 
                                                     ((7U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst_o 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_7
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst_o 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_6
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst_o 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_5
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst_o 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_4
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst_o 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_3
                                                           : 
                                                          ((2U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst_o 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_2
                                                            : 
                                                           ((1U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst_o 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_1
                                                             : vlSelf->TOP__DOT__Regfile__DOT__registers_0)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_138 = ((0x501bU == 
                                         (0xfe00707fU 
                                          & vlSelf->io_inst_o))
                                         ? 1U : ((0x4000501bU 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst_o))
                                                  ? 1U
                                                  : 
                                                 ((0x3bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 0U
                                                   : 
                                                  ((0x4000003bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 0U
                                                    : 
                                                   ((0x103bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 0U
                                                     : 
                                                    ((0x503bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 0U
                                                      : 
                                                     ((0x4000503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 0U
                                                       : 
                                                      ((0x6003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 1U
                                                        : 
                                                       ((0x3003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 1U
                                                         : 
                                                        ((0x3023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 5U
                                                          : 
                                                         ((0x200003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 0U
                                                           : 
                                                          ((0x200403bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 0U
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 0U
                                                             : 
                                                            ((0x200603bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 0U
                                                              : 
                                                             ((0x200703bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0U
                                                               : 7U)))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_218 = ((0x2001033U 
                                         == (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                         ? 0xcU : (
                                                   (0x2002033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 0xdU
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 0x1aU
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 0x1bU
                                                      : 
                                                     ((0x2006033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 0x1cU
                                                       : 
                                                      ((0x2007033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 0x1dU
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 0U
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 1U
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 4U
                                                           : 
                                                          ((0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 5U
                                                            : 
                                                           ((0x6063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 6U
                                                             : 
                                                            ((0x7063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 7U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0U
                                                               : 
                                                              ((0x67U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->io_inst_o))
                                                                ? 0xaU
                                                                : 
                                                               ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->io_inst_o))
                                                                 ? 0x18U
                                                                 : (IData)(TOP__DOT__ID__DOT___decRes_T_203))))))))))))))));
    TOP__DOT__Regfile__DOT___GEN_88 = ((0x1aU == (0x1fU 
                                                  & (vlSelf->io_inst_o 
                                                     >> 0xfU)))
                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_26
                                        : ((0x19U == 
                                            (0x1fU 
                                             & (vlSelf->io_inst_o 
                                                >> 0xfU)))
                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_25
                                            : ((0x18U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst_o 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_24
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst_o 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_23
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst_o 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_22
                                                     : 
                                                    ((0x15U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst_o 
                                                          >> 0xfU)))
                                                      ? vlSelf->TOP__DOT__Regfile__DOT__registers_21
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst_o 
                                                           >> 0xfU)))
                                                       ? vlSelf->TOP__DOT__Regfile__DOT__registers_20
                                                       : 
                                                      ((0x13U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst_o 
                                                            >> 0xfU)))
                                                        ? vlSelf->TOP__DOT__Regfile__DOT__registers_19
                                                        : 
                                                       ((0x12U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst_o 
                                                             >> 0xfU)))
                                                         ? vlSelf->TOP__DOT__Regfile__DOT__registers_18
                                                         : 
                                                        ((0x11U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst_o 
                                                              >> 0xfU)))
                                                          ? vlSelf->TOP__DOT__Regfile__DOT__registers_17
                                                          : 
                                                         ((0x10U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst_o 
                                                               >> 0xfU)))
                                                           ? vlSelf->TOP__DOT__Regfile__DOT__registers_16
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst_o 
                                                                >> 0xfU)))
                                                            ? vlSelf->TOP__DOT__Regfile__DOT__registers_15
                                                            : 
                                                           ((0xeU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst_o 
                                                                 >> 0xfU)))
                                                             ? vlSelf->TOP__DOT__Regfile__DOT__registers_14
                                                             : TOP__DOT__Regfile__DOT___GEN_75)))))))))))));
    TOP__DOT__ID__DOT___decRes_T_153 = ((0x2006033U 
                                         == (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                         ? 0U : ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst_o))
                                                  ? 0U
                                                  : 
                                                 ((0x63U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 3U
                                                   : 
                                                  ((0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 3U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 3U
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 3U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 3U
                                                       : 
                                                      ((0x7063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 3U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 4U
                                                         : 
                                                        ((0x67U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 1U
                                                          : 
                                                         ((0x37U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 2U
                                                           : 
                                                          ((0x17U 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 2U
                                                            : 
                                                           ((0x73U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 6U
                                                             : 
                                                            ((0x1bU 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 1U
                                                              : 
                                                             ((0x101bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_138))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_233 = ((0x4013U == 
                                         (0x707fU & vlSelf->io_inst_o))
                                         ? 4U : ((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->io_inst_o))
                                                  ? 5U
                                                  : 
                                                 ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 6U
                                                   : 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfc00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 7U
                                                    : 
                                                   ((0x5013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 8U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 0U
                                                       : 
                                                      ((0x1003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 0U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 0U
                                                         : 
                                                        ((0x4003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 0U
                                                          : 
                                                         ((0x5003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 0U
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 0U
                                                            : 
                                                           ((0x1023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 0U
                                                             : 
                                                            ((0x2023U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 0U
                                                              : 
                                                             ((0x2000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0xbU
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_218))))))))))))))));
    vlSelf->TOP__DOT__Regfile__DOT___GEN_91 = ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst_o 
                                                    >> 0xfU)))
                                                ? vlSelf->TOP__DOT__Regfile__DOT__registers_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst_o 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst_o 
                                                         >> 0xfU)))
                                                     ? vlSelf->TOP__DOT__Regfile__DOT__registers_27
                                                     : TOP__DOT__Regfile__DOT___GEN_88)));
    TOP__DOT__ID__DOT___decRes_T_168 = ((0x5013U == 
                                         (0xfc00707fU 
                                          & vlSelf->io_inst_o))
                                         ? 1U : ((0x40005013U 
                                                  == 
                                                  (0xfc00707fU 
                                                   & vlSelf->io_inst_o))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 1U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 1U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 1U
                                                     : 
                                                    ((0x4003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 1U
                                                      : 
                                                     ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 1U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 5U
                                                        : 
                                                       ((0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 5U
                                                         : 
                                                        ((0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 5U
                                                          : 
                                                         ((0x2000033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 0U
                                                           : 
                                                          ((0x2001033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 0U
                                                            : 
                                                           ((0x2002033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 0U
                                                             : 
                                                            ((0x2004033U 
                                                              == 
                                                              (0xfe00707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 0U
                                                              : 
                                                             ((0x2005033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_153))))))))))))))));
    vlSelf->TOP__DOT__ID_io_decInfo_aluop = ((0x33U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst_o))
                                              ? 0U : 
                                             ((0x40000033U 
                                               == (0xfe00707fU 
                                                   & vlSelf->io_inst_o))
                                               ? 1U
                                               : ((0x1033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 7U
                                                   : 
                                                  ((0x2033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 2U
                                                    : 
                                                   ((0x3033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 3U
                                                     : 
                                                    ((0x4033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 4U
                                                      : 
                                                     ((0x5033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 8U
                                                       : 
                                                      ((0x40005033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 9U
                                                        : 
                                                       ((0x6033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 5U
                                                         : 
                                                        ((0x7033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 6U
                                                          : 
                                                         ((0x13U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 0U
                                                           : 
                                                          ((0x2013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 2U
                                                            : 
                                                           ((0x3013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 3U
                                                             : (IData)(TOP__DOT__ID__DOT___decRes_T_233))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val = (
                                                   (0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst_o 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                                    : vlSelf->TOP__DOT__Regfile__DOT___GEN_91);
    TOP__DOT__ID__DOT___decRes_T_183 = ((0x1033U == 
                                         (0xfe00707fU 
                                          & vlSelf->io_inst_o))
                                         ? 0U : ((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->io_inst_o))
                                                  ? 0U
                                                  : 
                                                 ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->io_inst_o))
                                                   ? 0U
                                                   : 
                                                  ((0x4033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->io_inst_o))
                                                    ? 0U
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->io_inst_o))
                                                     ? 0U
                                                     : 
                                                    ((0x40005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->io_inst_o))
                                                      ? 0U
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->io_inst_o))
                                                       ? 0U
                                                       : 
                                                      ((0x7033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->io_inst_o))
                                                        ? 0U
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->io_inst_o))
                                                         ? 1U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->io_inst_o))
                                                          ? 1U
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->io_inst_o))
                                                           ? 1U
                                                           : 
                                                          ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->io_inst_o))
                                                            ? 1U
                                                            : 
                                                           ((0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->io_inst_o))
                                                             ? 1U
                                                             : 
                                                            ((0x7013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->io_inst_o))
                                                              ? 1U
                                                              : 
                                                             ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_168))))))))))))))));
    vlSelf->io_src1 = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    vlSelf->TOP__DOT__ID__DOT__decRes_0 = ((0x33U == 
                                            (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst_o))
                                             ? 0U : (IData)(TOP__DOT__ID__DOT___decRes_T_183)));
    vlSelf->TOP__DOT__ID_io_decInfo_src2 = ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->io_inst_o 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->io_inst_o 
                                                                   >> 0x14U))))
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst_o 
                                                     >> 0xfU)))
                                                 ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                                 : vlSelf->TOP__DOT__Regfile__DOT___GEN_91));
    vlSelf->io_src2 = vlSelf->TOP__DOT__ID_io_decInfo_src2;
    TOP__DOT__EX__DOT___aluRes_T_38 = ((IData)(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val) 
                                       - (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2));
    VL_EXTEND_WQ(95,64, __Vtemp_h281df147__0, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_hfc76f316__0, __Vtemp_h281df147__0, 
                  (0x1fU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2)));
    VL_EXTEND_WQ(95,64, __Vtemp_h281df147__1, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val);
    VL_SHIFTL_WWI(95,95,5, __Vtemp_heb1fb61e__0, __Vtemp_h281df147__1, 
                  (0x1fU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2)));
    TOP__DOT__EX__DOT___aluRes_T_52 = (((QData)((IData)(
                                                        (- (IData)(
                                                                   (__Vtemp_hfc76f316__0[0U] 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_heb1fb61e__0[0U])));
    TOP__DOT__EX__DOT___aluRes_T_64 = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val), 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2)));
    VL_EXTEND_WQ(128,64, __Vtemp_h27bf79c9__0, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val);
    VL_EXTEND_WQ(128,64, __Vtemp_h092506ed__0, vlSelf->TOP__DOT__ID_io_decInfo_src2);
    VL_MUL_W(4, __Vtemp_h7beedd06__0, __Vtemp_h27bf79c9__0, __Vtemp_h092506ed__0);
    TOP__DOT__EX__DOT___aluRes_T_12[0U] = __Vtemp_h7beedd06__0[0U];
    TOP__DOT__EX__DOT___aluRes_T_12[1U] = __Vtemp_h7beedd06__0[1U];
    TOP__DOT__EX__DOT___aluRes_T_12[2U] = __Vtemp_h7beedd06__0[2U];
    TOP__DOT__EX__DOT___aluRes_T_12[3U] = __Vtemp_h7beedd06__0[3U];
    TOP__DOT__EX__DOT___aluRes_T_31 = ((IData)(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val) 
                                       + (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2));
    VL_EXTEND_WQ(127,64, __Vtemp_h81af1aeb__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_31 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_31))));
    VL_EXTEND_WQ(127,64, __Vtemp_h2bee355b__0, VL_SHIFTRS_QQI(64,64,6, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h2b8642e6__0, (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                >> 
                                                (0x3fU 
                                                 & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h27bf79c9__1, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val);
    VL_SHIFTL_WWI(127,127,6, __Vtemp_h2078d96f__0, __Vtemp_h27bf79c9__1, 
                  (0x3fU & (IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2)));
    VL_EXTEND_WQ(127,64, __Vtemp_h36d1a331__0, ((6U 
                                                 == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                 ? 
                                                (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                 & vlSelf->TOP__DOT__ID_io_decInfo_src2)
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                  ? 
                                                 (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                  | vlSelf->TOP__DOT__ID_io_decInfo_src2)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                   ? 
                                                  (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                   ^ vlSelf->TOP__DOT__ID_io_decInfo_src2)
                                                   : 
                                                  ((0xcU 
                                                    == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     TOP__DOT__EX__DOT___aluRes_T_12[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_12[2U])))
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                     ? 
                                                    (((QData)((IData)(
                                                                      TOP__DOT__EX__DOT___aluRes_T_12[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       TOP__DOT__EX__DOT___aluRes_T_12[0U])))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                                         < vlSelf->TOP__DOT__ID_io_decInfo_src2)))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                       ? (QData)((IData)(
                                                                         VL_LTS_IQQ(64, vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val, vlSelf->TOP__DOT__ID_io_decInfo_src2)))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))
                                                        ? 
                                                       (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                        - vlSelf->TOP__DOT__ID_io_decInfo_src2)
                                                        : 
                                                       (vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val 
                                                        + vlSelf->TOP__DOT__ID_io_decInfo_src2))))))))));
    if ((0x10U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        TOP__DOT__EX__DOT___aluRes_T_92[0U] = __Vtemp_h81af1aeb__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_92[1U] = __Vtemp_h81af1aeb__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_92[2U] = __Vtemp_h81af1aeb__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_92[3U] = (0x7fffffffU 
                                               & __Vtemp_h81af1aeb__0[3U]);
    } else if ((9U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        TOP__DOT__EX__DOT___aluRes_T_92[0U] = __Vtemp_h2bee355b__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_92[1U] = __Vtemp_h2bee355b__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_92[2U] = __Vtemp_h2bee355b__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_92[3U] = (0x7fffffffU 
                                               & __Vtemp_h2bee355b__0[3U]);
    } else if ((8U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        TOP__DOT__EX__DOT___aluRes_T_92[0U] = __Vtemp_h2b8642e6__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_92[1U] = __Vtemp_h2b8642e6__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_92[2U] = __Vtemp_h2b8642e6__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_92[3U] = (0x7fffffffU 
                                               & __Vtemp_h2b8642e6__0[3U]);
    } else if ((7U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        TOP__DOT__EX__DOT___aluRes_T_92[0U] = __Vtemp_h2078d96f__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_92[1U] = __Vtemp_h2078d96f__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_92[2U] = __Vtemp_h2078d96f__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_92[3U] = (0x7fffffffU 
                                               & __Vtemp_h2078d96f__0[3U]);
    } else {
        TOP__DOT__EX__DOT___aluRes_T_92[0U] = __Vtemp_h36d1a331__0[0U];
        TOP__DOT__EX__DOT___aluRes_T_92[1U] = __Vtemp_h36d1a331__0[1U];
        TOP__DOT__EX__DOT___aluRes_T_92[2U] = __Vtemp_h36d1a331__0[2U];
        TOP__DOT__EX__DOT___aluRes_T_92[3U] = (0x7fffffffU 
                                               & __Vtemp_h36d1a331__0[3U]);
    }
    VL_EXTEND_WQ(127,64, __Vtemp_h59a2cc8b__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_64 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_64))));
    VL_EXTEND_WQ(127,64, __Vtemp_hd96d439c__0, TOP__DOT__EX__DOT___aluRes_T_52);
    VL_EXTEND_WQ(127,64, __Vtemp_hd96d439c__1, TOP__DOT__EX__DOT___aluRes_T_52);
    VL_EXTEND_WQ(127,64, __Vtemp_hb6c2ecdf__0, ((QData)((IData)(vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val)) 
                                                * (QData)((IData)(vlSelf->TOP__DOT__ID_io_decInfo_src2))));
    VL_EXTEND_WQ(127,64, __Vtemp_h709a6ac4__0, (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (TOP__DOT__EX__DOT___aluRes_T_38 
                                                                             >> 0x1fU))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(TOP__DOT__EX__DOT___aluRes_T_38))));
    if ((0x14U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h59a2cc8b__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h59a2cc8b__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h59a2cc8b__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h59a2cc8b__0[3U];
    } else if ((0x13U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_hd96d439c__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_hd96d439c__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_hd96d439c__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_hd96d439c__0[3U];
    } else if ((0x12U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_hd96d439c__1[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_hd96d439c__1[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_hd96d439c__1[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_hd96d439c__1[3U];
    } else if ((0xfU == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_hb6c2ecdf__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_hb6c2ecdf__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_hb6c2ecdf__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_hb6c2ecdf__0[3U];
    } else if ((0x11U == (IData)(vlSelf->TOP__DOT__ID_io_decInfo_aluop))) {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = __Vtemp_h709a6ac4__0[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = __Vtemp_h709a6ac4__0[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = __Vtemp_h709a6ac4__0[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = __Vtemp_h709a6ac4__0[3U];
    } else {
        vlSelf->TOP__DOT__EX__DOT__aluRes[0U] = TOP__DOT__EX__DOT___aluRes_T_92[0U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[1U] = TOP__DOT__EX__DOT___aluRes_T_92[1U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[2U] = TOP__DOT__EX__DOT___aluRes_T_92[2U];
        vlSelf->TOP__DOT__EX__DOT__aluRes[3U] = TOP__DOT__EX__DOT___aluRes_T_92[3U];
    }
    vlSelf->io_o = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
}

VL_ATTR_COLD void VTOP___024root___eval_initial(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void VTOP___024root___eval_settle(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_settle\n"); );
    // Body
    VTOP___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
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
    vlSelf->io_pc_i = VL_RAND_RESET_Q(64);
    vlSelf->io_inst_i = VL_RAND_RESET_I(32);
    vlSelf->io_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->io_inst_o = VL_RAND_RESET_I(32);
    vlSelf->io_o = VL_RAND_RESET_Q(64);
    vlSelf->io_src1 = VL_RAND_RESET_Q(64);
    vlSelf->io_src2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_io_decInfo_src2 = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID_io_decInfo_aluop = VL_RAND_RESET_I(5);
    vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val = VL_RAND_RESET_Q(64);
    vlSelf->TOP__DOT__ID__DOT__decRes_0 = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(127, vlSelf->TOP__DOT__EX__DOT__aluRes);
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
    vlSelf->TOP__DOT__Regfile__DOT___GEN_91 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}

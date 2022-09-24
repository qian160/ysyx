// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTOP.h for the primary calling header

#include "verilated.h"

#include "VTOP___024root.h"

VL_INLINE_OPT void VTOP___024root___combo__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_pc_o = vlSelf->io_pc_i;
}

VL_INLINE_OPT void VTOP___024root___sequent__TOP__0(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TOP__DOT__Regfile__DOT__registers_30 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_29 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_28 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_27 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_26 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_25 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_14 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_15 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_16 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_17 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_18 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_19 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_20 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_21 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_22 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_23 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_24 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_12 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_11 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_10 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_9 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_8 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_7 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_2 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_1 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_3 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_4 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_5 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_6 = 0ULL;
        vlSelf->TOP__DOT__Regfile__DOT__registers_13 = 0ULL;
    } else if ((1U == (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0))) {
        if ((0x1eU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_30 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x1dU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_29 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x1cU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_28 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x1bU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_27 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x1aU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_26 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x19U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_25 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xeU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_14 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xfU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_15 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x10U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_16 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x11U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_17 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x12U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_18 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x13U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_19 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x14U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_20 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x15U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_21 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x16U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_22 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x17U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_23 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0x18U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_24 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xcU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_12 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xbU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_11 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xaU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_10 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((9U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_9 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((8U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_8 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((7U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_7 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((2U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_2 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((1U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_1 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((3U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_3 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 
            = ((0U == (0x1fU & (vlSelf->io_inst_o >> 7U)))
                ? (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])))
                : 0ULL);
        if ((4U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_4 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((5U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_5 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((6U == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_6 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
        if ((0xdU == (0x1fU & (vlSelf->io_inst_o >> 7U)))) {
            vlSelf->TOP__DOT__Regfile__DOT__registers_13 
                = (((QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->TOP__DOT__EX__DOT__aluRes[0U])));
        }
    } else {
        vlSelf->TOP__DOT__Regfile__DOT__registers_0 = 0ULL;
    }
}

VL_INLINE_OPT void VTOP___024root___combo__TOP__1(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___combo__TOP__1\n"); );
    // Init
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_140;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_155;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_170;
    CData/*3:0*/ TOP__DOT__ID__DOT___decRes_T_185;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_207;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_222;
    CData/*4:0*/ TOP__DOT__ID__DOT___decRes_T_237;
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
    vlSelf->io_inst_o = vlSelf->io_inst_i;
    TOP__DOT__ID__DOT___decRes_T_207 = ((0x17U == (0x7fU 
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
    TOP__DOT__ID__DOT___decRes_T_140 = ((0x4000501bU 
                                         == (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                         ? 1U : ((0x3bU 
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
                                                              : 
                                                             ((0x100073U 
                                                               == 
                                                               (0xfff0007fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 6U
                                                               : 7U)))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_222 = ((0x2001033U 
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
                                                                 : (IData)(TOP__DOT__ID__DOT___decRes_T_207))))))))))))))));
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
    TOP__DOT__ID__DOT___decRes_T_155 = ((0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                         ? 0U : ((0x63U 
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
                                                              : 
                                                             ((0x501bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_140))))))))))))))));
    TOP__DOT__ID__DOT___decRes_T_237 = ((0x4013U == 
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
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_222))))))))))))))));
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
    TOP__DOT__ID__DOT___decRes_T_170 = ((0x40005013U 
                                         == (0xfc00707fU 
                                             & vlSelf->io_inst_o))
                                         ? 1U : ((3U 
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
                                                              : 
                                                             ((0x2006033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 0U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_155))))))))))))))));
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
                                                             : (IData)(TOP__DOT__ID__DOT___decRes_T_237))))))))))))));
    vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val = (
                                                   (0x1eU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst_o 
                                                        >> 0xfU)))
                                                    ? vlSelf->TOP__DOT__Regfile__DOT__registers_30
                                                    : vlSelf->TOP__DOT__Regfile__DOT___GEN_91);
    TOP__DOT__ID__DOT___decRes_T_185 = ((0x2033U == 
                                         (0xfe00707fU 
                                          & vlSelf->io_inst_o))
                                         ? 0U : ((0x3033U 
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
                                                              : 
                                                             ((0x5013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelf->io_inst_o))
                                                               ? 1U
                                                               : (IData)(TOP__DOT__ID__DOT___decRes_T_170))))))))))))))));
    vlSelf->io_src1 = vlSelf->TOP__DOT__Regfile_io_readRes_rs1Val;
    vlSelf->TOP__DOT__ID__DOT__decRes_0 = ((0x33U == 
                                            (0xfe00707fU 
                                             & vlSelf->io_inst_o))
                                            ? 0U : 
                                           ((0x40000033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->io_inst_o))
                                             ? 0U : 
                                            ((0x1033U 
                                              == (0xfe00707fU 
                                                  & vlSelf->io_inst_o))
                                              ? 0U : (IData)(TOP__DOT__ID__DOT___decRes_T_185))));
    if (VL_UNLIKELY((1U != (IData)(vlSelf->TOP__DOT__ID__DOT__decRes_0)))) {
        VL_WRITEF("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = %8x\n",
                  64,vlSelf->io_pc_o,32,vlSelf->io_inst_o);
        VL_FINISH_MT("verilog/DEBUG.v", 16, "");
    }
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

void VTOP___024root___eval(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval\n"); );
    // Body
    VTOP___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTOP___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VTOP___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTOP___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

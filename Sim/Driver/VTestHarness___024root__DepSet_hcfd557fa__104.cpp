// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12782(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12782\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_151_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_9__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_407_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_407_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_406_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_406_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_406_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_9__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_406_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_406_0);
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_167_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_167_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12783(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12783\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_10__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_421_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_422_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_422_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_422_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_422_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_10_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_422_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_10__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_422_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12784(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12784\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_182_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_11__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_438_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_438_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_437_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_437_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_437_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_11__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_437_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_437_0);
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_198_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_198_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12785(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12785\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_12__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_452_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_453_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_453_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_453_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_453_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_12_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_453_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_12__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_453_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12786(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12786\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT____Vcellinp__mac_unit__io_in_b 
        = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13_io_in_control_0_dataflow_b)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13_io_in_control_0_propagate_b)
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT__c2
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT__c1)
                     : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_213_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT__shift_offset 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT__last_s) 
            != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13_io_in_control_0_propagate_b))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13_io_in_control_0_shift_b)
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_13__DOT__tile_0_0__DOT___GEN_2 
        = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_469_0 
                              >> 0x13U)))) << 0x14U) 
           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_469_0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_468_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_dataflow_b) {
            if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_dataflow_b) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_propagate_b))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c1 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT___GEN_2;
            }
            if ((1U & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_dataflow_b)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_propagate_b))))) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c2 
                    = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT___GEN_2;
            }
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13_io_in_control_0_propagate_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c1 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_468_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_468_0);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c2 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT___GEN_3;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT___GEN_3;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_13__DOT__tile_0_0__DOT__c2 
                = (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_468_0 
                                      >> 0x13U)))) 
                    << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_468_0);
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___mac_unit_io_out_d 
        = (0xfffffU & (((0xf0000U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T) 
                                                    >> 0xfU)))) 
                                     << 0x10U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__mac_unit__DOT___io_out_d_T)) 
                       + ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_dataflow_b)
                           ? (((- (IData)((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_229_0 
                                                 >> 0x13U)))) 
                               << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_229_0)
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14_io_in_control_0_propagate_b)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c2
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c1))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12787(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12787\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T_3 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c1, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c1 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c1 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T_14 
        = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T_11 
           + (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset)) 
               & ((0x1fU >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                      - (IData)(1U))))
                   ? VL_SHIFTRS_III(32,32,32, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c2, 
                                    (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                              - (IData)(1U))))
                   : (- (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c2 
                         >> 0x1fU)))) & ((0U != ((2U 
                                                  > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__c2 
                                                  & (((0x1fU 
                                                       >= 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT__shift_offset) 
                                                           - (IData)(1U))))
                                                       : 0U) 
                                                     - (IData)(1U))))) 
                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_14__DOT__tile_0_0__DOT___io_out_c_T_11)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_483_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_484_0 = 1U;
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14_io_in_control_0_dataflow_b) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_dataflow_b = 1U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_484_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT__c1);
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_484_0 
                    = (0xfffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT__c2);
            }
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_dataflow_b = 0U;
            if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14_io_in_control_0_propagate_b) {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_propagate_b = 1U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_484_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_3)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_3)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_3)));
            } else {
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_14_io_in_control_0_propagate_b = 0U;
                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__b_484_0 
                    = (0xfffffU & (VL_LTS_III(32, 0x7ffffU, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_14)
                                    ? 0x7ffffU : (VL_GTS_III(32, 0xfff80000U, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_14)
                                                   ? 0x80000U
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_14__DOT__tile_0_0__DOT___io_out_c_T_14)));
            }
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_484_0 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12788(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12788\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT____Vcellinp__transposer__io_inRow_valid) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__dir) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_0__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_12_0__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_11__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_1_11__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_1__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_1__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_1_10__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_2_10__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_9_2__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_2__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_2_9__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_3_9__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_8_3__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_9_3__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_3_8__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_4_8__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_7_4__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_8_4__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_4_7__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_5_7__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_6_5__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_7_5__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_5_6__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_6_6__DOT__reg_0;
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_0__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_11_1__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_11__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_0_12__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_1__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_10_2__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_1_10__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_1_11__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_9_2__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_9_3__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_2_9__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_2_10__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_8_3__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_8_4__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_3_8__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_3_9__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_7_4__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_7_5__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_4_7__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_4_8__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_6_5__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_6_6__DOT__reg_0;
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_5_6__DOT__reg_0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__transposer__DOT__pes_5_7__DOT__reg_0;
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_rxq_idx 
            = ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_1))
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_rxq_idx)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_rxq_idx));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12789(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12789\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__issue_slots_0_in_uop_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_ldq_idx 
            = ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__next_1))
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_ldq_idx)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_ldq_idx));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_1_REG_stq_idx 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_701)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_stq_idx)
            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_675)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_stq_idx)
                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_649)
                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_stq_idx)
                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_623)
                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_stq_idx)
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_597)
                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_stq_idx)
                            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_571)
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_stq_idx)
                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_545)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_stq_idx)
                                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_519)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_stq_idx)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_493)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_stq_idx)
                                            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_467)
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_stq_idx)
                                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_441)
                                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_stq_idx)
                                                    : 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_415)
                                                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_stq_idx)
                                                     : 
                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_389)
                                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
                                                      : 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_363)
                                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)
                                                       : 
                                                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_337)
                                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx)
                                                        : 
                                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_311)
                                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx)
                                                         : 
                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_285)
                                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx)
                                                          : 
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_259)
                                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx)
                                                           : 
                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_233)
                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stq_idx)
                                                            : 
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_207)
                                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_stq_idx)
                                                             : 0U))))))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregister_read__DOT__rrd_uops_2_REG_stq_idx 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_714)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_19__DOT__slot_uop_stq_idx)
            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_688)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_18__DOT__slot_uop_stq_idx)
                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_662)
                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_17__DOT__slot_uop_stq_idx)
                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_636)
                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_16__DOT__slot_uop_stq_idx)
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_610)
                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_15__DOT__slot_uop_stq_idx)
                            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_584)
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_14__DOT__slot_uop_stq_idx)
                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_558)
                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_13__DOT__slot_uop_stq_idx)
                                    : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_532)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_12__DOT__slot_uop_stq_idx)
                                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_506)
                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_11__DOT__slot_uop_stq_idx)
                                            : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_480)
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_10__DOT__slot_uop_stq_idx)
                                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_454)
                                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_9__DOT__slot_uop_stq_idx)
                                                    : 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_428)
                                                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_8__DOT__slot_uop_stq_idx)
                                                     : 
                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_402)
                                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_7__DOT__slot_uop_stq_idx)
                                                      : 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_376)
                                                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_6__DOT__slot_uop_stq_idx)
                                                       : 
                                                      ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_350)
                                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_5__DOT__slot_uop_stq_idx)
                                                        : 
                                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_324)
                                                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_4__DOT__slot_uop_stq_idx)
                                                         : 
                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_298)
                                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_3__DOT__slot_uop_stq_idx)
                                                          : 
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_272)
                                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_2__DOT__slot_uop_stq_idx)
                                                           : 
                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_246)
                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_1__DOT__slot_uop_stq_idx)
                                                            : 
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT___T_220)
                                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__int_issue_unit__DOT__slots_0__DOT__slot_uop_stq_idx)
                                                             : 0U))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12790(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12790\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__redirect_new_entry_cfi_is_call 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_50) 
           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_44 
              >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_ifu_redirect_ftq_idx)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT__redirect_new_entry_cfi_is_ret 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_50) 
           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__ftq__DOT___GEN_45 
              >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_ifu_redirect_ftq_idx)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__brinfo_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__is_br) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__jmp_unit__DOT__alu__DOT__is_jalr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__brinfo_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_br) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__is_jalr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___io_wakeups_1_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_fresp_valid) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_fresp_bits_uop_dst_rtype)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_2_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_4_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_6_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_8_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT___bypass_data_WIRE_10_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_1_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_pdst) 
              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__iregfile__DOT__read_addrs_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___T_20 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__rob__io_wb_resps_1_valid) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_rob_idx)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___T_386 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__rob__io_wb_resps_1_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___jmp_unit_io_iresp_bits_uop_rob_idx));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_out_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___s0_send_resp_or_nack_T_1 
            = (1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array_MPORT_en)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataReadArb_io_out_bits_req_0_way_en 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___mshrs_io_replay_bits_way_en;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___s0_send_resp_or_nack_T_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataReadArb_io_out_bits_req_0_way_en 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT___io_data_req_valid_output)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT__req_way_en)
                : 0xfU);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12791(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12791\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___metaReadArb_io_in_1_ready 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_out_valid)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__meta_0__DOT__tag_array_MPORT_en))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__dataReadArb__DOT___grant_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_out_valid) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__wb__DOT___io_data_req_valid_output));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__metaReadArb__DOT___grant_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_out_valid) 
           | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__prober__DOT__state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___T_232 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__s3_valid)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_refill_valid_output));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__s3_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_way_en 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__s3_way;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_addr 
            = (0xfffU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__s3_req_addr));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_refill_valid_output) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_way_en 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_way_en;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_addr 
            = (0xfffU & ((0xfc0U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__req_addr 
                                             >> 6U)) 
                                    << 6U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_ctr) 
                                               << 3U)));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_way_en 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_way_en;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT___dataWriteArb_io_out_bits_addr 
            = (0xfffU & ((0xfc0U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__req_addr 
                                             >> 6U)) 
                                    << 6U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_ctr) 
                                               << 3U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_refill_valid_output 
        = ((((~ ((~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state)))) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_3))) 
             & (0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_read_arb_io_in_1_ready)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_lb_read_valid_output));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_6 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_1)) 
           & ((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))
               ? ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_0_io_resp_valid)) 
                    & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__respq__DOT__full))) 
                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_read_arb_io_in_1_ready)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__drain_load))
               : (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_4)) 
                   & (0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___replay_arb_io_in_1_ready))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12792(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12792\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshrs_1_io_resp_valid 
        = ((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___GEN_1)) 
               & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___rpq_io_deq_valid)) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_read_arb_io_in_1_ready)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT___io_lb_read_valid_output)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__drain_load));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_read_data 
        = ((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_write_arb_io_out_valid) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___T_2))))
            ? 0ULL : (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___lb_write_arb_io_out_valid)) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___T_2))
                       ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__lb_ext__DOT__Memory
                      [((8U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_lb_read_valid_output)) 
                               << 3U)) | (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT___io_lb_read_valid_output)
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__state))
                                                  ? 
                                                 ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___ram_ext_R0_data[0xcU] 
                                                   << 0xaU) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__rpq__DOT___ram_ext_R0_data[0xcU] 
                                                     >> 0x16U))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_0__DOT__refill_ctr))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__state))
                                                  ? 
                                                 ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___ram_ext_R0_data[0xcU] 
                                                   << 0xaU) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__rpq__DOT___ram_ext_R0_data[0xcU] 
                                                     >> 0x16U))
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__mshrs_1__DOT__refill_ctr)))))]
                       : 0ULL));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__slow_wakeup_1_valid 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_valid) 
             & (2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_bits_uop_dst_rtype))) 
            & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT___alu_io_resp_valid)
                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__r_uops_0_bypassable)
                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div__DOT__r_uop_bypassable)))) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_bits_uop_dst_rtype)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__iregfile__io_write_ports_2_valid 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_valid) 
            & (2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_bits_uop_dst_rtype))) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_bits_uop_dst_rtype)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__rob__io_wb_resps_2_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_valid) 
           & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT___alu_io_resp_valid)
                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__r_uops_0_uses_stq)
                   : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div__DOT__r_uop_uses_stq)) 
                 & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT___alu_io_resp_valid)
                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__r_uops_0_is_amo)
                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__div__DOT__r_uop_is_amo))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr_exe_unit__DOT__alu__DOT__r_uops_0_ctrl_csr_cmd) 
           & (3U | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___csr_exe_unit_io_iresp_valid) 
                    << 2U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12793(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12793\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__enq_xcpts_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_exception));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_97 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_99 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_101 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_103 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_105 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_107 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_109 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_111 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_113 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (8U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_115 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (9U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_117 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xaU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_119 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xbU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_121 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xcU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_123 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xdU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12794(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12794\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_125 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_127 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_129 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_131 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_133 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x12U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_135 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x13U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_137 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x14U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_139 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x15U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_141 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x16U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_143 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x17U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_145 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x18U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_147 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x19U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_149 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1aU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_151 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1bU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_153 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1cU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12795(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12795\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_155 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1dU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_157 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1eU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT___GEN_158 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (0x1fU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_tail)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_br_tags_0_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_is_br) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_is_sfb))) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_is_jalr)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_br_tags_0_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_is_br) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_is_sfb))) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_is_jalr)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___dispatcher_io_dis_uops_2_0_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_iq_type) 
              >> 2U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT____Vcellinp__csr_exe_unit__io_rocc_dis_rocc_vals_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
            & (0x6cU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_uopc))) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_exception)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__ren2_alloc_reqs_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_ldst_val) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_dst_rtype))) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_alloc_reqs_0 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_ldst_val) 
            & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__r_uop_dst_rtype))) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___dispatcher_io_dis_uops_0_0_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_iq_type) 
              >> 1U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___dispatcher_io_dis_uops_1_0_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_iq_type));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__dis_ld_val 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_uses_ldq)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_exception)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__dis_st_val 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__dis_fire_0) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_uses_stq)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__r_uop_exception)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12796(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12796\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___queue_io_deq_valid) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___io_empty_output) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_br_mask 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT___io_resp_bits_uop_br_mask_output) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__b1_resolve_mask)));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[0U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___fpu_io_resp_bits_data[0U];
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[1U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___fpu_io_resp_bits_data[1U];
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[2U] 
                = (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___fpu_io_resp_bits_data[2U]);
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_stq_idx 
                = (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__r_uops_3_stq_idx));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_uop_rob_idx 
                = (0x3fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__r_uops_3_rob_idx));
        } else {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_br_mask 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__out_uop_br_mask) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__b1_resolve_mask)));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[0U] 
                = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xdU] 
                    << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xcU] 
                                >> 0x13U));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[1U] 
                = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xeU] 
                    << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xdU] 
                                >> 0x13U));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[2U] 
                = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xfU] 
                          << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___ram_ext_R0_data[0xeU] 
                                      >> 0x13U)));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_stq_idx 
                = (0xfU & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_stq_idx) 
                             << 0x1cU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_6_stq_idx) 
                                           << 0x18U) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_5_stq_idx) 
                                              << 0x14U) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_4_stq_idx) 
                                                 << 0x10U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_3_stq_idx) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_2_stq_idx) 
                                                       << 8U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_1_stq_idx) 
                                                          << 4U) 
                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_stq_idx)))))))) 
                           >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__deq_ptr_value) 
                                        << 2U))));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_uop_rob_idx 
                = (0x3fU & ((0x2fU >= (0x3fU & ((IData)(6U) 
                                                * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__deq_ptr_value))))
                             ? (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_rob_idx)) 
                                          << 0x2aU) 
                                         | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_6_rob_idx)) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_5_rob_idx)) 
                                                << 0x1eU) 
                                               | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_4_rob_idx) 
                                                                   << 0x18U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_3_rob_idx) 
                                                                      << 0x12U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_2_rob_idx) 
                                                                         << 0xcU) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_1_rob_idx) 
                                                                            << 6U) 
                                                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_rob_idx)))))))))) 
                                        >> (0x3fU & 
                                            ((IData)(6U) 
                                             * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__deq_ptr_value)))))
                             : 0U));
        }
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___io_empty_output) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_br_mask 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_br_mask) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__b1_resolve_mask)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT____Vcellinp__fp_sdq__io_enq_bits_data[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT____Vcellinp__fp_sdq__io_enq_bits_data[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[2U] 
            = (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT____Vcellinp__fp_sdq__io_enq_bits_data[2U]);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_stq_idx 
            = (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_stq_idx));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_uop_rob_idx 
            = (0x3fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_rob_idx));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_br_mask 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__out_uop_br_mask) 
               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__b1_resolve_mask)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xdU] 
                << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xcU] 
                            >> 0x13U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[1U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xeU] 
                << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xdU] 
                            >> 0x13U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_data[2U] 
            = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xfU] 
                      << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___ram_ext_R0_data[0xeU] 
                                  >> 0x13U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___core_io_lsu_fp_stdata_bits_uop_stq_idx 
            = (0xfU & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_stq_idx) 
                         << 0xcU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_2_stq_idx) 
                                      << 8U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_1_stq_idx) 
                                                 << 4U) 
                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_stq_idx)))) 
                       >> (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__deq_ptr_value) 
                                   << 2U))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_uop_rob_idx 
            = (0x3fU & ((0x17U >= (0x1fU & ((IData)(6U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__deq_ptr_value))))
                         ? ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_rob_idx) 
                              << 0x12U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_2_rob_idx) 
                                            << 0xcU) 
                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_1_rob_idx) 
                                               << 6U) 
                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_rob_idx)))) 
                            >> (0x1fU & ((IData)(6U) 
                                         * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__deq_ptr_value))))
                         : 0U));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12797(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12797\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT___fpiu_unit_io_ll_iresp_bits_uop_uopc 
        = (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT___queue_io_deq_valid)
                     ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT___io_empty_output)
                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fpu__DOT__r_uops_3_uopc)
                         : ((0x37U >= (0x3fU & ((IData)(7U) 
                                                * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__deq_ptr_value))))
                             ? (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_uopc)) 
                                          << 0x31U) 
                                         | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_6_uopc)) 
                                             << 0x2aU) 
                                            | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_5_uopc)) 
                                                << 0x23U) 
                                               | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_4_uopc)) 
                                                   << 0x1cU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_3_uopc) 
                                                                      << 0x15U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_2_uopc) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_1_uopc) 
                                                                            << 7U) 
                                                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__uops_0_uopc)))))))))) 
                                        >> (0x3fU & 
                                            ((IData)(7U) 
                                             * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__queue__DOT__deq_ptr_value)))))
                             : 0U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT___io_empty_output)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fregister_read__DOT__exe_reg_uops_0_uopc)
                                        : ((0x1bU >= 
                                            (0x1fU 
                                             & ((IData)(7U) 
                                                * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__deq_ptr_value))))
                                            ? ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_uopc) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_2_uopc) 
                                                    << 0xeU) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_1_uopc) 
                                                       << 7U) 
                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__uops_0_uopc)))) 
                                               >> (0x1fU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_pipeline__DOT__fpiu_unit__DOT__fp_sdq__DOT__deq_ptr_value))))
                                            : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__pri_val 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshr_io_req_sec_val_T_4) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__cacheable)) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_match_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshr_io_req_sec_val_T_3 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshr_io_req_sec_val_T_4) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__tag_match_0)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_0)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__cacheable));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshr_io_req_sec_val_T_7 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT___mshr_io_req_sec_val_T_4) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__tag_match_0)) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__idx_matches_0_1)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__dcache__DOT__mshrs__DOT__cacheable));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT___T_144 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_load_incoming_0_will_fire) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_stad_incoming_0_will_fire));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12798(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12798\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT___will_fire_stad_incoming_0_T_5 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_load_incoming_0_will_fire)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_stad_incoming_0_will_fire))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT___will_fire_stad_incoming_0_T_2 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_load_incoming_0_will_fire)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__lsu__DOT__will_fire_stad_incoming_0_will_fire))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12799(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12799\n"); );
    // Body
    if (vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][1U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][2U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][3U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][4U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[4U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][5U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[5U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][6U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[6U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][7U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[7U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][8U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[8U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][9U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[9U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xaU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xaU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xbU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xbU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xcU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xcU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xdU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xdU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xeU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xeU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0xfU] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0xfU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x10U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x10U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x11U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x11U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x12U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x12U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x13U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x13U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x14U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x14U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory[0U][0x15U] 
            = vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__f4__DOT__ram_ext__DOT__Memory__v0[0x15U];
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__slot_will_hit_tail 
        = (3U & ((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                          >> 2U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                                     >> 4U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                                                >> 6U)) 
                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                       >> 8U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                                  >> 0xaU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                                               >> 0xcU)) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__frontend__DOT__fb__DOT__tail_collisions) 
                    >> 0xeU)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_294 
        = ((0x10000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                        << 0x10U)) | ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  << 0xeU)) 
                                      | ((0x4000U & 
                                          ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 0xeU)) 
                                         | ((0x2000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                                << 0xdU)) 
                                            | ((0x1000U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 8U)) 
                                               | ((0x800U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      << 6U)) 
                                                  | ((0x400U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 4U)) 
                                                     | ((0x200U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 7U)) 
                                                            << 9U)) 
                                                        | ((0x100U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 8U)) 
                                                               << 8U)) 
                                                           | ((0x80U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 9U)) 
                                                                  << 7U)) 
                                                              | ((0x40U 
                                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x20U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x1aU)) 
                                                                        << 5U)) 
                                                                    | ((0x10U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x1bU)) 
                                                                           << 4U)) 
                                                                       | ((8U 
                                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x19U)) 
                                                                          | ((4U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                             | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12800(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12800\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_304 
        = ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xbU)) 
                                    | ((0x800U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  << 9U)) 
                                       | ((0x400U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x200U 
                                              & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 4U)) 
                                                 << 9U)) 
                                             | ((0x100U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 3U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 7U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                >> 0x17U)) 
                                                            | ((8U 
                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                   >> 0x19U)) 
                                                               | ((4U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x1fU))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_24 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 1U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xcU))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12801(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12801\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_44 
        = ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xaU)) 
                                          | ((0x200U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x100U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 3U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x1fU))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_52 
        = ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 6U)) | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 4U)) | 
                                ((0x10U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 2U)) 
                                 | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 3U)) 
                                    | ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 2U)) 
                                       | ((2U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 4U)) 
                                          | (1U & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 6U)))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12802(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12802\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_2 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xcU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_340 
        = ((0x40000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                        << 0x12U)) | ((0x20000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0x10U)) 
                                      | ((0x10000U 
                                          & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 2U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                                << 0xfU)) 
                                            | ((0x4000U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0xaU)) 
                                               | ((0x2000U 
                                                   & ((~ 
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                        >> 5U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 6U)) 
                                                     | ((0x800U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 9U)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x19U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12803(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12803\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_344 
        = ((0x40000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                        << 0x12U)) | ((0x20000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0x10U)) 
                                      | ((0x10000U 
                                          & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 2U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                                << 0xfU)) 
                                            | ((0x4000U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0xaU)) 
                                               | ((0x2000U 
                                                   & ((~ 
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                        >> 5U)) 
                                                      << 0xdU)) 
                                                  | ((0x1000U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 6U)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0x14U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0x15U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x16U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0x17U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x18U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x13U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12804(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12804\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_374 
        = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 5U)) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       << 3U)) 
                                                   | ((0x100U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x16U)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x17U)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x18U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1aU)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1bU)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x19U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1dU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1dU)) 
                                                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1fU))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_390 
        = ((0x100000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                         << 0x14U)) | ((0x80000U & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                         << 0x12U)) 
                                       | ((0x40000U 
                                           & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 0x12U)) 
                                          | ((0x20000U 
                                              & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 0x11U)) 
                                             | ((0x10000U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 0xcU)) 
                                                | ((0x8000U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 5U)) 
                                                       << 0xfU)) 
                                                   | ((0x4000U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          << 8U)) 
                                                      | ((0x2000U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xcU)) 
                                                             << 0xdU)) 
                                                         | ((0x1000U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0xdU)) 
                                                                << 0xcU)) 
                                                            | ((0x800U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0xeU)) 
                                                                   << 0xbU)) 
                                                               | ((0x400U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x14U)) 
                                                                      << 0xaU)) 
                                                                  | ((0x200U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x15U)) 
                                                                         << 9U)) 
                                                                     | ((0x100U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x16U)) 
                                                                            << 8U)) 
                                                                        | ((0x80U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                               << 7U)) 
                                                                           | ((0x40U 
                                                                               & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x18U)) 
                                                                                << 6U)) 
                                                                              | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12805(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12805\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_156 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 4U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 4U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_106 
        = ((0x40000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                           << 0x1eU)) | ((0x20000000U 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                             << 0x1cU)) 
                                         | ((0x10000000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 3U)) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      << 0x16U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 0x14U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            << 0x12U)) 
                                                        | ((0x800000U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 7U)) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 8U)) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 9U)) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0xaU)) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0xbU)) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xcU)) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xeU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1cU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12806(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12806\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_284 
        = ((0x40000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                           << 0x1eU)) | ((0x20000000U 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                             << 0x1cU)) 
                                         | ((0x10000000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                                << 0x1cU)) 
                                            | ((0x8000000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 3U)) 
                                                   << 0x1bU)) 
                                               | ((0x4000000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      << 0x16U)) 
                                                  | ((0x2000000U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 0x14U)) 
                                                     | ((0x1000000U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            << 0x12U)) 
                                                        | ((0x800000U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 7U)) 
                                                               << 0x17U)) 
                                                           | ((0x400000U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 8U)) 
                                                                  << 0x16U)) 
                                                              | ((0x200000U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 9U)) 
                                                                     << 0x15U)) 
                                                                 | ((0x100000U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0xaU)) 
                                                                        << 0x14U)) 
                                                                    | ((0x80000U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0xbU)) 
                                                                           << 0x13U)) 
                                                                       | ((0x40000U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xcU)) 
                                                                              << 0x12U)) 
                                                                          | ((0x20000U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xdU)) 
                                                                                << 0x11U)) 
                                                                             | ((0x10000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xeU)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x10U)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x11U)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x12U)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xcU)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x16U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x18U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12807(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12807\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_290 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
            << 0x1fU) | ((0x40000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x15U)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x18U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12808(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12808\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_356 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
            << 0x1fU) | ((0x40000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                         << 0x1dU)) 
                         | ((0x20000000U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 2U)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 7U)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 8U)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 9U)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ 
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                        >> 0xaU)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 0xbU)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0xcU)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0xdU)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0xeU)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0xfU)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x10U)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x11U)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x12U)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x16U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12809(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12809\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_300 
        = ((0x200000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                         << 0x15U)) | ((0x100000U & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                         << 0x13U)) 
                                       | ((0x80000U 
                                           & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 0x13U)) 
                                          | ((0x40000U 
                                              & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 0x12U)) 
                                             | ((0x20000U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 0xdU)) 
                                                | ((0x10000U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       << 0xbU)) 
                                                   | ((0x8000U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          << 9U)) 
                                                      | ((0x4000U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 7U)) 
                                                             << 0xeU)) 
                                                         | ((0x2000U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 8U)) 
                                                                << 0xdU)) 
                                                            | ((0x1000U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 9U)) 
                                                                   << 0xcU)) 
                                                               | ((0x800U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0xaU)) 
                                                                      << 0xbU)) 
                                                                  | ((0x400U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0xbU)) 
                                                                         << 0xaU)) 
                                                                     | ((0x200U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0xcU)) 
                                                                            << 9U)) 
                                                                        | ((0x100U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xdU)) 
                                                                               << 8U)) 
                                                                           | ((0x80U 
                                                                               & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0xeU)) 
                                                                                << 7U)) 
                                                                              | ((0x40U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12810(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12810\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_10 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 5U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 6U)) 
                                              << 3U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0xcU)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0xdU)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xeU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_40 
        = ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xcU)) | ((0x800U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               << 0xaU)) 
                                    | ((0x400U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 4U)) 
                                             | ((0x80U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 2U)) 
                                                | ((0x40U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x1aU)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x1bU)) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1cU)) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1dU)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1eU)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x1fU)))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12811(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12811\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_42 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xcU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_110 
        = ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xaU)) 
                                          | ((0x200U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 5U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x1fU))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12812(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12812\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_20 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 4U)) 
                                    | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 2U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 4U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_166 
        = ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 6U)) | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 4U)) | 
                                ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 4U)) 
                                 | ((8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           >> 1U)) 
                                    | ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 3U)) 
                                       | ((2U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 5U)) 
                                          | (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0xdU))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_278 
        = ((0x40000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                        << 0x12U)) | ((0x20000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0x10U)) 
                                      | ((0x10000U 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                             << 0xeU)) 
                                         | ((0x8000U 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                            | ((0x4000U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 4U)) 
                                                   << 0xeU)) 
                                               | ((0x2000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      << 8U)) 
                                                  | ((0x1000U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 6U)) 
                                                         << 0xcU)) 
                                                     | ((0x800U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 2U)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0xeU)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x14U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0x15U)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x16U)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & ((~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x17U)) 
                                                                           << 6U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x18U)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12813(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12813\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_6 
        = ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 6U)) | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 4U)) | 
                                ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 4U)) 
                                 | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 3U)) 
                                    | ((4U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 2U)) 
                                       | ((2U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xeU)))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_138 
        = ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 6U)) | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 4U)) | 
                                ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 4U)) 
                                 | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 4U)) 
                                           << 3U)) 
                                    | ((4U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 6U)) 
                                              << 2U)) 
                                       | ((2U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0xcU)) 
                                          | (1U & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xeU)))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T 
        = ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 6U)) | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 4U)) | 
                                ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 4U)) 
                                 | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 3U)) 
                                    | ((4U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 5U)) 
                                              << 2U)) 
                                       | ((2U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                                 << 1U)) 
                                          | (1U & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xcU)))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12814(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12814\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_38 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xcU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x19U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1aU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1bU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1cU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1dU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_248 
        = ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 6U)) 
                                          | ((0x200U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 4U)) 
                                             | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 7U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0x13U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x1fU))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12815(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12815\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_150 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 1U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0xdU)))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr__DOT___decoded_orMatrixOutputs_T_17 
        = (((IData)((0x10000001U == (0xdfc00001U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst))) 
            << 1U) | (IData)((0x40000000U == (0xc0000000U 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12816(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12816\n"); );
    // Init
    CData/*31:0*/ __Vdeeptemp_hcc2feee6__0;
    // Body
    __Vdeeptemp_hcc2feee6__0 = ((((((((((((((((((((
                                                   (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((0x7a0U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U)) 
                                                                                | (0x7a1U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x7a2U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x7a3U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x301U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x300U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x305U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x344U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x304U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x340U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x341U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x343U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x342U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xf14U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x7b0U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x7b1U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x7b2U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (1U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (2U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (3U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x320U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb00U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb02U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x323U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb03U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc03U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x324U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb04U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc04U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x325U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb05U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc05U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x326U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb06U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc06U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x327U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb07U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc07U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x328U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb08U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc08U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x329U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb09U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc09U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32aU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0aU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0aU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32bU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0bU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0bU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32cU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0cU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0cU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32dU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0dU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0dU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32eU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0eU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0eU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x32fU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb0fU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc0fU 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x330U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb10U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc10U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x331U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb11U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc11U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0x332U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xb12U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                                | (0xc12U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                               | (0x333U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                              | (0xb13U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                             | (0xc13U 
                                                                                == 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                            | (0x334U 
                                                                               == 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x14U))) 
                                                                           | (0xb14U 
                                                                              == 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x14U))) 
                                                                          | (0xc14U 
                                                                             == 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x14U))) 
                                                                         | (0x335U 
                                                                            == 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                             >> 0x14U))) 
                                                                        | (0xb15U 
                                                                           == 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x14U))) 
                                                                       | (0xc15U 
                                                                          == 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x14U))) 
                                                                      | (0x336U 
                                                                         == 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0x14U))) 
                                                                     | (0xb16U 
                                                                        == 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x14U))) 
                                                                    | (0xc16U 
                                                                       == 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x14U))) 
                                                                   | (0x337U 
                                                                      == 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0x14U))) 
                                                                  | (0xb17U 
                                                                     == 
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                      >> 0x14U))) 
                                                                 | (0xc17U 
                                                                    == 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x14U))) 
                                                                | (0x338U 
                                                                   == 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x14U))) 
                                                               | (0xb18U 
                                                                  == 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                   >> 0x14U))) 
                                                              | (0xc18U 
                                                                 == 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x14U))) 
                                                             | (0x339U 
                                                                == 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0x14U))) 
                                                            | (0xb19U 
                                                               == 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                >> 0x14U))) 
                                                           | (0xc19U 
                                                              == 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x14U))) 
                                                          | (0x33aU 
                                                             == 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0x14U))) 
                                                         | (0xb1aU 
                                                            == 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0x14U))) 
                                                        | (0xc1aU 
                                                           == 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x14U))) 
                                                       | (0x33bU 
                                                          == 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 0x14U))) 
                                                      | (0xb1bU 
                                                         == 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0x14U))) 
                                                     | (0xc1bU 
                                                        == 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0x14U))) 
                                                    | (0x33cU 
                                                       == 
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                        >> 0x14U))) 
                                                   | (0xb1cU 
                                                      == 
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0x14U))) 
                                                  | (0xc1cU 
                                                     == 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 0x14U))) 
                                                 | (0x33dU 
                                                    == 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 0x14U))) 
                                                | (0xb1dU 
                                                   == 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0x14U))) 
                                               | (0xc1dU 
                                                  == 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                                              | (0x33eU 
                                                 == 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 0x14U))) 
                                             | (0xb1eU 
                                                == 
                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0x14U))) 
                                            | (0xc1eU 
                                               == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                                           | (0x33fU 
                                              == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 0x14U))) 
                                          | (0xb1fU 
                                             == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0x14U))) 
                                         | (0xc1fU 
                                            == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 0x14U))) 
                                        | (0x306U == 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            >> 0x14U))) 
                                       | (0xc00U == 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           >> 0x14U))) 
                                      | (0xc02U == 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          >> 0x14U))) 
                                     | (0x100U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                                    | (0x144U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 0x14U))) 
                                   | (0x104U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0x14U))) 
                                  | (0x140U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 0x14U))) 
                                 | (0x142U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 0x14U))) 
                                | (0x143U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 0x14U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__csr__DOT__csr_exists_1 
        = ((((((((((((((((((((((((((((__Vdeeptemp_hcc2feee6__0 
                                      | (0x180U == 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          >> 0x14U))) 
                                     | (0x141U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                                    | (0x105U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 0x14U))) 
                                   | (0x106U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0x14U))) 
                                  | (0x303U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 0x14U))) 
                                 | (0x302U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 0x14U))) 
                                | (0x3a0U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 0x14U))) 
                               | (0x3a2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                             >> 0x14U))) 
                              | (0x3b0U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            >> 0x14U))) 
                             | (0x3b1U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           >> 0x14U))) 
                            | (0x3b2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          >> 0x14U))) 
                           | (0x3b3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                         >> 0x14U))) 
                          | (0x3b4U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                        >> 0x14U))) 
                         | (0x3b5U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                       >> 0x14U))) 
                        | (0x3b6U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                      >> 0x14U))) | 
                       (0x3b7U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                   >> 0x14U))) | (0x3b8U 
                                                  == 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                     | (0x3b9U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                   >> 0x14U))) | (0x3baU 
                                                  == 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x14U))) 
                   | (0x3bbU == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                 >> 0x14U))) | (0x3bcU 
                                                == 
                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 0x14U))) 
                 | (0x3bdU == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                               >> 0x14U))) | (0x3beU 
                                              == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 0x14U))) 
               | (0x3bfU == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                             >> 0x14U))) | (0x7c1U 
                                            == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 0x14U))) 
             | (0xf13U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                           >> 0x14U))) | (0xf12U == 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           >> 0x14U))) 
           | (0xf11U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                         >> 0x14U)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12817(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12817\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_16 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 2U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 5U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 0xcU)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_18 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 3U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 4U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 5U)) 
                                            << 4U)) 
                                          | ((8U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 0xcU)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12818(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12818\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_48 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xeU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x19U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_54 
        = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 9U)) 
                                          | ((0x800U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 5U)) 
                                                | ((0x200U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xcU)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xdU)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0xeU)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x19U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1aU)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1bU)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1cU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12819(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12819\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_66 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 5U)) 
                                              << 3U)) 
                                       | ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 4U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x19U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0x1aU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_70 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 3U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 5U)) 
                                              << 3U)) 
                                       | ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 4U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 0x19U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0x1aU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_120 
        = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 9U)) 
                                          | ((0x800U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 3U)) 
                                                   | ((0x100U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x19U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1aU)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1bU)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1cU)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1dU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12820(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12820\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_128 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            >> 1U)) 
                                          | ((8U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                             | ((4U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xaU)) 
                                                | ((2U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_134 
        = ((0x200U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 9U)) | ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                 | ((0x80U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 7U)) 
                                    | ((0x40U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 6U)) 
                                       | ((0x20U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 1U)) 
                                          | ((0x10U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 1U)) 
                                             | ((8U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 3U)) 
                                                | ((4U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0xaU)) 
                                                   | ((2U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0xeU))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12821(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12821\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_174 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 1U)) 
                                       | ((0x10U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            >> 1U)) 
                                          | ((8U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 0xcU)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0xeU)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_204 
        = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 5U)) 
                                                | ((0x200U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 4U)) 
                                                      | ((0x80U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xdU)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                >> 8U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x19U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1aU)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1bU)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1cU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12822(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12822\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_206 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 4U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 8U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_218 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst) 
                                          | ((8U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xeU))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12823(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12823\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_228 
        = ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xdU)) | ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xbU)) 
                                    | ((0x800U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xaU)) 
                                          | ((0x200U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x100U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 3U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 0x13U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1dU)) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1eU)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                            >> 0x1fU))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_230 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xcU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0x13U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12824(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12824\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_254 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 5U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xdU)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                          >> 7U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0x13U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_296 
        = ((0x40000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                        << 0x12U)) | ((0x20000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0x10U)) 
                                      | ((0x10000U 
                                          & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 2U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & ((~ 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                                << 0xfU)) 
                                            | ((0x4000U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   << 0xaU)) 
                                               | ((0x2000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      << 8U)) 
                                                  | ((0x1000U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         << 6U)) 
                                                     | ((0x800U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 7U)) 
                                                            << 0xbU)) 
                                                        | ((0x400U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 8U)) 
                                                               << 0xaU)) 
                                                           | ((0x200U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 9U)) 
                                                                  << 9U)) 
                                                              | ((0x100U 
                                                                  & ((~ 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                       >> 0xdU)) 
                                                                     << 8U)) 
                                                                 | ((0x80U 
                                                                     & ((~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                          >> 0xeU)) 
                                                                        << 7U)) 
                                                                    | ((0x40U 
                                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x13U)) 
                                                                       | ((0x20U 
                                                                           & ((~ 
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1aU)) 
                                                                              << 5U)) 
                                                                          | ((0x10U 
                                                                              & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1bU)) 
                                                                                << 4U)) 
                                                                             | ((8U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1dU)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & ((~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (~ 
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                                >> 0x1fU)))))))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12825(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12825\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_330 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 6U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 5U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       << 2U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                   >> 0x17U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x1bU)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_36 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 4U)) 
                                    | ((8U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 3U)) 
                                       | ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 >> 3U)) 
                                          | ((2U & 
                                              ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                               << 1U)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xeU))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12826(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12826\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_154 
        = ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                     << 7U)) | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                          << 5U)) | 
                                ((0x20U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 5U)) 
                                 | ((0x10U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 4U)) 
                                              << 4U)) 
                                    | ((8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              >> 2U)) 
                                       | ((4U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 6U)) 
                                                 << 2U)) 
                                          | ((2U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 0xcU)) 
                                             | (1U 
                                                & (~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 0xeU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_226 
        = ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 8U)) | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                           << 6U)) 
                                 | ((0x40U & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 2U)) 
                                              << 6U)) 
                                    | ((0x20U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 3U)) 
                                                 << 5U)) 
                                       | ((0x10U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst) 
                                          | ((8U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 2U)) 
                                             | ((4U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 4U)) 
                                                | ((2U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       >> 0xcU)) 
                                                   | (1U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xeU))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_364 
        = ((0x8000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xfU)) | ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xdU)) 
                                    | ((0x2000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                  >> 3U)) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 7U)) 
                                             | ((0x400U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 5U)) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       << 3U)) 
                                                   | ((0x100U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x14U)) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0x15U)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x16U)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x17U)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x18U)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1aU)) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1bU)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1dU)) 
                                                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1fU))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12827(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12827\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_22 
        = ((0x200U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 9U)) | ((0x100U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                            << 7U)) 
                                 | ((0x80U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 5U)) 
                                    | ((0x40U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 3U)) 
                                       | ((0x20U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 4U)) 
                                            << 5U)) 
                                          | ((0x10U 
                                              & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 5U)) 
                                                 << 4U)) 
                                             | ((8U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 6U)) 
                                                    << 3U)) 
                                                | ((4U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 0xcU)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xdU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0xeU))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_80 
        = ((0x800U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 0xbU)) | ((0x400U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 9U)) 
                                   | ((0x200U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 2U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 3U)) 
                                            | ((0x40U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 5U)) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 1U)) 
                                                  | ((0x10U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 0x1aU)) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0x1bU)) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x1eU)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1fU))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12828(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12828\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_84 
        = ((0x800U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                      << 0xbU)) | ((0x400U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                              << 9U)) 
                                   | ((0x200U & ((~ 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                   >> 2U)) 
                                                 << 9U)) 
                                      | ((0x100U & 
                                          ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               >> 3U)) 
                                           << 8U)) 
                                         | ((0x80U 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 3U)) 
                                            | ((0x40U 
                                                & ((~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 5U)) 
                                                   << 6U)) 
                                               | ((0x20U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 1U)) 
                                                  | ((0x10U 
                                                      & ((~ 
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                           >> 0x1aU)) 
                                                         << 4U)) 
                                                     | ((8U 
                                                         & ((~ 
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                              >> 0x1cU)) 
                                                            << 3U)) 
                                                        | ((4U 
                                                            & ((~ 
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                 >> 0x1dU)) 
                                                               << 2U)) 
                                                           | ((2U 
                                                               & ((~ 
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                    >> 0x1eU)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1fU))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_232 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 6U)) 
                                             | ((0x200U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    << 4U)) 
                                                | ((0x100U 
                                                    & ((~ 
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                         >> 6U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xeU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0x13U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & ((~ 
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1dU)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (~ 
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                               >> 0x1fU)))))))))))))))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__12829(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__12829\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_302 
        = ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xcU)) | ((0x800U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                               << 0xaU)) 
                                    | ((0x400U & ((~ 
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                    >> 2U)) 
                                                  << 0xaU)) 
                                       | ((0x200U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 9U)) 
                                          | ((0x100U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 4U)) 
                                             | ((0x80U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 5U)) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst) 
                                                   | ((0x20U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0x1aU)) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                             >> 0x17U)) 
                                                         | ((8U 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                >> 0x19U)) 
                                                            | ((4U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1dU)) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1eU)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x1fU)))))))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__decode_units_1__DOT___cs_decoder_decoded_T_360 
        = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                       << 0xeU)) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                << 0xcU)) 
                                    | ((0x1000U & (
                                                   (~ 
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                     >> 2U)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                >> 3U)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                 << 6U)) 
                                             | ((0x200U 
                                                 & ((~ 
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                      >> 5U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                       << 2U)) 
                                                   | ((0x80U 
                                                       & ((~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                            >> 0xcU)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & ((~ 
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                               >> 0xeU)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & ((~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                  >> 0x1aU)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & ((~ 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                     >> 0x1bU)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & ((~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                        >> 0x1cU)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                         >> 0x1bU)) 
                                                                     | ((2U 
                                                                         & ((~ 
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                              >> 0x1eU)) 
                                                                            << 1U)) 
                                                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT___frontend_io_cpu_fetchpacket_bits_uops_1_bits_inst 
                                                                           >> 0x1fU)))))))))))))));
}

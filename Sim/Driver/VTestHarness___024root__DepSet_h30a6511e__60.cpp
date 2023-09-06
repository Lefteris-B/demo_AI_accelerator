// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6242(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6242\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x12U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:425: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 425, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:426:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:427: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 427, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:431: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutFull carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 431, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:432:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:433: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 433, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6243(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6243\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:437: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutFull contains invalid mask (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 437, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:438:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:439: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 439, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                           & (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 6U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x1aU))))) 
                              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & ((((((((0U == ((0x7fffcU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 5U) 
                                                      | (0x1cU 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x1bU)))) 
                                                  | (3U 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1aU)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 5U) 
                                                   | (0x10U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1bU))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1aU))))) 
                                         | (0x200U 
                                            == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 2U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1eU))))) 
                                        | (0x2010U 
                                           == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1aU))))) 
                                       | (3U == (0x3fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 8U)))) 
                                      | (0x10000U == 
                                         (0xfffffU 
                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 6U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x1aU))))) 
                                     | (0x54000U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 6U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x1aU))))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0xaU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:443: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 443, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:444:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:445: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 445, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6244(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6244\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x12U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:449: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 449, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:450:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:451: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 451, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:455: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutPartial carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 455, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:456:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:457: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 457, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6245(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6245\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xffffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 0x12U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xeU)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__mask)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:461: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 461, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:462:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:463: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 463, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (4U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))) 
                           & (((((((((0U == ((0x7fffcU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 5U) 
                                                 | (0x1cU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1bU)))) 
                                             | (3U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1aU)))) 
                                     | (3U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1aU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 5U) 
                                                   | (0x10U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1bU))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1aU))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 2U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1eU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 8U)))) 
                                | (0x10000U == (0xfffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 6U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1aU))))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1aU))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:467: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 467, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:468:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:469: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 469, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6246(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6246\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x12U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:473: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 473, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:474:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:475: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 475, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:479: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 479, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:480:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:481: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 481, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6247(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6247\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:485: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 485, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:486:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:487: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 487, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (4U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))) 
                           & (((((((((0U == ((0x7fffcU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 5U) 
                                                 | (0x1cU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1bU)))) 
                                             | (3U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1aU)))) 
                                     | (3U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1aU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 5U) 
                                                   | (0x10U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1bU))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x1aU))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 2U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1eU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 6U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1aU))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 8U)))) 
                                | (0x10000U == (0xfffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 6U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1aU))))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 6U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1aU))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:491: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 491, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:492:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:493: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 493, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6248(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6248\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x12U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:497: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Logical address not aligned to size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 497, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:498:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:499: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 499, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:503: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 503, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:504:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:505: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 505, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6249(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6249\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:509: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Logical contains invalid mask (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 509, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:510:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:511: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 511, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                           & (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 6U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x1aU))))) 
                              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & (((2U == (0xffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 2U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1eU)))) 
                                     | (0x10000U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 6U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x1aU))))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 0xaU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:515: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 515, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:516:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:517: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 517, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6250(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6250\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x12U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xeU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:521: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Hint address not aligned to size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 521, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:522:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:523: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 523, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:527: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 527, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:528:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:529: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 529, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6251(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6251\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:533: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Hint contains invalid mask (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 533, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:534:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:535: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 535, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[5U] 
                        >> 0x1eU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:539: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel Hint is corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 539, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:540:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:541: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 541, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6252(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6252\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:545: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel has invalid opcode (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 545, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:546:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:547: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 547, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (6U == (0x187U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:551: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 551, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:552:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:553: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 553, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6253(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6253\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:557: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 557, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:558:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:559: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 559, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                        >> 0x12U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:563: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 563, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:564:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:565: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 565, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6254(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6254\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (0x20006U == (0x20007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:569: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel ReleaseAck is denied (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 569, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:570:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:571: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 571, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (4U == (0x187U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:575: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel Grant smaller than a beat (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 575, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:576:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:577: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 577, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6255(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6255\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (0x1cU == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:581: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel Grant carries invalid cap param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 581, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:582:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:583: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 583, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (0x14U == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:587: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel Grant carries toN param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 587, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:588:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:589: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 589, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6256(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6256\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                        >> 0x12U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:593: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel Grant is corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 593, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:594:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:595: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 595, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (5U == (0x187U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:599: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel GrantData smaller than a beat (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 599, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:600:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:601: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 601, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6257(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6257\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (0x1dU == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:605: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 605, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:606:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:607: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 607, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                      & (0x15U == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:611: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel GrantData carries toN param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 611, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:612:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:613: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 613, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6258(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6258\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                             >> 0x12U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:617: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 617, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:618:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:619: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 619, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:623: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel AccessAck carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 623, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:624:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:625: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 625, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6259(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6259\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                        >> 0x12U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:629: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel AccessAck is corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 629, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:630:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:631: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 631, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:635: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 635, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:636:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:637: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 637, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6260(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6260\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                             >> 0x12U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:641: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 641, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:642:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:643: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 643, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:647: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel HintAck carries invalid param (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 647, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:648:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:649: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 649, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6261(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6261\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                        >> 0x12U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:653: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel HintAck is corrupt (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 653, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:654:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:655: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 655, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:659: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 659, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:660:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:661: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 661, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6262(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6262\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:665: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel param changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 665, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:666:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:667: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 667, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:671: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel size changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 671, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:672:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:673: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 673, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6263(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6263\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:677: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel source changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 677, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:678:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:679: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 679, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                          << 0x12U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xeU)) != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:683: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel address changed with multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 683, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:684:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:685: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 685, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6264(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6264\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:689: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 689, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:690:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:691: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 691, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:695: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel param changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 695, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:696:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:697: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 697, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6265(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6265\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:701: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel size changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 701, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:702:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:703: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 703, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 9U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:707: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel source changed within multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 707, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:708:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:709: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 709, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6266(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6266\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:713: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel sink changed with multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 713, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:714:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:715: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 715, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:719: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel denied changed with multibeat operation (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 719, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:720:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:721: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 721, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6267(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6267\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1243) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU)))
                         ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight) 
                                       >> (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU))))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:725: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' channel re-used a source ID (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 725, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:726:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:727: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 727, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1262) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 9U)))
                             ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight) 
                                           >> (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U))))
                             : 0U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:731: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 731, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:732:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:733: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 733, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6268(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6268\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1262) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:737: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel contains improper opcode response (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 737, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:738:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:739: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 739, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6269(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6269\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1262) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (0xfU & 
                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:743: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 743, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:744:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:745: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 745, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1262) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))) 
                                                                            << 2U)) 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))) 
                                                                            << 2U)) 
                                                             >> 1U)))))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))) 
                                                                               << 2U)) 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_opcodes, 
                                                                                ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U)))) 
                                                                                << 2U)) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:749: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel contains improper opcode response (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 749, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:750:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:751: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 751, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6270(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6270\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h2b47ebc4__0;
    VlWide<4>/*127:0*/ __Vtemp_h16d87009__0;
    VlWide<4>/*127:0*/ __Vtemp_h3a5b16b3__0;
    // Body
    VL_EXTEND_WI(125,4, __Vtemp_h2b47ebc4__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h16d87009__0[0U] = (__Vtemp_h2b47ebc4__0[0U] 
                                << 3U);
    __Vtemp_h16d87009__0[1U] = ((__Vtemp_h2b47ebc4__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h2b47ebc4__0[1U] 
                                              << 3U));
    __Vtemp_h16d87009__0[2U] = ((__Vtemp_h2b47ebc4__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h2b47ebc4__0[2U] 
                                              << 3U));
    __Vtemp_h16d87009__0[3U] = ((__Vtemp_h2b47ebc4__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h2b47ebc4__0[3U] 
                                              << 3U));
    VL_SHIFTR_WWW(128,128,128, __Vtemp_h3a5b16b3__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes, __Vtemp_h16d87009__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1262) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (__Vtemp_h3a5b16b3__0[0U] 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:755: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 755, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:756:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:757: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 757, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty))) 
                        & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU)) == (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))) 
                       & (6U != (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__portsAOI_filtered_1_0_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:761: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 761, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:762:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:763: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 763, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6271(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6271\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                    ? ((0xfU >= (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))
                                        ? (0xffffU 
                                           & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))))
                                        : 0U) : 0U) 
                                  != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1))) 
                                       & (6U != (7U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                       ? ((0xfU >= 
                                           (0xfU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))
                                           : 0U) : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___same_cycle_resp_T_1)
                                            ? ((0xfU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))
                                                ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xaU))))
                                                : 0U)
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:767: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'A' and 'D' concurrent, despite minlatency 6 (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 767, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:768:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:769: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 769, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6272(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6272\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:773: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: TileLink timeout expired (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 773, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:774:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:775: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 775, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2))) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:779: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 779, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:780:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:781: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 781, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6273(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6273\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__out_10_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2))) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:785: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1: Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:13)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 785, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv:786:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_47.sv:787: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_47.sv", 787, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__readys_readys) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__empty)))) 
                                 | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__readys_readys) 
                                        >> 1U) & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar_10.sv:184: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar: Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv", 184, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv:185:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar_10.sv:186: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv", 186, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6274(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6274\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                                      | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__readys_readys) 
                                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__empty)))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__readys_readys) 
                                     >> 1U) & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar_10.sv:190: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar: Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv", 190, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv:191:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar_10.sv:192: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar_10.sv", 192, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT___spad_io_dma_read_resp_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT___spad_io_dma_read_resp_bits_cmd_id))
                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_valid)
                            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_valid)))))) {
        VL_WRITEF("[%0t] %%Error: DMACommandTracker.sv:130: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.load_controller.cmd_tracker: Assertion failed\n    at DMACommandTracker.scala:88 assert(cmds(cmd_id).valid)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv", 130, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv:131:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: DMACommandTracker.sv:132: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.load_controller.cmd_tracker\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv", 132, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6275(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6275\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT___spad_io_dma_read_resp_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT___spad_io_dma_read_resp_bits_cmd_id))
                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_bytes_left)
                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_bytes_left)) 
                        < (0x7ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_finished)
                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_tag_bytes_read)
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_acc_finished)
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_bytes_read)
                                          : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_laddr_is_acc_addr)
                                              ? (0xfffcU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_tag_cols) 
                                                    << 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_tag_cols))))))))) {
        VL_WRITEF("[%0t] %%Error: DMACommandTracker.sv:136: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.load_controller.cmd_tracker: Assertion failed\n    at DMACommandTracker.scala:89 assert(cmds(cmd_id).bytes_left >= io.request_returned.bits.bytes_read)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv", 136, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv:137:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: DMACommandTracker.sv:138: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.load_controller.cmd_tracker\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DMACommandTracker.sv", 138, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_alloc_reqs_0) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__rbk_valids_1))) 
                                  | (~ ((((((((((((
                                                   (((((((((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_0) 
                                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst)) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_1) 
                                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_2) 
                                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_3) 
                                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_4) 
                                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_5) 
                                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_6) 
                                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_7) 
                                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_8) 
                                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_9) 
                                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_10) 
                                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_11) 
                                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_12) 
                                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_13) 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_14) 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_15) 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_16) 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_17) 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_18) 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_19) 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_20) 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_21) 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_22) 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_23) 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_24) 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_25) 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_26) 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_27) 
                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_28) 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_29) 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_30) 
                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))) 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_31) 
                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst))))) 
                                 | ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_0_pdst)) 
                                    & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))))))))) {
        VL_WRITEF("[%0t] %%Error: RenameMapTable_1.sv:4650: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.maptable: Assertion failed: [maptable] Trying to write a duplicate mapping.\n    at rename-maptable.scala:128 assert (!r || !map_table.contains(p) || p === 0.U && io.rollback, \"[maptable] Trying to write a duplicate mapping.\")}\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv", 4650, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv:4651:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameMapTable_1.sv:4652: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.maptable\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv", 4652, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6276(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6276\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__ren2_alloc_reqs_1) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__rbk_valids_0))) 
                                  | (~ ((((((((((((
                                                   (((((((((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_0) 
                                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst)) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_1) 
                                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_2) 
                                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_3) 
                                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_4) 
                                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_5) 
                                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_6) 
                                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_7) 
                                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_8) 
                                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_9) 
                                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_10) 
                                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_11) 
                                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_12) 
                                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_13) 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_14) 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_15) 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_16) 
                                                          == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_17) 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_18) 
                                                        == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_19) 
                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_20) 
                                                      == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_21) 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_22) 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_23) 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_24) 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_25) 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_26) 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_27) 
                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_28) 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_29) 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_30) 
                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))) 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__maptable__DOT__map_table_31) 
                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst))))) 
                                 | ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT____Vcellinp__maptable__io_remap_reqs_1_pdst)) 
                                    & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))))))))) {
        VL_WRITEF("[%0t] %%Error: RenameMapTable_1.sv:4656: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.maptable: Assertion failed: [maptable] Trying to write a duplicate mapping.\n    at rename-maptable.scala:128 assert (!r || !map_table.contains(p) || p === 0.U && io.rollback, \"[maptable] Trying to write a duplicate mapping.\")}\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv", 4656, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv:4657:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameMapTable_1.sv:4658: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.maptable\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameMapTable_1.sv", 4658, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6277(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6277\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_valid)) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_laddr_is_acc_addr)) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_pixel_repeats))))) {
        VL_WRITEF("[%0t] %%Error: PixelRepeater.sv:200: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.zero_writer_pixel_repeater: Assertion failed\n    at PixelRepeater.scala:58 assert(!(req.valid && is_acc_addr && req.bits.pixel_repeats > 0.U))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/PixelRepeater.sv", 200, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/PixelRepeater.sv:201:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: PixelRepeater.sv:202: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.gemmini.spad.zero_writer_pixel_repeater\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/PixelRepeater.sv", 202, "");
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                     & (0U != (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                 | ((1ULL << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                    & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                | ((1ULL << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                   & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                               & ((((1ULL << (0x3fU 
                                              & ((2U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))
                                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_pdst)
                                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_stale_pdst)))) 
                                    & (- (QData)((IData)(
                                                         ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst_val) 
                                                            & (1U 
                                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_dst_rtype))) 
                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_0)) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__rbk_valids_0)))))) 
                                   | ((1ULL << (0x3fU 
                                                & ((2U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))
                                                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_pdst)
                                                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_stale_pdst)))) 
                                      & (- (QData)((IData)(
                                                           ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst_val) 
                                                              & (1U 
                                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_dst_rtype))) 
                                                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_1)) 
                                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__rbk_valids_1))))))) 
                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__br_deallocs)))))) {
        VL_WRITEF("[%0t] %%Error: RenameFreeList_1.sv:260: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.freelist: Assertion failed: [freelist] Returning a free physical register.\n    at rename-freelist.scala:94 assert (!(io.debug.freelist & dealloc_mask).orR, \"[freelist] Returning a free physical register.\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv", 260, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv:261:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameFreeList_1.sv:262: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv", 262, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6278(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6278\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__empty)) 
                                 | (0x1eU < (0x7fU 
                                             & ((0x3fU 
                                                 & ((0x1fU 
                                                     & ((0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list) 
                                                                         | ((IData)(
                                                                                (1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel))) 
                                                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))) 
                                                                        | ((IData)(
                                                                                (1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1))) 
                                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1)))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 1U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 2U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 3U))))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 4U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 5U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 6U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 7U))))))))) 
                                                        + 
                                                        (0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 8U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 9U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xaU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xbU))))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xcU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xdU))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xeU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0xfU))))))))))) 
                                                    + 
                                                    (0x1fU 
                                                     & ((0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x10U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x11U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x12U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x13U))))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x14U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x15U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x16U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x17U))))))))) 
                                                        + 
                                                        (0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x18U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x19U))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1aU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1bU))))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1cU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1dU))))) 
                                                                + 
                                                                (3U 
                                                                 & ((1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1eU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (IData)(
                                                                               (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x1fU))))))))))))) 
                                                + (0x3fU 
                                                   & ((0x1fU 
                                                       & ((0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x20U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x21U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x22U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x23U))))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x24U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x25U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x26U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x27U))))))))) 
                                                          + 
                                                          (0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x28U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x29U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2aU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2bU))))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2cU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2dU))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2eU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x2fU))))))))))) 
                                                      + 
                                                      (0x1fU 
                                                       & ((0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x30U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x31U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x32U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x33U))))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x34U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x35U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x36U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x37U))))))))) 
                                                          + 
                                                          (0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x38U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x39U))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3aU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3bU))))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3cU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3dU))))) 
                                                                  + 
                                                                  (3U 
                                                                   & ((1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3eU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (IData)(
                                                                                (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__free_list 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                                | ((1ULL 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_sel_1)) 
                                                                                & (- (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__fp_rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                                >> 0x3fU)))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: RenameFreeList_1.sv:268: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.freelist: Assertion failed: [freelist] Leaking physical registers.\n    at rename-freelist.scala:95 assert (!io.debug.pipeline_empty || PopCount(io.debug.freelist) >= (numPregs - numLregs - 1).U,\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv", 268, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv:269:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameFreeList_1.sv:270: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.fp_rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList_1.sv", 270, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6279(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6279\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h74ad3fd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_hfe2da49b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_h5aaa4642__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__3;
    VlWide<4>/*127:0*/ __Vtemp_h5edf91aa__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h74ad3fd3__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfe2da49b__0, __Vtemp_hc961d23f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__2[0U] = 1U;
    __Vtemp_hc961d23f__2[1U] = 0U;
    __Vtemp_hc961d23f__2[2U] = 0U;
    __Vtemp_hc961d23f__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5aaa4642__0, __Vtemp_hc961d23f__2, 
                  ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))
                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_pdst)
                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_stale_pdst)));
    __Vtemp_hc961d23f__3[0U] = 1U;
    __Vtemp_hc961d23f__3[1U] = 0U;
    __Vtemp_hc961d23f__3[2U] = 0U;
    __Vtemp_hc961d23f__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5edf91aa__0, __Vtemp_hc961d23f__3, 
                  ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__rob_state))
                    ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_pdst)
                    : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_stale_pdst)));
    if (VL_UNLIKELY(((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                     & (0U != (((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                   | (__Vtemp_h74ad3fd3__0[0U] 
                                      & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                  | (__Vtemp_hfe2da49b__0[0U] 
                                     & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                 & (((__Vtemp_h5aaa4642__0[0U] 
                                      & (- (IData)(
                                                   ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst_val) 
                                                      & (0U 
                                                         == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_dst_rtype))) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_0)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_0))))) 
                                     | (__Vtemp_h5edf91aa__0[0U] 
                                        & (- (IData)(
                                                     ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst_val) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_dst_rtype))) 
                                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_1)) 
                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_1)))))) 
                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__br_deallocs[0U])) 
                                | (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                     | (__Vtemp_h74ad3fd3__0[1U] 
                                        & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                    | (__Vtemp_hfe2da49b__0[1U] 
                                       & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                   & (((__Vtemp_h5aaa4642__0[1U] 
                                        & (- (IData)(
                                                     ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst_val) 
                                                        & (0U 
                                                           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_dst_rtype))) 
                                                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_0)) 
                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_0))))) 
                                       | (__Vtemp_h5edf91aa__0[1U] 
                                          & (- (IData)(
                                                       ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst_val) 
                                                          & (0U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_dst_rtype))) 
                                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_1)) 
                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_1)))))) 
                                      | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__br_deallocs[1U]))) 
                               | (0xffffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                               | (__Vtemp_h74ad3fd3__0[2U] 
                                                  & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                              | (__Vtemp_hfe2da49b__0[2U] 
                                                 & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                             & (((__Vtemp_h5aaa4642__0[2U] 
                                                  & (- (IData)(
                                                               ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_ldst_val) 
                                                                  & (0U 
                                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_0_dst_rtype))) 
                                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_0)) 
                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_0))))) 
                                                 | (__Vtemp_h5edf91aa__0[2U] 
                                                    & (- (IData)(
                                                                 ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_ldst_val) 
                                                                    & (0U 
                                                                       == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT___rob_io_commit_uops_1_dst_rtype))) 
                                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__will_commit_1)) 
                                                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__rbk_valids_1)))))) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__br_deallocs[2U])))))))) {
        VL_WRITEF("[%0t] %%Error: RenameFreeList.sv:290: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.rename_stage.freelist: Assertion failed: [freelist] Returning a free physical register.\n    at rename-freelist.scala:94 assert (!(io.debug.freelist & dealloc_mask).orR, \"[freelist] Returning a free physical register.\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv", 290, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv:291:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameFreeList.sv:292: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv", 292, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6280(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6280\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h74ad3fd3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_hfe2da49b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_hbcdc85f7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__3;
    VlWide<4>/*127:0*/ __Vtemp_h7f1b17d8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__4;
    VlWide<4>/*127:0*/ __Vtemp_hb822d214__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__5;
    VlWide<4>/*127:0*/ __Vtemp_hb2b0e7c5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__6;
    VlWide<4>/*127:0*/ __Vtemp_h9e315f56__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__7;
    VlWide<4>/*127:0*/ __Vtemp_h79129db0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__8;
    VlWide<4>/*127:0*/ __Vtemp_h686ccfa3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__9;
    VlWide<4>/*127:0*/ __Vtemp_h4deb834d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__10;
    VlWide<4>/*127:0*/ __Vtemp_hae207595__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__11;
    VlWide<4>/*127:0*/ __Vtemp_h56e3d7d1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__12;
    VlWide<4>/*127:0*/ __Vtemp_h8485c572__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__13;
    VlWide<4>/*127:0*/ __Vtemp_h57cd97be__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__14;
    VlWide<4>/*127:0*/ __Vtemp_h3340da62__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__15;
    VlWide<4>/*127:0*/ __Vtemp_he8dc9b2d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__16;
    VlWide<4>/*127:0*/ __Vtemp_h3f0da980__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__17;
    VlWide<4>/*127:0*/ __Vtemp_h96b7dc43__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__18;
    VlWide<4>/*127:0*/ __Vtemp_h5e968fda__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__19;
    VlWide<4>/*127:0*/ __Vtemp_h17999c1d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__20;
    VlWide<4>/*127:0*/ __Vtemp_hb3a63966__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__21;
    VlWide<4>/*127:0*/ __Vtemp_hd71213e1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__22;
    VlWide<4>/*127:0*/ __Vtemp_h6e0d7c6a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__23;
    VlWide<4>/*127:0*/ __Vtemp_h0b1773a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__24;
    VlWide<4>/*127:0*/ __Vtemp_h8f1237a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__25;
    VlWide<4>/*127:0*/ __Vtemp_h05679502__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__26;
    VlWide<4>/*127:0*/ __Vtemp_h9d03a5ca__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__27;
    VlWide<4>/*127:0*/ __Vtemp_h25a1d5a1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__28;
    VlWide<4>/*127:0*/ __Vtemp_h9b82e48d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__29;
    VlWide<4>/*127:0*/ __Vtemp_h1ba54141__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__30;
    VlWide<4>/*127:0*/ __Vtemp_h77707c99__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__31;
    VlWide<4>/*127:0*/ __Vtemp_h4b8fbdc9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__32;
    VlWide<4>/*127:0*/ __Vtemp_h590be1e6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__33;
    VlWide<4>/*127:0*/ __Vtemp_h8d602e45__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__34;
    VlWide<4>/*127:0*/ __Vtemp_h344d707a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__35;
    VlWide<4>/*127:0*/ __Vtemp_hedf536eb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__36;
    VlWide<4>/*127:0*/ __Vtemp_hd232bc6c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__37;
    VlWide<4>/*127:0*/ __Vtemp_hebb2f103__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__38;
    VlWide<4>/*127:0*/ __Vtemp_h85ce6ea4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__39;
    VlWide<4>/*127:0*/ __Vtemp_h36737680__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__40;
    VlWide<4>/*127:0*/ __Vtemp_hba7c7330__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__41;
    VlWide<4>/*127:0*/ __Vtemp_h9f2c6104__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__42;
    VlWide<4>/*127:0*/ __Vtemp_hecea35e7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__43;
    VlWide<4>/*127:0*/ __Vtemp_h875511a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__44;
    VlWide<4>/*127:0*/ __Vtemp_hea1b1d8e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__45;
    VlWide<4>/*127:0*/ __Vtemp_hf7536e9d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__46;
    VlWide<4>/*127:0*/ __Vtemp_h6b264e7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__47;
    VlWide<4>/*127:0*/ __Vtemp_h443436be__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__48;
    VlWide<4>/*127:0*/ __Vtemp_h567db514__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__49;
    VlWide<4>/*127:0*/ __Vtemp_he7eed59b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__50;
    VlWide<4>/*127:0*/ __Vtemp_h5db459a0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__51;
    VlWide<4>/*127:0*/ __Vtemp_he9a428de__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__52;
    VlWide<4>/*127:0*/ __Vtemp_h390877c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__53;
    VlWide<4>/*127:0*/ __Vtemp_hed983e4a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__54;
    VlWide<4>/*127:0*/ __Vtemp_hf77515a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__55;
    VlWide<4>/*127:0*/ __Vtemp_hd8c72039__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__56;
    VlWide<4>/*127:0*/ __Vtemp_h32dcadd9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__57;
    VlWide<4>/*127:0*/ __Vtemp_h6b07f438__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__58;
    VlWide<4>/*127:0*/ __Vtemp_h1d2113a4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__59;
    VlWide<4>/*127:0*/ __Vtemp_h5768493a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__60;
    VlWide<4>/*127:0*/ __Vtemp_h391aa41d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__61;
    VlWide<4>/*127:0*/ __Vtemp_h94fad48d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__62;
    VlWide<4>/*127:0*/ __Vtemp_h297fa835__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__63;
    VlWide<4>/*127:0*/ __Vtemp_h97d6b46e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__64;
    VlWide<4>/*127:0*/ __Vtemp_he99b9bff__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__65;
    VlWide<4>/*127:0*/ __Vtemp_hd9bc6145__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__66;
    VlWide<4>/*127:0*/ __Vtemp_h421fd5b9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__67;
    VlWide<4>/*127:0*/ __Vtemp_hbec6ea29__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__68;
    VlWide<4>/*127:0*/ __Vtemp_he0dc0959__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__69;
    VlWide<4>/*127:0*/ __Vtemp_hc80b0fae__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__70;
    VlWide<4>/*127:0*/ __Vtemp_hec799acd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__71;
    VlWide<4>/*127:0*/ __Vtemp_ha2f1779c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__72;
    VlWide<4>/*127:0*/ __Vtemp_h739f38ca__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__73;
    VlWide<4>/*127:0*/ __Vtemp_h973d8f0c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__74;
    VlWide<4>/*127:0*/ __Vtemp_h8441b5c6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__75;
    VlWide<4>/*127:0*/ __Vtemp_hdaedcbbc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__76;
    VlWide<4>/*127:0*/ __Vtemp_hbeff0443__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__77;
    VlWide<4>/*127:0*/ __Vtemp_h0d0a9b5a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__78;
    VlWide<4>/*127:0*/ __Vtemp_h79ac2c27__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__79;
    VlWide<4>/*127:0*/ __Vtemp_h9d590d8c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__80;
    VlWide<4>/*127:0*/ __Vtemp_hcc292c41__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__81;
    VlWide<4>/*127:0*/ __Vtemp_h3189b62a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__82;
    VlWide<4>/*127:0*/ __Vtemp_heb38fd9b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__83;
    VlWide<4>/*127:0*/ __Vtemp_h19f00c0b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__84;
    VlWide<4>/*127:0*/ __Vtemp_hd97380bb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__85;
    VlWide<4>/*127:0*/ __Vtemp_hea142eb5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__86;
    VlWide<4>/*127:0*/ __Vtemp_h9bd2e730__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__87;
    VlWide<4>/*127:0*/ __Vtemp_haaca4c80__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__88;
    VlWide<4>/*127:0*/ __Vtemp_h62ef6a4e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__89;
    VlWide<4>/*127:0*/ __Vtemp_h0c5ec536__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__90;
    VlWide<4>/*127:0*/ __Vtemp_h8f2de9b8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__91;
    VlWide<4>/*127:0*/ __Vtemp_h26f89aed__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__92;
    VlWide<4>/*127:0*/ __Vtemp_hd4498ccc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__93;
    VlWide<4>/*127:0*/ __Vtemp_hd22ff295__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__94;
    VlWide<4>/*127:0*/ __Vtemp_had7ef3f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__95;
    VlWide<4>/*127:0*/ __Vtemp_h5212f498__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__96;
    VlWide<4>/*127:0*/ __Vtemp_h30ba408d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__97;
    VlWide<4>/*127:0*/ __Vtemp_h2ce5b855__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__98;
    VlWide<4>/*127:0*/ __Vtemp_h821b23e9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__99;
    VlWide<4>/*127:0*/ __Vtemp_h2c1cce75__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__100;
    VlWide<4>/*127:0*/ __Vtemp_hfe6e080b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__101;
    VlWide<4>/*127:0*/ __Vtemp_h157e81e8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__102;
    VlWide<4>/*127:0*/ __Vtemp_hd9e5389c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__103;
    VlWide<4>/*127:0*/ __Vtemp_h8ee56ece__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__104;
    VlWide<4>/*127:0*/ __Vtemp_hceb2f62d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__105;
    VlWide<4>/*127:0*/ __Vtemp_hcfd2323a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__106;
    VlWide<4>/*127:0*/ __Vtemp_h24c351e3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__107;
    VlWide<4>/*127:0*/ __Vtemp_hc73cf5c5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__108;
    VlWide<4>/*127:0*/ __Vtemp_h81361c15__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__109;
    VlWide<4>/*127:0*/ __Vtemp_h335c4490__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__110;
    VlWide<4>/*127:0*/ __Vtemp_hb7d74920__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__111;
    VlWide<4>/*127:0*/ __Vtemp_h69cef561__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__112;
    VlWide<4>/*127:0*/ __Vtemp_h3767228d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__113;
    VlWide<4>/*127:0*/ __Vtemp_h66f2cb60__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__114;
    VlWide<4>/*127:0*/ __Vtemp_hd2f1e4ab__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__115;
    VlWide<4>/*127:0*/ __Vtemp_hdf651033__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__116;
    VlWide<4>/*127:0*/ __Vtemp_h9bbd3606__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__117;
    VlWide<4>/*127:0*/ __Vtemp_h5c9d7df1__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__118;
    VlWide<4>/*127:0*/ __Vtemp_h33ccbd55__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__119;
    VlWide<4>/*127:0*/ __Vtemp_h50230b7a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__120;
    VlWide<4>/*127:0*/ __Vtemp_h28679803__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__121;
    VlWide<4>/*127:0*/ __Vtemp_h08f86df2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__122;
    VlWide<4>/*127:0*/ __Vtemp_h535421f2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__123;
    VlWide<4>/*127:0*/ __Vtemp_h6417d2d0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__124;
    VlWide<4>/*127:0*/ __Vtemp_h4803649e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__125;
    VlWide<4>/*127:0*/ __Vtemp_h4b240f3c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__126;
    VlWide<4>/*127:0*/ __Vtemp_hdd6f8c71__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__127;
    VlWide<4>/*127:0*/ __Vtemp_h088cb841__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__128;
    VlWide<4>/*127:0*/ __Vtemp_ha35aa3d9__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__129;
    VlWide<4>/*127:0*/ __Vtemp_h90f5bb9c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__130;
    VlWide<4>/*127:0*/ __Vtemp_h212fa0e2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__131;
    VlWide<4>/*127:0*/ __Vtemp_h9f392495__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__132;
    VlWide<4>/*127:0*/ __Vtemp_h8cac2ceb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__133;
    VlWide<4>/*127:0*/ __Vtemp_he6102faa__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__134;
    VlWide<4>/*127:0*/ __Vtemp_h93714342__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__135;
    VlWide<4>/*127:0*/ __Vtemp_haaf623b5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__136;
    VlWide<4>/*127:0*/ __Vtemp_h151d3a37__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__137;
    VlWide<4>/*127:0*/ __Vtemp_h2dbe42b0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__138;
    VlWide<4>/*127:0*/ __Vtemp_hd9781752__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__139;
    VlWide<4>/*127:0*/ __Vtemp_heda30d11__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__140;
    VlWide<4>/*127:0*/ __Vtemp_h7d2b9f58__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__141;
    VlWide<4>/*127:0*/ __Vtemp_h77a8b9df__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__142;
    VlWide<4>/*127:0*/ __Vtemp_h88d8e184__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__143;
    VlWide<4>/*127:0*/ __Vtemp_hc0f30351__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__144;
    VlWide<4>/*127:0*/ __Vtemp_hf4ebf112__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__145;
    VlWide<4>/*127:0*/ __Vtemp_h5a4d81cf__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__146;
    VlWide<4>/*127:0*/ __Vtemp_h4e66fc2a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__147;
    VlWide<4>/*127:0*/ __Vtemp_h0d537ebb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__148;
    VlWide<4>/*127:0*/ __Vtemp_h4d2edc21__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__149;
    VlWide<4>/*127:0*/ __Vtemp_h90fa7565__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__150;
    VlWide<4>/*127:0*/ __Vtemp_hed74969e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__151;
    VlWide<4>/*127:0*/ __Vtemp_h7104838a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__152;
    VlWide<4>/*127:0*/ __Vtemp_h942971fc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__153;
    VlWide<4>/*127:0*/ __Vtemp_h6ac48418__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__154;
    VlWide<4>/*127:0*/ __Vtemp_h0676193b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__155;
    VlWide<4>/*127:0*/ __Vtemp_hfd3a603c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__156;
    VlWide<4>/*127:0*/ __Vtemp_h32ed682a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__157;
    VlWide<4>/*127:0*/ __Vtemp_h2ff1fe8c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__158;
    VlWide<4>/*127:0*/ __Vtemp_h72a0da42__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__159;
    VlWide<4>/*127:0*/ __Vtemp_hf2a71d92__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h74ad3fd3__0, __Vtemp_hc961d23f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfe2da49b__0, __Vtemp_hc961d23f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__2[0U] = 1U;
    __Vtemp_hc961d23f__2[1U] = 0U;
    __Vtemp_hc961d23f__2[2U] = 0U;
    __Vtemp_hc961d23f__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbcdc85f7__0, __Vtemp_hc961d23f__2, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__3[0U] = 1U;
    __Vtemp_hc961d23f__3[1U] = 0U;
    __Vtemp_hc961d23f__3[2U] = 0U;
    __Vtemp_hc961d23f__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f1b17d8__0, __Vtemp_hc961d23f__3, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__4[0U] = 1U;
    __Vtemp_hc961d23f__4[1U] = 0U;
    __Vtemp_hc961d23f__4[2U] = 0U;
    __Vtemp_hc961d23f__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb822d214__0, __Vtemp_hc961d23f__4, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__5[0U] = 1U;
    __Vtemp_hc961d23f__5[1U] = 0U;
    __Vtemp_hc961d23f__5[2U] = 0U;
    __Vtemp_hc961d23f__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb2b0e7c5__0, __Vtemp_hc961d23f__5, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__6[0U] = 1U;
    __Vtemp_hc961d23f__6[1U] = 0U;
    __Vtemp_hc961d23f__6[2U] = 0U;
    __Vtemp_hc961d23f__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9e315f56__0, __Vtemp_hc961d23f__6, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__7[0U] = 1U;
    __Vtemp_hc961d23f__7[1U] = 0U;
    __Vtemp_hc961d23f__7[2U] = 0U;
    __Vtemp_hc961d23f__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h79129db0__0, __Vtemp_hc961d23f__7, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__8[0U] = 1U;
    __Vtemp_hc961d23f__8[1U] = 0U;
    __Vtemp_hc961d23f__8[2U] = 0U;
    __Vtemp_hc961d23f__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h686ccfa3__0, __Vtemp_hc961d23f__8, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__9[0U] = 1U;
    __Vtemp_hc961d23f__9[1U] = 0U;
    __Vtemp_hc961d23f__9[2U] = 0U;
    __Vtemp_hc961d23f__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4deb834d__0, __Vtemp_hc961d23f__9, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__10[0U] = 1U;
    __Vtemp_hc961d23f__10[1U] = 0U;
    __Vtemp_hc961d23f__10[2U] = 0U;
    __Vtemp_hc961d23f__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hae207595__0, __Vtemp_hc961d23f__10, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__11[0U] = 1U;
    __Vtemp_hc961d23f__11[1U] = 0U;
    __Vtemp_hc961d23f__11[2U] = 0U;
    __Vtemp_hc961d23f__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h56e3d7d1__0, __Vtemp_hc961d23f__11, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__12[0U] = 1U;
    __Vtemp_hc961d23f__12[1U] = 0U;
    __Vtemp_hc961d23f__12[2U] = 0U;
    __Vtemp_hc961d23f__12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8485c572__0, __Vtemp_hc961d23f__12, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__13[0U] = 1U;
    __Vtemp_hc961d23f__13[1U] = 0U;
    __Vtemp_hc961d23f__13[2U] = 0U;
    __Vtemp_hc961d23f__13[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h57cd97be__0, __Vtemp_hc961d23f__13, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__14[0U] = 1U;
    __Vtemp_hc961d23f__14[1U] = 0U;
    __Vtemp_hc961d23f__14[2U] = 0U;
    __Vtemp_hc961d23f__14[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3340da62__0, __Vtemp_hc961d23f__14, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__15[0U] = 1U;
    __Vtemp_hc961d23f__15[1U] = 0U;
    __Vtemp_hc961d23f__15[2U] = 0U;
    __Vtemp_hc961d23f__15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he8dc9b2d__0, __Vtemp_hc961d23f__15, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__16[0U] = 1U;
    __Vtemp_hc961d23f__16[1U] = 0U;
    __Vtemp_hc961d23f__16[2U] = 0U;
    __Vtemp_hc961d23f__16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3f0da980__0, __Vtemp_hc961d23f__16, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__17[0U] = 1U;
    __Vtemp_hc961d23f__17[1U] = 0U;
    __Vtemp_hc961d23f__17[2U] = 0U;
    __Vtemp_hc961d23f__17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h96b7dc43__0, __Vtemp_hc961d23f__17, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__18[0U] = 1U;
    __Vtemp_hc961d23f__18[1U] = 0U;
    __Vtemp_hc961d23f__18[2U] = 0U;
    __Vtemp_hc961d23f__18[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5e968fda__0, __Vtemp_hc961d23f__18, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__19[0U] = 1U;
    __Vtemp_hc961d23f__19[1U] = 0U;
    __Vtemp_hc961d23f__19[2U] = 0U;
    __Vtemp_hc961d23f__19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h17999c1d__0, __Vtemp_hc961d23f__19, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__20[0U] = 1U;
    __Vtemp_hc961d23f__20[1U] = 0U;
    __Vtemp_hc961d23f__20[2U] = 0U;
    __Vtemp_hc961d23f__20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb3a63966__0, __Vtemp_hc961d23f__20, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__21[0U] = 1U;
    __Vtemp_hc961d23f__21[1U] = 0U;
    __Vtemp_hc961d23f__21[2U] = 0U;
    __Vtemp_hc961d23f__21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd71213e1__0, __Vtemp_hc961d23f__21, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__22[0U] = 1U;
    __Vtemp_hc961d23f__22[1U] = 0U;
    __Vtemp_hc961d23f__22[2U] = 0U;
    __Vtemp_hc961d23f__22[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6e0d7c6a__0, __Vtemp_hc961d23f__22, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__23[0U] = 1U;
    __Vtemp_hc961d23f__23[1U] = 0U;
    __Vtemp_hc961d23f__23[2U] = 0U;
    __Vtemp_hc961d23f__23[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0b1773a4__0, __Vtemp_hc961d23f__23, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__24[0U] = 1U;
    __Vtemp_hc961d23f__24[1U] = 0U;
    __Vtemp_hc961d23f__24[2U] = 0U;
    __Vtemp_hc961d23f__24[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8f1237a1__0, __Vtemp_hc961d23f__24, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__25[0U] = 1U;
    __Vtemp_hc961d23f__25[1U] = 0U;
    __Vtemp_hc961d23f__25[2U] = 0U;
    __Vtemp_hc961d23f__25[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h05679502__0, __Vtemp_hc961d23f__25, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__26[0U] = 1U;
    __Vtemp_hc961d23f__26[1U] = 0U;
    __Vtemp_hc961d23f__26[2U] = 0U;
    __Vtemp_hc961d23f__26[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9d03a5ca__0, __Vtemp_hc961d23f__26, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__27[0U] = 1U;
    __Vtemp_hc961d23f__27[1U] = 0U;
    __Vtemp_hc961d23f__27[2U] = 0U;
    __Vtemp_hc961d23f__27[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h25a1d5a1__0, __Vtemp_hc961d23f__27, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__28[0U] = 1U;
    __Vtemp_hc961d23f__28[1U] = 0U;
    __Vtemp_hc961d23f__28[2U] = 0U;
    __Vtemp_hc961d23f__28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9b82e48d__0, __Vtemp_hc961d23f__28, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__29[0U] = 1U;
    __Vtemp_hc961d23f__29[1U] = 0U;
    __Vtemp_hc961d23f__29[2U] = 0U;
    __Vtemp_hc961d23f__29[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1ba54141__0, __Vtemp_hc961d23f__29, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__30[0U] = 1U;
    __Vtemp_hc961d23f__30[1U] = 0U;
    __Vtemp_hc961d23f__30[2U] = 0U;
    __Vtemp_hc961d23f__30[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h77707c99__0, __Vtemp_hc961d23f__30, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__31[0U] = 1U;
    __Vtemp_hc961d23f__31[1U] = 0U;
    __Vtemp_hc961d23f__31[2U] = 0U;
    __Vtemp_hc961d23f__31[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4b8fbdc9__0, __Vtemp_hc961d23f__31, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__32[0U] = 1U;
    __Vtemp_hc961d23f__32[1U] = 0U;
    __Vtemp_hc961d23f__32[2U] = 0U;
    __Vtemp_hc961d23f__32[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h590be1e6__0, __Vtemp_hc961d23f__32, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__33[0U] = 1U;
    __Vtemp_hc961d23f__33[1U] = 0U;
    __Vtemp_hc961d23f__33[2U] = 0U;
    __Vtemp_hc961d23f__33[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d602e45__0, __Vtemp_hc961d23f__33, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__34[0U] = 1U;
    __Vtemp_hc961d23f__34[1U] = 0U;
    __Vtemp_hc961d23f__34[2U] = 0U;
    __Vtemp_hc961d23f__34[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h344d707a__0, __Vtemp_hc961d23f__34, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__35[0U] = 1U;
    __Vtemp_hc961d23f__35[1U] = 0U;
    __Vtemp_hc961d23f__35[2U] = 0U;
    __Vtemp_hc961d23f__35[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hedf536eb__0, __Vtemp_hc961d23f__35, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__36[0U] = 1U;
    __Vtemp_hc961d23f__36[1U] = 0U;
    __Vtemp_hc961d23f__36[2U] = 0U;
    __Vtemp_hc961d23f__36[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd232bc6c__0, __Vtemp_hc961d23f__36, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__37[0U] = 1U;
    __Vtemp_hc961d23f__37[1U] = 0U;
    __Vtemp_hc961d23f__37[2U] = 0U;
    __Vtemp_hc961d23f__37[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hebb2f103__0, __Vtemp_hc961d23f__37, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__38[0U] = 1U;
    __Vtemp_hc961d23f__38[1U] = 0U;
    __Vtemp_hc961d23f__38[2U] = 0U;
    __Vtemp_hc961d23f__38[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h85ce6ea4__0, __Vtemp_hc961d23f__38, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__39[0U] = 1U;
    __Vtemp_hc961d23f__39[1U] = 0U;
    __Vtemp_hc961d23f__39[2U] = 0U;
    __Vtemp_hc961d23f__39[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36737680__0, __Vtemp_hc961d23f__39, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__40[0U] = 1U;
    __Vtemp_hc961d23f__40[1U] = 0U;
    __Vtemp_hc961d23f__40[2U] = 0U;
    __Vtemp_hc961d23f__40[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hba7c7330__0, __Vtemp_hc961d23f__40, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__41[0U] = 1U;
    __Vtemp_hc961d23f__41[1U] = 0U;
    __Vtemp_hc961d23f__41[2U] = 0U;
    __Vtemp_hc961d23f__41[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9f2c6104__0, __Vtemp_hc961d23f__41, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__42[0U] = 1U;
    __Vtemp_hc961d23f__42[1U] = 0U;
    __Vtemp_hc961d23f__42[2U] = 0U;
    __Vtemp_hc961d23f__42[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hecea35e7__0, __Vtemp_hc961d23f__42, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__43[0U] = 1U;
    __Vtemp_hc961d23f__43[1U] = 0U;
    __Vtemp_hc961d23f__43[2U] = 0U;
    __Vtemp_hc961d23f__43[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h875511a4__0, __Vtemp_hc961d23f__43, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__44[0U] = 1U;
    __Vtemp_hc961d23f__44[1U] = 0U;
    __Vtemp_hc961d23f__44[2U] = 0U;
    __Vtemp_hc961d23f__44[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hea1b1d8e__0, __Vtemp_hc961d23f__44, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__45[0U] = 1U;
    __Vtemp_hc961d23f__45[1U] = 0U;
    __Vtemp_hc961d23f__45[2U] = 0U;
    __Vtemp_hc961d23f__45[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf7536e9d__0, __Vtemp_hc961d23f__45, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__46[0U] = 1U;
    __Vtemp_hc961d23f__46[1U] = 0U;
    __Vtemp_hc961d23f__46[2U] = 0U;
    __Vtemp_hc961d23f__46[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b264e7e__0, __Vtemp_hc961d23f__46, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__47[0U] = 1U;
    __Vtemp_hc961d23f__47[1U] = 0U;
    __Vtemp_hc961d23f__47[2U] = 0U;
    __Vtemp_hc961d23f__47[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h443436be__0, __Vtemp_hc961d23f__47, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__48[0U] = 1U;
    __Vtemp_hc961d23f__48[1U] = 0U;
    __Vtemp_hc961d23f__48[2U] = 0U;
    __Vtemp_hc961d23f__48[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h567db514__0, __Vtemp_hc961d23f__48, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__49[0U] = 1U;
    __Vtemp_hc961d23f__49[1U] = 0U;
    __Vtemp_hc961d23f__49[2U] = 0U;
    __Vtemp_hc961d23f__49[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he7eed59b__0, __Vtemp_hc961d23f__49, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__50[0U] = 1U;
    __Vtemp_hc961d23f__50[1U] = 0U;
    __Vtemp_hc961d23f__50[2U] = 0U;
    __Vtemp_hc961d23f__50[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5db459a0__0, __Vtemp_hc961d23f__50, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__51[0U] = 1U;
    __Vtemp_hc961d23f__51[1U] = 0U;
    __Vtemp_hc961d23f__51[2U] = 0U;
    __Vtemp_hc961d23f__51[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he9a428de__0, __Vtemp_hc961d23f__51, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__52[0U] = 1U;
    __Vtemp_hc961d23f__52[1U] = 0U;
    __Vtemp_hc961d23f__52[2U] = 0U;
    __Vtemp_hc961d23f__52[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h390877c6__0, __Vtemp_hc961d23f__52, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__53[0U] = 1U;
    __Vtemp_hc961d23f__53[1U] = 0U;
    __Vtemp_hc961d23f__53[2U] = 0U;
    __Vtemp_hc961d23f__53[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hed983e4a__0, __Vtemp_hc961d23f__53, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__54[0U] = 1U;
    __Vtemp_hc961d23f__54[1U] = 0U;
    __Vtemp_hc961d23f__54[2U] = 0U;
    __Vtemp_hc961d23f__54[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf77515a4__0, __Vtemp_hc961d23f__54, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__55[0U] = 1U;
    __Vtemp_hc961d23f__55[1U] = 0U;
    __Vtemp_hc961d23f__55[2U] = 0U;
    __Vtemp_hc961d23f__55[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd8c72039__0, __Vtemp_hc961d23f__55, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__56[0U] = 1U;
    __Vtemp_hc961d23f__56[1U] = 0U;
    __Vtemp_hc961d23f__56[2U] = 0U;
    __Vtemp_hc961d23f__56[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h32dcadd9__0, __Vtemp_hc961d23f__56, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__57[0U] = 1U;
    __Vtemp_hc961d23f__57[1U] = 0U;
    __Vtemp_hc961d23f__57[2U] = 0U;
    __Vtemp_hc961d23f__57[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6b07f438__0, __Vtemp_hc961d23f__57, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__58[0U] = 1U;
    __Vtemp_hc961d23f__58[1U] = 0U;
    __Vtemp_hc961d23f__58[2U] = 0U;
    __Vtemp_hc961d23f__58[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d2113a4__0, __Vtemp_hc961d23f__58, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__59[0U] = 1U;
    __Vtemp_hc961d23f__59[1U] = 0U;
    __Vtemp_hc961d23f__59[2U] = 0U;
    __Vtemp_hc961d23f__59[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5768493a__0, __Vtemp_hc961d23f__59, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__60[0U] = 1U;
    __Vtemp_hc961d23f__60[1U] = 0U;
    __Vtemp_hc961d23f__60[2U] = 0U;
    __Vtemp_hc961d23f__60[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h391aa41d__0, __Vtemp_hc961d23f__60, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__61[0U] = 1U;
    __Vtemp_hc961d23f__61[1U] = 0U;
    __Vtemp_hc961d23f__61[2U] = 0U;
    __Vtemp_hc961d23f__61[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h94fad48d__0, __Vtemp_hc961d23f__61, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__62[0U] = 1U;
    __Vtemp_hc961d23f__62[1U] = 0U;
    __Vtemp_hc961d23f__62[2U] = 0U;
    __Vtemp_hc961d23f__62[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h297fa835__0, __Vtemp_hc961d23f__62, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__63[0U] = 1U;
    __Vtemp_hc961d23f__63[1U] = 0U;
    __Vtemp_hc961d23f__63[2U] = 0U;
    __Vtemp_hc961d23f__63[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h97d6b46e__0, __Vtemp_hc961d23f__63, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__64[0U] = 1U;
    __Vtemp_hc961d23f__64[1U] = 0U;
    __Vtemp_hc961d23f__64[2U] = 0U;
    __Vtemp_hc961d23f__64[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he99b9bff__0, __Vtemp_hc961d23f__64, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__65[0U] = 1U;
    __Vtemp_hc961d23f__65[1U] = 0U;
    __Vtemp_hc961d23f__65[2U] = 0U;
    __Vtemp_hc961d23f__65[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd9bc6145__0, __Vtemp_hc961d23f__65, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__66[0U] = 1U;
    __Vtemp_hc961d23f__66[1U] = 0U;
    __Vtemp_hc961d23f__66[2U] = 0U;
    __Vtemp_hc961d23f__66[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h421fd5b9__0, __Vtemp_hc961d23f__66, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__67[0U] = 1U;
    __Vtemp_hc961d23f__67[1U] = 0U;
    __Vtemp_hc961d23f__67[2U] = 0U;
    __Vtemp_hc961d23f__67[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbec6ea29__0, __Vtemp_hc961d23f__67, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__68[0U] = 1U;
    __Vtemp_hc961d23f__68[1U] = 0U;
    __Vtemp_hc961d23f__68[2U] = 0U;
    __Vtemp_hc961d23f__68[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he0dc0959__0, __Vtemp_hc961d23f__68, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__69[0U] = 1U;
    __Vtemp_hc961d23f__69[1U] = 0U;
    __Vtemp_hc961d23f__69[2U] = 0U;
    __Vtemp_hc961d23f__69[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc80b0fae__0, __Vtemp_hc961d23f__69, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__70[0U] = 1U;
    __Vtemp_hc961d23f__70[1U] = 0U;
    __Vtemp_hc961d23f__70[2U] = 0U;
    __Vtemp_hc961d23f__70[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hec799acd__0, __Vtemp_hc961d23f__70, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__71[0U] = 1U;
    __Vtemp_hc961d23f__71[1U] = 0U;
    __Vtemp_hc961d23f__71[2U] = 0U;
    __Vtemp_hc961d23f__71[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha2f1779c__0, __Vtemp_hc961d23f__71, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__72[0U] = 1U;
    __Vtemp_hc961d23f__72[1U] = 0U;
    __Vtemp_hc961d23f__72[2U] = 0U;
    __Vtemp_hc961d23f__72[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h739f38ca__0, __Vtemp_hc961d23f__72, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__73[0U] = 1U;
    __Vtemp_hc961d23f__73[1U] = 0U;
    __Vtemp_hc961d23f__73[2U] = 0U;
    __Vtemp_hc961d23f__73[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h973d8f0c__0, __Vtemp_hc961d23f__73, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__74[0U] = 1U;
    __Vtemp_hc961d23f__74[1U] = 0U;
    __Vtemp_hc961d23f__74[2U] = 0U;
    __Vtemp_hc961d23f__74[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8441b5c6__0, __Vtemp_hc961d23f__74, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__75[0U] = 1U;
    __Vtemp_hc961d23f__75[1U] = 0U;
    __Vtemp_hc961d23f__75[2U] = 0U;
    __Vtemp_hc961d23f__75[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdaedcbbc__0, __Vtemp_hc961d23f__75, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__76[0U] = 1U;
    __Vtemp_hc961d23f__76[1U] = 0U;
    __Vtemp_hc961d23f__76[2U] = 0U;
    __Vtemp_hc961d23f__76[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbeff0443__0, __Vtemp_hc961d23f__76, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__77[0U] = 1U;
    __Vtemp_hc961d23f__77[1U] = 0U;
    __Vtemp_hc961d23f__77[2U] = 0U;
    __Vtemp_hc961d23f__77[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0d0a9b5a__0, __Vtemp_hc961d23f__77, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__78[0U] = 1U;
    __Vtemp_hc961d23f__78[1U] = 0U;
    __Vtemp_hc961d23f__78[2U] = 0U;
    __Vtemp_hc961d23f__78[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h79ac2c27__0, __Vtemp_hc961d23f__78, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__79[0U] = 1U;
    __Vtemp_hc961d23f__79[1U] = 0U;
    __Vtemp_hc961d23f__79[2U] = 0U;
    __Vtemp_hc961d23f__79[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9d590d8c__0, __Vtemp_hc961d23f__79, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__80[0U] = 1U;
    __Vtemp_hc961d23f__80[1U] = 0U;
    __Vtemp_hc961d23f__80[2U] = 0U;
    __Vtemp_hc961d23f__80[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcc292c41__0, __Vtemp_hc961d23f__80, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__81[0U] = 1U;
    __Vtemp_hc961d23f__81[1U] = 0U;
    __Vtemp_hc961d23f__81[2U] = 0U;
    __Vtemp_hc961d23f__81[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3189b62a__0, __Vtemp_hc961d23f__81, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__82[0U] = 1U;
    __Vtemp_hc961d23f__82[1U] = 0U;
    __Vtemp_hc961d23f__82[2U] = 0U;
    __Vtemp_hc961d23f__82[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_heb38fd9b__0, __Vtemp_hc961d23f__82, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__83[0U] = 1U;
    __Vtemp_hc961d23f__83[1U] = 0U;
    __Vtemp_hc961d23f__83[2U] = 0U;
    __Vtemp_hc961d23f__83[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h19f00c0b__0, __Vtemp_hc961d23f__83, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__84[0U] = 1U;
    __Vtemp_hc961d23f__84[1U] = 0U;
    __Vtemp_hc961d23f__84[2U] = 0U;
    __Vtemp_hc961d23f__84[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd97380bb__0, __Vtemp_hc961d23f__84, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__85[0U] = 1U;
    __Vtemp_hc961d23f__85[1U] = 0U;
    __Vtemp_hc961d23f__85[2U] = 0U;
    __Vtemp_hc961d23f__85[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hea142eb5__0, __Vtemp_hc961d23f__85, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__86[0U] = 1U;
    __Vtemp_hc961d23f__86[1U] = 0U;
    __Vtemp_hc961d23f__86[2U] = 0U;
    __Vtemp_hc961d23f__86[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9bd2e730__0, __Vtemp_hc961d23f__86, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__87[0U] = 1U;
    __Vtemp_hc961d23f__87[1U] = 0U;
    __Vtemp_hc961d23f__87[2U] = 0U;
    __Vtemp_hc961d23f__87[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaca4c80__0, __Vtemp_hc961d23f__87, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__88[0U] = 1U;
    __Vtemp_hc961d23f__88[1U] = 0U;
    __Vtemp_hc961d23f__88[2U] = 0U;
    __Vtemp_hc961d23f__88[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h62ef6a4e__0, __Vtemp_hc961d23f__88, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__89[0U] = 1U;
    __Vtemp_hc961d23f__89[1U] = 0U;
    __Vtemp_hc961d23f__89[2U] = 0U;
    __Vtemp_hc961d23f__89[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0c5ec536__0, __Vtemp_hc961d23f__89, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__90[0U] = 1U;
    __Vtemp_hc961d23f__90[1U] = 0U;
    __Vtemp_hc961d23f__90[2U] = 0U;
    __Vtemp_hc961d23f__90[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8f2de9b8__0, __Vtemp_hc961d23f__90, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__91[0U] = 1U;
    __Vtemp_hc961d23f__91[1U] = 0U;
    __Vtemp_hc961d23f__91[2U] = 0U;
    __Vtemp_hc961d23f__91[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h26f89aed__0, __Vtemp_hc961d23f__91, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__92[0U] = 1U;
    __Vtemp_hc961d23f__92[1U] = 0U;
    __Vtemp_hc961d23f__92[2U] = 0U;
    __Vtemp_hc961d23f__92[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd4498ccc__0, __Vtemp_hc961d23f__92, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__93[0U] = 1U;
    __Vtemp_hc961d23f__93[1U] = 0U;
    __Vtemp_hc961d23f__93[2U] = 0U;
    __Vtemp_hc961d23f__93[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd22ff295__0, __Vtemp_hc961d23f__93, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__94[0U] = 1U;
    __Vtemp_hc961d23f__94[1U] = 0U;
    __Vtemp_hc961d23f__94[2U] = 0U;
    __Vtemp_hc961d23f__94[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_had7ef3f6__0, __Vtemp_hc961d23f__94, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__95[0U] = 1U;
    __Vtemp_hc961d23f__95[1U] = 0U;
    __Vtemp_hc961d23f__95[2U] = 0U;
    __Vtemp_hc961d23f__95[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5212f498__0, __Vtemp_hc961d23f__95, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__96[0U] = 1U;
    __Vtemp_hc961d23f__96[1U] = 0U;
    __Vtemp_hc961d23f__96[2U] = 0U;
    __Vtemp_hc961d23f__96[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h30ba408d__0, __Vtemp_hc961d23f__96, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__97[0U] = 1U;
    __Vtemp_hc961d23f__97[1U] = 0U;
    __Vtemp_hc961d23f__97[2U] = 0U;
    __Vtemp_hc961d23f__97[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2ce5b855__0, __Vtemp_hc961d23f__97, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__98[0U] = 1U;
    __Vtemp_hc961d23f__98[1U] = 0U;
    __Vtemp_hc961d23f__98[2U] = 0U;
    __Vtemp_hc961d23f__98[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h821b23e9__0, __Vtemp_hc961d23f__98, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__99[0U] = 1U;
    __Vtemp_hc961d23f__99[1U] = 0U;
    __Vtemp_hc961d23f__99[2U] = 0U;
    __Vtemp_hc961d23f__99[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2c1cce75__0, __Vtemp_hc961d23f__99, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__100[0U] = 1U;
    __Vtemp_hc961d23f__100[1U] = 0U;
    __Vtemp_hc961d23f__100[2U] = 0U;
    __Vtemp_hc961d23f__100[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfe6e080b__0, __Vtemp_hc961d23f__100, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__101[0U] = 1U;
    __Vtemp_hc961d23f__101[1U] = 0U;
    __Vtemp_hc961d23f__101[2U] = 0U;
    __Vtemp_hc961d23f__101[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h157e81e8__0, __Vtemp_hc961d23f__101, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__102[0U] = 1U;
    __Vtemp_hc961d23f__102[1U] = 0U;
    __Vtemp_hc961d23f__102[2U] = 0U;
    __Vtemp_hc961d23f__102[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd9e5389c__0, __Vtemp_hc961d23f__102, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__103[0U] = 1U;
    __Vtemp_hc961d23f__103[1U] = 0U;
    __Vtemp_hc961d23f__103[2U] = 0U;
    __Vtemp_hc961d23f__103[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8ee56ece__0, __Vtemp_hc961d23f__103, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__104[0U] = 1U;
    __Vtemp_hc961d23f__104[1U] = 0U;
    __Vtemp_hc961d23f__104[2U] = 0U;
    __Vtemp_hc961d23f__104[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hceb2f62d__0, __Vtemp_hc961d23f__104, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__105[0U] = 1U;
    __Vtemp_hc961d23f__105[1U] = 0U;
    __Vtemp_hc961d23f__105[2U] = 0U;
    __Vtemp_hc961d23f__105[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcfd2323a__0, __Vtemp_hc961d23f__105, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__106[0U] = 1U;
    __Vtemp_hc961d23f__106[1U] = 0U;
    __Vtemp_hc961d23f__106[2U] = 0U;
    __Vtemp_hc961d23f__106[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h24c351e3__0, __Vtemp_hc961d23f__106, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__107[0U] = 1U;
    __Vtemp_hc961d23f__107[1U] = 0U;
    __Vtemp_hc961d23f__107[2U] = 0U;
    __Vtemp_hc961d23f__107[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc73cf5c5__0, __Vtemp_hc961d23f__107, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__108[0U] = 1U;
    __Vtemp_hc961d23f__108[1U] = 0U;
    __Vtemp_hc961d23f__108[2U] = 0U;
    __Vtemp_hc961d23f__108[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h81361c15__0, __Vtemp_hc961d23f__108, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__109[0U] = 1U;
    __Vtemp_hc961d23f__109[1U] = 0U;
    __Vtemp_hc961d23f__109[2U] = 0U;
    __Vtemp_hc961d23f__109[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h335c4490__0, __Vtemp_hc961d23f__109, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__110[0U] = 1U;
    __Vtemp_hc961d23f__110[1U] = 0U;
    __Vtemp_hc961d23f__110[2U] = 0U;
    __Vtemp_hc961d23f__110[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb7d74920__0, __Vtemp_hc961d23f__110, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__111[0U] = 1U;
    __Vtemp_hc961d23f__111[1U] = 0U;
    __Vtemp_hc961d23f__111[2U] = 0U;
    __Vtemp_hc961d23f__111[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h69cef561__0, __Vtemp_hc961d23f__111, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__112[0U] = 1U;
    __Vtemp_hc961d23f__112[1U] = 0U;
    __Vtemp_hc961d23f__112[2U] = 0U;
    __Vtemp_hc961d23f__112[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3767228d__0, __Vtemp_hc961d23f__112, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__113[0U] = 1U;
    __Vtemp_hc961d23f__113[1U] = 0U;
    __Vtemp_hc961d23f__113[2U] = 0U;
    __Vtemp_hc961d23f__113[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h66f2cb60__0, __Vtemp_hc961d23f__113, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__114[0U] = 1U;
    __Vtemp_hc961d23f__114[1U] = 0U;
    __Vtemp_hc961d23f__114[2U] = 0U;
    __Vtemp_hc961d23f__114[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd2f1e4ab__0, __Vtemp_hc961d23f__114, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__115[0U] = 1U;
    __Vtemp_hc961d23f__115[1U] = 0U;
    __Vtemp_hc961d23f__115[2U] = 0U;
    __Vtemp_hc961d23f__115[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdf651033__0, __Vtemp_hc961d23f__115, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__116[0U] = 1U;
    __Vtemp_hc961d23f__116[1U] = 0U;
    __Vtemp_hc961d23f__116[2U] = 0U;
    __Vtemp_hc961d23f__116[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9bbd3606__0, __Vtemp_hc961d23f__116, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__117[0U] = 1U;
    __Vtemp_hc961d23f__117[1U] = 0U;
    __Vtemp_hc961d23f__117[2U] = 0U;
    __Vtemp_hc961d23f__117[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5c9d7df1__0, __Vtemp_hc961d23f__117, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__118[0U] = 1U;
    __Vtemp_hc961d23f__118[1U] = 0U;
    __Vtemp_hc961d23f__118[2U] = 0U;
    __Vtemp_hc961d23f__118[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h33ccbd55__0, __Vtemp_hc961d23f__118, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__119[0U] = 1U;
    __Vtemp_hc961d23f__119[1U] = 0U;
    __Vtemp_hc961d23f__119[2U] = 0U;
    __Vtemp_hc961d23f__119[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h50230b7a__0, __Vtemp_hc961d23f__119, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__120[0U] = 1U;
    __Vtemp_hc961d23f__120[1U] = 0U;
    __Vtemp_hc961d23f__120[2U] = 0U;
    __Vtemp_hc961d23f__120[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h28679803__0, __Vtemp_hc961d23f__120, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__121[0U] = 1U;
    __Vtemp_hc961d23f__121[1U] = 0U;
    __Vtemp_hc961d23f__121[2U] = 0U;
    __Vtemp_hc961d23f__121[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h08f86df2__0, __Vtemp_hc961d23f__121, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__122[0U] = 1U;
    __Vtemp_hc961d23f__122[1U] = 0U;
    __Vtemp_hc961d23f__122[2U] = 0U;
    __Vtemp_hc961d23f__122[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h535421f2__0, __Vtemp_hc961d23f__122, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__123[0U] = 1U;
    __Vtemp_hc961d23f__123[1U] = 0U;
    __Vtemp_hc961d23f__123[2U] = 0U;
    __Vtemp_hc961d23f__123[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6417d2d0__0, __Vtemp_hc961d23f__123, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__124[0U] = 1U;
    __Vtemp_hc961d23f__124[1U] = 0U;
    __Vtemp_hc961d23f__124[2U] = 0U;
    __Vtemp_hc961d23f__124[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4803649e__0, __Vtemp_hc961d23f__124, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__125[0U] = 1U;
    __Vtemp_hc961d23f__125[1U] = 0U;
    __Vtemp_hc961d23f__125[2U] = 0U;
    __Vtemp_hc961d23f__125[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4b240f3c__0, __Vtemp_hc961d23f__125, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__126[0U] = 1U;
    __Vtemp_hc961d23f__126[1U] = 0U;
    __Vtemp_hc961d23f__126[2U] = 0U;
    __Vtemp_hc961d23f__126[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdd6f8c71__0, __Vtemp_hc961d23f__126, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__127[0U] = 1U;
    __Vtemp_hc961d23f__127[1U] = 0U;
    __Vtemp_hc961d23f__127[2U] = 0U;
    __Vtemp_hc961d23f__127[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h088cb841__0, __Vtemp_hc961d23f__127, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__128[0U] = 1U;
    __Vtemp_hc961d23f__128[1U] = 0U;
    __Vtemp_hc961d23f__128[2U] = 0U;
    __Vtemp_hc961d23f__128[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha35aa3d9__0, __Vtemp_hc961d23f__128, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__129[0U] = 1U;
    __Vtemp_hc961d23f__129[1U] = 0U;
    __Vtemp_hc961d23f__129[2U] = 0U;
    __Vtemp_hc961d23f__129[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h90f5bb9c__0, __Vtemp_hc961d23f__129, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__130[0U] = 1U;
    __Vtemp_hc961d23f__130[1U] = 0U;
    __Vtemp_hc961d23f__130[2U] = 0U;
    __Vtemp_hc961d23f__130[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h212fa0e2__0, __Vtemp_hc961d23f__130, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__131[0U] = 1U;
    __Vtemp_hc961d23f__131[1U] = 0U;
    __Vtemp_hc961d23f__131[2U] = 0U;
    __Vtemp_hc961d23f__131[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9f392495__0, __Vtemp_hc961d23f__131, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__132[0U] = 1U;
    __Vtemp_hc961d23f__132[1U] = 0U;
    __Vtemp_hc961d23f__132[2U] = 0U;
    __Vtemp_hc961d23f__132[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8cac2ceb__0, __Vtemp_hc961d23f__132, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__133[0U] = 1U;
    __Vtemp_hc961d23f__133[1U] = 0U;
    __Vtemp_hc961d23f__133[2U] = 0U;
    __Vtemp_hc961d23f__133[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he6102faa__0, __Vtemp_hc961d23f__133, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__134[0U] = 1U;
    __Vtemp_hc961d23f__134[1U] = 0U;
    __Vtemp_hc961d23f__134[2U] = 0U;
    __Vtemp_hc961d23f__134[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h93714342__0, __Vtemp_hc961d23f__134, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__135[0U] = 1U;
    __Vtemp_hc961d23f__135[1U] = 0U;
    __Vtemp_hc961d23f__135[2U] = 0U;
    __Vtemp_hc961d23f__135[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haaf623b5__0, __Vtemp_hc961d23f__135, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__136[0U] = 1U;
    __Vtemp_hc961d23f__136[1U] = 0U;
    __Vtemp_hc961d23f__136[2U] = 0U;
    __Vtemp_hc961d23f__136[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h151d3a37__0, __Vtemp_hc961d23f__136, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__137[0U] = 1U;
    __Vtemp_hc961d23f__137[1U] = 0U;
    __Vtemp_hc961d23f__137[2U] = 0U;
    __Vtemp_hc961d23f__137[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2dbe42b0__0, __Vtemp_hc961d23f__137, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__138[0U] = 1U;
    __Vtemp_hc961d23f__138[1U] = 0U;
    __Vtemp_hc961d23f__138[2U] = 0U;
    __Vtemp_hc961d23f__138[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd9781752__0, __Vtemp_hc961d23f__138, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__139[0U] = 1U;
    __Vtemp_hc961d23f__139[1U] = 0U;
    __Vtemp_hc961d23f__139[2U] = 0U;
    __Vtemp_hc961d23f__139[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_heda30d11__0, __Vtemp_hc961d23f__139, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__140[0U] = 1U;
    __Vtemp_hc961d23f__140[1U] = 0U;
    __Vtemp_hc961d23f__140[2U] = 0U;
    __Vtemp_hc961d23f__140[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7d2b9f58__0, __Vtemp_hc961d23f__140, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__141[0U] = 1U;
    __Vtemp_hc961d23f__141[1U] = 0U;
    __Vtemp_hc961d23f__141[2U] = 0U;
    __Vtemp_hc961d23f__141[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h77a8b9df__0, __Vtemp_hc961d23f__141, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__142[0U] = 1U;
    __Vtemp_hc961d23f__142[1U] = 0U;
    __Vtemp_hc961d23f__142[2U] = 0U;
    __Vtemp_hc961d23f__142[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h88d8e184__0, __Vtemp_hc961d23f__142, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__143[0U] = 1U;
    __Vtemp_hc961d23f__143[1U] = 0U;
    __Vtemp_hc961d23f__143[2U] = 0U;
    __Vtemp_hc961d23f__143[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc0f30351__0, __Vtemp_hc961d23f__143, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__144[0U] = 1U;
    __Vtemp_hc961d23f__144[1U] = 0U;
    __Vtemp_hc961d23f__144[2U] = 0U;
    __Vtemp_hc961d23f__144[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf4ebf112__0, __Vtemp_hc961d23f__144, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__145[0U] = 1U;
    __Vtemp_hc961d23f__145[1U] = 0U;
    __Vtemp_hc961d23f__145[2U] = 0U;
    __Vtemp_hc961d23f__145[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5a4d81cf__0, __Vtemp_hc961d23f__145, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__146[0U] = 1U;
    __Vtemp_hc961d23f__146[1U] = 0U;
    __Vtemp_hc961d23f__146[2U] = 0U;
    __Vtemp_hc961d23f__146[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4e66fc2a__0, __Vtemp_hc961d23f__146, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__147[0U] = 1U;
    __Vtemp_hc961d23f__147[1U] = 0U;
    __Vtemp_hc961d23f__147[2U] = 0U;
    __Vtemp_hc961d23f__147[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0d537ebb__0, __Vtemp_hc961d23f__147, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__148[0U] = 1U;
    __Vtemp_hc961d23f__148[1U] = 0U;
    __Vtemp_hc961d23f__148[2U] = 0U;
    __Vtemp_hc961d23f__148[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4d2edc21__0, __Vtemp_hc961d23f__148, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__149[0U] = 1U;
    __Vtemp_hc961d23f__149[1U] = 0U;
    __Vtemp_hc961d23f__149[2U] = 0U;
    __Vtemp_hc961d23f__149[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h90fa7565__0, __Vtemp_hc961d23f__149, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__150[0U] = 1U;
    __Vtemp_hc961d23f__150[1U] = 0U;
    __Vtemp_hc961d23f__150[2U] = 0U;
    __Vtemp_hc961d23f__150[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hed74969e__0, __Vtemp_hc961d23f__150, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__151[0U] = 1U;
    __Vtemp_hc961d23f__151[1U] = 0U;
    __Vtemp_hc961d23f__151[2U] = 0U;
    __Vtemp_hc961d23f__151[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7104838a__0, __Vtemp_hc961d23f__151, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__152[0U] = 1U;
    __Vtemp_hc961d23f__152[1U] = 0U;
    __Vtemp_hc961d23f__152[2U] = 0U;
    __Vtemp_hc961d23f__152[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h942971fc__0, __Vtemp_hc961d23f__152, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__153[0U] = 1U;
    __Vtemp_hc961d23f__153[1U] = 0U;
    __Vtemp_hc961d23f__153[2U] = 0U;
    __Vtemp_hc961d23f__153[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6ac48418__0, __Vtemp_hc961d23f__153, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__154[0U] = 1U;
    __Vtemp_hc961d23f__154[1U] = 0U;
    __Vtemp_hc961d23f__154[2U] = 0U;
    __Vtemp_hc961d23f__154[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0676193b__0, __Vtemp_hc961d23f__154, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__155[0U] = 1U;
    __Vtemp_hc961d23f__155[1U] = 0U;
    __Vtemp_hc961d23f__155[2U] = 0U;
    __Vtemp_hc961d23f__155[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfd3a603c__0, __Vtemp_hc961d23f__155, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__156[0U] = 1U;
    __Vtemp_hc961d23f__156[1U] = 0U;
    __Vtemp_hc961d23f__156[2U] = 0U;
    __Vtemp_hc961d23f__156[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h32ed682a__0, __Vtemp_hc961d23f__156, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__157[0U] = 1U;
    __Vtemp_hc961d23f__157[1U] = 0U;
    __Vtemp_hc961d23f__157[2U] = 0U;
    __Vtemp_hc961d23f__157[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2ff1fe8c__0, __Vtemp_hc961d23f__157, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    __Vtemp_hc961d23f__158[0U] = 1U;
    __Vtemp_hc961d23f__158[1U] = 0U;
    __Vtemp_hc961d23f__158[2U] = 0U;
    __Vtemp_hc961d23f__158[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h72a0da42__0, __Vtemp_hc961d23f__158, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel));
    __Vtemp_hc961d23f__159[0U] = 1U;
    __Vtemp_hc961d23f__159[1U] = 0U;
    __Vtemp_hc961d23f__159[2U] = 0U;
    __Vtemp_hc961d23f__159[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf2a71d92__0, __Vtemp_hc961d23f__159, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_sel_1));
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rob__DOT__empty)) 
                                 | (0x2fU < (0x7fU 
                                             & ((0x3fU 
                                                 & ((0x1fU 
                                                     & ((0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                         | (__Vtemp_h74ad3fd3__0[0U] 
                                                                            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))) 
                                                                        | (__Vtemp_hfe2da49b__0[0U] 
                                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1)))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_hbcdc85f7__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h7f1b17d8__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 1U)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_hb822d214__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hb2b0e7c5__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 2U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h9e315f56__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h79129db0__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 3U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h686ccfa3__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h4deb834d__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 4U)))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_hae207595__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h56e3d7d1__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 5U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h8485c572__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h57cd97be__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 6U)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h3340da62__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_he8dc9b2d__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 7U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h3f0da980__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h96b7dc43__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 8U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h5e968fda__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h17999c1d__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 9U)))))))) 
                                                        + 
                                                        (0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_hb3a63966__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_hd71213e1__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0xaU)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h6e0d7c6a__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h0b1773a4__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0xbU)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h8f1237a1__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h05679502__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0xcU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h9d03a5ca__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h25a1d5a1__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0xdU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h9b82e48d__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h1ba54141__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0xeU)))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h77707c99__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h4b8fbdc9__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0xfU)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h590be1e6__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h8d602e45__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x10U)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h344d707a__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hedf536eb__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x11U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_hd232bc6c__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hebb2f103__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x12U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h85ce6ea4__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h36737680__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x13U)))))))))) 
                                                    + 
                                                    (0x1fU 
                                                     & ((0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_hba7c7330__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h9f2c6104__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x14U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_hecea35e7__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h875511a4__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x15U)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_hea1b1d8e__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hf7536e9d__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h6b264e7e__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h443436be__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x17U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h567db514__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_he7eed59b__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x18U)))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h5db459a0__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_he9a428de__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x19U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h390877c6__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_hed983e4a__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x1aU)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_hf77515a4__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hd8c72039__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x1bU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                           | (__Vtemp_h32dcadd9__0[0U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h6b07f438__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 0x1cU))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h1d2113a4__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h5768493a__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x1dU)))))))) 
                                                        + 
                                                        (0xfU 
                                                         & ((7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                          | (__Vtemp_h391aa41d__0[0U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h94fad48d__0[0U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x1eU)) 
                                                                    + 
                                                                    (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[0U] 
                                                                       | (__Vtemp_h297fa835__0[0U] 
                                                                          & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                      | (__Vtemp_h97d6b46e__0[0U] 
                                                                         & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                     >> 0x1fU))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_he99b9bff__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_hd9bc6145__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1)))))) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                           | (__Vtemp_h421fd5b9__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hbec6ea29__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 1U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_he0dc0959__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_hc80b0fae__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 2U)))))) 
                                                            + 
                                                            (7U 
                                                             & ((3U 
                                                                 & ((1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_hec799acd__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_ha2f1779c__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 3U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_h739f38ca__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h973d8f0c__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 4U)))) 
                                                                + 
                                                                (3U 
                                                                 & (((1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                           | (__Vtemp_h8441b5c6__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_hdaedcbbc__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 5U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                           | (__Vtemp_hbeff0443__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h0d0a9b5a__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                         >> 6U))) 
                                                                    + 
                                                                    (1U 
                                                                     & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_h79ac2c27__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h9d590d8c__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 7U)))))))))))) 
                                                + (0x3fU 
                                                   & ((0x1fU 
                                                       & ((0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_hcc292c41__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h3189b62a__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 8U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_heb38fd9b__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h19f00c0b__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 9U)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_hd97380bb__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_hea142eb5__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0xaU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_h9bd2e730__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_haaca4c80__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0xbU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h62ef6a4e__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h0c5ec536__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xcU)))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h8f2de9b8__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h26f89aed__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xdU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_hd4498ccc__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_hd22ff295__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xeU)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_had7ef3f6__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h5212f498__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0xfU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_h30ba408d__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h2ce5b855__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x10U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h821b23e9__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h2c1cce75__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x11U)))))))) 
                                                          + 
                                                          (0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_hfe6e080b__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h157e81e8__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x12U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_hd9e5389c__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h8ee56ece__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x13U)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_hceb2f62d__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_hcfd2323a__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x14U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_h24c351e3__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_hc73cf5c5__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x15U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h81361c15__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h335c4490__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x16U)))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_hb7d74920__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h69cef561__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x17U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h3767228d__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h66f2cb60__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x18U)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_hd2f1e4ab__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_hdf651033__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x19U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_h9bbd3606__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h5c9d7df1__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x1aU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h33ccbd55__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h50230b7a__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x1bU)))))))))) 
                                                      + 
                                                      (0x1fU 
                                                       & ((0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h28679803__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h08f86df2__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x1cU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                            | (__Vtemp_h535421f2__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h6417d2d0__0[1U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0x1dU)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                             | (__Vtemp_h4803649e__0[1U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h4b240f3c__0[1U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0x1eU)) 
                                                                       + 
                                                                       (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[1U] 
                                                                          | (__Vtemp_hdd6f8c71__0[1U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                         | (__Vtemp_h088cb841__0[1U] 
                                                                            & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                        >> 0x1fU)) 
                                                                      + 
                                                                      (1U 
                                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                           | (__Vtemp_ha35aa3d9__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                          | (__Vtemp_h90f5bb9c__0[2U] 
                                                                             & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1)))))))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h212fa0e2__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h9f392495__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 1U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h8cac2ceb__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_he6102faa__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 2U)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_h93714342__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_haaf623b5__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 3U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_h151d3a37__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h2dbe42b0__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 4U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_hd9781752__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_heda30d11__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 5U)))))))) 
                                                          + 
                                                          (0xfU 
                                                           & ((7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h7d2b9f58__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h77a8b9df__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 6U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h88d8e184__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_hc0f30351__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 7U)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_hf4ebf112__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h5a4d81cf__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 8U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_h4e66fc2a__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h0d537ebb__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 9U))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h4d2edc21__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h90fa7565__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xaU)))))) 
                                                              + 
                                                              (7U 
                                                               & ((3U 
                                                                   & ((1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_hed74969e__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h7104838a__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xbU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h942971fc__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_h6ac48418__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xcU)))) 
                                                                  + 
                                                                  (3U 
                                                                   & (((1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_h0676193b__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_hfd3a603c__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0xdU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                             | (__Vtemp_h32ed682a__0[2U] 
                                                                                & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                            | (__Vtemp_h2ff1fe8c__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                           >> 0xeU))) 
                                                                      + 
                                                                      (1U 
                                                                       & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__free_list[2U] 
                                                                            | (__Vtemp_h72a0da42__0[2U] 
                                                                               & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid))))) 
                                                                           | (__Vtemp_hf2a71d92__0[2U] 
                                                                              & (- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_boom_tile__DOT__core__DOT__rename_stage__DOT__freelist__DOT__r_valid_1))))) 
                                                                          >> 0xfU))))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: RenameFreeList.sv:298: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.rename_stage.freelist: Assertion failed: [freelist] Leaking physical registers.\n    at rename-freelist.scala:95 assert (!io.debug.pipeline_empty || PopCount(io.debug.freelist) >= (numPregs - numLregs - 1).U,\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv", 298, "");
        if (VL_UNLIKELY(
                // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv:299:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: RenameFreeList.sv:300: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain_boom_tile.core.rename_stage.freelist\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/RenameFreeList.sv", 300, "");
        }
    }
}

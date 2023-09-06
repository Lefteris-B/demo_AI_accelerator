// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

void VTestHarness___024root___sequent__TOP__13797(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13808(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13809(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13810(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13811(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13812(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13813(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13814(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13815(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13816(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13817(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13818(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13819(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13820(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13821(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13822(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13823(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13824(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13825(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13826(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13827(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13828(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13829(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13830(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13831(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13832(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13833(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13834(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__5(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__5\n"); );
    // Body
    if ((((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))))) {
        VTestHarness___024root___sequent__TOP__13797(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VTestHarness___024root___sequent__TOP__13808(vlSelf);
        VTestHarness___024root___sequent__TOP__13809(vlSelf);
        VTestHarness___024root___sequent__TOP__13810(vlSelf);
        VTestHarness___024root___sequent__TOP__13811(vlSelf);
        VTestHarness___024root___sequent__TOP__13812(vlSelf);
        VTestHarness___024root___sequent__TOP__13813(vlSelf);
        VTestHarness___024root___sequent__TOP__13814(vlSelf);
        VTestHarness___024root___sequent__TOP__13815(vlSelf);
        VTestHarness___024root___sequent__TOP__13816(vlSelf);
        VTestHarness___024root___sequent__TOP__13817(vlSelf);
        VTestHarness___024root___sequent__TOP__13818(vlSelf);
        VTestHarness___024root___sequent__TOP__13819(vlSelf);
        VTestHarness___024root___sequent__TOP__13820(vlSelf);
        VTestHarness___024root___sequent__TOP__13821(vlSelf);
        VTestHarness___024root___sequent__TOP__13822(vlSelf);
        VTestHarness___024root___sequent__TOP__13823(vlSelf);
        VTestHarness___024root___sequent__TOP__13824(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset))))) {
        VTestHarness___024root___sequent__TOP__13825(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))) 
         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))))) {
        VTestHarness___024root___sequent__TOP__13826(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset))))) {
        VTestHarness___024root___sequent__TOP__13827(vlSelf);
        VTestHarness___024root___sequent__TOP__13828(vlSelf);
        VTestHarness___024root___sequent__TOP__13829(vlSelf);
        VTestHarness___024root___sequent__TOP__13830(vlSelf);
        VTestHarness___024root___sequent__TOP__13831(vlSelf);
        VTestHarness___024root___sequent__TOP__13832(vlSelf);
        VTestHarness___024root___sequent__TOP__13833(vlSelf);
        VTestHarness___024root___sequent__TOP__13834(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__13842(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13844(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13845(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13846(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13847(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13848(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13849(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13850(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13851(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13852(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13853(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13854(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13855(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13856(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13857(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13858(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13859(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13860(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13861(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13862(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13863(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13864(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13865(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13866(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13867(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13868(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13869(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13870(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13871(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13872(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13873(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13874(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13875(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13876(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13877(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13878(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13879(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13880(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13881(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13882(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13883(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13884(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13885(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13886(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13887(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13888(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13889(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13890(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13891(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13892(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13893(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13894(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13895(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13896(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13897(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13898(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13899(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13900(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13901(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13902(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13903(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13904(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13905(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13906(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13907(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13908(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13909(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13910(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13911(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13912(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13913(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13914(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13915(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13918(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13919(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13920(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__6(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__6\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out)))) {
        VTestHarness___024root___sequent__TOP__13842(vlSelf);
        VTestHarness___024root___sequent__TOP__13844(vlSelf);
        VTestHarness___024root___sequent__TOP__13845(vlSelf);
        VTestHarness___024root___sequent__TOP__13846(vlSelf);
        VTestHarness___024root___sequent__TOP__13847(vlSelf);
        VTestHarness___024root___sequent__TOP__13848(vlSelf);
        VTestHarness___024root___sequent__TOP__13849(vlSelf);
        VTestHarness___024root___sequent__TOP__13850(vlSelf);
        VTestHarness___024root___sequent__TOP__13851(vlSelf);
        VTestHarness___024root___sequent__TOP__13852(vlSelf);
        VTestHarness___024root___sequent__TOP__13853(vlSelf);
        VTestHarness___024root___sequent__TOP__13854(vlSelf);
        VTestHarness___024root___sequent__TOP__13855(vlSelf);
        VTestHarness___024root___sequent__TOP__13856(vlSelf);
        VTestHarness___024root___sequent__TOP__13857(vlSelf);
        VTestHarness___024root___sequent__TOP__13858(vlSelf);
        VTestHarness___024root___sequent__TOP__13859(vlSelf);
        VTestHarness___024root___sequent__TOP__13860(vlSelf);
        VTestHarness___024root___sequent__TOP__13861(vlSelf);
        VTestHarness___024root___sequent__TOP__13862(vlSelf);
        VTestHarness___024root___sequent__TOP__13863(vlSelf);
        VTestHarness___024root___sequent__TOP__13864(vlSelf);
        VTestHarness___024root___sequent__TOP__13865(vlSelf);
        VTestHarness___024root___sequent__TOP__13866(vlSelf);
        VTestHarness___024root___sequent__TOP__13867(vlSelf);
        VTestHarness___024root___sequent__TOP__13868(vlSelf);
        VTestHarness___024root___sequent__TOP__13869(vlSelf);
        VTestHarness___024root___sequent__TOP__13870(vlSelf);
        VTestHarness___024root___sequent__TOP__13871(vlSelf);
        VTestHarness___024root___sequent__TOP__13872(vlSelf);
        VTestHarness___024root___sequent__TOP__13873(vlSelf);
        VTestHarness___024root___sequent__TOP__13874(vlSelf);
        VTestHarness___024root___sequent__TOP__13875(vlSelf);
        VTestHarness___024root___sequent__TOP__13876(vlSelf);
        VTestHarness___024root___sequent__TOP__13877(vlSelf);
        VTestHarness___024root___sequent__TOP__13878(vlSelf);
        VTestHarness___024root___sequent__TOP__13879(vlSelf);
        VTestHarness___024root___sequent__TOP__13880(vlSelf);
        VTestHarness___024root___sequent__TOP__13881(vlSelf);
        VTestHarness___024root___sequent__TOP__13882(vlSelf);
        VTestHarness___024root___sequent__TOP__13883(vlSelf);
        VTestHarness___024root___sequent__TOP__13884(vlSelf);
        VTestHarness___024root___sequent__TOP__13885(vlSelf);
        VTestHarness___024root___sequent__TOP__13886(vlSelf);
        VTestHarness___024root___sequent__TOP__13887(vlSelf);
        VTestHarness___024root___sequent__TOP__13888(vlSelf);
        VTestHarness___024root___sequent__TOP__13889(vlSelf);
        VTestHarness___024root___sequent__TOP__13890(vlSelf);
        VTestHarness___024root___sequent__TOP__13891(vlSelf);
        VTestHarness___024root___sequent__TOP__13892(vlSelf);
        VTestHarness___024root___sequent__TOP__13893(vlSelf);
        VTestHarness___024root___sequent__TOP__13894(vlSelf);
        VTestHarness___024root___sequent__TOP__13895(vlSelf);
        VTestHarness___024root___sequent__TOP__13896(vlSelf);
        VTestHarness___024root___sequent__TOP__13897(vlSelf);
        VTestHarness___024root___sequent__TOP__13898(vlSelf);
        VTestHarness___024root___sequent__TOP__13899(vlSelf);
        VTestHarness___024root___sequent__TOP__13900(vlSelf);
        VTestHarness___024root___sequent__TOP__13901(vlSelf);
        VTestHarness___024root___sequent__TOP__13902(vlSelf);
        VTestHarness___024root___sequent__TOP__13903(vlSelf);
        VTestHarness___024root___sequent__TOP__13904(vlSelf);
        VTestHarness___024root___sequent__TOP__13905(vlSelf);
        VTestHarness___024root___sequent__TOP__13906(vlSelf);
        VTestHarness___024root___sequent__TOP__13907(vlSelf);
        VTestHarness___024root___sequent__TOP__13908(vlSelf);
        VTestHarness___024root___sequent__TOP__13909(vlSelf);
        VTestHarness___024root___sequent__TOP__13910(vlSelf);
        VTestHarness___024root___sequent__TOP__13911(vlSelf);
        VTestHarness___024root___sequent__TOP__13912(vlSelf);
        VTestHarness___024root___sequent__TOP__13913(vlSelf);
        VTestHarness___024root___sequent__TOP__13914(vlSelf);
        VTestHarness___024root___sequent__TOP__13915(vlSelf);
        VTestHarness___024root___sequent__TOP__13918(vlSelf);
        VTestHarness___024root___sequent__TOP__13919(vlSelf);
        VTestHarness___024root___sequent__TOP__13920(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__13928(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13929(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13930(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13931(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13932(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13933(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13934(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13935(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13936(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13937(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13938(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13939(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13940(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13941(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13942(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13943(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13944(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13945(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13946(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13947(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13949(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13950(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13951(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13952(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13953(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13954(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13955(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13956(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13957(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13958(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13959(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13960(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13961(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13962(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13963(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13964(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__0(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13965(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13966(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13967(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__7(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__7\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))))) {
        VTestHarness___024root___sequent__TOP__13928(vlSelf);
        VTestHarness___024root___sequent__TOP__13929(vlSelf);
        VTestHarness___024root___sequent__TOP__13930(vlSelf);
        VTestHarness___024root___sequent__TOP__13931(vlSelf);
        VTestHarness___024root___sequent__TOP__13932(vlSelf);
        VTestHarness___024root___sequent__TOP__13933(vlSelf);
        VTestHarness___024root___sequent__TOP__13934(vlSelf);
        VTestHarness___024root___sequent__TOP__13935(vlSelf);
        VTestHarness___024root___sequent__TOP__13936(vlSelf);
        VTestHarness___024root___sequent__TOP__13937(vlSelf);
        VTestHarness___024root___sequent__TOP__13938(vlSelf);
        VTestHarness___024root___sequent__TOP__13939(vlSelf);
        VTestHarness___024root___sequent__TOP__13940(vlSelf);
        VTestHarness___024root___sequent__TOP__13941(vlSelf);
        VTestHarness___024root___sequent__TOP__13942(vlSelf);
        VTestHarness___024root___sequent__TOP__13943(vlSelf);
        VTestHarness___024root___sequent__TOP__13944(vlSelf);
        VTestHarness___024root___sequent__TOP__13945(vlSelf);
        VTestHarness___024root___sequent__TOP__13946(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset))))) {
        VTestHarness___024root___sequent__TOP__13947(vlSelf);
    }
    if (((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)))) {
        VTestHarness___024root___sequent__TOP__13949(vlSelf);
        VTestHarness___024root___sequent__TOP__13950(vlSelf);
        VTestHarness___024root___sequent__TOP__13951(vlSelf);
        VTestHarness___024root___sequent__TOP__13952(vlSelf);
        VTestHarness___024root___sequent__TOP__13953(vlSelf);
        VTestHarness___024root___sequent__TOP__13954(vlSelf);
        VTestHarness___024root___sequent__TOP__13955(vlSelf);
        VTestHarness___024root___sequent__TOP__13956(vlSelf);
        VTestHarness___024root___sequent__TOP__13957(vlSelf);
        VTestHarness___024root___sequent__TOP__13958(vlSelf);
        VTestHarness___024root___sequent__TOP__13959(vlSelf);
        VTestHarness___024root___sequent__TOP__13960(vlSelf);
        VTestHarness___024root___sequent__TOP__13961(vlSelf);
        VTestHarness___024root___sequent__TOP__13962(vlSelf);
        VTestHarness___024root___sequent__TOP__13963(vlSelf);
        VTestHarness___024root___sequent__TOP__13964(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VTestHarness___024root___multiclk__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VTestHarness___024root___sequent__TOP__13965(vlSelf);
        VTestHarness___024root___sequent__TOP__13966(vlSelf);
        VTestHarness___024root___sequent__TOP__13967(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__13968(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13969(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13970(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13971(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__8(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__8\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___sequent__TOP__13968(vlSelf);
        VTestHarness___024root___sequent__TOP__13969(vlSelf);
        VTestHarness___024root___sequent__TOP__13970(vlSelf);
        VTestHarness___024root___sequent__TOP__13971(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__13972(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13973(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13974(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13975(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13976(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13977(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13978(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13979(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13980(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13981(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13982(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13983(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13984(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13985(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13986(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13987(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13988(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13989(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13990(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13991(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13992(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13993(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13994(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13995(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13996(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13997(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13998(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__13999(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14000(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14001(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14002(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14003(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14004(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14005(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14006(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14007(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14008(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14009(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14010(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14011(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14012(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14013(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14014(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14015(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14016(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14017(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14018(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14019(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14020(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14021(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14022(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14023(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14024(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14025(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14026(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14027(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14028(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14029(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14030(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14031(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14032(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14033(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14034(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14035(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14036(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14037(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14038(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14039(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14040(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14041(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14042(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14043(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14044(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14045(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14046(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14047(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14048(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14049(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14050(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14051(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14052(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14053(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14054(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14055(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__9(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__9\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out)))) {
        VTestHarness___024root___sequent__TOP__13972(vlSelf);
        VTestHarness___024root___sequent__TOP__13973(vlSelf);
        VTestHarness___024root___sequent__TOP__13974(vlSelf);
        VTestHarness___024root___sequent__TOP__13975(vlSelf);
        VTestHarness___024root___sequent__TOP__13976(vlSelf);
        VTestHarness___024root___sequent__TOP__13977(vlSelf);
        VTestHarness___024root___sequent__TOP__13978(vlSelf);
        VTestHarness___024root___sequent__TOP__13979(vlSelf);
        VTestHarness___024root___sequent__TOP__13980(vlSelf);
        VTestHarness___024root___sequent__TOP__13981(vlSelf);
        VTestHarness___024root___sequent__TOP__13982(vlSelf);
        VTestHarness___024root___sequent__TOP__13983(vlSelf);
        VTestHarness___024root___sequent__TOP__13984(vlSelf);
        VTestHarness___024root___sequent__TOP__13985(vlSelf);
        VTestHarness___024root___sequent__TOP__13986(vlSelf);
        VTestHarness___024root___sequent__TOP__13987(vlSelf);
        VTestHarness___024root___sequent__TOP__13988(vlSelf);
        VTestHarness___024root___sequent__TOP__13989(vlSelf);
        VTestHarness___024root___sequent__TOP__13990(vlSelf);
        VTestHarness___024root___sequent__TOP__13991(vlSelf);
        VTestHarness___024root___sequent__TOP__13992(vlSelf);
        VTestHarness___024root___sequent__TOP__13993(vlSelf);
        VTestHarness___024root___sequent__TOP__13994(vlSelf);
        VTestHarness___024root___sequent__TOP__13995(vlSelf);
        VTestHarness___024root___sequent__TOP__13996(vlSelf);
        VTestHarness___024root___sequent__TOP__13997(vlSelf);
        VTestHarness___024root___sequent__TOP__13998(vlSelf);
        VTestHarness___024root___sequent__TOP__13999(vlSelf);
        VTestHarness___024root___sequent__TOP__14000(vlSelf);
        VTestHarness___024root___sequent__TOP__14001(vlSelf);
        VTestHarness___024root___sequent__TOP__14002(vlSelf);
        VTestHarness___024root___sequent__TOP__14003(vlSelf);
        VTestHarness___024root___sequent__TOP__14004(vlSelf);
        VTestHarness___024root___sequent__TOP__14005(vlSelf);
        VTestHarness___024root___sequent__TOP__14006(vlSelf);
        VTestHarness___024root___sequent__TOP__14007(vlSelf);
        VTestHarness___024root___sequent__TOP__14008(vlSelf);
        VTestHarness___024root___sequent__TOP__14009(vlSelf);
        VTestHarness___024root___sequent__TOP__14010(vlSelf);
        VTestHarness___024root___sequent__TOP__14011(vlSelf);
        VTestHarness___024root___sequent__TOP__14012(vlSelf);
        VTestHarness___024root___sequent__TOP__14013(vlSelf);
        VTestHarness___024root___sequent__TOP__14014(vlSelf);
        VTestHarness___024root___sequent__TOP__14015(vlSelf);
        VTestHarness___024root___sequent__TOP__14016(vlSelf);
        VTestHarness___024root___sequent__TOP__14017(vlSelf);
        VTestHarness___024root___sequent__TOP__14018(vlSelf);
        VTestHarness___024root___sequent__TOP__14019(vlSelf);
        VTestHarness___024root___sequent__TOP__14020(vlSelf);
        VTestHarness___024root___sequent__TOP__14021(vlSelf);
        VTestHarness___024root___sequent__TOP__14022(vlSelf);
        VTestHarness___024root___sequent__TOP__14023(vlSelf);
        VTestHarness___024root___sequent__TOP__14024(vlSelf);
        VTestHarness___024root___sequent__TOP__14025(vlSelf);
        VTestHarness___024root___sequent__TOP__14026(vlSelf);
        VTestHarness___024root___sequent__TOP__14027(vlSelf);
        VTestHarness___024root___sequent__TOP__14028(vlSelf);
        VTestHarness___024root___sequent__TOP__14029(vlSelf);
        VTestHarness___024root___sequent__TOP__14030(vlSelf);
        VTestHarness___024root___sequent__TOP__14031(vlSelf);
        VTestHarness___024root___sequent__TOP__14032(vlSelf);
        VTestHarness___024root___sequent__TOP__14033(vlSelf);
        VTestHarness___024root___sequent__TOP__14034(vlSelf);
        VTestHarness___024root___sequent__TOP__14035(vlSelf);
        VTestHarness___024root___sequent__TOP__14036(vlSelf);
        VTestHarness___024root___sequent__TOP__14037(vlSelf);
        VTestHarness___024root___sequent__TOP__14038(vlSelf);
        VTestHarness___024root___sequent__TOP__14039(vlSelf);
        VTestHarness___024root___sequent__TOP__14040(vlSelf);
        VTestHarness___024root___sequent__TOP__14041(vlSelf);
        VTestHarness___024root___sequent__TOP__14042(vlSelf);
        VTestHarness___024root___sequent__TOP__14043(vlSelf);
        VTestHarness___024root___sequent__TOP__14044(vlSelf);
        VTestHarness___024root___sequent__TOP__14045(vlSelf);
        VTestHarness___024root___sequent__TOP__14046(vlSelf);
        VTestHarness___024root___sequent__TOP__14047(vlSelf);
        VTestHarness___024root___sequent__TOP__14048(vlSelf);
        VTestHarness___024root___sequent__TOP__14049(vlSelf);
        VTestHarness___024root___sequent__TOP__14050(vlSelf);
        VTestHarness___024root___sequent__TOP__14051(vlSelf);
        VTestHarness___024root___sequent__TOP__14052(vlSelf);
        VTestHarness___024root___sequent__TOP__14053(vlSelf);
        VTestHarness___024root___sequent__TOP__14054(vlSelf);
        VTestHarness___024root___sequent__TOP__14055(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__14057(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14058(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14059(VTestHarness___024root* vlSelf);
void VTestHarness___024root___combo__TOP__1(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14060(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__1(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__2(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14061(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14062(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14063(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14064(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14065(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14066(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14067(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__3(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__10(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__10\n"); );
    // Body
    if ((((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VTestHarness___024root___sequent__TOP__14057(vlSelf);
        VTestHarness___024root___sequent__TOP__14058(vlSelf);
        VTestHarness___024root___sequent__TOP__14059(vlSelf);
    }
    VTestHarness___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VTestHarness___024root___sequent__TOP__14060(vlSelf);
    }
    if (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
           & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
          | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset) 
             & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset)))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VTestHarness___024root___multiclk__TOP__1(vlSelf);
        VTestHarness___024root___multiclk__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out)))) {
        VTestHarness___024root___sequent__TOP__14061(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset))))) {
        VTestHarness___024root___sequent__TOP__14062(vlSelf);
        VTestHarness___024root___sequent__TOP__14063(vlSelf);
        VTestHarness___024root___sequent__TOP__14064(vlSelf);
        VTestHarness___024root___sequent__TOP__14065(vlSelf);
    }
    if ((((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
          & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) 
         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))))) {
        VTestHarness___024root___sequent__TOP__14066(vlSelf);
    }
    if ((((~ (IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)) 
          & (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___sequent__TOP__14067(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))) 
         | ((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock))))) {
        VTestHarness___024root___multiclk__TOP__3(vlSelf);
    }
}

void VTestHarness___024root___sequent__TOP__14068(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14069(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__4(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14070(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14071(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14072(VTestHarness___024root* vlSelf);
void VTestHarness___024root___combo__TOP__2(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14074(VTestHarness___024root* vlSelf);
void VTestHarness___024root___sequent__TOP__14075(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__5(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__6(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__7(VTestHarness___024root* vlSelf);
void VTestHarness___024root___multiclk__TOP__8(VTestHarness___024root* vlSelf);

void VTestHarness___024root___eval__11(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__11\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
         & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)))) {
        VTestHarness___024root___sequent__TOP__14068(vlSelf);
        VTestHarness___024root___sequent__TOP__14069(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out) 
            & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out))))) {
        VTestHarness___024root___multiclk__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))))) {
        VTestHarness___024root___sequent__TOP__14070(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset))))) {
        VTestHarness___024root___sequent__TOP__14071(vlSelf);
        VTestHarness___024root___sequent__TOP__14072(vlSelf);
    }
    VTestHarness___024root___combo__TOP__2(vlSelf);
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VTestHarness___024root___sequent__TOP__14074(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          & (~ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK))) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___sequent__TOP__14075(vlSelf);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK) 
          ^ (IData)(vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)) 
         | ((IData)(vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))))) {
        VTestHarness___024root___multiclk__TOP__5(vlSelf);
        VTestHarness___024root___multiclk__TOP__6(vlSelf);
        VTestHarness___024root___multiclk__TOP__7(vlSelf);
        VTestHarness___024root___multiclk__TOP__8(vlSelf);
    }
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
        = vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out 
        = vlSelf->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT___x1_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out;
}

void VTestHarness___024root___eval__12(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval__12\n"); );
    // Body
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out 
        = vlSelf->TestHarness__DOT__chiptop__DOT___gated_clock_debug_clock_gate_out;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
    vlSelf->__Vclklast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__VinpClk__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
}

QData VTestHarness___024root___change_request_1(VTestHarness___024root* vlSelf);

VL_INLINE_OPT QData VTestHarness___024root___change_request(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___change_request\n"); );
    // Body
    return (VTestHarness___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VTestHarness___024root___change_request_1(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset)
         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset));
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ChipTop.sv:136: TestHarness.chiptop._system_debug_systemjtag_reset_catcher_io_sync_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/ChipTop.sv:231: TestHarness.chiptop.debug_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:159: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:161: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/DigitalTop.sv:167: TestHarness.chiptop.system._resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/AsyncValidSync.sv:74: TestHarness.chiptop.system.tlDM.dmOuter.asource.x1_a_source.__Vcellinp__source_valid_0__reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset ^ vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/AsyncValidSync.sv:74: TestHarness.chiptop.system.tlDM.dmInner.dmiXing.x1_a_sink.__Vcellinp__sink_valid_0__reset\n"); );
    // Final
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT___system_debug_systemjtag_reset_catcher_io_sync_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__debug_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_implicit_clock_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT____Vcellinp__source_valid_0__reset;
    vlSelf->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT____Vcellinp__sink_valid_0__reset;
    return __req;
}

#ifdef VL_DEBUG
void VTestHarness___024root___eval_debug_assertions(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

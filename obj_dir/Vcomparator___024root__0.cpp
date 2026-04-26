// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"

VlCoroutine Vcomparator___024root___eval_initial__TOP__Vtiming__0(Vcomparator___024root* vlSelf);

void Vcomparator___024root___eval_initial(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcomparator___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vcomparator___024root___eval_initial__TOP__Vtiming__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("comparator.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb__DOT__a = 8U;
    vlSelfRef.tb__DOT__b = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         23);
    vlSelfRef.tb__DOT__a = 2U;
    vlSelfRef.tb__DOT__b = 7U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         24);
    vlSelfRef.tb__DOT__a = 5U;
    vlSelfRef.tb__DOT__b = 5U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         25);
    vlSelfRef.tb__DOT__a = 0U;
    vlSelfRef.tb__DOT__b = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         26);
    vlSelfRef.tb__DOT__a = 9U;
    vlSelfRef.tb__DOT__b = 4U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.v", 
                                         27);
    VL_FINISH_MT("tb.v", 29, "");
    co_return;
}

void Vcomparator___024root___eval_triggers_vec__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_triggers_vec__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 5U) 
                                                      | (((IData)(vlSelfRef.tb__DOT__lt) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__lt__0)) 
                                                         << 4U)) 
                                                     | (((((IData)(vlSelfRef.tb__DOT__gt) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__gt__0)) 
                                                          << 3U) 
                                                         | (((IData)(vlSelfRef.tb__DOT__eq) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__eq__0)) 
                                                            << 2U)) 
                                                        | ((((IData)(vlSelfRef.tb__DOT__b) 
                                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__b__0)) 
                                                            << 1U) 
                                                           | ((IData)(vlSelfRef.tb__DOT__a) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__a__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__a__0 
        = vlSelfRef.tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__b__0 
        = vlSelfRef.tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__eq__0 
        = vlSelfRef.tb__DOT__eq;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__gt__0 
        = vlSelfRef.tb__DOT__gt;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__lt__0 
        = vlSelfRef.tb__DOT__lt;
}

bool Vcomparator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcomparator___024root___act_sequent__TOP__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___act_sequent__TOP__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__gt = ((IData)(vlSelfRef.tb__DOT__a) 
                             > (IData)(vlSelfRef.tb__DOT__b));
    vlSelfRef.tb__DOT__lt = (((IData)(vlSelfRef.tb__DOT__a) 
                              <= (IData)(vlSelfRef.tb__DOT__b)) 
                             && ((IData)(vlSelfRef.tb__DOT__a) 
                                 < (IData)(vlSelfRef.tb__DOT__b)));
    vlSelfRef.tb__DOT__eq = (((IData)(vlSelfRef.tb__DOT__a) 
                              <= (IData)(vlSelfRef.tb__DOT__b)) 
                             && ((IData)(vlSelfRef.tb__DOT__a) 
                                 >= (IData)(vlSelfRef.tb__DOT__b)));
}

void Vcomparator___024root___eval_act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcomparator___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcomparator___024root___nba_sequent__TOP__0(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___nba_sequent__TOP__0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)))))) {
        VL_WRITEF_NX("time=%0t a=%0# b=%0# gt=%b lt=%b eq=%b\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,4,
                     (IData)(vlSelfRef.tb__DOT__a),
                     4,vlSelfRef.tb__DOT__b,1,(IData)(vlSelfRef.tb__DOT__gt),
                     1,vlSelfRef.tb__DOT__lt,1,(IData)(vlSelfRef.tb__DOT__eq));
    }
}

void Vcomparator___024root___eval_nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000001fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vcomparator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vcomparator___024root___timing_resume(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___timing_resume\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcomparator___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcomparator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcomparator___024root___eval_phase__act(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__act\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vcomparator___024root___eval_triggers_vec__act(vlSelf);
    Vcomparator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcomparator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcomparator___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcomparator___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vcomparator___024root___timing_resume(vlSelf);
        Vcomparator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcomparator___024root___eval_phase__inact(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__inact\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcomparator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcomparator___024root___eval_phase__nba(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_phase__nba\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcomparator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcomparator___024root___eval_nba(vlSelf);
        Vcomparator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcomparator___024root___eval(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcomparator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vcomparator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.v", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vcomparator___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vcomparator___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vcomparator___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vcomparator___024root___eval_debug_assertions(Vcomparator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root___eval_debug_assertions\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

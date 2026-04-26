// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vcomparator__Syms.h"


void Vcomparator___024root__trace_chg_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcomparator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_chg_0\n"); );
    // Body
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcomparator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcomparator___024root__trace_chg_0_sub_0(Vcomparator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_chg_0_sub_0\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb__DOT__gt));
        bufp->chgBit(oldp+1,(vlSelfRef.tb__DOT__lt));
        bufp->chgBit(oldp+2,(vlSelfRef.tb__DOT__eq));
    }
    bufp->chgCData(oldp+3,(vlSelfRef.tb__DOT__a),4);
    bufp->chgCData(oldp+4,(vlSelfRef.tb__DOT__b),4);
}

void Vcomparator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcomparator___024root__trace_cleanup\n"); );
    // Body
    Vcomparator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcomparator___024root*>(voidSelf);
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

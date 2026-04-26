// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"

VL_ATTR_COLD void Vcomparator___024unit___ctor_var_reset(Vcomparator___024unit* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcomparator___024unit___ctor_var_reset\n"); );
    Vcomparator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__VmonitorOff = 0;
}

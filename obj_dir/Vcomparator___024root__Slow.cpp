// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"

void Vcomparator___024root___ctor_var_reset(Vcomparator___024root* vlSelf);

Vcomparator___024root::Vcomparator___024root(Vcomparator__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcomparator___024root___ctor_var_reset(this);
}

void Vcomparator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcomparator___024root::~Vcomparator___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

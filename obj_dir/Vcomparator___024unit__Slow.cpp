// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcomparator.h for the primary calling header

#include "Vcomparator__pch.h"

void Vcomparator___024unit___ctor_var_reset(Vcomparator___024unit* vlSelf);

Vcomparator___024unit::Vcomparator___024unit() = default;
Vcomparator___024unit::~Vcomparator___024unit() = default;

void Vcomparator___024unit::ctor(Vcomparator__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcomparator___024unit___ctor_var_reset(this);
}

void Vcomparator___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcomparator___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}

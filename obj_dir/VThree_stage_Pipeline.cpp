// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VThree_stage_Pipeline.h for the primary calling header

#include "VThree_stage_Pipeline.h"
#include "VThree_stage_Pipeline__Syms.h"

//==========

void VThree_stage_Pipeline::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VThree_stage_Pipeline::eval\n"); );
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Three_stage_Pipeline.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VThree_stage_Pipeline::_eval_initial_loop(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Three_stage_Pipeline.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VThree_stage_Pipeline::_sequent__TOP__2(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_sequent__TOP__2\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    CData/*0:0*/ __Vdlyvset__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    CData/*0:0*/ __Vdly__Three_stage_Pipeline__DOT__mret_MW;
    CData/*1:0*/ __Vdly__Three_stage_Pipeline__DOT__wb_sel_MW;
    CData/*0:0*/ __Vdly__Three_stage_Pipeline__DOT__RegWrite_MW;
    CData/*0:0*/ __Vdly__Three_stage_Pipeline__DOT__csr_rd_en_MW;
    CData/*0:0*/ __Vdly__Three_stage_Pipeline__DOT__csr_wr_en_MW;
    IData/*31:0*/ __Vdlyvval__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__ALU_result_DE;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__DP__DOT__Addr;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie;
    IData/*31:0*/ __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
    // Body
    __Vdly__Three_stage_Pipeline__DOT__csr_rd_en_MW 
        = vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW;
    __Vdly__Three_stage_Pipeline__DOT__wb_sel_MW = vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW;
    __Vdly__Three_stage_Pipeline__DOT__mret_MW = vlTOPp->Three_stage_Pipeline__DOT__mret_MW;
    __Vdly__Three_stage_Pipeline__DOT__csr_wr_en_MW 
        = vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW;
    __Vdly__Three_stage_Pipeline__DOT__DP__DOT__Addr 
        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr;
    __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr_wdata 
        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
    __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc 
        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
    __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie 
        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie;
    __Vdly__Three_stage_Pipeline__DOT__DP__DOT__PC_DE 
        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
    __Vdly__Three_stage_Pipeline__DOT__RegWrite_MW 
        = vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW;
    __Vdly__Three_stage_Pipeline__DOT__ALU_result_DE 
        = vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE;
    __Vdlyvset__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 0U;
    vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter 
        = ((IData)(vlTOPp->rst) ? 0U : (7U & ((IData)(1U) 
                                              + (IData)(vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter))));
    if ((7U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter))) {
        vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt = 1U;
        vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter = 0U;
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt = 0U;
    }
    __Vdly__Three_stage_Pipeline__DOT__csr_rd_en_MW 
        = ((~ (IData)(vlTOPp->rst)) & ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                        ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW)
                                        : (IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en)));
    vlTOPp->Three_stage_Pipeline__DOT__wr_en_MW = ((IData)(vlTOPp->rst) 
                                                   | ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                                       ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__wr_en_MW)
                                                       : (IData)(vlTOPp->Three_stage_Pipeline__DOT__wr_en)));
    __Vdly__Three_stage_Pipeline__DOT__wb_sel_MW = 
        ((IData)(vlTOPp->rst) ? 0U : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                       ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW)
                                       : (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel)));
    __Vdly__Three_stage_Pipeline__DOT__mret_MW = ((~ (IData)(vlTOPp->rst)) 
                                                  & ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                                      ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__mret_MW)
                                                      : (IData)(vlTOPp->Three_stage_Pipeline__DOT__mret)));
    __Vdly__Three_stage_Pipeline__DOT__csr_wr_en_MW 
        = ((~ (IData)(vlTOPp->rst)) & ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                        ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW)
                                        : (IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en)));
    if (vlTOPp->rst) {
        vlTOPp->Three_stage_Pipeline__DOT__store_MW = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__load_MW = 0U;
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__Addr = 0U;
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr_wdata = 0U;
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__store_MW 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW)
                : (IData)(vlTOPp->Three_stage_Pipeline__DOT__store));
        vlTOPp->Three_stage_Pipeline__DOT__load_MW 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW)
                : (IData)(vlTOPp->Three_stage_Pipeline__DOT__load));
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__Addr 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate);
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr_wdata 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA);
    }
    vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW = (
                                                   (~ (IData)(vlTOPp->rst)) 
                                                   & ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                                       ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW)
                                                       : (IData)(vlTOPp->Three_stage_Pipeline__DOT__rd_en)));
    if (vlTOPp->rst) {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc = 0U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW) {
            if ((0x304U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                if ((0x300U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                    if ((0x342U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                        if ((0x305U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                            if ((0x341U == (0xfffU 
                                            & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                                __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc 
                                    = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlTOPp->rst) {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie = 0U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW) {
            if ((0x304U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie 
                    = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
            }
        }
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush))) {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__PC_DE = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F = 0U;
    } else {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__PC_DE 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F);
        vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB);
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC);
    }
    vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut 
        = ((~ (IData)(vlTOPp->rst)) & (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW));
    __Vdly__Three_stage_Pipeline__DOT__RegWrite_MW 
        = ((~ (IData)(vlTOPp->rst)) & ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                                        ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW)
                                        : (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite)));
    __Vdly__Three_stage_Pipeline__DOT__ALU_result_DE 
        = (((IData)(vlTOPp->rst) | (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush))
            ? 0U : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                     ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                     : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__ALU_result));
    if (vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW) {
        __Vdlyvval__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                    ? ((IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW)
                        ? ((0x344U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip
                            : ((0x304U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie
                                : ((0x300U == (0xfffU 
                                               & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                    ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus
                                    : ((0x342U == (0xfffU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                        ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause
                                        : ((0x305U 
                                            == (0xfffU 
                                                & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec
                                            : ((0x341U 
                                                == 
                                                (0xfffU 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc
                                                : 0U))))))
                        : 0U) : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata)
                : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                    ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                    : ((IData)(4U) + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE)));
        __Vdlyvset__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 = 1U;
        __Vdlyvdim0__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0 
            = (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                        >> 7U));
    }
    if (vlTOPp->rst) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R = 0U;
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB);
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA);
    }
    if (((IData)(vlTOPp->rst) | (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush))) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__Instruction_F = 0U;
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW)
                ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE
                : vlTOPp->Three_stage_Pipeline__DOT__Instruction_F);
        vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
            = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall)
                ? ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush)
                    ? 0x13U : vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem
               [(0x7fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC 
                          >> 2U))]);
    }
    vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW = __Vdly__Three_stage_Pipeline__DOT__wb_sel_MW;
    vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW 
        = __Vdly__Three_stage_Pipeline__DOT__csr_rd_en_MW;
    if (__Vdlyvset__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[__Vdlyvdim0__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0] 
            = __Vdlyvval__Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem__v0;
    }
    vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
        = __Vdly__Three_stage_Pipeline__DOT__ALU_result_DE;
    vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW 
        = __Vdly__Three_stage_Pipeline__DOT__RegWrite_MW;
    if ((0U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
        vlTOPp->Three_stage_Pipeline__DOT__mask = (
                                                   (2U 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                     ? 8U
                                                     : 4U)
                                                    : 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                                     ? 2U
                                                     : 1U));
    } else {
        if ((1U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                    vlTOPp->Three_stage_Pipeline__DOT__mask = 0xcU;
                }
            } else {
                vlTOPp->Three_stage_Pipeline__DOT__mask = 3U;
            }
        } else {
            if ((2U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__store_MW))) {
                vlTOPp->Three_stage_Pipeline__DOT__mask = 0xfU;
            }
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause = 0U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW) {
            if ((0x304U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                if ((0x300U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                    if ((0x342U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause 
                            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
                    }
                }
            }
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC 
        = (((IData)(vlTOPp->rst) | (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush))
            ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_new);
    if ((1U & ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus 
                >> 3U) & ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip 
                           & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie) 
                          >> 7U)))) {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 1U;
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 1U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__mret_MW) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec 
                = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 1U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause = 0U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 0U;
        } else {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 0U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 0U;
        }
    }
    if ((1U & ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus 
                >> 3U) & ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip 
                           & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie) 
                          >> 0xbU)))) {
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 1U;
        __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie = 0U;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause;
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 1U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__mret_MW) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec 
                = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 1U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause = 0U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 0U;
        } else {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken = 0U;
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush = 0U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__rd_en = 
            ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             & ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                & (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__rd_en = 0U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    vlTOPp->Three_stage_Pipeline__DOT__load 
                        = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 0U : ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                         ? 4U : 3U))
                            : ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                    ? 0U : 2U) : ((0x1000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 1U
                                                   : 0U)));
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__wr_en = 
            ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             | ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                | ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                   | (0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__wr_en = 1U;
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__RegWrite 
            = ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                  | ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                     | ((0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        & (0x63U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__RegWrite = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 
            ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
              ? 1U : ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                       ? 1U : ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                ? 2U : ((0x23U == (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                         ? 0U : ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                  ? 0U
                                                  : 
                                                 ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                    ? 0U
                                                    : 1U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 3U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__wb_sel = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((3U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    if ((0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                        vlTOPp->Three_stage_Pipeline__DOT__store 
                            = ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0xcU)))
                                ? 0U : ((1U == (7U 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xcU)))
                                         ? 1U : ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 0xcU)))
                                                  ? 2U
                                                  : 0U)));
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en = 0U;
                    }
                }
            }
        }
    }
    if ((1U & (~ ((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                        | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                      | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                     | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                    | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                   | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
                  | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))) {
        if ((0x17U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__mret = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__mret = 1U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        if ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                    ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                        ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? (((0x20U 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                    >> 0x19U))) 
                                               & (0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                               ? 7U
                                               : 6U)
                                           : 5U)) : 
                   ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                     ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                         ? 4U : 3U) : ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                        ? 2U : (((0x20U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 0x19U))) 
                                                 & (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                                 ? 1U
                                                 : 0U))));
        } else {
            if ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                    = ((0x4000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                        ? ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 9U : 8U) : ((0x1000U 
                                               & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((
                                                   (0x20U 
                                                    == 
                                                    (0x7fU 
                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                        >> 0x19U))) 
                                                   & (0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))
                                                   ? 7U
                                                   : 6U)
                                               : 5U))
                        : ((0x2000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                            ? ((0x1000U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                ? 4U : 3U) : ((0x1000U 
                                               & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? 2U
                                               : 0U)));
            } else {
                if ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                    vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                } else {
                    if ((0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                        vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                    } else {
                        if ((0x63U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                            vlTOPp->Three_stage_Pipeline__DOT__ALU_control 
                                = ((0x6fU == (0x7fU 
                                              & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                    ? 0U : ((0x67U 
                                             == (0x7fU 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                             ? 0U : 0xaU));
                        }
                    }
                }
            }
        }
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__ALU_control = 0U;
                    }
                }
            }
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate 
        = ((0x40U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
            ? ((0x20U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                ? ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                    ? 0U : ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                             ? ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                 ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                     ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                         ? ((0xfff00000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                               >> 0x1fU)))) 
                                                << 0x14U)) 
                                            | ((0xff000U 
                                                & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F) 
                                               | ((0x800U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                        >> 0x14U)))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | ((0x800U 
                                                       & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                          << 4U)) 
                                                      | ((0x7e0U 
                                                          & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                             >> 0x14U)) 
                                                         | (0x1eU 
                                                            & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                               >> 7U)))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                          ? ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                              ? ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   : 0U)
                                               : 0U)
                                           : 0U)) : 
                             ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                               ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                        ? 0U : ((2U 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                 ? 
                                                ((1U 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                  ? 
                                                 ((0xfffff000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                     >> 0x1fU)))) 
                                                      << 0xcU)) 
                                                  | ((0xfe0U 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                           >> 7U))))
                                                  : 0U)
                                                 : 0U))))
                          : ((0x10U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                              ? ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   : 0U)
                                               : 0U)
                                           : ((2U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                               ? ((1U 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                   ? 
                                                  ((0xfffff000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                      >> 0x1fU)))) 
                                                       << 0xcU)) 
                                                   | (0xfffU 
                                                      & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                         >> 0x14U)))
                                                   : 0U)
                                               : 0U)))
                              : ((8U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                  ? 0U : ((4U & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                           ? 0U : (
                                                   (2U 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                    ? 
                                                   ((1U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                     ? 
                                                    ((0xfffff000U 
                                                      & ((- (IData)(
                                                                    (1U 
                                                                     & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                                        >> 0x1fU)))) 
                                                         << 0xcU)) 
                                                     | (0xfffU 
                                                        & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                           >> 0x14U)))
                                                     : 0U)
                                                    : 0U))))));
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__sel_B = 
            (0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__sel_B = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__sel_B = 1U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__sel_B = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__sel_A = 
            ((0x33U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
             & ((0x13U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                & ((3U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                   & ((0x23U != (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                      & ((0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
                         | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__sel_A = 1U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__sel_A = 0U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__sel_A = 0U;
                    }
                }
            }
        }
    }
    if (((((((((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)) 
               | (0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
             | (0x23U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
            | (0x63U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
           | (0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
          | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) 
         | (0x37U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)))) {
        vlTOPp->Three_stage_Pipeline__DOT__br_type 
            = ((0x33U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                ? 6U : ((0x13U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                         ? 6U : ((3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                  ? 6U : ((0x23U == 
                                           (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                           ? 6U : (
                                                   (0x63U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                    ? 
                                                   ((0x4000U 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 5U
                                                       : 4U)
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 3U
                                                       : 2U))
                                                     : 
                                                    ((0x2000U 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                      ? 0U
                                                      : 
                                                     ((0x1000U 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)
                                                       ? 1U
                                                       : 0U)))
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                     ? 7U
                                                     : 
                                                    ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))
                                                      ? 7U
                                                      : 6U)))))));
    } else {
        if ((0x17U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
            vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
        } else {
            if ((0x73U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F))) {
                if ((1U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                  >> 0xcU)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
                } else {
                    if ((0U == (7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                      >> 0xcU)))) {
                        vlTOPp->Three_stage_Pipeline__DOT__br_type = 6U;
                    }
                }
            }
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__mret_MW = __Vdly__Three_stage_Pipeline__DOT__mret_MW;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE 
        = __Vdly__Three_stage_Pipeline__DOT__DP__DOT__PC_DE;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc 
        = __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie 
        = __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken 
        = (1U & ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                  ? ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                      ? (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type)
                      : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             < vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)))
                  : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                      ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? VL_GTES_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : VL_LTS_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R))
                      : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__br_type))
                          ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             != vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)
                          : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R 
                             == vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R)))));
    if (vlTOPp->rst) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus = 0U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW) {
            if ((0x304U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                if ((0x300U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus 
                        = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
                }
            }
        }
    }
    if (vlTOPp->rst) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec = 0U;
    } else {
        if (vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW) {
            if ((0x304U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                if ((0x300U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                    if ((0x342U != (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                        if ((0x305U == (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))) {
                            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec 
                                = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ ((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
                  & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))))) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush 
            = vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken;
    }
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_new 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec
            : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                : ((IData)(4U) + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC)));
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if (((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
               | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
             & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU))) 
                | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                             >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U)))))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 1U;
        } else {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if (((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
               | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
              | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
             & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU))) 
                | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                             >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U)))))) {
            vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 1U;
        } else {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__Stall_MW = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if ((1U & (~ ((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
                        | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                      & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                    >> 7U)) == (0x1fU 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xfU))) 
                         | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                      >> 7U)) == (0x1fU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                     >> 0x14U)))))))) {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 1U;
            } else {
                if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                               >> 7U)) != (0x1fU & 
                                           (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                            >> 0x14U)))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 0U;
                }
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A = 0U;
        }
    }
    if (((~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut)) 
         & (IData)(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW))) {
        if ((1U & (~ ((((0x6fU == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE)) 
                        | (0x67U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                       | (3U == (0x7fU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE))) 
                      & (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                    >> 7U)) == (0x1fU 
                                                & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                   >> 0xfU))) 
                         | ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                      >> 7U)) == (0x1fU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                     >> 0x14U)))))))) {
            if (((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                           >> 7U)) != (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU)))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B 
                    = ((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                 >> 7U)) == (0x1fU 
                                             & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0x14U)));
            }
        }
    } else {
        if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)))) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B = 0U;
        }
    }
    vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW 
        = __Vdly__Three_stage_Pipeline__DOT__csr_wr_en_MW;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata 
        = __Vdly__Three_stage_Pipeline__DOT__DP__DOT__csr_wdata;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr 
        = __Vdly__Three_stage_Pipeline__DOT__DP__DOT__Addr;
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A)
            ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
            : ((0U == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                >> 0xfU))) ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
               [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                          >> 0xfU))]));
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B)
            ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
            : ((0U == (0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                >> 0x14U))) ? 0U : 
               vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
               [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                          >> 0x14U))]));
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__sel_A)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F
            : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA);
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__sel_B)
            ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate
            : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB);
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__ALU_result 
        = ((8U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
            ? ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                ? 0U : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                         ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                             ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                         : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                             ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                             : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                | vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB))))
            : ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                ? ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                    ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? ((0x1fU >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                               >> vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            : 0U) : ((0x1fU >= vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                      ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                         >> vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                      : 0U)) : ((1U 
                                                 & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                                                 ? 
                                                (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                                 ^ vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                                 : 
                                                ((vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                                  < vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                                                  ? 1U
                                                  : 0U)))
                : ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                    ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? (VL_LTS_III(1,32,32, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA, vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                            ? 1U : 0U) : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                                          << (0x1fU 
                                              & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)))
                    : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__ALU_control))
                        ? (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                           - vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)
                        : (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA 
                           + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB)))));
}

VL_INLINE_OPT void VThree_stage_Pipeline::_sequent__TOP__3(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_sequent__TOP__3\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0;
    CData/*4:0*/ __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0;
    CData/*7:0*/ __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0;
    CData/*0:0*/ __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0;
    CData/*5:0*/ __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1;
    CData/*4:0*/ __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1;
    CData/*7:0*/ __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1;
    CData/*0:0*/ __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1;
    CData/*5:0*/ __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2;
    CData/*4:0*/ __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2;
    CData/*7:0*/ __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2;
    CData/*0:0*/ __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2;
    CData/*5:0*/ __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3;
    CData/*4:0*/ __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3;
    CData/*7:0*/ __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3;
    CData/*0:0*/ __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3;
    // Body
    __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0 = 0U;
    __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1 = 0U;
    __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2 = 0U;
    __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3 = 0U;
    if ((1U & (~ (IData)(vlTOPp->Three_stage_Pipeline__DOT__wr_en_MW)))) {
        if ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__mask))) {
            __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0 
                = (0xffU & vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE);
            __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0 = 1U;
            __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0 = 0U;
            __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0 
                = (0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                            >> 2U));
        }
        if ((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__mask))) {
            __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1 
                = (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE 
                            >> 8U));
            __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1 = 1U;
            __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1 = 8U;
            __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1 
                = (0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                            >> 2U));
        }
        if ((4U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__mask))) {
            __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2 
                = (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE 
                            >> 0x10U));
            __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2 = 1U;
            __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2 = 0x10U;
            __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2 
                = (0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                            >> 2U));
        }
        if ((8U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__mask))) {
            __Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3 
                = (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE 
                            >> 0x18U));
            __Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3 = 1U;
            __Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3 = 0x18U;
            __Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3 
                = (0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                            >> 2U));
        }
    }
    if (__Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0) {
        vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0))) 
                & vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0]) 
               | ((IData)(__Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0) 
                  << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v0)));
    }
    if (__Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1) {
        vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1))) 
                & vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1]) 
               | ((IData)(__Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1) 
                  << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v1)));
    }
    if (__Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2) {
        vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2))) 
                & vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2]) 
               | ((IData)(__Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2) 
                  << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v2)));
    }
    if (__Vdlyvset__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3) {
        vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem[__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3))) 
                & vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
                [__Vdlyvdim0__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3]) 
               | ((IData)(__Vdlyvval__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3) 
                  << (IData)(__Vdlyvlsb__Three_stage_Pipeline__DOT__DM__DOT__Data_Mem__v3)));
    }
}

VL_INLINE_OPT void VThree_stage_Pipeline::_combo__TOP__5(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_combo__TOP__5\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause 
        = ((IData)(vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt)
            ? 0x80000004U : ((IData)(vlTOPp->External_Intrpt)
                              ? 0x80000008U : 0U));
    if ((0x80000000U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
        if ((4U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0x80U;
        } else {
            if ((8U & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause)) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0x800U;
            }
        }
    } else {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip = 0U;
    }
}

VL_INLINE_OPT void VThree_stage_Pipeline::_multiclk__TOP__6(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_multiclk__TOP__6\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW) {
        vlTOPp->Three_stage_Pipeline__DOT__readData 
            = vlTOPp->Three_stage_Pipeline__DOT__DM__DOT__Data_Mem
            [(0x3fU & (vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE 
                       >> 2U))];
    }
    if ((0U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
        vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
            = ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0x1fU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 0x18U)))
                    : ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0x17U)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 0x10U))))
                : ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                    ? ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0xfU)))) 
                                       << 8U)) | (0xffU 
                                                  & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                     >> 8U)))
                    : ((0xffffff00U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 7U)))) 
                                       << 8U)) | (0xffU 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__readData))));
    } else {
        if ((1U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                        = ((0xffff0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                          >> 0x1fU)))) 
                                           << 0x10U)) 
                           | (0xffffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                         >> 0x10U)));
                }
            } else {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                    = ((0xffff0000U & ((- (IData)((1U 
                                                   & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                      >> 0xfU)))) 
                                       << 0x10U)) | 
                       (0xffffU & vlTOPp->Three_stage_Pipeline__DOT__readData));
            }
        } else {
            if ((2U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                    = vlTOPp->Three_stage_Pipeline__DOT__readData;
            } else {
                if ((3U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                    vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                        = ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                            ? ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                ? (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 0x18U))
                                : (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 0x10U)))
                            : ((1U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)
                                ? (0xffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                            >> 8U))
                                : (0xffU & vlTOPp->Three_stage_Pipeline__DOT__readData)));
                } else {
                    if ((4U == (IData)(vlTOPp->Three_stage_Pipeline__DOT__load_MW))) {
                        if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                            if ((2U & vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE)) {
                                vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                                    = (0xffffU & (vlTOPp->Three_stage_Pipeline__DOT__readData 
                                                  >> 0x10U));
                            }
                        } else {
                            vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata 
                                = (0xffffU & vlTOPp->Three_stage_Pipeline__DOT__readData);
                        }
                    }
                }
            }
        }
    }
}

void VThree_stage_Pipeline::_eval(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_eval\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
        vlTOPp->_multiclk__TOP__6(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VThree_stage_Pipeline::_change_request(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_change_request\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VThree_stage_Pipeline::_change_request_1(VThree_stage_Pipeline__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_change_request_1\n"); );
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VThree_stage_Pipeline::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VThree_stage_Pipeline::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((External_Intrpt & 0xfeU))) {
        Verilated::overWidthError("External_Intrpt");}
}
#endif  // VL_DEBUG

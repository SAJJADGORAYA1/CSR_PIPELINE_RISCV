// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThree_stage_Pipeline__Syms.h"


void VThree_stage_Pipeline::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VThree_stage_Pipeline::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlTOPp->Three_stage_Pipeline__DOT__Instruction_F),32);
            tracep->chgIData(oldp+1,(vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE),32);
            tracep->chgIData(oldp+2,(vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE),32);
            tracep->chgCData(oldp+3,(vlTOPp->Three_stage_Pipeline__DOT__ALU_control),4);
            tracep->chgCData(oldp+4,(vlTOPp->Three_stage_Pipeline__DOT__mask),4);
            tracep->chgCData(oldp+5,(vlTOPp->Three_stage_Pipeline__DOT__br_type),3);
            tracep->chgCData(oldp+6,(vlTOPp->Three_stage_Pipeline__DOT__load),3);
            tracep->chgCData(oldp+7,(vlTOPp->Three_stage_Pipeline__DOT__load_MW),3);
            tracep->chgCData(oldp+8,(vlTOPp->Three_stage_Pipeline__DOT__wb_sel),2);
            tracep->chgCData(oldp+9,(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW),2);
            tracep->chgCData(oldp+10,(vlTOPp->Three_stage_Pipeline__DOT__store),2);
            tracep->chgCData(oldp+11,(vlTOPp->Three_stage_Pipeline__DOT__store_MW),2);
            tracep->chgBit(oldp+12,(vlTOPp->Three_stage_Pipeline__DOT__RegWrite));
            tracep->chgBit(oldp+13,(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW));
            tracep->chgBit(oldp+14,(vlTOPp->Three_stage_Pipeline__DOT__wr_en));
            tracep->chgBit(oldp+15,(vlTOPp->Three_stage_Pipeline__DOT__wr_en_MW));
            tracep->chgBit(oldp+16,(vlTOPp->Three_stage_Pipeline__DOT__rd_en));
            tracep->chgBit(oldp+17,(vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW));
            tracep->chgBit(oldp+18,(vlTOPp->Three_stage_Pipeline__DOT__sel_A));
            tracep->chgBit(oldp+19,(vlTOPp->Three_stage_Pipeline__DOT__sel_B));
            tracep->chgBit(oldp+20,(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW));
            tracep->chgBit(oldp+21,(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut));
            tracep->chgBit(oldp+22,(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en));
            tracep->chgBit(oldp+23,(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en));
            tracep->chgBit(oldp+24,(vlTOPp->Three_stage_Pipeline__DOT__mret));
            tracep->chgBit(oldp+25,(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW));
            tracep->chgBit(oldp+26,(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW));
            tracep->chgBit(oldp+27,(vlTOPp->Three_stage_Pipeline__DOT__mret_MW));
            tracep->chgBit(oldp+28,(vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt));
            tracep->chgIData(oldp+29,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC),32);
            tracep->chgIData(oldp+30,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken)
                                        ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec
                                        : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                                            ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                            : ((IData)(4U) 
                                               + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC)))),32);
            tracep->chgIData(oldp+31,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                                        ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                        : ((IData)(4U) 
                                           + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC))),32);
            tracep->chgIData(oldp+32,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem
                                      [(0x7fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC 
                                                 >> 2U))]),32);
            tracep->chgIData(oldp+33,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__ALU_result),32);
            tracep->chgIData(oldp+34,(((0U == (0x1fU 
                                               & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0xfU)))
                                        ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
                                       [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0xfU))])),32);
            tracep->chgIData(oldp+35,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F),32);
            tracep->chgIData(oldp+36,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE),32);
            tracep->chgIData(oldp+37,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec),32);
            tracep->chgIData(oldp+38,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate),32);
            tracep->chgIData(oldp+39,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA),32);
            tracep->chgIData(oldp+40,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB),32);
            tracep->chgIData(oldp+41,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA),32);
            tracep->chgIData(oldp+42,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB),32);
            tracep->chgIData(oldp+43,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R),32);
            tracep->chgIData(oldp+44,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R),32);
            tracep->chgIData(oldp+45,(((0U == (0x1fU 
                                               & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U)))
                                        ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
                                       [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                  >> 0x14U))])),32);
            tracep->chgIData(oldp+46,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE),32);
            tracep->chgIData(oldp+47,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr),32);
            tracep->chgIData(oldp+48,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata),32);
            tracep->chgBit(oldp+49,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken));
            tracep->chgBit(oldp+50,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken));
            tracep->chgBit(oldp+51,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A));
            tracep->chgBit(oldp+52,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B));
            tracep->chgBit(oldp+53,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall));
            tracep->chgBit(oldp+54,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush));
            tracep->chgBit(oldp+55,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush));
            tracep->chgCData(oldp+56,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+57,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+58,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                                >> 7U))),5);
            tracep->chgIData(oldp+59,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
            tracep->chgIData(oldp+60,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
            tracep->chgIData(oldp+61,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
            tracep->chgIData(oldp+62,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
            tracep->chgIData(oldp+63,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
            tracep->chgIData(oldp+64,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
            tracep->chgIData(oldp+65,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
            tracep->chgIData(oldp+66,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
            tracep->chgIData(oldp+67,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
            tracep->chgIData(oldp+68,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
            tracep->chgIData(oldp+69,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
            tracep->chgIData(oldp+70,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
            tracep->chgIData(oldp+71,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
            tracep->chgIData(oldp+72,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
            tracep->chgIData(oldp+73,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
            tracep->chgIData(oldp+74,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
            tracep->chgIData(oldp+75,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
            tracep->chgIData(oldp+76,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
            tracep->chgIData(oldp+77,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
            tracep->chgIData(oldp+78,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
            tracep->chgIData(oldp+79,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
            tracep->chgIData(oldp+80,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
            tracep->chgIData(oldp+81,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
            tracep->chgIData(oldp+82,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
            tracep->chgIData(oldp+83,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
            tracep->chgIData(oldp+84,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
            tracep->chgIData(oldp+85,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
            tracep->chgIData(oldp+86,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
            tracep->chgIData(oldp+87,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
            tracep->chgIData(oldp+88,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
            tracep->chgIData(oldp+89,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
            tracep->chgIData(oldp+90,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
            tracep->chgSData(oldp+91,((0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr)),12);
            tracep->chgIData(oldp+92,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie),32);
            tracep->chgIData(oldp+93,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus),32);
            tracep->chgIData(oldp+94,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause),32);
            tracep->chgIData(oldp+95,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec),32);
            tracep->chgIData(oldp+96,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc),32);
            tracep->chgCData(oldp+97,((0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)),7);
            tracep->chgCData(oldp+98,((0x7fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                                >> 0x19U))),7);
            tracep->chgCData(oldp+99,((7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+100,(vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter),3);
        }
        tracep->chgBit(oldp+101,(vlTOPp->clk));
        tracep->chgBit(oldp+102,(vlTOPp->rst));
        tracep->chgBit(oldp+103,(vlTOPp->External_Intrpt));
        tracep->chgIData(oldp+104,(vlTOPp->Three_stage_Pipeline__DOT__readData),32);
        tracep->chgIData(oldp+105,(((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                                     ? ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                                         ? ((IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW)
                                             ? ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                 ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip
                                                 : 
                                                ((0x304U 
                                                  == 
                                                  (0xfffU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                  ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie
                                                  : 
                                                 ((0x300U 
                                                   == 
                                                   (0xfffU 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                   ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus
                                                   : 
                                                  ((0x342U 
                                                    == 
                                                    (0xfffU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                    ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause
                                                    : 
                                                   ((0x305U 
                                                     == 
                                                     (0xfffU 
                                                      & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                     ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec
                                                     : 
                                                    ((0x341U 
                                                      == 
                                                      (0xfffU 
                                                       & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                      ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc
                                                      : 0U))))))
                                             : 0U) : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata)
                                     : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                                         ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                         : ((IData)(4U) 
                                            + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE)))),32);
        tracep->chgIData(oldp+106,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata),32);
        tracep->chgIData(oldp+107,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW)
                                     ? ((0x344U == 
                                         (0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                         ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip
                                         : ((0x304U 
                                             == (0xfffU 
                                                 & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                             ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie
                                             : ((0x300U 
                                                 == 
                                                 (0xfffU 
                                                  & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                 ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (0xfffU 
                                                   & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                  ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause
                                                  : 
                                                 ((0x305U 
                                                   == 
                                                   (0xfffU 
                                                    & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                   ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr))
                                                    ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc
                                                    : 0U))))))
                                     : 0U)),32);
        tracep->chgIData(oldp+108,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause),32);
        tracep->chgIData(oldp+109,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip),32);
    }
}

void VThree_stage_Pipeline::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}

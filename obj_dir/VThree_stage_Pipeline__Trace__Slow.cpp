// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VThree_stage_Pipeline__Syms.h"


//======================

void VThree_stage_Pipeline::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VThree_stage_Pipeline::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VThree_stage_Pipeline::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VThree_stage_Pipeline::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VThree_stage_Pipeline::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+102,"clk", false,-1);
        tracep->declBit(c+103,"rst", false,-1);
        tracep->declBit(c+104,"External_Intrpt", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline rst", false,-1);
        tracep->declBit(c+104,"Three_stage_Pipeline External_Intrpt", false,-1);
        tracep->declBus(c+1,"Three_stage_Pipeline Instruction_F", false,-1, 31,0);
        tracep->declBus(c+2,"Three_stage_Pipeline ALU_result_DE", false,-1, 31,0);
        tracep->declBus(c+105,"Three_stage_Pipeline readData", false,-1, 31,0);
        tracep->declBus(c+3,"Three_stage_Pipeline rdata2_DE", false,-1, 31,0);
        tracep->declBus(c+4,"Three_stage_Pipeline ALU_control", false,-1, 3,0);
        tracep->declBus(c+5,"Three_stage_Pipeline mask", false,-1, 3,0);
        tracep->declBus(c+6,"Three_stage_Pipeline br_type", false,-1, 2,0);
        tracep->declBus(c+7,"Three_stage_Pipeline load", false,-1, 2,0);
        tracep->declBus(c+8,"Three_stage_Pipeline load_MW", false,-1, 2,0);
        tracep->declBus(c+9,"Three_stage_Pipeline wb_sel", false,-1, 1,0);
        tracep->declBus(c+10,"Three_stage_Pipeline wb_sel_MW", false,-1, 1,0);
        tracep->declBus(c+11,"Three_stage_Pipeline store", false,-1, 1,0);
        tracep->declBus(c+12,"Three_stage_Pipeline store_MW", false,-1, 1,0);
        tracep->declBit(c+13,"Three_stage_Pipeline RegWrite", false,-1);
        tracep->declBit(c+14,"Three_stage_Pipeline RegWrite_MW", false,-1);
        tracep->declBit(c+15,"Three_stage_Pipeline wr_en", false,-1);
        tracep->declBit(c+16,"Three_stage_Pipeline wr_en_MW", false,-1);
        tracep->declBit(c+17,"Three_stage_Pipeline rd_en", false,-1);
        tracep->declBit(c+18,"Three_stage_Pipeline rd_en_MW", false,-1);
        tracep->declBit(c+19,"Three_stage_Pipeline sel_A", false,-1);
        tracep->declBit(c+20,"Three_stage_Pipeline sel_B", false,-1);
        tracep->declBit(c+111,"Three_stage_Pipeline cs", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline Stall_Out", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline Stall_DMOut", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline Stall_MW", false,-1);
        tracep->declBit(c+23,"Three_stage_Pipeline csr_wr_en", false,-1);
        tracep->declBit(c+24,"Three_stage_Pipeline csr_rd_en", false,-1);
        tracep->declBit(c+25,"Three_stage_Pipeline mret", false,-1);
        tracep->declBit(c+26,"Three_stage_Pipeline csr_rd_en_MW", false,-1);
        tracep->declBit(c+27,"Three_stage_Pipeline csr_wr_en_MW", false,-1);
        tracep->declBit(c+28,"Three_stage_Pipeline mret_MW", false,-1);
        tracep->declBit(c+29,"Three_stage_Pipeline Timer_Intrpt", false,-1);
        tracep->declBus(c+2,"Three_stage_Pipeline DP ALU_result_DE", false,-1, 31,0);
        tracep->declBus(c+1,"Three_stage_Pipeline DP Instruction_F", false,-1, 31,0);
        tracep->declBus(c+3,"Three_stage_Pipeline DP rdata2_DE", false,-1, 31,0);
        tracep->declBus(c+5,"Three_stage_Pipeline DP mask", false,-1, 3,0);
        tracep->declBit(c+111,"Three_stage_Pipeline DP cs", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DP Stall_Out", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DP Stall_MW", false,-1);
        tracep->declBus(c+105,"Three_stage_Pipeline DP readData", false,-1, 31,0);
        tracep->declBus(c+4,"Three_stage_Pipeline DP ALU_control", false,-1, 3,0);
        tracep->declBus(c+6,"Three_stage_Pipeline DP br_type", false,-1, 2,0);
        tracep->declBus(c+8,"Three_stage_Pipeline DP load_MW", false,-1, 2,0);
        tracep->declBus(c+10,"Three_stage_Pipeline DP wb_sel_MW", false,-1, 1,0);
        tracep->declBus(c+12,"Three_stage_Pipeline DP store_MW", false,-1, 1,0);
        tracep->declBit(c+14,"Three_stage_Pipeline DP RegWrite_MW", false,-1);
        tracep->declBit(c+26,"Three_stage_Pipeline DP csr_rd_en_MW", false,-1);
        tracep->declBit(c+27,"Three_stage_Pipeline DP csr_wr_en_MW", false,-1);
        tracep->declBit(c+28,"Three_stage_Pipeline DP mret_MW", false,-1);
        tracep->declBit(c+29,"Three_stage_Pipeline DP Timer_Intrpt", false,-1);
        tracep->declBit(c+104,"Three_stage_Pipeline DP External_Intrpt", false,-1);
        tracep->declBit(c+19,"Three_stage_Pipeline DP sel_A", false,-1);
        tracep->declBit(c+20,"Three_stage_Pipeline DP sel_B", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DP clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP rst", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline DP Stall_DMOut", false,-1);
        tracep->declBus(c+30,"Three_stage_Pipeline DP PC", false,-1, 31,0);
        tracep->declBus(c+31,"Three_stage_Pipeline DP PC_new", false,-1, 31,0);
        tracep->declBus(c+32,"Three_stage_Pipeline DP PC_IN", false,-1, 31,0);
        tracep->declBus(c+33,"Three_stage_Pipeline DP Instruction", false,-1, 31,0);
        tracep->declBus(c+34,"Three_stage_Pipeline DP ALU_result", false,-1, 31,0);
        tracep->declBus(c+35,"Three_stage_Pipeline DP rdata1", false,-1, 31,0);
        tracep->declBus(c+106,"Three_stage_Pipeline DP wdata", false,-1, 31,0);
        tracep->declBus(c+36,"Three_stage_Pipeline DP PC_F", false,-1, 31,0);
        tracep->declBus(c+37,"Three_stage_Pipeline DP PC_DE", false,-1, 31,0);
        tracep->declBus(c+38,"Three_stage_Pipeline DP evec", false,-1, 31,0);
        tracep->declBus(c+39,"Three_stage_Pipeline DP Immediate", false,-1, 31,0);
        tracep->declBus(c+40,"Three_stage_Pipeline DP rdataA", false,-1, 31,0);
        tracep->declBus(c+41,"Three_stage_Pipeline DP rdataB", false,-1, 31,0);
        tracep->declBus(c+42,"Three_stage_Pipeline DP rdata_FA", false,-1, 31,0);
        tracep->declBus(c+43,"Three_stage_Pipeline DP rdata_FB", false,-1, 31,0);
        tracep->declBus(c+44,"Three_stage_Pipeline DP rdata_FA_R", false,-1, 31,0);
        tracep->declBus(c+45,"Three_stage_Pipeline DP rdata_FB_R", false,-1, 31,0);
        tracep->declBus(c+107,"Three_stage_Pipeline DP rdata", false,-1, 31,0);
        tracep->declBus(c+46,"Three_stage_Pipeline DP rdata2", false,-1, 31,0);
        tracep->declBus(c+47,"Three_stage_Pipeline DP Instruction_DE", false,-1, 31,0);
        tracep->declBus(c+48,"Three_stage_Pipeline DP Addr", false,-1, 31,0);
        tracep->declBus(c+49,"Three_stage_Pipeline DP csr_wdata", false,-1, 31,0);
        tracep->declBus(c+108,"Three_stage_Pipeline DP csr_rdata", false,-1, 31,0);
        tracep->declBus(c+109,"Three_stage_Pipeline DP cause", false,-1, 31,0);
        tracep->declBit(c+50,"Three_stage_Pipeline DP br_taken", false,-1);
        tracep->declBit(c+51,"Three_stage_Pipeline DP epc_taken", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline DP Stall_out_en", false,-1);
        tracep->declBit(c+52,"Three_stage_Pipeline DP Forward_A", false,-1);
        tracep->declBit(c+53,"Three_stage_Pipeline DP Forward_B", false,-1);
        tracep->declBit(c+54,"Three_stage_Pipeline DP Stall", false,-1);
        tracep->declBit(c+55,"Three_stage_Pipeline DP flush", false,-1);
        tracep->declBit(c+56,"Three_stage_Pipeline DP csr_flush", false,-1);
        tracep->declBus(c+31,"Three_stage_Pipeline DP P_C PC_new", false,-1, 31,0);
        tracep->declBit(c+103,"Three_stage_Pipeline DP P_C rst", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DP P_C clk", false,-1);
        tracep->declBit(c+55,"Three_stage_Pipeline DP P_C flush", false,-1);
        tracep->declBus(c+30,"Three_stage_Pipeline DP P_C PC", false,-1, 31,0);
        tracep->declBus(c+30,"Three_stage_Pipeline DP IM PC", false,-1, 31,0);
        tracep->declBus(c+33,"Three_stage_Pipeline DP IM Instruction", false,-1, 31,0);
        tracep->declBus(c+33,"Three_stage_Pipeline DP Stage2 Instruction", false,-1, 31,0);
        tracep->declBus(c+30,"Three_stage_Pipeline DP Stage2 PC", false,-1, 31,0);
        tracep->declBit(c+103,"Three_stage_Pipeline DP Stage2 rst", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DP Stage2 clk", false,-1);
        tracep->declBit(c+56,"Three_stage_Pipeline DP Stage2 csr_flush", false,-1);
        tracep->declBit(c+54,"Three_stage_Pipeline DP Stage2 Stall", false,-1);
        tracep->declBit(c+55,"Three_stage_Pipeline DP Stage2 flush", false,-1);
        tracep->declBus(c+1,"Three_stage_Pipeline DP Stage2 Instruction_F", false,-1, 31,0);
        tracep->declBus(c+36,"Three_stage_Pipeline DP Stage2 PC_F", false,-1, 31,0);
        tracep->declBus(c+106,"Three_stage_Pipeline DP RF wdata", false,-1, 31,0);
        tracep->declBus(c+57,"Three_stage_Pipeline DP RF raddr1", false,-1, 4,0);
        tracep->declBus(c+58,"Three_stage_Pipeline DP RF raddr2", false,-1, 4,0);
        tracep->declBus(c+59,"Three_stage_Pipeline DP RF waddr", false,-1, 4,0);
        tracep->declBit(c+14,"Three_stage_Pipeline DP RF RegWrite_MW", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DP RF clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP RF rst", false,-1);
        tracep->declBus(c+35,"Three_stage_Pipeline DP RF rdata1", false,-1, 31,0);
        tracep->declBus(c+46,"Three_stage_Pipeline DP RF rdata2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+60+i*1,"Three_stage_Pipeline DP RF Reg_Mem", true,(i+0), 31,0);}}
        tracep->declBus(c+1,"Three_stage_Pipeline DP IG Instruction_F", false,-1, 31,0);
        tracep->declBus(c+39,"Three_stage_Pipeline DP IG Immediate", false,-1, 31,0);
        tracep->declBus(c+40,"Three_stage_Pipeline DP AU rdataA", false,-1, 31,0);
        tracep->declBus(c+41,"Three_stage_Pipeline DP AU rdataB", false,-1, 31,0);
        tracep->declBus(c+4,"Three_stage_Pipeline DP AU ALU_control", false,-1, 3,0);
        tracep->declBus(c+34,"Three_stage_Pipeline DP AU ALU_result", false,-1, 31,0);
        tracep->declBus(c+42,"Three_stage_Pipeline DP BR rdata_FA", false,-1, 31,0);
        tracep->declBus(c+43,"Three_stage_Pipeline DP BR rdata_FB", false,-1, 31,0);
        tracep->declBit(c+102,"Three_stage_Pipeline DP BR clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP BR rst", false,-1);
        tracep->declBit(c+54,"Three_stage_Pipeline DP BR Stall", false,-1);
        tracep->declBus(c+44,"Three_stage_Pipeline DP BR rdata_FA_R", false,-1, 31,0);
        tracep->declBus(c+45,"Three_stage_Pipeline DP BR rdata_FB_R", false,-1, 31,0);
        tracep->declBus(c+44,"Three_stage_Pipeline DP BC rdata_FA", false,-1, 31,0);
        tracep->declBus(c+45,"Three_stage_Pipeline DP BC rdata_FB", false,-1, 31,0);
        tracep->declBus(c+6,"Three_stage_Pipeline DP BC br_type", false,-1, 2,0);
        tracep->declBit(c+50,"Three_stage_Pipeline DP BC br_taken", false,-1);
        tracep->declBus(c+36,"Three_stage_Pipeline DP Stage3 PC_F", false,-1, 31,0);
        tracep->declBus(c+34,"Three_stage_Pipeline DP Stage3 ALU_result", false,-1, 31,0);
        tracep->declBus(c+43,"Three_stage_Pipeline DP Stage3 rdata_FB", false,-1, 31,0);
        tracep->declBus(c+1,"Three_stage_Pipeline DP Stage3 Instruction_F", false,-1, 31,0);
        tracep->declBit(c+102,"Three_stage_Pipeline DP Stage3 clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP Stage3 rst", false,-1);
        tracep->declBit(c+56,"Three_stage_Pipeline DP Stage3 csr_flush", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DP Stage3 Stall_MW", false,-1);
        tracep->declBus(c+37,"Three_stage_Pipeline DP Stage3 PC_DE", false,-1, 31,0);
        tracep->declBus(c+2,"Three_stage_Pipeline DP Stage3 ALU_result_DE", false,-1, 31,0);
        tracep->declBus(c+3,"Three_stage_Pipeline DP Stage3 rdata2_DE", false,-1, 31,0);
        tracep->declBus(c+47,"Three_stage_Pipeline DP Stage3 Instruction_DE", false,-1, 31,0);
        tracep->declBus(c+107,"Three_stage_Pipeline DP LSU rdata", false,-1, 31,0);
        tracep->declBus(c+5,"Three_stage_Pipeline DP LSU mask", false,-1, 3,0);
        tracep->declBit(c+111,"Three_stage_Pipeline DP LSU cs", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DP LSU Stall_Out", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline DP LSU Stall_out_en", false,-1);
        tracep->declBus(c+105,"Three_stage_Pipeline DP LSU readData", false,-1, 31,0);
        tracep->declBus(c+2,"Three_stage_Pipeline DP LSU ALU_result_DE", false,-1, 31,0);
        tracep->declBus(c+8,"Three_stage_Pipeline DP LSU load_MW", false,-1, 2,0);
        tracep->declBus(c+12,"Three_stage_Pipeline DP LSU store_MW", false,-1, 1,0);
        tracep->declBit(c+21,"Three_stage_Pipeline DP LSU Stall_MW", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline DP LSU Stall_DMOut", false,-1);
        tracep->declBus(c+1,"Three_stage_Pipeline DP FSU Instruction_F", false,-1, 31,0);
        tracep->declBus(c+47,"Three_stage_Pipeline DP FSU Instruction_DE", false,-1, 31,0);
        tracep->declBit(c+14,"Three_stage_Pipeline DP FSU RegWrite_MW", false,-1);
        tracep->declBit(c+50,"Three_stage_Pipeline DP FSU br_taken", false,-1);
        tracep->declBit(c+22,"Three_stage_Pipeline DP FSU Stall_out_en", false,-1);
        tracep->declBit(c+52,"Three_stage_Pipeline DP FSU Forward_A", false,-1);
        tracep->declBit(c+53,"Three_stage_Pipeline DP FSU Forward_B", false,-1);
        tracep->declBit(c+54,"Three_stage_Pipeline DP FSU Stall", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DP FSU Stall_MW", false,-1);
        tracep->declBit(c+55,"Three_stage_Pipeline DP FSU flush", false,-1);
        tracep->declBus(c+42,"Three_stage_Pipeline DP CSR_R rdata_FA", false,-1, 31,0);
        tracep->declBus(c+39,"Three_stage_Pipeline DP CSR_R Immediate", false,-1, 31,0);
        tracep->declBit(c+21,"Three_stage_Pipeline DP CSR_R Stall_MW", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DP CSR_R clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP CSR_R rst", false,-1);
        tracep->declBus(c+48,"Three_stage_Pipeline DP CSR_R Addr", false,-1, 31,0);
        tracep->declBus(c+49,"Three_stage_Pipeline DP CSR_R csr_wdata", false,-1, 31,0);
        tracep->declBit(c+29,"Three_stage_Pipeline DP IE Timer_Intrpt", false,-1);
        tracep->declBit(c+104,"Three_stage_Pipeline DP IE External_Intrpt", false,-1);
        tracep->declBus(c+109,"Three_stage_Pipeline DP IE cause", false,-1, 31,0);
        tracep->declBit(c+102,"Three_stage_Pipeline DP csr clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DP csr rst", false,-1);
        tracep->declBit(c+28,"Three_stage_Pipeline DP csr mret_MW", false,-1);
        tracep->declBit(c+27,"Three_stage_Pipeline DP csr csr_wr_en_MW", false,-1);
        tracep->declBit(c+26,"Three_stage_Pipeline DP csr csr_rd_en_MW", false,-1);
        tracep->declBus(c+92,"Three_stage_Pipeline DP csr Addr", false,-1, 11,0);
        tracep->declBus(c+109,"Three_stage_Pipeline DP csr cause", false,-1, 31,0);
        tracep->declBus(c+37,"Three_stage_Pipeline DP csr PC_DE", false,-1, 31,0);
        tracep->declBus(c+49,"Three_stage_Pipeline DP csr csr_wdata", false,-1, 31,0);
        tracep->declBit(c+56,"Three_stage_Pipeline DP csr csr_flush", false,-1);
        tracep->declBit(c+51,"Three_stage_Pipeline DP csr epc_taken", false,-1);
        tracep->declBus(c+108,"Three_stage_Pipeline DP csr csr_rdata", false,-1, 31,0);
        tracep->declBus(c+38,"Three_stage_Pipeline DP csr evec", false,-1, 31,0);
        tracep->declBus(c+112,"Three_stage_Pipeline DP csr MSTATUS", false,-1, 11,0);
        tracep->declBus(c+113,"Three_stage_Pipeline DP csr MIE", false,-1, 11,0);
        tracep->declBus(c+114,"Three_stage_Pipeline DP csr MTVEC", false,-1, 11,0);
        tracep->declBus(c+115,"Three_stage_Pipeline DP csr MEPC", false,-1, 11,0);
        tracep->declBus(c+116,"Three_stage_Pipeline DP csr MCAUSE", false,-1, 11,0);
        tracep->declBus(c+117,"Three_stage_Pipeline DP csr MIP", false,-1, 11,0);
        tracep->declBus(c+110,"Three_stage_Pipeline DP csr mip", false,-1, 31,0);
        tracep->declBus(c+93,"Three_stage_Pipeline DP csr mie", false,-1, 31,0);
        tracep->declBus(c+94,"Three_stage_Pipeline DP csr mstatus", false,-1, 31,0);
        tracep->declBus(c+95,"Three_stage_Pipeline DP csr mcause", false,-1, 31,0);
        tracep->declBus(c+96,"Three_stage_Pipeline DP csr mtvec", false,-1, 31,0);
        tracep->declBus(c+97,"Three_stage_Pipeline DP csr mepc", false,-1, 31,0);
        tracep->declBus(c+98,"Three_stage_Pipeline CU opcode", false,-1, 6,0);
        tracep->declBus(c+99,"Three_stage_Pipeline CU func7", false,-1, 6,0);
        tracep->declBus(c+100,"Three_stage_Pipeline CU func3", false,-1, 2,0);
        tracep->declBus(c+4,"Three_stage_Pipeline CU ALU_control", false,-1, 3,0);
        tracep->declBus(c+6,"Three_stage_Pipeline CU br_type", false,-1, 2,0);
        tracep->declBus(c+7,"Three_stage_Pipeline CU load", false,-1, 2,0);
        tracep->declBus(c+9,"Three_stage_Pipeline CU wb_sel", false,-1, 1,0);
        tracep->declBus(c+11,"Three_stage_Pipeline CU store", false,-1, 1,0);
        tracep->declBit(c+13,"Three_stage_Pipeline CU RegWrite", false,-1);
        tracep->declBit(c+15,"Three_stage_Pipeline CU wr_en", false,-1);
        tracep->declBit(c+17,"Three_stage_Pipeline CU rd_en", false,-1);
        tracep->declBit(c+19,"Three_stage_Pipeline CU sel_A", false,-1);
        tracep->declBit(c+20,"Three_stage_Pipeline CU sel_B", false,-1);
        tracep->declBit(c+23,"Three_stage_Pipeline CU csr_wr_en", false,-1);
        tracep->declBit(c+24,"Three_stage_Pipeline CU csr_rd_en", false,-1);
        tracep->declBit(c+25,"Three_stage_Pipeline CU mret", false,-1);
        tracep->declBus(c+118,"Three_stage_Pipeline CU R_opcode", false,-1, 6,0);
        tracep->declBus(c+119,"Three_stage_Pipeline CU I_opcode", false,-1, 6,0);
        tracep->declBus(c+120,"Three_stage_Pipeline CU IL_opcode", false,-1, 6,0);
        tracep->declBus(c+121,"Three_stage_Pipeline CU S_opcode", false,-1, 6,0);
        tracep->declBus(c+122,"Three_stage_Pipeline CU B_opcode", false,-1, 6,0);
        tracep->declBus(c+123,"Three_stage_Pipeline CU J_opcode", false,-1, 6,0);
        tracep->declBus(c+124,"Three_stage_Pipeline CU JR_opcode", false,-1, 6,0);
        tracep->declBus(c+125,"Three_stage_Pipeline CU U_opcode", false,-1, 6,0);
        tracep->declBus(c+126,"Three_stage_Pipeline CU AU_opcode", false,-1, 6,0);
        tracep->declBus(c+127,"Three_stage_Pipeline CU CSR_opcode", false,-1, 6,0);
        tracep->declBus(c+128,"Three_stage_Pipeline CU func", false,-1, 6,0);
        tracep->declBus(c+7,"Three_stage_Pipeline CR load", false,-1, 2,0);
        tracep->declBus(c+9,"Three_stage_Pipeline CR wb_sel", false,-1, 1,0);
        tracep->declBus(c+11,"Three_stage_Pipeline CR store", false,-1, 1,0);
        tracep->declBit(c+13,"Three_stage_Pipeline CR RegWrite", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline CR Stall_MW", false,-1);
        tracep->declBit(c+15,"Three_stage_Pipeline CR wr_en", false,-1);
        tracep->declBit(c+17,"Three_stage_Pipeline CR rd_en", false,-1);
        tracep->declBit(c+23,"Three_stage_Pipeline CR csr_wr_en", false,-1);
        tracep->declBit(c+24,"Three_stage_Pipeline CR csr_rd_en", false,-1);
        tracep->declBit(c+25,"Three_stage_Pipeline CR mret", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline CR rst", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline CR clk", false,-1);
        tracep->declBus(c+8,"Three_stage_Pipeline CR load_MW", false,-1, 2,0);
        tracep->declBus(c+10,"Three_stage_Pipeline CR wb_sel_MW", false,-1, 1,0);
        tracep->declBus(c+12,"Three_stage_Pipeline CR store_MW", false,-1, 1,0);
        tracep->declBit(c+14,"Three_stage_Pipeline CR RegWrite_MW", false,-1);
        tracep->declBit(c+16,"Three_stage_Pipeline CR wr_en_MW", false,-1);
        tracep->declBit(c+18,"Three_stage_Pipeline CR rd_en_MW", false,-1);
        tracep->declBit(c+26,"Three_stage_Pipeline CR csr_rd_en_MW", false,-1);
        tracep->declBit(c+27,"Three_stage_Pipeline CR csr_wr_en_MW", false,-1);
        tracep->declBit(c+28,"Three_stage_Pipeline CR mret_MW", false,-1);
        tracep->declBus(c+105,"Three_stage_Pipeline DM readData", false,-1, 31,0);
        tracep->declBit(c+22,"Three_stage_Pipeline DM Stall_DMOut", false,-1);
        tracep->declBus(c+2,"Three_stage_Pipeline DM ALU_result_DE", false,-1, 31,0);
        tracep->declBus(c+3,"Three_stage_Pipeline DM rdata2_DE", false,-1, 31,0);
        tracep->declBus(c+5,"Three_stage_Pipeline DM mask", false,-1, 3,0);
        tracep->declBit(c+16,"Three_stage_Pipeline DM wr_en_MW", false,-1);
        tracep->declBit(c+18,"Three_stage_Pipeline DM rd_en_MW", false,-1);
        tracep->declBit(c+111,"Three_stage_Pipeline DM cs", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline DM clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline DM rst", false,-1);
        tracep->declBit(c+21,"Three_stage_Pipeline DM Stall_Out", false,-1);
        tracep->declBit(c+29,"Three_stage_Pipeline TI Timer_Intrpt", false,-1);
        tracep->declBit(c+102,"Three_stage_Pipeline TI clk", false,-1);
        tracep->declBit(c+103,"Three_stage_Pipeline TI rst", false,-1);
        tracep->declBus(c+101,"Three_stage_Pipeline TI counter", false,-1, 2,0);
    }
}

void VThree_stage_Pipeline::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VThree_stage_Pipeline::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VThree_stage_Pipeline::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VThree_stage_Pipeline__Syms* __restrict vlSymsp = static_cast<VThree_stage_Pipeline__Syms*>(userp);
    VThree_stage_Pipeline* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlTOPp->Three_stage_Pipeline__DOT__Instruction_F),32);
        tracep->fullIData(oldp+2,(vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE),32);
        tracep->fullIData(oldp+3,(vlTOPp->Three_stage_Pipeline__DOT__rdata2_DE),32);
        tracep->fullCData(oldp+4,(vlTOPp->Three_stage_Pipeline__DOT__ALU_control),4);
        tracep->fullCData(oldp+5,(vlTOPp->Three_stage_Pipeline__DOT__mask),4);
        tracep->fullCData(oldp+6,(vlTOPp->Three_stage_Pipeline__DOT__br_type),3);
        tracep->fullCData(oldp+7,(vlTOPp->Three_stage_Pipeline__DOT__load),3);
        tracep->fullCData(oldp+8,(vlTOPp->Three_stage_Pipeline__DOT__load_MW),3);
        tracep->fullCData(oldp+9,(vlTOPp->Three_stage_Pipeline__DOT__wb_sel),2);
        tracep->fullCData(oldp+10,(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW),2);
        tracep->fullCData(oldp+11,(vlTOPp->Three_stage_Pipeline__DOT__store),2);
        tracep->fullCData(oldp+12,(vlTOPp->Three_stage_Pipeline__DOT__store_MW),2);
        tracep->fullBit(oldp+13,(vlTOPp->Three_stage_Pipeline__DOT__RegWrite));
        tracep->fullBit(oldp+14,(vlTOPp->Three_stage_Pipeline__DOT__RegWrite_MW));
        tracep->fullBit(oldp+15,(vlTOPp->Three_stage_Pipeline__DOT__wr_en));
        tracep->fullBit(oldp+16,(vlTOPp->Three_stage_Pipeline__DOT__wr_en_MW));
        tracep->fullBit(oldp+17,(vlTOPp->Three_stage_Pipeline__DOT__rd_en));
        tracep->fullBit(oldp+18,(vlTOPp->Three_stage_Pipeline__DOT__rd_en_MW));
        tracep->fullBit(oldp+19,(vlTOPp->Three_stage_Pipeline__DOT__sel_A));
        tracep->fullBit(oldp+20,(vlTOPp->Three_stage_Pipeline__DOT__sel_B));
        tracep->fullBit(oldp+21,(vlTOPp->Three_stage_Pipeline__DOT__Stall_MW));
        tracep->fullBit(oldp+22,(vlTOPp->Three_stage_Pipeline__DOT__Stall_DMOut));
        tracep->fullBit(oldp+23,(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en));
        tracep->fullBit(oldp+24,(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en));
        tracep->fullBit(oldp+25,(vlTOPp->Three_stage_Pipeline__DOT__mret));
        tracep->fullBit(oldp+26,(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW));
        tracep->fullBit(oldp+27,(vlTOPp->Three_stage_Pipeline__DOT__csr_wr_en_MW));
        tracep->fullBit(oldp+28,(vlTOPp->Three_stage_Pipeline__DOT__mret_MW));
        tracep->fullBit(oldp+29,(vlTOPp->Three_stage_Pipeline__DOT__Timer_Intrpt));
        tracep->fullIData(oldp+30,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC),32);
        tracep->fullIData(oldp+31,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken)
                                     ? vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec
                                     : ((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                                         ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                         : ((IData)(4U) 
                                            + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC)))),32);
        tracep->fullIData(oldp+32,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken)
                                     ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                     : ((IData)(4U) 
                                        + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC))),32);
        tracep->fullIData(oldp+33,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__IM__DOT__Mem
                                   [(0x7fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC 
                                              >> 2U))]),32);
        tracep->fullIData(oldp+34,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__ALU_result),32);
        tracep->fullIData(oldp+35,(((0U == (0x1fU & 
                                            (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0xfU)))
                                     ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
                                    [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                               >> 0xfU))])),32);
        tracep->fullIData(oldp+36,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_F),32);
        tracep->fullIData(oldp+37,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE),32);
        tracep->fullIData(oldp+38,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__evec),32);
        tracep->fullIData(oldp+39,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Immediate),32);
        tracep->fullIData(oldp+40,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataA),32);
        tracep->fullIData(oldp+41,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdataB),32);
        tracep->fullIData(oldp+42,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA),32);
        tracep->fullIData(oldp+43,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB),32);
        tracep->fullIData(oldp+44,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FA_R),32);
        tracep->fullIData(oldp+45,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata_FB_R),32);
        tracep->fullIData(oldp+46,(((0U == (0x1fU & 
                                            (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0x14U)))
                                     ? 0U : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem
                                    [(0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                               >> 0x14U))])),32);
        tracep->fullIData(oldp+47,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE),32);
        tracep->fullIData(oldp+48,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr),32);
        tracep->fullIData(oldp+49,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_wdata),32);
        tracep->fullBit(oldp+50,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__br_taken));
        tracep->fullBit(oldp+51,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__epc_taken));
        tracep->fullBit(oldp+52,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_A));
        tracep->fullBit(oldp+53,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Forward_B));
        tracep->fullBit(oldp+54,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Stall));
        tracep->fullBit(oldp+55,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__flush));
        tracep->fullBit(oldp+56,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr_flush));
        tracep->fullCData(oldp+57,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+58,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+59,((0x1fU & (vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Instruction_DE 
                                             >> 7U))),5);
        tracep->fullIData(oldp+60,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[0]),32);
        tracep->fullIData(oldp+61,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[1]),32);
        tracep->fullIData(oldp+62,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[2]),32);
        tracep->fullIData(oldp+63,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[3]),32);
        tracep->fullIData(oldp+64,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[4]),32);
        tracep->fullIData(oldp+65,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[5]),32);
        tracep->fullIData(oldp+66,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[6]),32);
        tracep->fullIData(oldp+67,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[7]),32);
        tracep->fullIData(oldp+68,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[8]),32);
        tracep->fullIData(oldp+69,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[9]),32);
        tracep->fullIData(oldp+70,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[10]),32);
        tracep->fullIData(oldp+71,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[11]),32);
        tracep->fullIData(oldp+72,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[12]),32);
        tracep->fullIData(oldp+73,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[13]),32);
        tracep->fullIData(oldp+74,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[14]),32);
        tracep->fullIData(oldp+75,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[15]),32);
        tracep->fullIData(oldp+76,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[16]),32);
        tracep->fullIData(oldp+77,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[17]),32);
        tracep->fullIData(oldp+78,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[18]),32);
        tracep->fullIData(oldp+79,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[19]),32);
        tracep->fullIData(oldp+80,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[20]),32);
        tracep->fullIData(oldp+81,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[21]),32);
        tracep->fullIData(oldp+82,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[22]),32);
        tracep->fullIData(oldp+83,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[23]),32);
        tracep->fullIData(oldp+84,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[24]),32);
        tracep->fullIData(oldp+85,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[25]),32);
        tracep->fullIData(oldp+86,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[26]),32);
        tracep->fullIData(oldp+87,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[27]),32);
        tracep->fullIData(oldp+88,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[28]),32);
        tracep->fullIData(oldp+89,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[29]),32);
        tracep->fullIData(oldp+90,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[30]),32);
        tracep->fullIData(oldp+91,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__RF__DOT__Reg_Mem[31]),32);
        tracep->fullSData(oldp+92,((0xfffU & vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__Addr)),12);
        tracep->fullIData(oldp+93,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mie),32);
        tracep->fullIData(oldp+94,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mstatus),32);
        tracep->fullIData(oldp+95,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mcause),32);
        tracep->fullIData(oldp+96,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mtvec),32);
        tracep->fullIData(oldp+97,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mepc),32);
        tracep->fullCData(oldp+98,((0x7fU & vlTOPp->Three_stage_Pipeline__DOT__Instruction_F)),7);
        tracep->fullCData(oldp+99,((0x7fU & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                             >> 0x19U))),7);
        tracep->fullCData(oldp+100,((7U & (vlTOPp->Three_stage_Pipeline__DOT__Instruction_F 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+101,(vlTOPp->Three_stage_Pipeline__DOT__TI__DOT__counter),3);
        tracep->fullBit(oldp+102,(vlTOPp->clk));
        tracep->fullBit(oldp+103,(vlTOPp->rst));
        tracep->fullBit(oldp+104,(vlTOPp->External_Intrpt));
        tracep->fullIData(oldp+105,(vlTOPp->Three_stage_Pipeline__DOT__readData),32);
        tracep->fullIData(oldp+106,(((2U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
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
                                              : 0U)
                                          : vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata)
                                      : ((1U & (IData)(vlTOPp->Three_stage_Pipeline__DOT__wb_sel_MW))
                                          ? vlTOPp->Three_stage_Pipeline__DOT__ALU_result_DE
                                          : ((IData)(4U) 
                                             + vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__PC_DE)))),32);
        tracep->fullIData(oldp+107,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__rdata),32);
        tracep->fullIData(oldp+108,(((IData)(vlTOPp->Three_stage_Pipeline__DOT__csr_rd_en_MW)
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
        tracep->fullIData(oldp+109,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__cause),32);
        tracep->fullIData(oldp+110,(vlTOPp->Three_stage_Pipeline__DOT__DP__DOT__csr__DOT__mip),32);
        tracep->fullBit(oldp+111,(0U));
        tracep->fullSData(oldp+112,(0x300U),12);
        tracep->fullSData(oldp+113,(0x304U),12);
        tracep->fullSData(oldp+114,(0x305U),12);
        tracep->fullSData(oldp+115,(0x341U),12);
        tracep->fullSData(oldp+116,(0x342U),12);
        tracep->fullSData(oldp+117,(0x344U),12);
        tracep->fullCData(oldp+118,(0x33U),7);
        tracep->fullCData(oldp+119,(0x13U),7);
        tracep->fullCData(oldp+120,(3U),7);
        tracep->fullCData(oldp+121,(0x23U),7);
        tracep->fullCData(oldp+122,(0x63U),7);
        tracep->fullCData(oldp+123,(0x6fU),7);
        tracep->fullCData(oldp+124,(0x67U),7);
        tracep->fullCData(oldp+125,(0x37U),7);
        tracep->fullCData(oldp+126,(0x17U),7);
        tracep->fullCData(oldp+127,(0x73U),7);
        tracep->fullCData(oldp+128,(0x20U),7);
    }
}

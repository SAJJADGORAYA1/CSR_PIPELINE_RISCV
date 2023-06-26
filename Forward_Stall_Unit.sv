module Forward_Stall_Unit (
    input logic [31:0] Instruction_F,
    Instruction_DE,
    input logic RegWrite_MW,
    br_taken,
    Stall_out_en,
    output logic Forward_A,
    Forward_B,
    Stall,
    Stall_MW,
    flush
);

  always_comb begin
    if ((~Stall_out_en) & (RegWrite_MW)) begin
      if(((Instruction_DE[6:0] == 7'b1101111) | (Instruction_DE[6:0] == 7'b1100111) | (Instruction_DE[6:0] == 7'b0000011)) & ((Instruction_DE[11:7] == Instruction_F[19:15]) | (Instruction_DE[11:7] == Instruction_F[24:20]))) begin
        Stall = 1'b1;
        Stall_MW = 1'b1;
      end else if (Instruction_DE[11:7] == Instruction_F[19:15]) begin  //rd.DE = rs1.F
        Forward_A = 1'b1;
      end else if (Instruction_DE[11:7] == Instruction_F[24:20]) begin  //rd.DE = rs2.F
        Forward_B = 1'b1;
      end else begin
        Forward_A = 1'b0;
        Forward_B = 1'b0;
        Stall = 1'b0;
        Stall_MW = 1'b0;
      end
    end else if (br_taken) begin
      flush = 1'b1;
    end else begin
      Stall = 1'b0;
      Stall_MW = 1'b0;
      Forward_A = 1'b0;
      Forward_B = 1'b0;
      flush = 1'b0;
    end
  end
endmodule

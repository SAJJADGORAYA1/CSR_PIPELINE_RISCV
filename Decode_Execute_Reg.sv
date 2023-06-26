module Decode_Execute_Reg (
    input logic [31:0] PC_F,
    ALU_result,
    rdata_FB,
    Instruction_F,
    input logic clk,
    rst,
    csr_flush,
    Stall_MW,
    output logic [31:0] PC_DE,
    ALU_result_DE,
    rdata2_DE,
    Instruction_DE
);

  //Register_1 for PC_F value
  always_ff @(posedge clk) begin  // Hold PC value
    if (rst | csr_flush) begin
      PC_DE <= 32'h0;
    end else begin
      if (Stall_MW) begin
        PC_DE <= PC_DE;
      end else begin
        PC_DE <= PC_F;
      end
    end
  end

  //Register_2 for ALU result value 
  always_ff @(posedge clk) begin  // Hold PC value
    if (rst | csr_flush) begin
      ALU_result_DE <= 32'h0;
    end else begin
      if (Stall_MW) begin
        ALU_result_DE <= ALU_result_DE;
      end else begin
        ALU_result_DE <= ALU_result;
      end
    end
  end

  //Register_3 for rdata2 which we want to store in data memory
  always_ff @(posedge clk) begin  // Hold PC value
    if (rst | csr_flush) begin
      rdata2_DE <= 32'h0;
    end else begin
      if (Stall_MW) begin
        rdata2_DE <= rdata2_DE;
      end else begin
        rdata2_DE <= rdata_FB;
      end
    end
  end

  //Register_4 for Instuction_F
  always_ff @(posedge clk) begin  // Hold PC value
    if (rst | csr_flush) begin
      Instruction_DE <= 32'h0;
    end else begin
      if (Stall_MW) begin
        Instruction_DE <= Instruction_DE;
      end else begin
        Instruction_DE <= Instruction_F;
      end
    end
  end

endmodule

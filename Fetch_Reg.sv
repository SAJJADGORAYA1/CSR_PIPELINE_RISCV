module Fetch_Reg (
    input logic [31:0] Instruction,
    input logic [31:0] PC,
    input rst,
    clk,
    csr_flush,
    Stall,
    flush,
    output logic [31:0] Instruction_F,
    output logic [31:0] PC_F
);

  //Register_1 for PC value 
  always_ff @(posedge clk) begin  // Hold PC value
    if (rst | csr_flush) begin
      PC_F <= 32'h0;
    end else begin
      if (Stall) begin
        PC_F <= PC_F;
      end else begin
        PC_F <= PC;
      end
    end
  end

  //Register_2 for instuctions 
  always_ff @(posedge clk) begin  // Hold instructions
    if (rst | csr_flush) begin
      Instruction_F <= 32'h0;
    end else begin
      if (Stall) begin
        if (flush) begin
          Instruction_F <= 32'h00000013;  //addi x0,x0,0
        end else begin
          Instruction_F <= Instruction_F;
        end
      end else begin
        Instruction_F <= Instruction;
      end
    end
  end

endmodule

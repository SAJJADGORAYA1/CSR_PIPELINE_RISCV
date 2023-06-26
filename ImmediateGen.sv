module ImmediateGen (
    input  logic [31:0] Instruction_F,
    output logic [31:0] Immediate
);

  always_comb begin
    case (Instruction_F[6:0])
      7'b0010011:
      Immediate = {{20{Instruction_F[31]}}, Instruction_F[31:20]};  //If the Immediate is I type
      7'b0000011: Immediate = {{20{Instruction_F[31]}}, Instruction_F[31:20]};  // Load
      7'b0100011:
      Immediate = {
        {20{Instruction_F[31]}}, Instruction_F[31:25], Instruction_F[11:7]
      };  //If the Immediate is S type		
      7'b1100011:
      Immediate = {
        {20{Instruction_F[31]}}, Instruction_F[7], Instruction_F[30:25], Instruction_F[11:8], 1'b0
      };  //If the Immediate is B type
      7'b1101111:
      Immediate = {
        {12{Instruction_F[31]}}, Instruction_F[19:12], Instruction_F[20], Instruction_F[30:21], 1'b0
      };  //If the Immediate is J type
      7'b1100111: Immediate = {{20{Instruction_F[31]}}, Instruction_F[31:20]};  // JalR
      7'b0110111:
      Immediate = {
        Instruction_F[31], Instruction_F[30:12], {12{1'b0}}
      };  //If the Immediate is U type
      7'b0010111: Immediate = {Instruction_F[31], Instruction_F[30:12], {12{1'b0}}};  // AUipc type
      default: Immediate = 32'b0;
    endcase
  end

endmodule

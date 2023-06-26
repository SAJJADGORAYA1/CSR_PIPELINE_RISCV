module ALU (
    input  logic [31:0] rdataA,
    rdataB,
    input  logic [ 3:0] ALU_control,
    output logic [31:0] ALU_result
);

  always_comb begin
    case (ALU_control)
      4'b0000: ALU_result = rdataA + rdataB;  //ADD, ADDI
      4'b0001: ALU_result = rdataA - rdataB;  //SUB
      4'b0010: ALU_result = rdataA << rdataB[4:0];  //SLL, SLLI  
      4'b0011: ALU_result = ($signed(rdataA) < $signed(rdataB)) ? 32'h1 : 32'h0;  //SLT, SLTI	
      4'b0100: ALU_result = (rdataA < rdataB) ? 32'h1 : 32'h0;  //SLTU, SLTUI
      4'b0101: ALU_result = rdataA ^ rdataB;  //XOR, XORI
      4'b0110: ALU_result = rdataA >> rdataB;  //SRL, SRLI
      4'b0111: ALU_result = rdataA >>> rdataB;  //SRA, SRAI
      4'b1000: ALU_result = rdataA | rdataB;  //OR, ORI
      4'b1001: ALU_result = rdataA & rdataB;  //AND, ANDI
      4'b1010: ALU_result = rdataB;
      default: ALU_result = 32'b0;
    endcase
  end
endmodule

module Controller (
    input logic [6:0] opcode,
    func7,
    input logic [2:0] func3,
    output logic [3:0] ALU_control,
    output logic [2:0] br_type,
    load,
    output logic [1:0] wb_sel,
    store,
    output logic RegWrite,
    wr_en,
    rd_en,
    sel_A,
    sel_B,
    csr_wr_en,
    csr_rd_en,
    mret
);

  parameter R_opcode = 7'b0110011;
  parameter I_opcode = 7'b0010011;
  parameter IL_opcode = 7'b0000011;  //load 
  parameter S_opcode = 7'b0100011;  //store
  parameter B_opcode = 7'b1100011;
  parameter J_opcode = 7'b1101111;  //jal
  parameter JR_opcode = 7'b1100111;  //jalr
  parameter U_opcode = 7'b0110111;  //lui
  parameter AU_opcode = 7'b0010111;  //auipc
  parameter CSR_opcode = 7'b1110011;  //csr 

  parameter func = 7'b0100000;

  always_comb begin
    case (opcode)
      R_opcode: begin  // R type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;  //active low
        rd_en = 1'b0;
        sel_A = 1'b0;
        sel_B = 1'b0;
        wb_sel = 2'b01;
        br_type = 3'b110;
        case (func3)
          3'b000: begin
            if ((func7 == func) && (opcode == R_opcode)) ALU_control = 4'b0001;  //SUB
            else ALU_control = 4'b0000;  //ADD
          end
          3'b001:  ALU_control = 4'b0010;  //SLL
          3'b010:  ALU_control = 4'b0011;  //SLT
          3'b011:  ALU_control = 4'b0100;  //SLTU
          3'b100:  ALU_control = 4'b0101;  //XOR
          3'b101: begin
            if ((func7 == func) && (opcode == R_opcode)) ALU_control = 4'b0111;  //SRA
            else ALU_control = 4'b0110;  //SRL
          end
          3'b110:  ALU_control = 4'b1000;  //OR
          3'b111:  ALU_control = 4'b1001;  //AND
          default: ALU_control = 4'bxxxx;
        endcase
      end

      I_opcode: begin  // I type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;  //active low
        rd_en = 1'b0;
        sel_A = 1'b0;
        sel_B = 1'b1;
        wb_sel = 2'b01;
        br_type = 3'b110;
        case (func3)
          3'b000:  ALU_control = 4'b0000;  //ADDI
          3'b001:  ALU_control = 4'b0010;  //SLLI
          3'b010:  ALU_control = 4'b0011;  //SLTI
          3'b011:  ALU_control = 4'b0100;  //SLTUI
          3'b100:  ALU_control = 4'b0101;  //XORI
          3'b101: begin
            if ((func7 == func) && (opcode == I_opcode)) ALU_control = 4'b0111;  //SRAI
            else ALU_control = 4'b0110;  //SRLI
          end
          3'b110:  ALU_control = 4'b1000;  //ORI
          3'b111:  ALU_control = 4'b1001;  //ANDI
          default: ALU_control = 4'bxxxx;
        endcase
      end

      IL_opcode: begin  // Load type Control Signal 
        case (func3)
          3'b000:  load = 3'b000;  //load byte
          3'b001:  load = 3'b001;  //load half word
          3'b010:  load = 3'b010;  //load word      
          3'b100:  load = 3'b011;  //load byte unsigned
          3'b101:  load = 3'b100;  //load half unsigned 
          default: load = 3'bxxx;
        endcase
        RegWrite = 1'b1;
        wr_en = 1'b1;  //active low
        rd_en = 1'b1;
        sel_A = 1'b0;
        sel_B = 1'b1;
        wb_sel = 2'b10;
        br_type = 3'b110;
        ALU_control = 4'b0000;
      end

      S_opcode: begin  // S type Control Signal 
        case (func3)
          3'b000:  store = 2'b00;  //store byte
          3'b001:  store = 2'b01;  //store half word
          3'b010:  store = 2'b10;  //store word
          default: store = 2'bxx;
        endcase
        RegWrite = 1'b0;
        wr_en = 1'b0;  //active low
        rd_en = 1'b0;
        sel_A = 1'b0;
        sel_B = 1'b1;
        wb_sel = 2'bxx;
        br_type = 3'b110;
        ALU_control = 4'b0000;  //PC + imm
      end

      B_opcode: begin  // B type Control Signal 
        case (func3)
          3'b000:  br_type = 3'b000;  // branch equal
          3'b001:  br_type = 3'b001;  // branch not equal
          3'b100:  br_type = 3'b010;  // branch less than signed 
          3'b101:  br_type = 3'b011;  // branch greater equal signed
          3'b110:  br_type = 3'b100;  // branch less than unsigned 
          3'b111:  br_type = 3'b101;  // branch greater equal signed
          default: br_type = 3'bxxx;
        endcase
        RegWrite = 1'b0;
        wr_en = 1'b1;
        rd_en = 1'b0;
        sel_A = 1'b1;
        sel_B = 1'b1;
        wb_sel = 2'bxx;
      end

      J_opcode: begin  // J type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;
        rd_en = 1'b0;
        sel_A = 1'b1;
        sel_B = 1'b1;
        wb_sel = 2'b00;
        br_type = 3'b111;
        ALU_control = 4'b0000;  //PC + imm
      end

      JR_opcode: begin  // JR type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;
        rd_en = 1'b0;
        sel_A = 1'b0;
        sel_B = 1'b1;
        wb_sel = 2'b00;
        br_type = 3'b111;
        ALU_control = 4'b0000;  //PC + imm
      end

      U_opcode: begin  // U type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;
        rd_en = 1'b0;
        sel_A = 1'bx;
        sel_B = 1'b1;
        wb_sel = 2'b01;
        br_type = 3'b110;
        ALU_control = 4'b1010;  //U-imm 
      end

      AU_opcode: begin  // Add to PC-U type Control Signal 
        RegWrite = 1'b1;
        wr_en = 1'b1;
        rd_en = 1'b0;
        sel_A = 1'b1;
        sel_B = 1'b1;
        wb_sel = 2'b01;
        br_type = 3'b110;
        ALU_control = 4'b0000;  //PC + U-imm
      end
      CSR_opcode: begin
        case (func3)
          3'b001: begin
            sel_A = 1'd0;
            sel_B = 1'd1;
            RegWrite = 1'b1;
            csr_wr_en = 1'b1;
            csr_rd_en = 1'b1;
            wb_sel = 2'b11;
            ALU_control = 4'b0000;
            br_type = 3'b110;
            mret = 0;
          end
          3'b000: begin
            sel_A = 1'd0;
            sel_B = 1'd0;
            RegWrite = 1'b0;
            csr_wr_en = 1'b0;
            csr_rd_en = 1'b0;
            wb_sel = 2'b00;
            ALU_control = 4'b0000;
            br_type = 3'b110;
            mret = 1;
          end
        endcase
      end
    endcase
  end

endmodule

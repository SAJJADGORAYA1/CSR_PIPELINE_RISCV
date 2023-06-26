module intrpt_encoder (
    input logic Timer_Intrpt,
    External_Intrpt,
    output logic [31:0] cause
);

  always_comb begin
    if (Timer_Intrpt) begin
      cause = 32'h80000004;  //31st bit 1
    end else if (External_Intrpt) begin
      cause = 32'h80000008;  //3rd bit 1
    end else begin
      cause = 32'h00000000;
    end
  end

endmodule

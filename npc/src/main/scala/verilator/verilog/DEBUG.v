 
module DEBUG(
   input   exit,
   input   [63: 0]  pc,
   input   [63: 0]  a0,
   input   [31: 0]  inst
);
   always @* begin
       if(exit)   begin
           if(a0 != 64'h0) begin
               $display("\n\n hit \033[1;31mbad\033[0m trap at pc = %x, inst = 0x%8x", pc, inst);
               $display("\nexit value = %x\n\n", a0);
           end
           else begin
               $display("\n\n hit \033[1;32mgood\033[0m trap at pc = %x, inst = 0x%8x", pc, inst);
           end
           $finish;
       end
   end
endmodule
        
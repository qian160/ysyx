 
   export "DPI-C" function EXIT;
   function void EXIT;
       $finish;
   endfunction

   module EXIT(
       input    exit
   );
   always @* begin
       if(exit)   $finish(0);
   end
   endmodule
        
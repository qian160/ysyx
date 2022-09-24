module EXIT(
    input    exit
);
    always @* begin
        if(exit)   $finish(0);
    end
endmodule

        
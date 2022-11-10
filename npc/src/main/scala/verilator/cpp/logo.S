# as -o logo.o logo.S
# then compile logo.o together with cpp source files
.section .data
.global logo
logo:
.incbin "./cpp/include/logo.txt"

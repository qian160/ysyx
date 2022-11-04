#ifndef CPU_INTERNAL_H
#define CPU_INTERNAL_H

#include "common.h"

typedef enum {
  carry_flag     = 0x01,
  zero_flag      = 0x02,
  interrupt_flag = 0x04,
  decimal_flag   = 0x08,
  break_flag     = 0x10,
  unused_flag    = 0x20,
  overflow_flag  = 0x40,
  negative_flag  = 0x80
} cpu_p_flag; //value. For example, if CPU_STATE.P == 0x80, then the neg flag must have been set

typedef enum {
  carry_bp      = 0,
  zero_bp       = 1,
  interrupt_bp  = 2,
  decimal_bp    = 3,
  break_bp      = 4,
  unused_bp     = 5,
  overflow_bp   = 6,
  negative_bp   = 7
} cpu_p_bp;   //index

typedef struct {
  word PC;      // Program Counter,
  byte SP;      // Stack Pointer,
  byte A, X, Y; // Registers
  byte P;       // Flag Register
} CPU_STATE;

/*
Accumulator
  A is byte-wide and along with the arithmetic logic unit (ALU), supports using the status register for carrying, overflow detection, and so on.

Indexes
  X and Y are byte-wide and used for several addressing modes. They can be used as loop counters easily, using INC/DEC and branch instructions. Not being the accumulator, they have limited addressing modes themselves when loading and saving.

Program Counter
  The 2-byte program counter PC supports 65536 direct (unbanked) memory locations, however not all values are sent to the cartridge. It can be accessed either by allowing CPU's internal fetch logic increment the address bus, an interrupt (NMI, Reset, IRQ/BRQ), and using the RTS/JMP/JSR/Branch instructions.

Stack Pointer
  S is byte-wide and can be accessed using interrupts, pulls, pushes, and transfers.

Status Register
  P has 6 bits used by the ALU but is byte-wide. PHP, PLP, arithmetic, testing, and branch instructions can access this register.

*/

extern CPU_STATE cpu;

extern byte CPU_RAM[0x800]; //0x8000
extern int op_value, op_address; // Arguments for current instruction, set in addressing
extern int op_cycles;            // Additional instruction cycles used (e.g. when paging occurs)

byte cpu_ram_read(word address);
void cpu_ram_write(word address, byte data);

// Interrupt Addresses
word cpu_nmi_interrupt_address();
word cpu_reset_interrupt_address();
word cpu_irq_interrupt_address(); //int request

// CPU Adressing Modes
//Indexed addressing
//use the X or Y register to help determine the address
void cpu_address_zero_page_x();
void cpu_address_zero_page_y();
void cpu_address_absolute_x();
void cpu_address_absolute_y();
void cpu_address_indirect_x();
void cpu_address_indirect_y();
//other addressing
void cpu_address_implied();     //Instructions like RTS or CLC have no address operand, the destination of results are implied.
void cpu_address_immediate();   //Uses the 8-bit operand itself as the value for the operation, rather than fetching a value from a memory address.
void cpu_address_zero_page();   //Fetches the value from an 8-bit address on the zero page.
void cpu_address_absolute();    //Fetches the value from a 16-bit address anywhere in memory.
void cpu_address_relative();    //Branch instructions (e.g. BEQ, BCS) have a relative addressing mode that specifies an 8-bit signed offset relative to the current PC.
void cpu_address_indirect();    //The JMP instruction has a special indirect addressing mode that can jump to the address stored in a 16-bit pointer anywhere in memory.

//Many instructions can operate on the accumulator, e.g. LSR A. 
//Some assemblers will treat no operand as an implicit A where applicable.

#endif

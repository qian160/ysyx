#include "memory.h"
#include "cpu.h"
#include "ppu.h"
#include "psg.h"

/*
  standard mem layout
________________________________________________________________________________________________________
Address range	  Size	  Device
$0000-$07FF	    $0800 	2KB internal RAM
$0800-$0FFF	    $0800   Mirrors of $0000-$07FF
$1000-$17FF	    $0800   Mirrors of $0000-$07FF
$1800-$1FFF	    $0800   Mirrors of $0000-$07FF

$2000-$2007	    $0008 	NES PPU registers
$2008-$3FFF	    $1FF8 	Mirrors of $2000-2007 (repeats every 8 bytes)

$4000-$4017	    $0018 	NES APU and I/O registers
$4018-$401F	    $0008 	APU and I/O functionality that is normally disabled. See CPU Test Mode.

$4020-$FFFF	    $BFE0 	Cartridge space: PRG ROM, PRG RAM, and mapper registers (See Note)
________________________________________________________________________________________________________

Some parts of the 2 KiB of internal RAM at $0000-$07FF have predefined purposes 
dictated by the 6502 architecture. The zero page is $0000-$00FF, 
and the stack always uses some part of the $0100-$01FF page. 
Games may divide up the rest however the programmer deems usefu

Note: Most common boards and iNES mappers address ROM and Save/Work RAM in this format:

$6000-$7FFF = Battery Backed Save or Work RAM
$8000-$FFFF = Usual ROM, commonly with Mapper Registers (see MMC1 and UxROM for example)

*/

/*
for this emulator:
________________________________________________________________________________________________________
Address range	  Size	  Device
$0000-$1FFF	    0x2000  8KB internal RAM1(only first 2KB vaild, the 0x2000-0x1FFF is the mirror)

$2000-$3FFF	    0x2000 	NES PPU registers

$4000-$5FFF	    0x2000 	NES APU and I/O registers

$6000-$7FFF	    0x2000 	Battery Backed Save or Work RAM2

$8000-$FFFF     0x8000  Usual ROM, commonly with Mapper Registers 

total size: 0x10000 = 65536 = 2 ^ 16 = 64KB
________________________________________________________________________________________________________

*/

byte memory_readb(word address) {
  switch (address >> 13) {    //divide by 2 ^ 13 = 8192(8KB),  0x2000, to get the range(type) of the address
    //0x0000 - 0x1FFF, only the first 2 KB valid, the following 6 KB is the mirror
    case 0: return cpu_ram_read(address & 0x07FF);  
    //0x2000 - 0x3FFF
    case 1: return ppuio_read(address);
    //0x4000 - 0x5FFF
    case 2: return psgio_read(address);
    //0x6000 - 0x7FFF
    case 3: return cpu_ram_read(address & 0x1FFF);    //seems to has the same affect as case 0?
    //0x7FFF - 0xFFFF
    default: return mmc_read(address);
  }
}

void memory_writeb(word address, byte data) {
  // DMA transfer
  int i;  //???
  if (address == 0x4014) {
    for (i = 0; i < 256; i++) {
      ppu_sprram_write(cpu_ram_read((0x100 * data) + i));
    }
    return;
  }
  switch (address >> 13) {
    case 0: return cpu_ram_write(address & 0x07FF, data);
    case 1: return ppuio_write(address, data);
    case 2: return psgio_write(address, data);
    case 3: return cpu_ram_write(address & 0x1FFF, data);
    default: return mmc_write(address, data);
  }
}

word memory_readw(word address) {
  return memory_readb(address) + (memory_readb(address + 1) << 8);
}

void memory_writew(word address, word data) {
  memory_writeb(address, data & 0xFF);
  memory_writeb(address + 1, data >> 8);
}

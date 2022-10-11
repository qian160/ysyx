#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);
extern size_t get_ramdisk_size();

extern int fs_open(const char *pathname, int flags, int mode);
extern size_t fs_read(int fd, void *buf, size_t len);
extern size_t fs_write(int fd, const void *buf, size_t len);
extern size_t fs_lseek(int fd, size_t offset, int whence);
extern int fs_close(int fd);

static Elf_Ehdr elf_header;
static Elf_Phdr pgm_header;

static uintptr_t loader(PCB *pcb, const char *filename) {
  assert(filename);
  // read ELF header
  int elf_fd = fs_open(filename,0,0);
  printf("loader: hello fd=%d\n", elf_fd);
  fs_read(elf_fd, &elf_header, sizeof(Elf_Ehdr));

  printf("---------------------------------------------\n\
ELF Header:\n Entry point address:\t\t%p\n Start of program headers:\t\t%u\n\
Start of section headers:\t\t%u\n---------------------------------------------\n",\
  elf_header.e_entry, elf_header.e_phoff, elf_header.e_shoff);

  // check elf magic number           0x7f, 'E, 'L', 'F'(LSB TO MSB)
  assert(*(int*)elf_header.e_ident == 0x464c457f);

  // read and analyze each program header
  for(int i = 0; i < elf_header.e_phnum; ++i) {
    fs_lseek(elf_fd, elf_header.e_phoff + i*sizeof(Elf_Phdr), SEEK_SET); // 0+64
    fs_read(elf_fd, &pgm_header, sizeof(Elf_Phdr));

    if(pgm_header.p_type == PT_LOAD) {

      printf("---------------------------------------------\n\
Program Headers:\n Offset:\t0x%08x\n VirtAddr:\t%p\n FileSiz:\t0x%08x\n MemSiz:\t0x%08x\n\
---------------------------------------------\n",\
        pgm_header.p_offset, pgm_header.p_vaddr, pgm_header.p_filesz, pgm_header.p_memsz);

      // read segment and write into memery
      // # length  : pgm_header.p_memsz Bytes
      // from elf  
      // # start at: pgm_header.p_offset
      // to memery
      // # start at: pgm_header.p_vaddr
      fs_lseek(elf_fd, pgm_header.p_offset, SEEK_SET);
      fs_read (elf_fd, (void*)pgm_header.p_vaddr,  pgm_header.p_memsz);

      // set segment '.bss' to zero 
      // # length  : pgm_header.p_memsz  - pgm_header.p_filesz
      // to memery
      // # start at: pgm_header.p_vaddr  + pgm_header.p_filesz
      // to elf
      // # start at: pgm_header.p_offset + pgm_header.p_filesz
      memset((void*)(pgm_header.p_vaddr + pgm_header.p_filesz), 0, pgm_header.p_memsz - pgm_header.p_filesz);
    }
  }
  // fs_close(elf_fd);
  return elf_header.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}


#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include "../include/trace.h"

void init_rand();
void init_log(const char *log_file);
void init_mem();
void init_difftest(char *ref_so_file, long img_size, int port);
void init_device();
void init_sdb();
void init_disasm(const char *triple);



static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("welcome to %s-NEMU!%s\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED), "😀");
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096 << 1; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "Can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(RESET_VECTOR), size, 1, fp);

  assert(ret == 1);

  fclose(fp);
  return size;
}

#ifdef CONFIG_FTRACE_ENABLE

extern symbol * Sym_head;
static char *elf_file = NULL;

static void load_elf() {

  if(elf_file == NULL){
    printf("no elf file\n");
    return;
  }
  else
  {
    int fd = open(elf_file, O_RDONLY);
    if(fd < 0){
      printf("failed to open %s\n", elf_file);
      return;
    }
    printf("opened successfully\n");
    struct stat sb;
    if(fstat(fd, &sb) == -1){
      printf("fstat error\n");
      return;
    }
    printf("size = %ld\n", sb.st_size);
    char * elf_file = mmap(NULL, sb.st_size, PROT_READ, MAP_SHARED, fd, 0);
    if(!elf_file){
      printf("mmap failed\n");
      return ;
    }
    close(fd);
    Elf64_Ehdr *elf_header = (Elf64_Ehdr *)elf_file;
    unsigned char *id = elf_header->e_ident;
    if(id[0] != 0x7f || id[1] != 'E' || id[2] != 'L' || id[3] != 'F'){
      printf("bad elf file\n");
      munmap(elf_file,sb.st_size);
      exit(0);
    }
    Elf64_Half shnum = elf_header -> e_shnum;
    Elf64_Half shstrndx = elf_header -> e_shstrndx;
    Elf64_Off shoff = elf_header -> e_shoff;

    Elf64_Shdr * shdr = (Elf64_Shdr *)(elf_file + shoff);

    char * shstrtab = elf_file + (shdr + shstrndx)->sh_offset;
    char * strtab = NULL;
    Elf64_Sym * symtab = NULL;
    //find the strtab and symtab
    int i = 0;
    bool find1 = false, find2 = false;
    Elf64_Word symbol_num;
    Elf64_Shdr *this;
    for(this = shdr; i < shnum; this++){
      if(find1 && find2)break;
      Elf64_Off offset = this->sh_offset;
      char * name = shstrtab + this-> sh_name;
      if(!find1 && this->sh_type == SHT_SYMTAB){
        symtab = (Elf64_Sym *)(elf_file + offset);
        //printf("find .symtab at 0x%lx\n", offset);
        symbol_num = this -> sh_size / sizeof(Elf64_Sym);
        find1 = true;
      }
      else if(!find2 && strcmp(".strtab", name) == 0){
        strtab = elf_file + offset;
        find2 = true;
        //printf("find .strtab at 0x%lx\n", offset);
      }
      i++;
    }
    //Elf64_Xword sh_size = shnum * sizeof(Elf64_Shdr);
    printf("\nSymbol Table '.symtab' contains %d entries:\n", symbol_num);
    i = 0;
    printf(" Num: \t Value \t Size  \t Type  \t Bind  \t Vis  \t Ndx  \t    Name\n");
    for(Elf64_Sym * sym = symtab; i < symbol_num; sym++){
      unsigned char info = sym -> st_info;
      unsigned char type = ELF64_ST_TYPE(info);
      unsigned char bind = ELF64_ST_BIND(info);
      unsigned char vis  = ELF64_ST_VISIBILITY(info);
      char * name = strtab + sym->st_name;
      printf("%2d: %10lx %8ld %8d %8d %8d %8d %16s\n", i++, sym->st_value, sym->st_size, type, bind, vis, sym->st_shndx, name);
      if(type == STT_FUNC){
        symbol *s = (symbol *)malloc(sizeof(symbol));
        assert(s);
        s -> name = (char *)malloc(strlen(sym -> st_name + strtab));
        strcpy(s -> name, sym -> st_name + strtab);
        s -> offset = sym -> st_value;
        s -> size = sym -> st_size;
        s -> next = Sym_head;
        Sym_head = s;
      }
    }
    printf(ANSI_FMT("Done!\n", ANSI_FG_GREEN));
    munmap(elf_file, sb.st_size);
  }
  return;
}

#endif

//at boot time.
static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {     //name, have_arg, flag, value. if flag == NULL, the function will return value. Otherwise the value will be written to the variable pointed by flag 
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"img"      , required_argument, NULL, 'i'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      IFDEF(CONFIG_FTRACE_ENABLE, case 'e': elf_file = optarg; load_elf();break;);
      //return 1 means success, here specifies an img file
      case  1 : img_file = optarg; break;
      default:
        printf("unknown opt %s\n\n", optarg);
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\t-e,--elf=FILE           use the ELF file to trace\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  init_log(log_file);

  /* Initialize memory. */
  init_mem();

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Perform ISA dependent initialization. */
  init_isa();

  /* Load the image to memory. This will overwrite the built-in image. */
  long img_size = load_img();

  /* Initialize differential testing. */
  init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  IFDEF(CONFIG_ITRACE, init_disasm(
    MUXDEF(CONFIG_ISA_x86,     "i686",
    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
    MUXDEF(CONFIG_ISA_riscv32, "riscv32",
    MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
  ));

  /* Display welcome message. */
  welcome();
}
#else // CONFIG_TARGET_AM
static long load_img() {
  extern char bin_start, bin_end;
  size_t size = &bin_end - &bin_start;
  Log("img size = %ld", size);
  memcpy(guest_to_host(RESET_VECTOR), &bin_start, size);
  return size;
}

void am_init_monitor() {
  init_rand();
  init_mem();
  init_isa();
  load_img();
  IFDEF(CONFIG_DEVICE, init_device());
  welcome();
}
#endif

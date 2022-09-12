#include <isa.h>
#include <memory/paddr.h>
#include <elf.h>

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
  printf("你是一个一个一个 %s-NEMU 啊啊啊啊啊啊啊!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

#ifndef CONFIG_TARGET_AM
#include <getopt.h>

void sdb_set_batch_mode();

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;
static char *elf_file = NULL;

typedef struct {
  char * name;
  word_t offset;
  word_t size;
}symbol;

symbol * head = NULL;

static long load_img() {
  if (img_file == NULL) {
    Log("No image is given. Use the default build-in image.");
    return 4096; // built-in image size
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

static void load_elf() {
  /*
	size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);

		The function fread() reads nmemb items of data, each size bytes long,
    from the stream pointed to by stream, storing them  at  the  location given by ptr.
    seems that nmemb is usually 1

    int fseek(FILE *stream, long offset, int whence);

		The  fseek() function sets the file position indicator for the stream
    pointed to by stream.  The new position, measured in  bytes,  is  ob‐
	tained  by  adding  offset bytes to the position specified by whence	
	

  .strtab vs .shstrtab:
      strtab holds symbol names, and shstrtab holds section names(while the 'name' field in strtab and symtab is not true name, just an index)
      To get the symbols, we must find the .symtab and .strtab(where the symtab index is used). 
    but to find these 2 sections we need .shstrtab(compare the section name)

      steps to load a elf symbol table:
        1. read out the ELF header and get the offset of the first section's header(shoff)
        2. let fseek jump to that offset and read out the SCETION HEADER
        3. allocate enough space to read all the sections
        4. tranverse the sections, and find the .strtab and .symtab. .shstrtab is also needed which contains section names
            (note that we can not directly find them without shstrtab. To get a section's name, use its 'sh_name' to index into the shstrtab)
        5. when finding the 2 sections, fill the strtab and symtab buffer with the values in the section using fseek and fread
        6. now we get all the bytes in the symtab and strtab, we can progress them freely. To get a symbol name, also use its 'st_name' to index into strtab
        
        some notes: 
          to tranverse a symbol table, the loop number is symbol_table_header.sh_size / sizeof(Elf64_Sym);
          before tranversing we need to fseek the fp back to the offset where symtab starts
*/

  if(elf_file == NULL)
    return;
  else
  {
    FILE *fp = fopen(elf_file, "r");
    int ret __attribute__((unused));
    if (NULL == fp)
    {
      printf("fail to open the file");
      exit(0);
    }

    Elf64_Ehdr elf_head;
    //get the ELF head, which contains offset, numbers and size of some special sections
    if(fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp) == 0)
    {
      printf("fail to read head\n");
      exit(0);
    }

    //check
    if (elf_head.e_ident[0] != 0x7F ||
      elf_head.e_ident[1] != 'E' ||
      elf_head.e_ident[2] != 'L' ||
      elf_head.e_ident[3] != 'F')
    {
      printf("Not a ELF file\n");
      exit(0);
    }
    int shnum = elf_head.e_shnum;		//the number of sections, used to control loop time and allocate space
    //allocate space for all the sections. size = #sections * sizeof(each section)
    Elf64_Shdr *shdr = (Elf64_Shdr*)malloc(sizeof(Elf64_Shdr) * shnum);
    if (NULL == shdr)
    {
      printf("shdr malloc failed\n");
      exit(0);
    }
    //adjust fp to the section header, prepare for reading
    if(fseek(fp, elf_head.e_shoff, SEEK_SET) != 0)
    {
      printf("\nfaile to fseek\n");
      exit(0);
    }
    //reading out the sections to the buffer
    if(fread(shdr, sizeof(Elf64_Shdr) * shnum, 1, fp) == 0)
    {
      printf("\nfail to read section\n");
      exit(0);
    }
    //find the .shstrtab
    fseek(fp, shdr[elf_head.e_shstrndx].sh_offset, SEEK_SET);
    char shstrtab[shdr[elf_head.e_shstrndx].sh_size];		//.shstrtab, which holds the section names. But we want symbol names, so we use it to find the section .strtab
    if(fread(shstrtab, shdr[elf_head.e_shstrndx].sh_size, 1, fp) == 0)
    {
      printf("\nfaile to read\n");
    }
    char * strtab = NULL;
    int len = 0;

    //find the wanted section names(symtab and) in shstrtab
    char * section_name = shstrtab;
    int64_t symtab_offset = 0;		//used to reset the file pointer before reading symtab
    //find the strtab
    bool find1 = false, find2 = false;
    for(int i = 0; i < shnum; i++){
      section_name = shstrtab + shdr[i].sh_name;
      unsigned long offset = shdr[i].sh_offset;
      if(!find1 && strcmp(".strtab", section_name) == 0){
        printf("find the .strtab, offset at %lx\n", offset);
        //read out the information
        fseek(fp, offset, SEEK_SET);
        size_t size = shdr[i].sh_size;
        strtab = (char*)malloc(size);
        ret = fread(strtab, size, 1, fp);
        find1 = true;
      }
      else if(!find2 && shdr[i].sh_type == SHT_SYMTAB){
        printf("find the .symtab, offset at %lx\n", offset);
        len = shdr[i].sh_size / sizeof(Elf64_Sym);
        symtab_offset = offset;
        find2 = true;
      }
      if(find1 && find2)break;
    }
    putchar('\n');
    fseek(fp, symtab_offset, SEEK_SET);
    int i = 0;
    Elf64_Sym * sym = (Elf64_Sym *)malloc(sizeof(Elf64_Sym));

    while(len --){
      ret = fread(sym, sizeof(Elf64_Sym), 1, fp);
      printf("%2d: %30s \t %lx \t %lx \t %x\n", i++, sym -> st_name + strtab, sym ->st_value, sym ->st_size, sym -> st_name);
      
    }
	fclose(fp);
	return ;

  }


  return;
}

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
      case 'e': elf_file = optarg; load_elf();break;
      //return 1 means success, here specifies an img file
      case  1 : img_file = optarg; return 0;
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

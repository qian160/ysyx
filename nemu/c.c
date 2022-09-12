#include <stdio.h>
#include <memory.h>
#include <stddef.h>
#include <stdlib.h>
#include <memory.h>
#include <string.h>
#include <elf.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	FILE *fp;
	fp = fopen("hello", "r");
	if (NULL == fp)
	{
		printf("fail to open the file");
		exit(0);
	}

	Elf64_Ehdr elf_head;
	//get the ELF head
	if(fread(&elf_head, sizeof(Elf64_Ehdr), 1, fp) == 0)   //fread参数1：读取内容存储地址，参数2：读取内容大小，参数3：读取次数，参数4：文件读取引擎
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
	char * strtab;
	int len = 0;

	//find the wanted section names(symtab and) in shstrtab
	char * section_name = shstrtab;
	int64_t symtab_offset, strtab_offset;		//used to reset the file pointer before reading symtab
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
			fread(strtab, size, 1, fp);
			strtab_offset = offset;
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
		fread(sym, sizeof(Elf64_Sym), 1, fp);
		printf("%2d: %30s \t %lx \t %lx \t %x\n", i++, sym -> st_name + strtab, sym ->st_value, sym ->st_size, sym -> st_name);
		
	}
	
	fclose(fp);
	return 0;
}
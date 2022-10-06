#include"difftest.h"
#include<stdexcept>
#include<memory>
#include<iostream>
using namespace std;
extern char * img_file;

void init_difftest(){
    std::string diff = "/home/s081/Downloads/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    //std::shared_ptr<void> handle =  std::make_shared<void>(dlopen(diff.c_str(), RTLD_LAZY));
    void * handle = dlopen(diff.c_str(), RTLD_LAZY);
    try{
        if(!handle)
            throw std::runtime_error("failed to open diff so");
        difftest_init		=	(void (*)(char* ))		 (dlsym(handle, "difftest_init"));
        difftest_checkregs	=	(bool (*)(uint64_t))	 (dlsym(handle, "difftest_checkregs"));
        difftest_regcpy		=	(void (*)(void *, bool)) (dlsym(handle, "difftest_regcpy"));
        difftest_exec		=	(void (*)(int)) 		 (dlsym(handle, "difftest_exec"));
        if(!difftest_init || !difftest_checkregs || !difftest_exec || !difftest_regcpy)
            throw std::runtime_error("failed to find functions in so");
        cout << "\n\n" << img_file << "nishiyige\n\n";
        difftest_init(img_file);
    }
    catch(std::runtime_error e){
        std::cout << e.what() << std::endl;
        exit(0);
    }

}
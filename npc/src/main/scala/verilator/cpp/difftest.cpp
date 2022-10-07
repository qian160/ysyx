#include"difftest.h"
#include<stdexcept>
#include<memory>
#include<iostream>

extern char * img_file;

void init_difftest()
{
    const std::string diff = "/home/s081/Downloads/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so";
    //std::shared_ptr<void> handle =  std::make_shared<void>(dlopen(diff.c_str(), RTLD_LAZY));
    void * handle = dlopen(diff.c_str(), RTLD_LAZY);
    try{
        if(!handle)
            throw std::runtime_error("failed to open diff so");

        if(!(difftest_init = init(dlsym(handle, "difftest_init"))))
            throw std::runtime_error("can't find difftest_init");

        if(!(difftest_checkregs	= checkregs(dlsym(handle, "difftest_checkregs"))))
            throw std::runtime_error("can't find difftest_checkregs");

        if(!(difftest_regcpy =	regcpy(dlsym(handle, "difftest_regcpy"))))
            throw std::runtime_error("can't find diftest_regcpy");

        if(!(difftest_exec = exec(dlsym(handle, "difftest_exec"))))
            throw std::runtime_error("can't find difftest_exec");

        if(!(npc_timer = (uint64_t*)dlsym(handle, "npc_timer")))
            throw std::runtime_error("can't find npc_timer");

        //everything is okay
        difftest_init(img_file);
    }
    catch(std::runtime_error e){
        std::cout << e.what() << std::endl;
        exit(0);
    }
}
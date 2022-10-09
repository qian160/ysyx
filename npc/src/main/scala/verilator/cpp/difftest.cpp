#include"difftest.h"
#include<stdexcept>
#include<memory>
#include<iostream>
using namespace std;
/*
    1. let ref execuate first, but don't check regs now(this updates the ref's timer)
    2. update dut's timer using ref's new value
    3. let dut execuate 
    4. check regs
*/
//extern char * img_file;
extern shared_ptr<string> img_file;

void init_difftest()
{
    //the constuctor of smart pointer is 'explicit', so an implict type convertion
    //can't happen, which means you can't use '=' to initialize a smart pointer
    std::shared_ptr<std::string> diff(new string(DIFF), [](string *s){delete s;cout << "diff removed\n";});
    //can't use void, since smart pointer doesn't know how to remove a void type pointer
    //std::shared_ptr<void> handle(dlopen((*diff).c_str(), RTLD_LAZY), [](void *p){cout << "handle removed\n";delete (char *)p;});
    void * handle = dlopen((*diff).c_str(), RTLD_LAZY); //how to remove this?
    try{
        if(!handle)
            throw std::runtime_error("failed to open diff so");

        if(!(difftest_init = init(dlsym(handle, "difftest_init"))))
            throw std::runtime_error("can't find difftest_init");

        if(!(difftest_checkregs	= checkregs(dlsym(handle, "difftest_checkregs"))))
            throw std::runtime_error("can't find difftest_checkregs");

        if(!(difftest_regcpy =	regcpy(dlsym(handle, "difftest_regcpy"))))
            throw std::runtime_error("can't find diftest_regcpy");

        if(!(difftest_exec = exec(dlsym(handle, "difftest_ref_exec_once"))))
            throw std::runtime_error("can't find difftest_exec");

        if(!(npc_timer = (uint64_t*)dlsym(handle, "npc_timer")))
            throw std::runtime_error("can't find npc_timer");

        //everything is okay
        difftest_init(img_file.get()->c_str());
    }
    catch(std::runtime_error e){
        std::cout << e.what() << std::endl;
        exit(0);
    }
}
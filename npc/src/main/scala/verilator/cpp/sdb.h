#include<iostream>
#include<unordered_map>

typedef struct{
    uint64_t gpr[32];
    uint64_t pc;
}CPU_state;

#define TEST_PATH   string("/home/s081/Downloads/ysyx-workbench/am-kernels/tests/cpu-tests/build/")
#define DEFAULT_IMG string("/home/s081/Downloads/ysyx-workbench/npc/src/main/scala/img/file")
int cmd_h(std::string args);
int cmd_c(std::string args);
int cmd_q(std::string args);
int cmd_s(std::string args);
int cmd_i(std::string args);
//int cmd_x(std::string args);
//int cmd_p(std::string args);
//int cmd_w(std::string args);
//int cmd_d(std::string args);
//int cmd_b(std::string args);
typedef struct {
    const char *name;
    const char *description;
    int (*handler) (std::string);
    const char * Usage;
}cmd;

static std::unordered_map<char, cmd> cmd_table = {
    {'h',   cmd{"h",    "Display informations about commands",    cmd_h,      "help [cmd]. default all"}},
    {'c',   cmd{"c",    "Continue the execution of the program",  cmd_c,      "no argument"}},
    {'q',   cmd{"q",    "Exit the program",                       cmd_q,      "no argument"}},
    {'s',   cmd{"s",    "Step and execuate n instrction",         cmd_s,      "s [num], default 1"}},
    {'i',   cmd{"i",    "show information",                       cmd_i,      "r"}},
};

#include<iostream>
#include<unordered_map>
#include<functional>
typedef struct{
    uint64_t gpr[32];
    uint64_t pc;
}CPU_state;

using namespace std;

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
    //const std::string name;       //not needed, use map iterator's pair.first
    const std::string description;
    std::function<int(string)> handler;
    const std::string Usage;
}cmd;

static std::unordered_map<char, cmd> cmd_table = {
    {'h',   cmd{"Display informations about commands",    cmd_h,      "help [cmd]. default all"}},
    {'c',   cmd{"Continue the execution of the program",  cmd_c,      "no argument"}},
    {'q',   cmd{"Exit the program",                       cmd_q,      "no argument"}},
    {'s',   cmd{"Step and execuate n instrction",         cmd_s,      "s [num], default 1"}},
    {'i',   cmd{"show information",                       cmd_i,      "r"}},
};

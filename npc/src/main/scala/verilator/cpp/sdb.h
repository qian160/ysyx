#include<iostream>
#include<map>
int cmd_h(std::string args);
int cmd_c(std::string args);
int cmd_q(std::string args);
int cmd_s(std::string args);
//int cmd_i(std::string args);
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

static std::map<char, cmd> cmd_table = {
    {'h',   cmd{"h",    "Display informations about commands",    cmd_h,      "help [cmd]. default all"}},
    {'c',   cmd{"c",    "Continue the execution of the program",  cmd_c,      "no argument"}},
    {'q',   cmd{"q",    "Exit the program",                       cmd_q,      "no argument"}},
    {'s',   cmd{"s",    "Step and execuate n instrction",         cmd_s,      "s [num], default 1"}},
};

/*
static struct cmd{
    const char *name;
    const char *description;
    int (*handler) (std::string);
    const char * Usage;
} cmd_table [] = {
    {"h",      "Display informations about commands. Can take an argument",    cmd_h,      "help (cmd), show cmd's description and usage. If default show all but without usage"},
    {"c",      "Continue the execution of the program",                        cmd_c,      "no argument"},
    {"q",      "Exit NEMU",                                                    cmd_q,      "no argument"},
    {"s",      "Step and execuate n instrction",                               cmd_s,      "s (num), default -1"},
    {"i",      "Print the specific information. See help info",                cmd_i,      "info {r/w/reg_name}"},
    {"x",      "Examine the memory",                                           cmd_x,      "x num expr"},
    {"p",      "Print the expression's value",                                 cmd_p,      "p expr"},
    {"w",      "Add or delete watchpoint.",                                    cmd_w,      "w a expr, w d num0, num1, ..."},
    {"d",      "disasmble the next n inst. Or starting at other address ",     cmd_d,      "d n (expr). the second arg is optional"},
    {"b",      "set breakpoints at some address. A wrap function of cmd_w",    cmd_b,      "b expr. In fact this is just a wrap of watchpoints"},


};
*/
#define NR_CMD (sizeof(cmd_table) / sizeof(cmd_table[0]) )

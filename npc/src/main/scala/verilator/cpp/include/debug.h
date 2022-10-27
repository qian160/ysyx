#include<string>

#define _red 	"\033[1;31m"
#define _green 	"\033[1;32m"
#define _yellow  "\033[1;33m"
#define _blue    "\033[1;34m"
#define _magenta "\033[1;35m"
#define _cyan 	"\033[1;36m"
#define _white 	"\033[1;37m"
#define _pink 	"\033[1;38m"

#define normal "\033[0m"

static inline std::string Red(std::string str){
    return _red + str + normal;
}
static inline std::string Yellow(std::string str){
    return _yellow + str + normal;
}
static inline std::string Green (std::string str){
    return _green + str + normal;
}
static inline std::string Cyan(std::string str){
    return _cyan + str + normal;
}
static inline std::string Pink(std::string str){
    return _pink + str + normal;
}
static inline std::string Magenta(std::string str){
    return _magenta + str + normal;
}

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_FG_PINK    "\33[1;38m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;45m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define Log(format, ...) \
    printf(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Log_Color(color, format, ...) \
    printf(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_##color) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Assert(cond, format, ...) \
    do { \
    if (!(cond)) { \
        fflush(stdout); \
        fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__); \
        assert(cond); \
    } \
    } while (0)

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#define TODO() panic("please implement me")
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
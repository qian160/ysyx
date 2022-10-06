#define red 	"\033[1;31m"
#define green 	"\033[1;32m"
#define yellow  "\033[1;33m"
#define blue    "\033[1;34m"
#define magenta "\033[1;35m"
#define cyan 	"\033[1;36m"
#define white 	"\033[1;37m"
#define pink 	"\033[1;38m"

#define normal "\033[0m"

#include<string>
using namespace std;

static inline string Red(string str){	 return red + str + normal;}
static inline string Yellow(string str){ return yellow + str + normal;}
static inline string Green(string str){	 return green + str + normal;}
static inline string Cyan(string str){	 return cyan + str + normal;}
static inline string Pink(string str){	 return pink + str + normal;}
static inline string Magenta(string str){return magenta + str + normal;}

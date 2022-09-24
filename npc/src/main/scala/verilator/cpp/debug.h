#include<iostream>
#include<fstream>

#include<verilated.h>
#include<VTOP.h>
#include<svdpi.h>
#include<verilated_vcd_c.h>
#include<svdpi.h>
#include<VTOP__Dpi.h>


using namespace std;
#define red 	"\033[1;31m"
#define green 	"\033[1;32m"
#define yellow  "\033[1;33m"
#define blue    "\033[1;34m"
#define magenta "\033[1;35m"
#define cyan 	"\033[1;36m"
#define white 	"\033[1;37m"
#define pink 	"\033[1;38m"

#define normal "\033[0m"

string test_path = "/home/s081/Downloads/ysyx-workbench/am-kernels/tests/cpu-tests";
string Red(string str){
	return red + str + normal;
}

string Yellow(string str){
	return yellow + str + normal;
}

string Green(string str){
	return green + str + normal;
}

string Cyan(string str){
	return cyan + str + normal;
}

string Pink(string str){
	return pink + str + normal;
}

string Magenta(string str){
	return magenta + str + normal;
}


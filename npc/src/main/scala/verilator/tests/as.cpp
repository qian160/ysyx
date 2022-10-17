#include<iostream>
#include<fstream>
#include<regex>
#include<stdexcept>
using namespace std;

regex addr("[0-9a-f]{1,}");
regex inst("\\s[0-9a-f]{8}\\s");

int main(int argc, char ** argv)
{
	ifstream in;
	ofstream out;
	try{
	
		in.open("./asm.txt");	
		out.open("../../inst_rom");
		if(in.fail() || out.fail())\
			throw runtime_error("file open failed");
		string line;
		int n = 7;
		while(n--)getline(in,line);	//start at line 7
		while(getline(in,line))
		{
			smatch m;
			regex_search(line, m, inst, regex_constants::match_default);
			if(m.empty())continue;
			string inst = m.str().substr(1, 8);
			cout << inst << endl;	//the 1st char is \t or ' '
			out << inst << endl;
		}

	}catch(runtime_error err){
		cout << err.what() << endl;
	}
	in.close();
	out.close();
}

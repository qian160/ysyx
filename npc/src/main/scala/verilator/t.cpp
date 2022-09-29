#include<map>
#include<iostream>
#include<string>

using namespace std;

int main()
{
	map<int, int> m = {
		{4, 6},
		{3, 5},
	};

	cout << m[3] << endl;
}

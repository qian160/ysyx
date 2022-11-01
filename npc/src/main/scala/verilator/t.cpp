#include<iostream>
#include<memory>
using namespace std;

int main()
{
	shared_ptr<int> p(new int(114514));
	p = make_shared<int>(1919810);
	cout << *p << endl;
}

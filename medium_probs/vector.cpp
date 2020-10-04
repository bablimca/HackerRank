#include <iostream>
#include <vector>
#pragma pack(1)
using namespace std;
class A
{
	int a;
	virtual int aa() = 0;
	virtual int ab() = 0;
};
class B : public A
{
	int aa {};
	int ab {};
	int a;
};
class C : public B
{
	int aa {};
	int ab {};
};

int main()
      cout << sizeof(C) << endl; 
}    

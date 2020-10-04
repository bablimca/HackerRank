#include <iostream>
#include <algorithm>
using namespace std;

void Print(int (&ar)[5])
{

	auto first = std::begin(ar);
	auto last = std::end(ar);
	while(first != last)
	{
		cout << *first << endl;
		first++;
	}
}

int main()
{
	int a[] = {10,20,30,40,50};
	for(auto &p:a)
	{
		p = p*2;
	}
	Print(a);
	return 0;
}



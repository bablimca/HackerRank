#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "You must know, first may no longer be first if second comes first";
	string target("first"); int count = 0;
	string::size_type  index = str.find(target);
	while(index != string::npos)
	{
		count++;
		index = str.find(target, index + 1 );
	}
	cout << "total no. of '" << target << "' string = " << count << endl;
	return 0;
}

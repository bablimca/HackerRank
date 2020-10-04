#include <iostream>


int main()
{
	using namespace std;
	int temp1 = 300, temp2 = 352;
	int *p2 = &temp2;
	cout << "temp1 = " << temp1 << ",temp2 = " << temp2 << endl;
	p2 = p2 + 1;
	cout << "*p2 = " << *p2 << endl;
	return 0;
/* 
 * temp1 = 500
 * temp2 = 496
 *
 *
 */
}

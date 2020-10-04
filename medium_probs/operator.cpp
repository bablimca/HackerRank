#include<iostream>

using namespace std;


class MyOperatorTest
{
	int val;

	public:
	MyOperatorTest()
	{
		val = 0;
	}
	MyOperatorTest(int a): val(a)
	{
	}
	MyOperatorTest(const MyOperatorTest &rho)
	{
		cout << "Copy constructor " << endl;
		*this = rho;
	}
	int getVal() const {return this->val; }

	MyOperatorTest operator+(const MyOperatorTest &rho)
	{
		MyOperatorTest copy;
	        copy.val =	this->val + rho.val;
		return copy;
	}
};

ostream& operator<<(ostream &sout,const MyOperatorTest &obj)
{
	sout << obj.getVal();
	return sout;
}

int main()
{
	MyOperatorTest ob1(5), ob2(10), ob3;
	MyOperatorTest ob4(ob1);
	cout << ob4.getVal() << endl;
	return 0;

}

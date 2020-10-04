#include <iostream>
#include <string>

using namespace std;

class Person
{
	protected:
	string type;
public:
	Person()
	{
		cout << "Person constructor " << endl;
		type = "Person";
	}
	virtual void fun() = 0;
	virtual void GetType() {cout << type << endl;}
};

class Student : public Person
{
	public:
		Student()
		{
			cout << "Student Constructor " << endl;
			type = "Student";
		}
		void fun()
		{
			cout << "Student playing cricket" << endl;
		}
	void GetType() {cout << type << endl;}

};
int main()
{
	Person *p = new Student();
	p->GetType();
	return 0;
}

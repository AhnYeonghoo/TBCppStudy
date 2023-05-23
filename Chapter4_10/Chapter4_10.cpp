#include <iostream>
#include <string>
using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;
	
	void printPerson()
	{
		cout << name << endl;
		cout << age << endl;
		cout << height << endl;
		cout << weight << endl;
	}

};

struct Family
{
	Person me;
	Person mom;
	Person dad;
	

};

Person getMe()
{
	Person me{ 2.0, 100.0, 20, "kim" };
	return me;
}

struct Employee
{
	short id; // 2byte
	int age; // 4byte
	double wage; // 8byte
};

int main()
{
	Person me{ 2.0, 100.0, 20, "jack jack" };
	Person me2(me);
	Person me3;
	me3 = me2;

	me.printPerson();
	me2.printPerson();
	me3.printPerson();
	cout << &me << endl;
	cout << &me2 << endl;
	cout << &me3 << endl;

	Person me4 = getMe();
	me4.printPerson();

	Employee emp1;

	cout << sizeof(emp1) << endl;

	cout << sizeof(Employee) << endl;

	return 0;
}
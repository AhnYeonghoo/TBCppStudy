#include <iostream>

using namespace std;

struct Person
{
	int age;
	double weight;
};

int main18()
{
	Person person;
	
	person.age = 5;
	person.weight = 30;
	
	Person& ref = person;
	ref.age = 10;
	ref.weight = 100;

	cout << person.age << endl;
	cout << person.weight << endl;
	
	Person* ptr = &person;
	
	ptr->age = 30;
	ptr->weight = 300;

	cout << person.age << endl;
	cout << person.weight << endl;

	Person& ref2 = *ptr;

	cout << &person << endl;
	cout << &ref2 << endl;
	cout << ptr << endl;
	cout << &ref << endl;
	
	return 0;
}
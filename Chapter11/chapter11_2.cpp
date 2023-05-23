#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main2()
{
	Student std("Jack Jack");
	Teacher tea1("Dr. H");
	std.setName("Jack Jack");
	std.setIntel(123);

	tea1.setName("Dr. K");
	cout << tea1.getName() << endl;
	cout << std.getName() << endl;
	cout << std.getIntel() << endl;
	std.doNothing();
	tea1.doNothing();
	std.study();
	tea1.teach();

	Person person;
	person.setName("Mr Incredible");
	cout << person.getName() << endl;

	return 0;
}
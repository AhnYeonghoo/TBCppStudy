#include <iostream>

using namespace std;

typedef int* pint;

void foo(const int* ptr)
{
	cout << ptr << " " << &ptr << " " << *ptr <<  endl;
}

void fooTwo(pint ptr)
{
	cout << ptr << " " << &ptr << " " << *ptr << endl;
}

int main4()
{
	int value = 5;
	
	cout << value << " " << &value << endl;
	
	int* ptr = &value;
	
	foo(ptr);

	cout << &ptr << endl;


	return 0;
}
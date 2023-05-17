#include <iostream>
#include <typeinfo>

using namespace std;


int main8()
{
	int x = 5;
	
	cout << x << endl;
	cout << &x << endl;

	// de-reference operator(*)
	
	int* px = &x;
	
	cout << px << endl;
	cout << *px << endl;
	
	*px = 10;

	cout << x << endl;

	cout << "\n" << endl;
	
	cout << *(&x) << endl;


	int* ptr_x = &x;

	
	cout << ptr_x << endl;
	cout << &ptr_x << endl;

	cout << sizeof(ptr_x) << endl;

	double d = 1.0;
	double* ptr_d = &d;
	cout << ptr_d << " " << &d << endl;
	cout << *ptr_d << " " << d << endl;

	cout << typeid(*ptr_x).name() << endl;
	cout << typeid(ptr_x).name() << endl;
	cout << typeid(&ptr_x).name() << endl;

	return 0;
}
#include <iostream>

using namespace std;

void doSomething(const int& x)
{
	cout << x << endl;
	cout << &x << endl;
}

int main17()
{
	int x = 5;
	int& ref_x = x;
	
	const int& ref_2 = ref_x;
	cout << &x << endl;
	cout << &ref_x << endl;
	cout << &ref_2 << endl;

	const int& ref_x_two = 3 + 5;

	cout << ref_x_two << endl;
	cout << &ref_x_two << endl;
	
	doSomething(3+5);

	return 0;
}
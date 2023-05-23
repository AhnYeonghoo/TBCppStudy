#include <iostream>

using namespace std;

int main10()
{
	int(*ptr)() = main10;

	cout << main10 << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << ptr() << endl;
	return 0;
}
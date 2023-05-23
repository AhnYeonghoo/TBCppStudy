#include <iostream>

using namespace std;

void doSomething(int& n)
{
	n = 10000;
	cout << &n << endl;
}

void printElements(int(&arr)[5])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}
struct Something
{
	int v1 = 1;
	float f1 = 1;
};
struct Other
{
	Something st;
};
int main16()
{
	int value = 5;
	int* ptr = nullptr;
	ptr = &value;
	
	int& ref = value;
	cout << ref << endl;
	cout << value << endl;

	cout << &ref << endl;
	cout << &value << endl;

	ptr = &ref;
	cout << ptr << endl;
	cout << &ref << endl;
	cout << &value << endl;
	cout << &ptr << endl;

	int x = 10;
	int& ref3 = x;
	
	const int y = 8;
	const int& ref2 = y;

	int x1 = 5;
	int x2 = 10;
	
	int& ref_x = x1;

	cout << ref_x << endl;
	
	ref_x = x2;

	cout << ref_x << endl;

	cout << "\n" << endl;

	int n = 5;
	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;

	const int length = 5;
	int arr[length] = { 1, 2, 3, 4, 5 };

	printElements(arr);
	
	
	Other ot;
	
	int& v1 = ot.st.v1;
	v1 = 1;

	int v = 5;

	int* const ptrr = &v;
	int& refe = v;

	refe = 10;
	*ptrr = 10;
	return 0;
}
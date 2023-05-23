#include <iostream>

using namespace std;

void doSomething(int x)
{
	x = 123;
	cout << x << endl;
}

int main()
{
	int x(0);
	cout << x << endl;
	cout << &x << endl;
	{
		int x = 1;
		cout << x << endl;
		cout << &x << endl;
	}
	{
		int x = 2;
		cout << x << endl;
		cout << &x << endl;

	}
	{
		int x = 3;
		cout << x << endl;
		cout << &x << endl;

		{
			int x = 4;
			cout << x << endl;
			cout << &x << endl;

		}
	}

	int z = 0;
	cout << z << endl;
	doSomething(z);
	cout << z << endl;
	

	return 0;
}
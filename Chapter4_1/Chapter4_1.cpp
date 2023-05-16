#include <iostream>

namespace A
{
	int a = 1;

	void doSomething()
	{
		a += 3;
	}
}

namespace B
{
	int a = 1;
	
	void doSomething()
	{
		a += 5;
	}
}


int main()
{
	using namespace std;

	int apple = 5;
	
	{
		apple = 1;
		cout << apple << endl;
	}

	A::doSomething();
	B::doSomething();

	cout << apple << endl;

	
	return 0;
}

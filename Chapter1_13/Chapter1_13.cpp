#include <iostream>

using namespace std;

namespace MySpace1
{
	int doSomething(int a, int b)
	{
		return a * b;
	}
}

namespace MySpace2
{
	int doSomething(int a, int b)
	{
		return a + b;
	}
}

namespace MySpace3
{
	namespace InnerSpace
	{
		int myFunction()
		{
			return 0;
		}
	}
}

int main()
{
	using namespace MySpace1;
	cout << doSomething(1, 2) << endl;
	cout << MySpace2::doSomething(3, 4) << endl;
	cout << doSomething(3, 4) << endl;
	MySpace3::InnerSpace::myFunction();
	return 0;
}
#include <iostream>

using namespace std;

//void doSomething()
//{
//	try
//	{
//		throw - 1;
//	}
//	catch (...)
//	{
//		cout << "Catch in doSomething()" << endl;
//	}
//}

class A
{
private:
	int x_;
public:
	A(int x) : x_(x)
	{
		if (x <= 0)
			throw 1;
	}
};
class B : public A
{
public:
	B(int x) : A(x) {}
};


int main5()
{
	try
	{
		B b(0);
	}
	catch (...)
	{
		cout << "Catch in main()" << endl;
	}

	return 0;
}
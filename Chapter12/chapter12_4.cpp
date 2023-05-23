#include <iostream>
using namespace std;

class Base
{
public:
	virtual ~Base()
	{
		cout << "~Base()" << endl;
	}
};

class Derived : public Base
{
private:
	int* arr_;
	
public:
	Derived(int length)
	{
		arr_ = new int[length];
	}
	virtual ~Derived() override
	{
		cout << "~Derived()" << endl;
		delete[] arr_;
	}
};

int main4()
{
	
	Derived* derived = new Derived(5);
	Base* base = derived;
	delete base;

	return 0;
}
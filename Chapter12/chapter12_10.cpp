#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	int i_ = 0;
	
	virtual void print()
	{
		cout << "I`m base" << endl;
	}
};

class Derived1 : public Base
{
public:
	int j_ = 1024;
	
	virtual void print() override
	{
		cout << "Im Derived1" << endl;
	}
};

class Derived2 : public Base
{
public:
	std::string name_ = "derived2";

	virtual void print() override
	{
		cout << "Im Derived2" << endl;
	}
};
int main10()
{
	Derived1 d1;
	Base* base = &d1;
	d1.j_;
	
	auto* base_to_d1 = dynamic_cast<Derived1*>(base);

	return 0;
}
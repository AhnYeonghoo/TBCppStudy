#include <iostream>
using namespace std;

class Base
{
protected:
	int i_;
	
public:
	Base(const int& value=0) : i_(value)
	{}

	void print()
	{
		cout << "i`m base" << endl;
	}

	friend std::ostream& operator<< (std::ostream& out, const Base& b)
	{
		cout << "This is base output" << endl;
		return out;
	}
};

class Derived : public Base
{
private:
	double d_;
	
public:
	Derived(const int& i=0, const double& d=0.0) 
		: Base(i), d_(d)
	{}

	void print()
	{
		Base::print();
		cout << "i`m derived" << endl;
	}

	friend std::ostream& operator<< (std::ostream& out, const Derived& d)
	{
		cout << static_cast<Base>(d);
		cout << "This is drived output" << endl;
		return out;
	}
	
};

int main7()
{
	Base base;
	base.print();

	Derived derived;
	derived.print();

	cout << base;
	cout << derived;

	return 0;
}
#include <iostream>

using namespace std;

class A
{
public:
	int value_;
	
	A(const int& input) : value_(input)
	{
		cout << "Constructor" << endl;
	}
	void print()
	{
		cout << "Hello" << endl;
		cout << value_ << endl;
	}

	~A()
	{
		cout << "Destructor" << endl;
	}

	void printDouble()
	{
		cout << value_ * 2 << endl;
	}
};

class Cents
{
private:
	int cents_;
	
public:
	Cents(int cents) : cents_(cents) {}

	int getCents() const { return cents_; }
};

Cents add(const Cents& c1, const Cents& c2)
{
	return Cents(c1.getCents() + c2.getCents());
}

int main13()
{
	A a(1);
	a.print();

	A(2).print();
	
	cout << add(Cents(6), Cents(8)).getCents() << endl;

	return 0;
}
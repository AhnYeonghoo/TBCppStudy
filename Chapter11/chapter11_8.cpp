#include <iostream>
using namespace std;

class Base
{
protected:
	int i_;
public:
	Base(int value) : i_(value)
	{}
	
	void print()
	{
		cout << "im base" << endl;
	}
};

class Derived : public Base
{
private:
	double d_;
	using Base::print;
	void print() = delete;
public:
	Derived(int value) : Base(value)
	{}
	
	using Base::i_;

};
int main8()
{
	Derived derived(7);
	derived.i_ = 10;
	cout << derived.i_ << endl;
	//derived.print();
	return 0;
}
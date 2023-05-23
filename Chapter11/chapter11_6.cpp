#include <iostream>

using namespace std;

class Base
{
private:
	int value_;

public:
	Base(int value) : value_(value)
	{
		
	}

	int getValue()
	{
		return this->value_;
	}

	void setValue(const int& value)
	{
		this->value_ = value;
	}
};

class Derived : public Base
{
public:
	Derived(int value) : Base(value)
	{}

	void setValue(int value)
	{
		
	}
};

int main6()
{

	return 0;
}
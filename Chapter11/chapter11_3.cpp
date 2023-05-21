#include <iostream>

using namespace std;

class Mother
{
private:
	int i_;
	
public:
	Mother(const int& i = 0) : i_(1)
	{
		std::cout << "Mother constructor" << std::endl;
	}


	int getI()
	{
		return this->i_;
	}

	void setI(const int& i)
	{
		this->i_ = i;
	}
};

class Child : public Mother
{
private:
	double d_;

public:
	Child(const double& d = 0) : Mother(1), d_(1.0)
	{
		std::cout << "Child constructor" << std::endl;
	}
};


class A
{
public:
	A()
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C" << endl;
	}
};

int main3()
{
	Child c1;
	C c;
	return 0;
}
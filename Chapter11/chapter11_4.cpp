#include <iostream>
using namespace std;
class Mother
{
private:
	int i_;
	
public:
	Mother(const int& i = 0) : i_(i)
	{
		cout << "Mother Constructor" << endl;
	}
};

class Child : public Mother
{
private:
	float f_;
	
public:
	Child() : Mother(1024), f_(1.0f)
	{
		cout << "Child Constructor" << endl;
	}
};
class A
{
public:
	A(int a)
	{
		cout << "A: " << a << endl;
	}
	~A()
	{
		cout << "A des" << endl;
	}
};

class B : public A
{
public:
	B(int a, double b) : A(a)
	{ 
		cout << "B : " << b << endl;
	}
	~B()
	{
		cout << "B des" << endl;
	}
};

class C : public B
{
public:
	C(int a, double b, char c)
		: B(a, b)
	{
		cout << "C: " << c << endl;
	}
	~C()
	{
		cout << "C des" << endl;
	}
};
int main4()
{
	Child c1;
	
	cout << sizeof(Mother) << endl;
	cout << sizeof(Child) << endl;

	C c(1024, 3.14, 'a');
	
	return 0;
}
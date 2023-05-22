#include <iostream>
#include <functional>
#include <vector>

using namespace std;

class Base
{
public:
	int i_ = 0;
	
	virtual void print() const
	{
		cout << "Im base" << endl;
	}
};

class Derived : public Base
{
public:
	int i_ = 1;
	
	virtual void print() const override
	{
		cout << "I`m derived" << endl;
	}
};

void doSomething(Base& b)
{
	b.print();
}

int main9()
{
	Derived d;
	Base b;

	std::vector<Base*> my_vec;
	my_vec.push_back(&b);
	my_vec.push_back(&d);
	
	for (auto& ele : my_vec)
	{
		ele->print();
	}

	std::vector<std::reference_wrapper<Base>> my_vec2;
	my_vec2.push_back(b);
	my_vec2.push_back(d);
	
	for (auto& ele : my_vec2)
	{
		ele.get().print();
	}
	return 0;
}
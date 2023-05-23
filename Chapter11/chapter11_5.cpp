#include <iostream>
using namespace std;

class Base
{
public:
	int public_;
protected:
	int protected_;
private:
	int private_;
};

class Derived : public Base
{
public:
	Derived()
	{
		
	}
};
int main5()
{
	Base base;
	base.public_ = 123;
	


	return 0;
}
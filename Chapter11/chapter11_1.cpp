#include <iostream>

using namespace std;

class Mother
{
private:
	int i_;
	
public:
	Mother(int i = 0) : i_(i) 
	{
		cout << "Mother Constructor" << endl;
	}

	void setValue(const int& i)
	{
		i_ = i;
	}

	int getValue()
	{
		return i_;
	}

	~Mother()
	{
		cout << "Mother Destructor" << endl;
	}
};

class Child : public Mother
{
private:
	double d_;

public:
	Child(const int& i, const double& d)
		: Mother(i), d_(d) 
	{
		cout << "Child Constructor" << endl;
	}

	void setValue(const int& i, const double& d)
	{
		Mother::setValue(i);
		d_ = d;
	}

	void setValue(const double& d)
	{
		d_ = d;
	}

	double getValue()
	{
		return this->d_;
	}

	~Child()
	{
		cout << "Child Destructor" << endl;
	}
};

class Daughter : public Mother
{

};

class Son : public Mother
{
	
};

int main1()
{

	Mother mother(1024);
	cout << mother.getValue() << endl;
	
	Child child(1024, 111.123);
	cout << child.getValue() << endl;
	
	return 0;
}
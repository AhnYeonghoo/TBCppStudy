#include <iostream>

using namespace std;

class Fraction
{
private:
	int numerator_;
	int denominator_;
	
public:
	void print()
	{
		cout << numerator_ << " / " << denominator_ << endl;
	}
	
	Fraction(const int &numerator, const int &denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction()
	{
		numerator_ = denominator_ = 0;
	}
};

class Second
{
public:
	Second()
	{
		cout << "Class Second constructor()" << endl;
	}
};
class First
{
	Second sec;
	
public:
	First()
	{
		cout << "Class First constructor()" << endl;
	}
};

class PrivateClass
{
private:
	PrivateClass()
	{
		
	}
};

int main3()
{
	Fraction *frac = new Fraction(1, 2);
	frac->print();
	
	First first;

	delete frac;
	return 0;
	
}
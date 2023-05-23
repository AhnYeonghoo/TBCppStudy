#include <iostream>

using namespace std;

class Cents
{
private:
	int cents_;
	
public:
	Cents(int cents = 0) : cents_(cents) {}
	int getCents() const { return this->cents_; }
	int& getCents()  { return this->cents_; }
	
	Cents operator+(const Cents& c1)
	{
		return Cents(c1.cents_ + this->cents_);
	}

};

Cents add(const Cents& c1, const Cents& c2)
{
	return c1.getCents() + c2.getCents();
}


int main1()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum = add(cents1, cents2);

	cout << sum.getCents() << endl;
	cout << (cents1 + cents2).getCents() << endl;
	
	

	// ?: :: sizeof
	return 0;
}
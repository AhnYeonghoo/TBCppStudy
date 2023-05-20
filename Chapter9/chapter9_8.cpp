#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents_;
	
public:
	Cents(int cents = 0) : m_cents_(cents) {}
	
	int getCents() { return m_cents_;}
	void setCents(int cents) { this->m_cents_ = cents; }
	
	operator int()
	{
		cout << "cast here" << endl;
		return m_cents_;
	}
};

class Dollar
{
private:
	int m_dollars_ = 0;

public:
	Dollar(const int& input) : m_dollars_(input) {}

operator Cents()
{
	return Cents(m_dollars_ * 100);
}
};


void printInt(const int& value)
{
	cout << value << endl;
}

int main8()
{
	Cents cents(7);
	int value = (int)cents;
	value = static_cast<int>(cents);
	printInt(cents);

	Dollar dol(2);

	Cents cents2 = dol;

	printInt(cents2);
	return 0;
}
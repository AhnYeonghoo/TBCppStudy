#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents_;
	
public:
	Cents(int cents = 0) : m_cents_(cents) {}
	int getCents() const { return this->m_cents_; }
	int& getCents() { return this->m_cents_; }

	friend std::ostream& operator<< (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents_;
		return out;
	}

	Cents operator- () const
	{
		return Cents(-m_cents_);
	}

	bool operator! () const
	{
		return this->m_cents_ == 0 ? true : false;
	}

};

int main3()
{
	Cents cents1(6), cents2(0);
	bool temp = !cents2;
	
	cout << cents1 << endl;
	cout << cents2 << endl;
	cout <<  -cents1 << endl;
	cout << !cents1 << endl;
	cout << !cents2 << endl;
	cout << temp << endl;
	return 0;
}
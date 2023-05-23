#include <iostream>

using namespace std;

class Digit
{
private:
	int m_digit_;
	
public:
	Digit(int digit = 0) : m_digit_(digit) {}

	//prefix
	Digit& operator++ ()
	{
		++m_digit_;
		return *this;
	}

	//postfix
	Digit operator++ (int)
	{
		Digit temp(m_digit_);
		++(*this);
		return temp;
	}

	
	
	friend std::ostream& operator<< (std::ostream& out, const Digit& d)
	{
		out << d.m_digit_;
		return out;
	}
};
int main5()
{
	int a = 10;

	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	Digit d(5);

	cout << ++d << endl;

	cout << d++ << endl;
	cout << d << endl;
	
	return 0;
}
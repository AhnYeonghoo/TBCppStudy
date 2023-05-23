#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator_;
	int m_denominator_;
	
public:
	Fraction(int num = 0, int den = 1)
		: m_numerator_(num), m_denominator_(den) 
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction)
		: m_numerator_(fraction.m_numerator_)
		, m_denominator_(fraction.m_denominator_)
	{
		cout << "Copy Constructor" << endl;
	}

	friend std::ostream& operator<< (std::ostream& out, const Fraction& f)
	{
		cout << f.m_numerator_ << " / " << f.m_denominator_ << endl;
		return out;
	}
	
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	return temp;
}

int main9()
{
	Fraction frac(3, 5);
	Fraction frac2 = frac;
	Fraction frac3(Fraction(3, 10));
	Fraction result = doSomething();

	cout << result << endl;
	cout << &frac2 << endl;
	cout << &frac << endl;
	cout << &frac3 << endl;
	cout << &result << endl;
	cout << frac << " "  << frac2 << " " << frac3 << endl;

	return 0;
}
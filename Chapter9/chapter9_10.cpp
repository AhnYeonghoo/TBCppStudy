#include <iostream>
#include <cassert>

using namespace std;

class Fraction
{
private:
	int m_numerator_;
	int m_denominator_;
	
public:
	Fraction(char) = delete;

	explicit Fraction(int num = 0, int den = 1)
		: m_numerator_(num), m_denominator_(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction)
		: m_numerator_(fraction.m_numerator_), m_denominator_(fraction.m_denominator_)
	{
		cout << "Copy Constructor" << endl;
	}

	friend std::ostream& operator<< (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator_ << " / " << f.m_denominator_ << endl;
		return out;
	}
};

void doSomething(Fraction frac)
{
	cout << frac << endl;
}

int main10()
{
	// Fraction frac2('c'); -> deleted function
	Fraction frac(7);
	// doSomething(6); -> explicit constructor
	doSomething(frac);
	
	return 0;
}
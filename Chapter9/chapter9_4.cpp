#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Cents
{
private:
	int m_cents_;
	
public:
	Cents(int cents = 0) : m_cents_(cents) {}
	int getCents() const { return this->m_cents_; }
	int& getCents() { return m_cents_; }
	
	friend bool operator== (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ == c2.m_cents_;
	}

	friend bool operator!= (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ != c2.m_cents_;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		out << cents.m_cents_;
		return out;
	}

	friend bool operator > (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ > c2.m_cents_;
	}

	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ < c2.m_cents_;
	}

	friend bool operator <= (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ <= c2.m_cents_;
	}

	friend bool operator >= (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents_ >= c2.m_cents_;
	}
};

int main4()
{
	Cents cents1(6), cents2(0);
	
	std::vector<Cents> arr(20);
	for (unsigned int i = 0; i < 20; i++)
	{
		arr[i].getCents() = i;
	}

	std::random_shuffle(std::begin(arr), std::end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(std::begin(arr), std::end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;


	if (cents1 == cents2)
	{
		cout << "Equals" << endl;
	}
	else
	{
		cout << "Not Equals" << endl;
	}

	cout << std::boolalpha;

	return 0;
}
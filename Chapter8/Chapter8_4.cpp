#include <iostream>

using namespace std;

class B
{
private:
	int b_;
	
public:
	B(const int& b_in) : b_(b_in) {}
	int getB()
	{
		return b_;
	}
};

class Something
{
private:
	int i_;
	double d_;
	char c_;
	int arr_[5];
	B b_;
	
public:
	Something() : i_(1), d_(3.14), c_('a'), arr_{ 1,2,3,4,5 }, b_(i_ - 1)
	{
		std::cout << "default constructor" << std::endl;
	}
	
	void print()
	{
		cout << i_ << " " << d_ << " " << c_ << " " << b_.getB() << endl;
		for (auto& i : arr_)
		{
			cout << i << " ";
		}
		cout << endl;
	}
};

int main4()
{
	Something som;
	som.print();
	
	return 0;

}
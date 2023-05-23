#include <iostream>

using namespace std;

class Something3
{
public:
	int value_ = 1;
	static int s_value_;
	
};

int Something3::s_value_ = 1;

int generateId()
{
	static int id = 0;
	return ++id;
}

int main10()
{

	cout << Something3::s_value_ << endl;
	cout << &Something3::s_value_ << endl;

	Something3 st1;
	Something3 st2;
	
	st1.value_ = 2;

	cout << &st1.value_ << endl;
	cout << st1.value_ << endl;
	cout << &st2.value_ << endl;
	cout << st2.value_ << endl;

	cout << st1.s_value_ << endl;
	cout << &st1.s_value_ << endl;
	cout << st2.s_value_ << endl;
	cout << &st2.s_value_ << endl;

	return 0;
}
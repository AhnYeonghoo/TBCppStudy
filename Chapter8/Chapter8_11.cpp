#include <iostream>

using namespace std;

class Something
{
public:
	class init_
	{
	public:
		init_()
		{
			value_ = 10;
		}
	};

private:
	static int value_;
	int m_value_ = 10;
	static init_ init;

public:


	static int getValue()
	{
		return value_;
	}
	
	int temp()
	{
		return this->m_value_ + value_;
	}
	
};

int Something::value_ = 1024;

int main11()
{
	cout << Something::getValue() << endl;

	
	//cout << s1.value_ << endl;
	Something s1;
	int (Something:: * fptr1)() = &Something::temp;

	int(* ptr2)() = &Something::getValue;
	
	
	cout << (s1.*fptr1)() << endl;
	cout << ptr2() << endl;

	Something::init_ s();



	return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Something
{

private:
	int value_ = 0;

public:

	void setValue(int value)
	{
		this->value_ = value;
	}
	
	int getValue() const
	{
		return this->value_;
	}
};

/*
void print(Something st)
{
	std::cout << st.getValue() << std::endl;
	std::cout << &st << std::endl;

}
*/

class Something2
{
public:
	string value_ = "default";
	
	const string& getValue() const
	{
		cout << "const version" << endl;
		return value_;
	}

	string& getValue()
	{
		cout << "non const version" << endl;
		return value_;
	}

};

void print(const Something& st) // -> СіЧт!
{
	std::cout << st.getValue() << std::endl;
	std::cout << &st << std::endl;
}

int main9()
{
	Something something;

	print(something);
	std::cout << &something << std::endl;

	std::cout << std::endl;
	
	Something2 som;
	som.getValue();
	const Something2 som2;
	som2.getValue();

	return 0;
}
#include <iostream>

using namespace std;

class Simple
{
private:
	int id_;
	
public:
	Simple(const int& id_in) : id_(id_in) 
	{
		cout << "Constructor " << id_ << endl;
	}

	~Simple() 
	{
		cout << "Destructor " << id_ << endl;
	}
};

class IntArray
{
private:
	int* arr_ = nullptr;
	int length_ = 0;
	
public:
	IntArray(const int length)
	{
		length_ = length;
		arr_ = new int[length];
	}

	int getLength()
	{
		return length_;
	}

	
	~IntArray()
	{
		if (arr_ != nullptr)
			delete arr_;
	}
};

int main6()
{
	while (true)
	{
		IntArray int_arr(10000);
	}
	
	
	return 0;
}
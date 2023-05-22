#include <iostream>
using namespace std;

template<typename T>
class A
{
private:
	T value_;
	
public:
	A(const T& value) : value_(value) {}
	
	void print()
	{
		cout << value_ << endl;
	}
};

template<typename T>
class A<T*>
{
private:
	T* value_;

public:
	A(T* value) : value_(value) {}

	void print()
	{
		cout << *value_ << endl;
	}
};


int main7()
{
	A<int> a_int(123);
	a_int.print();

	int temp = 456;
	
	A<int*> a_int_ptr(&temp);
	a_int_ptr.print();

	double temp_d = 3.141592;
	A<double*> a_double_ptr = &temp_d;
	a_double_ptr.print();
	return 0;
}
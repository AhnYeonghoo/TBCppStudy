#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{
	}

	void doSomething()
	{
		cout << typeid(T).name() << endl;
	}
	void test() {}

	~A(){}
};

template<>
class A<char>
{
public:
	A(const char& input) 
	{}

	void doSomething()
	{
		cout << "Char type specialization" << endl;
	}
};

int main5()
{
	A<int>		a_int(1);
	A<double>	a_double(3.14);
	A<char>		a_char('a');

	a_int.doSomething();
	a_double.doSomething();
	a_char.doSomething();
	a_int.test();
	a_double.test();
	//a_char.test();

	cout << endl;

	Storage8<int> intStorage;

	for (int count = 0; count < 8; count++)
	{
		intStorage.set(count, count);
	}
	
	for (int i = 0; i < 8; i++)
	{
		cout << intStorage.get(i) << endl;
	}
	cout << "Sizeof Storage8<int>" << sizeof(Storage8<int>) << endl;


	Storage8<bool> boolStorage;
	for (int i = 0; i < 8; i++)
		boolStorage.set(i, i & 3);

	for (int i = 0; i < 8; i++)
		cout << (boolStorage.get(i) ? "true" : "false") << endl;

	cout << "Sizeof Storage8<bool>" << sizeof(Storage8<bool>) << endl;

	return 0;
}
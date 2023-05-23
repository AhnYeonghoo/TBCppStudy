#include <iostream>
using namespace std;

class Exception
{
public:
	virtual void report()
	{
		cerr << "Exception report" << endl;
	}
};

class ArrayException : public Exception
{
public:
	void report() override
	{
		cerr << "Array exception" << endl;
	}
};

class MyArray
{
private:
	int data_[5];
	
public:
	int& operator[] (const int& index)
	{
		if (index < 0 || index >= 5) throw ArrayException();
		return data_[index];
	}
};





void doSomething()
{
	MyArray my_array;
	try
	{
		my_array[100];
	}
	catch (const int& x)
	{
		cerr << "Exception " << x << endl;
	}
	catch (Exception& e)
	{
		cout << "Catch 1" << endl;
		e.report();
	}
	catch (ArrayException& e)
	{
		cout << "Catch 2" << endl;
		e.report();
	}
}

int main3()
{

	try 
	{
		doSomething();
	}
	catch (ArrayException& e)
	{
		cout << "Main()" << endl;
		e.report();
	}
	return 0;
}
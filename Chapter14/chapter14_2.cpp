#include <iostream>

using namespace std;

void last()
{
	cout << "last" << endl;
	cout << "Throws exception" << endl;
	throw - 1;
	cout << "end last" << endl;
}

void third()
{
	cout << "Third" << endl;
	last();
	cout << "end third" << endl;
}

void second()
{
	cout << "second" << endl;
	try
	{
		third();
	}
	catch (double)
	{
		std::cerr << "second caught int exception" << endl;
	}
}

void first()
{
	cout << "First" << endl;
	try
	{
		second();
	}
	catch (int)
	{
		std::cerr << "first caught int exception" << endl;
	}

	cout << "End first" << endl;
}

int main2()
{
	cout << "Start" << endl;
	try
	{
		first();
	}
	catch (int)
	{
		std::cerr << "Main caught int exception" << endl;
	}

	cout << "end main" << endl;
	
	
	return 0; 
}
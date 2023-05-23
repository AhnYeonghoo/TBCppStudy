#include <iostream>
#include "MyArray2.h"

using namespace std;

int main3()
{
	MyArray2<double, 100> my_array;
	
	for (int i = 0; i < my_array.getLength(); i++)
	{
		my_array[i] = i + 65;
	}

	my_array.print();

	return 0;
}
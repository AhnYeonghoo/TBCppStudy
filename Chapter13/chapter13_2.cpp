#include <iostream>
#include "MyArray.h"

using namespace std;


int main2()
{
	MyArray<int> my_arr(10);

	for (int i = 0; i < my_arr.getLength(); ++i)
	{
		my_arr[i] = i * 10;
	}
	my_arr.print();

	return 0;
}

template class MyArray<int>;
#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getReference(int x)
{
	int value = x * 2;
	return &value;
}

int* allocateMemory(int size)
{
	return new int[size];
}

int& getByReference(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_arr, int index)
{
	return my_arr[index];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1, 2, 3, 4 };
	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double b = 3.14;
	return std::make_tuple(a, b);

}

int main5()
{
	int value = getValue(3);
	int value2 = *getReference(3);

	int* arr = allocateMemory(1024);
	cout << arr << " " << *arr << endl;

	cout << value << endl;
	cout << value2 << endl;

	int value3 = getByReference(5);
	
	cout << value3 << " " << &value3 << endl;

	std::array<int, 100> my_arr;
	my_arr[30] = 10;
	
	get(my_arr, 30) = 1024;
	
	cout << my_arr[30] << endl;

	S my_s = getStruct();
	cout << my_s.a << my_s.b << my_s.c << my_s.d << endl;

	std::tuple<int, double> my_tuple = getTuple();

	cout << std::get<0>(my_tuple) << endl;
	cout << std::get<1>(my_tuple) << endl;

	auto [a, b] = getTuple();
	cout << a << endl;
	cout << b << endl;
	
	delete[] arr;
	return 0;
}
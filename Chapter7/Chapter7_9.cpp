#include <iostream>
#include <array>
#include <functional>

using namespace std;

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
	else return false;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
	else return false;
}

int func()
{
	return 5;
}

int goo()
{
	return 10;
}

using check_fun_t = bool(*)(const int&);

void printNumbers(const std::array<int, 10> &my_arr, 
	std::function<bool(const int&)> check_fun)
{
	for (auto element : my_arr)
	{
		if (check_fun(element))
		{
			cout << element << endl;
		}
	}
}


int main9()
{
	cout << func << endl; // 함수도 포인터다!
	
	int (*fcnptr)();
	fcnptr = func;
	
	
	cout << fcnptr << endl;

	fcnptr = goo;
	
	cout << fcnptr << endl;

	cout << fcnptr() << endl;
	
	std::array<int, 10> my_arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	
	cout << endl;

	std::function<bool(const int&)> fcnptr2 = isEven;

	printNumbers(my_arr, fcnptr2);
	cout << endl;
	printNumbers(my_arr, isOdd);
	cout << endl;
	

	cout << endl << endl;
	



	return 0;
}
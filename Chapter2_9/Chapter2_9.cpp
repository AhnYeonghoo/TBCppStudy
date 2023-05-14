#include <iostream>
#include "MY_CONSTANTS.h"

void printNumber(const int& my_number)
{
	int n = my_number;
	n = 10;
	std::cout << n << std::endl;
	std::cout << my_number << std::endl;
}
int main()
{
	using namespace std;
	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi;
	printNumber(123);
	const double gravity{ 9.8 };
	
	int number;
	cin >> number;

	const int special_number(number);

	constexpr int my_const(123);
	
	const int price_per_item = 30;
	int num_item = 123;

	int price = num_item * price_per_item;
	
	return 0;
}
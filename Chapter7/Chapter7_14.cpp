#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void printValue(const std::array<int, 5>& my_array, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= my_array.size() - 1);
	cout << my_array[ix] << endl;
}

int main14()
{
	const int number = 5;
	
	assert(number == 5);


	std::array<int, 5> my_arr{ 1, 2, 3, 4, 5 };
	
	// printValue(my_arr, 100);

	const int x = 5;
	static_assert(x == 5, "x should be 5");

	return 0;
}
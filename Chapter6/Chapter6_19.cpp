#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main19()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	
	// change array
	for (int number : fibonacci)
	{
		number *= 10;
	}
	
	// print array
	for (const int c : fibonacci)
	{
		cout << c << " " << endl;
		cout << &c << " " << endl;
	}
	
	int max_number = std::numeric_limits<int>::lowest();
	
	for (const auto& number : fibonacci)
	{
		max_number = std::max(max_number, number);
	}

	cout << max_number << endl;

	cout << "\n" << endl;
	
	std::vector<int> fibonacci2 = { 0, 1, 1, 2, 5, 8, 13, 21, 34, 55, 89 };



	return 0;
}
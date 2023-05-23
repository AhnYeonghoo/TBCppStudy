#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void printLength(const std::array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main22()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	
	std::array<int, 5> my_arr = { 1, 2, 3, 4, 5 };
	
	my_arr = { 0, 1, 2, 3, 4 };
	my_arr = { 0, 1, 2 };

	cout << my_arr.at(0) << endl;
	cout << my_arr.size() << endl;
	printLength(my_arr);

	std::array<int, 5> my_arr2 = { 3, 5, 2, 6, 1 };
	
	for (auto element : my_arr2)
	{
		cout << element << " ";
	}

	std::sort(my_arr2.begin(), my_arr2.end());
	
	cout << endl;

	for (auto& element : my_arr2)
	{
		cout << element << " ";
	}
	
	return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// std::array<int, 5> arr;
	std::vector<int> arr;
	std::vector<int> arr2 = { 1, 2, 3, 4,5 };
	std::vector<int> arr3 = { 1, 2, 3, 4, 5 };

	cout << arr2.size() << endl;
	cout << arr2.capacity() << endl;
	
	for (int i = 0; i < 5; i++)
	{
		arr.push_back(i);
	}
	
	for (int i : arr)
	{
		cout << i << " ";
	}

	cout << endl;

	for (auto& itr : arr3)
	{
		cout << itr << " ";
	}
	cout << endl;
	
	arr3.resize(3);
	
	for (auto& itr : arr3)
	{
		cout << itr << " ";
	}
	cout << endl;

	cout << arr3.size() << endl;
	cout << arr3.capacity() << endl;


	return 0;
}
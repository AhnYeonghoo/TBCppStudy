#include <iostream>

using namespace std;

int main()
{
	int length;
	
	cin >> length;

	// int array[length];
	int* array = new int[length];
	
	array[0] = 1;
	array[1] = 2;
	
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << endl;
		cout << &(array[i]) << endl;
	}
	
	delete []array;
	array = nullptr;

	int fixedArray[] = { 1, 2, 3, 4, 5 };
	int* array2 = new int[5] { 1, 2, 3, 4, 5};
	
	
	delete []array2;

	return 0;
}
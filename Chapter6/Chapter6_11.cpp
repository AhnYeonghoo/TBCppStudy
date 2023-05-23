#include <iostream>

using namespace std;

int main11()
{
	int value = 7;
	int* ptr = &value;
	
	double value2 = 7;
	double* ptr_d = &value2;

	cout << uintptr_t(ptr - 1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;

	cout << uintptr_t(ptr_d - 1) << endl;
	cout << uintptr_t(ptr_d) << endl;
	cout << uintptr_t(ptr_d + 1) << endl;

	cout << endl;

	int array[] = { 9 , 7, 5, 3, 1 };
	
	cout << array[0] << " " << uintptr_t(&array[0]) << endl;
	cout << array[1] << " " << uintptr_t(&array[1]) << endl;
	cout << array[2] << " " << uintptr_t(&array[2]) << endl;
	cout << array[3] << " " << uintptr_t(&array[3]) << endl;

	int* ptr_a = array;

	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << " " << uintptr_t(&array[i]) << endl;
		cout << *(ptr_a + i) << " " << uintptr_t(ptr_a + i) << endl;
	}

	cout << endl << endl;

	char name[] = "jackjack";
	
	const int n_name = sizeof(name) / sizeof(name[0]);
	
	for (int i = 0; i < n_name; i++)
	{
		cout << *(name + i);
	}

	return 0;
}
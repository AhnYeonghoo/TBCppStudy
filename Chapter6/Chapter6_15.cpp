#include <iostream>

using namespace std;

int main15()
{
	const int value = 5;
	const int* ptr = &value;
	
	cout << *ptr << endl;
	cout << ptr << endl;
	
	int value1 = 5;
	const int* ptr4 = &value1;
	int value2 = 6;
	ptr4 = &value2;
	
	int value3 = 5;
	int* const ptr2= &value3;
	
	int value4 = 6;
	
	// ptr2= &value4;
	*ptr2 = 10;
	cout << value3 << endl;
	cout << *ptr2 << endl;
	
	const int value_one = 5;
	const int* const ptr_t = &value_one;
	
	
	

	


	return 0;
}
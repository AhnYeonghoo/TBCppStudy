#include <iostream>

using namespace std;

const char* getName()
{

	return "jackjack";
}

int main12()
{
	char name[] = "jackjack";
	const char* name3 = getName();
	const char* name2 = getName();
	cout << name << endl;
	cout << name2 << endl;
	cout << uintptr_t(name2) << endl;
	cout << uintptr_t(name3) << endl;
	cout << endl << endl;
	
	int int_arr[5] = { 1, 2, 3, 4, 5 };
	char char_arr[] = "Hello World!";
	const char* name5 = "Jack Jack";
	
	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name5 << endl;

	char c = 'Q';
	
	cout << c << endl;
	return 0;
}
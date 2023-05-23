#include <iostream>

using namespace std;

struct MyStruct
{
	int array[5] = { 9, 7, 5, 3, 1 };
	
};
void printArray(int array[])
{
	cout << sizeof(array) << endl;
	cout << *array << endl;
	cout << &array << endl;
	*array = 100;
	
}

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}

int main10()
{
	int array[5] = { 9, 7, 5, 3, 1 };
	cout << array << endl;
	cout << &(array[0]) << endl;
	cout << &array << endl;
	cout << &array[1] << endl;

	cout << *array << endl;

	char name[] = "jackjack";
	cout << *name << endl;

	cout << endl;
	
	int* ptr = array;
	
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << &ptr << endl;
	
	cout << endl;

	cout << sizeof(array) << endl;
	cout << sizeof(ptr) << endl;
	cout << sizeof(&array) << endl;

	cout << endl;

	printArray(array);

	cout << array[0] << endl;

	cout << "\n" << endl;
	
	cout << *ptr << *(ptr + 1) << endl;
	

	cout << endl << endl;
	
	MyStruct ms;
	cout << ms.array[0] << endl;
	cout << sizeof(ms.array) << endl;

	doSomething(&ms);


	return 0;
}
#include <iostream>

using namespace std;

void printArray(int array[], int length)
{
	for (int index = 0; index < length; index++)
	{
		cout << array[index] << " ";
	}
	cout << endl;
}

void sortArray(int array[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1; j++)
		{

		}
	}
}


int main4()
{
	const int length = 5;

	int array[length] = { 3, 5, 2, 1, 4 };
	
	printArray(array, length);
	
	for (int startIndex = 0; startIndex < length - 1; startIndex++)
	{
		int smallListIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; currentIndex++)
		{
			if (array[smallListIndex] > array[currentIndex]) 
			{
				smallListIndex = currentIndex;
			}
		}
		int temp = array[smallListIndex];
		array[smallListIndex] = array[startIndex];
		array[startIndex] = temp;
	}
	
	printArray(array, length);
	return 0;
}
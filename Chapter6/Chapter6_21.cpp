#include <iostream>

using namespace std;

int main21()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;
	
	ptr = &value;
	ptrptr = &ptr;

	cout << ptr << " " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << **ptrptr << " " <<  & ptrptr << endl;
	cout << value << " " << &value << endl;

	const int row = 3;
	const int col = 5;
	
	const int s2da[row][col] =
	{
		{1, 2, 3, 4, 5}, // 1row
		{6, 7, 8, 9, 10}, // 2row
		{11, 12, 13, 14, 15}, // 3row
	};
	
	int** matrix = new int* [row];

	for (int r = 0; r < row; r++)
	{
		matrix[r] = new int[col];
		
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	
	for (int r = 0; r < row; r++)
	{
		delete[] matrix[r];
	}

	delete[] matrix;
	
	int* matrix2 = new int[row * col];
	delete[] matrix2;

	return 0;
}
#include <iostream>

using namespace std;

int main5()
{
	const int num_rows = 3;
	const int num_columns = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_columns; col++)
		{
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		}
		cout << endl;
	}

	int array[num_rows][num_columns]{ {1, 2,3,4 ,5}, {1, 2, 3, 4, 5}, {1, 2, 3, 4, 5} };
	
	for (int i = 0; i < num_rows; i++)
	{
		for (int j = 0; j < num_columns; j++)
		{
			cout << array[i][j] << endl;
		}
	}

	for (int i = 0; i < num_rows; i++)
	{
		for (int j = 0; j < num_columns; j++)
		{
			cout << &(array[i][j]) << endl;
		}
	}

	int array2[num_rows][num_columns] = { 0 };

	int array3[5][4][3];
	return 0;
}
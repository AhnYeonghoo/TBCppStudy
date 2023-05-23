#include <iostream>

using namespace std;

int pow(int base, int exponent)
{

	int result = 1;

	for (int count = 0; count < exponent; count++)
	{
		result *= base;
	}

	return result;
}
int main7()
{
	
	for (int count = 0; count < 10; ++count)
	{
		cout << count << endl;
	}

	cout << pow(3, 3) << endl;

	for (int count = 9; count >= 0; count--)
	{
		cout << count << endl;
	}

	for (int i = 0, j = 0; i < 10; ++i, j += 2)
	{
		cout << i << " " << j << endl;
	}

	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			cout << i << " " << j << endl;
		}
	}
	return 0;
}
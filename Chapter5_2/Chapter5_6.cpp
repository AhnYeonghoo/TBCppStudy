#include <iostream>

using namespace std;

int main6()
{
	int x = 0;
	int selection;
	do
	{
		cout << "first" << endl;
	} while (x > 0);

	do
	{
		cout << "1. add" << endl;
		cout << "2. sub" << endl;
		cout << "3. mult" << endl;
		cout << "4. div" << endl;
		cin >> selection;
	} while (selection <= 0 || selection >= 5);

	cout << "your selected: " << selection << endl;

	
	return 0;
}
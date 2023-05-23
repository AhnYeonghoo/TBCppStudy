#include <iostream>

using namespace std;

int main8()
{
	int count(0);

	while (true)
	{
		char ch;
		cin >> ch;
		
		if (ch == 'x') break;
		
		cout << ch << " " << count++ << endl;
	}
	return 0;
}
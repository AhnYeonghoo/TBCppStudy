#include <iostream>
#include <string>

using namespace std;

int main13()
{
	// syntax error
	int x;
	cin >> x;

	// semantic error
	if (x >= 5)
		cout << "x is greater than 5" << endl;

	// violated assumption
	
	string hello = "Hello, my name is jack jack";
	
	while (true)
	{
		int ix;
		cin >> ix;
		if (ix >= 0 && ix <= hello.size() - 1)
		{
			cout << hello[ix] << endl;
			break;
		}
		else
			cout << "Please try again" << endl;
	}

	return 0;
}
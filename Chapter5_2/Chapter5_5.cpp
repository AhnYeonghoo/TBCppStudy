#include <iostream>

using namespace std;

int main5()
{
	int x = 10;
	int count = 0;
	while (count < 11)
	{
		cout << count << endl;
		count++;
	}
	count = 0;
	
	while (count < 100)
	{
		if (count % 5 == 0) cout << "Hello " << count << endl;

		count++;
	}

	return 0;
}
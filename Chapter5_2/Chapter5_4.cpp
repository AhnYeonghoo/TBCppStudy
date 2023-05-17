#include <iostream>
#include <cmath>

using namespace std;

int main4()
{
	double x;

tryAgain :
	cout << "Enter a non-negative number" << endl;
	cin >> x;
	
	if (x < 0.0)
	{
		goto tryAgain;
	}
	else
	{
		cout << std::sqrt(x) << endl;
	}

	
	return 0;
}
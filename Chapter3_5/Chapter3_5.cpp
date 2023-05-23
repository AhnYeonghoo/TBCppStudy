#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	
	int x, y;
	cin >> x >> y;
	cout << "your input values are: " << x << " " << y << endl;

	if (x == y) cout << "value equal" << endl;
	if (x != y) cout << "x != y" << endl;
	if (x >= y) cout << "x >= y" << endl;
	if (x > y) cout << "x > y" << endl;
	if (x <= y) cout << "x <= y" << endl;
	if (x < y) cout << "x < y" << endl;

	double d1(100 - 99.99);
	double d2(10 - 9.99);
	
	cout << d1 << endl;
	cout << d2 << endl;
	cout << abs(d1 - d2) << endl;
	const double epsilon = 1e-10;
	if (std::abs(d1 - d2) < epsilon) cout << "Approximately equal" << endl;
	else cout << "Not Equal" << endl;
	if (d1 == d2) cout << "c1 == c2" << endl;
	else cout << "c1 != c2" << endl;
		
	
	
}
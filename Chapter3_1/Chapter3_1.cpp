#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 4 + 2 * 3;
	int y = std::pow(2, 3);
	cout << y << endl;
	cout << "\n\n";
	
	int a = 1;
	int b = -a;
	cout << a << " " << b << endl;
	cout << -5 / 2 << endl;
	cout << -5 % 2 << endl;

	// 3_3 증감 연산자
	int x2 = 5;
	int y2 = ++x2;
	cout << y2 << endl;
	y2 = x2++;
	cout << y2 << endl;

	int x3 = 6;
	int y3 = 6;
	cout << x3 << " " << y3 << endl;
	cout << ++x3 << " " << --y3 << endl;
	cout << x3-- << " " << y3++ << endl;
	cout << x3 << " " << y3 << endl;
	
	return 0;
}
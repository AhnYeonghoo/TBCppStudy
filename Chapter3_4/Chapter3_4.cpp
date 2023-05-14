#include <iostream>

int main()
{
	using namespace std;

	//float a;

	sizeof(float);
	//sizeof(a);

	// comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	cout << x << " " << y << " " << z << endl;

	int a = 1, b = 10;
	int c;
	c = (++a, a + b);
	cout << c << endl;

	// conditional operator
	bool onSale = true;
	
	const int price = (onSale == true) ? 10 : 100;
	cout << price << endl;
	

	return 0;
}
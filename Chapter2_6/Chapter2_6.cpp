#include <iostream>

bool isEqual(int a, int y)
{
	bool result = (a == y);
	return result;
}

int main()
{
	using namespace std;

	bool b1 = false;
	bool b2 = 1;
	bool b3{ true };
	
	cout << boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;
	cout << b3 << endl;
	cout << !b1 << endl;
	cout << !b2 << endl;
	cout << !b3 << endl;

	cout << (true && true) << endl;
	cout << (true && false) << endl;
	cout << (false && true) << endl;
	cout << (false && false) << endl;

	cout << (true || true) << endl;
	cout << (true || false) << endl;
	cout << (false || true) << endl;
	cout << (false || false) << endl;

	if (true)
		cout << "This is true" << endl;
	
	if (false)
		cout << "This is true" << endl;
	else
		cout << "This is false" << endl;

	if (isEqual(3, 3))
	{
		cout << "isEqual()" << endl;
	}

	bool input;
	cin >> input;
	cout << "Your Input: " << input << endl;
	return 0;
	
}
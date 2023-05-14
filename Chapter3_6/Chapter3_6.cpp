#include <iostream>

int main()
{
	using namespace std;
	
	// logical NOT
	bool x = true;

	cout << !x << endl;
	
	// logical AND
	
	bool y = false;

	cout << (x && y) << endl;

	// logical OR
	
	cout << (x || y) << endl;

	bool hit = true;
	int health = 10;

	if (hit == true && health < 20)
	{
		cout << "Die " << endl;
	}
	else
	{
		health -= 20;
		cout << "health -= 20" << endl;
	}

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;

	cout << r1 << endl;
	cout << r2 << endl;
	
	return 0;
}
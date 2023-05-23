#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE
};

void printColorName(Colors color)
{
	if (color == Colors::BLACK)
		cout << "Black" << endl;
	else if (color == Colors::WHITE)
		cout << "White" << endl;
	else if (color == Colors::RED)
		cout << "Red" << endl;
	else if (color == Colors::BLUE)
		cout << "Blue" << endl;
	else
		cout << "GREEN" << endl;
}

void printColorName2(Colors color)
{
	switch (color)
	{
	case Colors::BLACK:
		cout << "Black" << endl;
		break;

	case Colors::BLUE:
		cout << "BLue" << endl;
		break;

	case Colors::GREEN:
		cout << "Green" << endl;
		break;
		
	case Colors::RED:
		cout << "Red" << endl;
		break;
		
	case Colors::WHITE:
		cout << "White" << endl;
		break;

	}
}

int main2()
{
	int x;
	cin >> x;
	
	switch (x)
	{
	case 0:
		cout << "Zero";
		break;

	case 1:
		cout << "One";
		break;

	case 2:
		cout << "Two";
	}
	cout << endl;

	return 0;
}

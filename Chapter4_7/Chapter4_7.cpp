#include <iostream>
#include <typeinfo>

enum Color // user-defined data types
{
	COLOR_BLACK = 0,
	COLOR_RED = 1,
	COLOR_BLUE = 2,
	COLOR_GREEN = 3,
	COLOR_SKYBLUE = 4,
};

enum Feeling
{
	HAPPY,
	JOY,
	TIRED,
	BLUE,
};

int computeDamage(int weapon_id)
{
	if (weapon_id == 0)
	{
		return 1;
	}

	if (weapon_id == 1)
	{
		return 2;
	}
}

int main2()
{
	using namespace std;
	
	Color paint = COLOR_BLACK;
	Color house(COLOR_BLUE);
	Color apple{ COLOR_RED };

	cout << paint << endl;
	cout << house << endl;
	cout << apple << endl;
	
	if (COLOR_BLUE == COLOR_GREEN)
	{
		cout << "Equal" << endl;
	}

	int color_id = COLOR_RED;
	cout << color_id << endl;

	Color my_color = static_cast<Color>(3);
	
	cout << my_color << endl;
	cout << "\n\n" << endl;
	
	int in_number;
	cin >> in_number;
	if (in_number == 0) my_color = COLOR_BLACK;
	if (in_number == static_cast<Color>(3)) my_color = static_cast<Color>(3);
	cout << my_color << endl;
	return 0;
}
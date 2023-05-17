#include <iostream>


int main3()
{
	using namespace std;
	
	enum class Color
	{
		RED,
		BLUE
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};
	
	Color color1 = Color::RED;
	Fruit fruit = Fruit::BANANA;
	Color color2 = Color::BLUE;
	
	if (color1 == color2)
	{
		cout << "equal" << endl; 
	}
	else
	{
		cout << "not equal" << endl;
	}
	


	return 0;
}
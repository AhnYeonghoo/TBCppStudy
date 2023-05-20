#include <iostream>

using namespace std;


class Fruit
{

public:
	enum class FruitType
	{
		APPLE, BANANA, CHERRY,
	};

	class InnerClass
	{

	};

	struct InnerStruct
	{

	};

private:
	FruitType type_;

public:

	Fruit(FruitType type) : type_(type) {}

	FruitType getType()
	{
		return type_;
	}

};

int main14()
{

	Fruit apple(Fruit::FruitType::APPLE);
	
	if (apple.getType() == Fruit::FruitType::APPLE)
	{
		cout << "apple" << endl;
	}

	return 0;
}
#include <iostream>
#include "Monster.h"

using namespace std;

int main2()
{
	Monster mon1("Sanson", Position2D(0, 0));
	
	mon1.moveTo(Position2D(1, 1));
	cout << mon1 << endl;
	return 0;
}
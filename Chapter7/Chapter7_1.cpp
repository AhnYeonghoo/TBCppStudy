#include <iostream>

using namespace std;

int foo(int x, int y); // parameters -> 인수

int main1()
{
	int x = 1, y = 2;
	
	foo(6, 7); // arguments (actual parameter) -> 인자(실 매개변수)
	foo(x, y + 1);
	
	return 0;
}

int foo(int x, int y)
{
	return x + y;
}
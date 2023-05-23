#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

double add(double a, double b)
{
	return a + b;
}

short add(short a, short b)
{
	return a + b;
}

void getRandom(int &x){}
void getRandom(double &x){}

typedef int my_int;

void print(int value){}
// void print(my_int x){}
void print(char *value){}


int main7()
{
	add(1, 2);
	add(3.0, 4.0);
	
	return 0;
}
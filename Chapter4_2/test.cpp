#include <iostream>
#include "MyConstant.h"

extern int a = 10;
void doSomething()
{
	using namespace std;

	cout << "Hello " << endl;

	cout << &Constants::pi << endl;
}
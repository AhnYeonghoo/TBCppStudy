#include <iostream>
#include "MyConstant.h"

using namespace std;

int value = 123;
static int g_a = 1;

// forward declaration

extern void doSomething();
extern int a;

int main()
{

	cout << value << endl;
	int value = 1;
	cout << ::value << endl;

	cout << a << endl;
	doSomething();
	doSomething();

	cout << "\n\n";
	
	cout << &Constants::pi << endl;
	
	
	return 0;
}
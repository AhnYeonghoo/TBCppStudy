#include <iostream>

using namespace std;

int getResult()
{
	return 100 * 100;
}

void doSomething(int& lref)
{
	cout << "L-value ref" << endl;
}

void doSomething(int&& ref)
{
	cout << "R-value ref" << endl;
}

int main2()
{
	int x = 5;
	int y = getResult();
	const int cx = 6;
	const int cy = getResult();
	
	int& lr1 = x;
	
	const int& lr4 = x;
	const int& lr5 = cx;
	const int& lr6 = cy;
	
	// R-value references
	int&& rr3 = 5;
	const int&& rr6 = 5;
	
	cout << rr3 << endl;
	rr3 = 10;
	cout << rr3 << endl;

	doSomething(x);
	doSomething(lr1);
	doSomething(5);
	doSomething(rr3);
	doSomething(getResult());
		
	return 0;
	
}
#include <iostream>

using namespace std;

void doSomething(int y)
{
	cout << "In func " << y << " " << &y << endl;
}
int main2()
{
	doSomething(5);
	
	int x = 6;
	
	cout << "In main " << x << " " << &x << endl;

	doSomething(x);
	doSomething(x + 1);

	return 0;  
}
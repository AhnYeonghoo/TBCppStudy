#include <iostream>
#include "Cents.h"

using namespace std;

template<typename T>
T getMax(T x, T y)
{
	return (x > y) ? x : y;
}



int main1()
{
	cout << getMax(1, 2) << endl;
	cout << getMax(1.0, 2.0) << endl;
	cout << getMax(1.0f, 2.0f) << endl;
	cout << getMax('a', 'b') << endl;

	cout << getMax(Cents(5), Cents(9)) << endl;
	return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

#define MY_NUMBER 9
#define MY_STRING "Hello World"

#define MAX(a, b) ((a > b) ? a : b)
#define LIKE_APPLE

int main()
{
#ifdef LIKE_APPLE
	cout << "Apple " << endl;
#endif

#ifndef LIKE_APPLE
	cout << "Orange" << endl;
#endif

	cout << MY_NUMBER << endl;
	cout << MY_STRING << endl;
	cout << MAX(1, 2) << endl;
	cout << std::max(1 + 3, 2) << endl;

	return 0;
}

#include "Storage.h"


using namespace std;

template<typename T>
T getMax2(T x, T y)
{
	return (x > y) ? x : y;
}

template<>
char getMax2(char x, char y)
{
	cout << "Warning : comparing chars" << endl;
	return (x > y) ? x : y;
}

int main4()
{
	cout << getMax2(1, 2) << endl;
	cout << getMax2('a', 'b') << endl;

	Storage<int> n_value(5);
	Storage<double> d_value(6.7);

	n_value.print();
	d_value.print();

	return 0;
}
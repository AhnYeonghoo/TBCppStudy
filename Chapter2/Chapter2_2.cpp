#include <iostream>
#include <cmath>
#include <limits>

int main1()
{
	using namespace std;

	short s = 1;
	int i = 1;
	long l = 1;
	long long ll = 1;

	cout << sizeof(s) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(l) << endl;
	cout << sizeof(ll) << endl;

	cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << std::numeric_limits<short>::max() << endl;
	cout << std::numeric_limits<short>::min() << endl;
	cout << std::numeric_limits<short>::lowest() << endl;

	s = 32767;
	s += 1;
	cout << std::numeric_limits<long>::max() << endl;
	cout << std::numeric_limits<long>::min() << endl;
	cout << s << endl;
	s = -32768;
	s -= 1;
	cout << s << endl;

	unsigned int ui = -1;
	cout << ui << endl;

	int i2 = 22 / 4;
	cout << i2 << endl;
	cout << 22.0f / 4.0f << endl;
	return 0;
}
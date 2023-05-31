#include <iostream>
#include <iomanip>

using namespace std;

int main2()
{
	cout.unsetf(std::ios::dec);
	cout << 108 << endl;
	cout.setf(std::ios::hex);
	cout << 108 << endl;
	cout.setf(std::ios::dec);
	cout << 108 << endl;

	cout << std::boolalpha;
	cout << true << " " << false << endl;


	cout << std::fixed;
	cout << std::setprecision(3) << 123.456 << endl;
	cout << std::setprecision(4) << 123.456 << endl;
	cout << std::setprecision(5) << 123.456 << endl;
	cout << std::setprecision(6) << 123.456 << endl;
	cout << std::setprecision(7) << 123.456 << endl;
	cout << std::setprecision(8) << 123.456 << endl;
	return 0;
}
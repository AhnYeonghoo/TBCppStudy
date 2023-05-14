#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;
	float f(123456789.0f);
	double d(3.141592);
	long double ld(3.141592);
	
	cout << numeric_limits<float>::max() << endl;
	cout << numeric_limits<double>::max() << endl;
	cout << numeric_limits<long double>::max() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<float>::lowest() << endl;
	cout << numeric_limits<float>::lowest() << endl;


	cout << sizeof(f) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(long double) << endl;

	cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;

	cout << " \n\n " << endl;
	
	cout << std::setprecision(9) << endl;
	cout << f << endl;

	double d2(1.0);
	double d3(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
	cout << std::setprecision(17) << endl;
	cout << d2 << endl;

	cout << d2 + d3 << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;

	cout << nan << " " << isnan(nan) << endl;
	
	return 0;
}
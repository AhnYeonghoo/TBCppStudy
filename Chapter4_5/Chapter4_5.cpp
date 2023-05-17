#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
	int a = 123;
	int b = 123.0;

	float f = 1.0f;
	double d = f;

	double d2 = 3;
	short s = 2;
	
	int i = 30000;
	char c = i;

	double d3 = 0.123456789;
	float f3 = d3;
	
	std::cout << std::setprecision(12) << d3 << " " << f3 << std::endl;
	
	
	std::cout << static_cast<int>(c) << std::endl;
	std::cout << typeid(i).name() << std::endl;
	std::cout << typeid(c).name() << std::endl;
	std::cout << typeid(f).name() << std::endl;
	std::cout << typeid(d).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(4.0).name() << std::endl;

	std::cout << "\n\n" << std::endl;
	
	std::cout << 5u - 10;

	return 0;
}
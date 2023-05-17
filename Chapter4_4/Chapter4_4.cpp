#include <iostream>

// template

auto add(int x, int y) -> int;

auto add(int x, int y) -> int
{
	return x + double(y);
}

int main()
{
	int a = 123;
	auto a_a = 123;
	auto a_b = 123.0;
	auto a_c = 1 + 2.0;
	auto a_d = 1 + 2.0f;
	std::cout << a_a << std::endl;
	std::cout << a_b << std::endl;
	std::cout << a_c << std::endl;
	std::cout << a_d << std::endl;

	auto result = add(1, 2);

	std::cout << result << std::endl;
	

	return 0;
}
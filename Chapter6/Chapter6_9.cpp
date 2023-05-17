#include <iostream>
#include <cstddef>

void doSomething(double* ptr)
{
	if (ptr != nullptr)
	{
		std::cout << *ptr << std::endl;
	}
	else
	{
		std::cout << "nullptr" << std::endl;
	}
}
int main()
{
	double* ptr = nullptr;
	double x = 5;
	
	if (ptr != nullptr)
	{
		std::cout << "not nullptr" << std::endl;
	}
	else
	{
		std::cout << "nullptr" << std::endl;
	}

	doSomething(ptr);
	doSomething(nullptr);
	doSomething(&x);
	
	ptr = &x;
	doSomething(ptr);

	std::nullptr_t nptr;
	
	
}
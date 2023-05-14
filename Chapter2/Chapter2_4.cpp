#include <iostream>

void myFunction()
{
	
}

int main()
{
	int i = 123;
	float f = 123.456f;
	
	void* my_void;
	my_void = (void*)&i;
	my_void = (void*)&f;
	
	
	std::cout << my_void << std::endl;
	std::cout << &f << std::endl;
	std::cout << &i << std::endl;
	return 0;
}
#pragma once
#include <iostream>

template<class T>
class Storage
{
private:
	T value_;
	
public:
	Storage(T value) : value_(value) {}
	
	~Storage() {}

	void print()
	{
		std::cout << value_ << std::endl;
	}
};

template<>
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << value_ << std::endl;
}

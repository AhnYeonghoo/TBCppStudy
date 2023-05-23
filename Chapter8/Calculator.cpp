#include "Calculator.h"
#include <iostream>

Calculator::Calculator(const int& value) : value_(value) { }

Calculator& Calculator::add(int value)
{ 
	value_ += value; return *this; 
}

Calculator& Calculator::sub(int value) 
{
	value_ -= value; return *this; 
}

Calculator& Calculator::mult(int value) 
{ 
	value_ *= value;  return *this; 
}

void Calculator::print()
{
	std::cout << value_ << std::endl;
}
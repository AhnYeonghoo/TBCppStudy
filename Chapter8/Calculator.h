#pragma once


class Calculator
{
private:
	int value_;

public:
	Calculator(const int& value);
	Calculator& add(int value);
	Calculator& sub(int value);
	Calculator& mult(int value);

	void print();
};
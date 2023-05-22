#pragma once
#include <iostream>

class Cents
{
private:
	int cents_;
	
public:
	Cents(int cents) : cents_(cents) {}

	friend std::ostream& operator<< (std::ostream& out, const Cents& cents)
	{
		out << cents.cents_ << " cents ";
		return out;
	}

	friend bool operator> (const Cents& c1, const Cents& c2)
	{
		return (c1.cents_ > c2.cents_);
	}
};
#pragma once
#include <iostream>

class Position2D
{
private:
	int m_x_;
	int m_y_;
	
public:
	Position2D(const int& x_in, const int& y_in)
		: m_x_(x_in), m_y_(y_in) {}

	// TODO: overload operator=

	void set(const Position2D target)
	{
		set(target.m_x_, target.m_y_);
	}

	void set(const int& x_target, const int& y_target)
	{
		m_x_ = x_target;
		m_y_ = y_target;
	}
	
	friend std::ostream& operator<< (std::ostream& out, const Position2D& p)
	{
		out << p.m_x_ << " " << p.m_y_;
		return out;
	}

};
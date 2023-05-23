#pragma once
#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name_;
	Position2D m_location_;

public:
	Monster(const std::string name, const Position2D& pos_in) 
		: m_name_(name), m_location_(pos_in) {}
	
	void moveTo(const Position2D& target)
	{
		m_location_.set(target);
	}

	friend std::ostream& operator<< (std::ostream& out, const Monster& monster)
	{
		out << monster.m_name_ << " " << monster.m_location_;
		return out;
	}
};
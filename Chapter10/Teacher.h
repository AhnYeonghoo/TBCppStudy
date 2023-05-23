#pragma once
#include <string>
#include <iostream>
class Teacher
{
private:
	std::string name_;
	
public:
	Teacher(const std::string& name = "no name")
		:name_(name) {}
	
	void setName(const std::string& name)
	{
		name_ = name;
	}

	std::string getName()
	{
		return name_;
	}
	
	friend std::ostream& operator<< (std::ostream& out, const Teacher& teacher)
	{
		out << teacher.name_;
		return out;
	}
};

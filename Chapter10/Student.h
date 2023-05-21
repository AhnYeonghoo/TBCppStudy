#pragma once

#include <iostream>
#include <string>

class Student
{
private:
	std::string name_;
	int intel_;
	
public:
	Student(const std::string& name = "no name", const int& intel = 0)
		: name_(name), intel_(intel) {}

	void setName(const std::string& name)
	{
		name_ = name;
	}

	void setIntel(const int& intel)
	{
		intel_ = intel;
	}
	
	int getIntel()
	{
		return intel_;
	}

	friend std::ostream& operator<< (std::ostream& out, const Student& student)
	{
		out << student.name_ << " " << student.intel_;
		return out;
	}

};
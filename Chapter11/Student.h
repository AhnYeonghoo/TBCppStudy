#pragma once

#include "Person.h"

class Student : public Person
{
private:
	int intel_;
	
public:
	Student(const std::string& name = "no name", const int& intel = 0)
		: Person(name), intel_(intel) {}
	
	void setIntel(const int& intel)
	{
		this->intel_ = intel;
	}

	int getIntel()
	{
		return this->intel_;
	}

	void study()
	{
		std::cout << getName() << " is studying" << std::endl;
	}

	friend std::ostream& operator<< (std::ostream& out, const Student& student)
	{
		out << student.getName() << " " << student.intel_;
		return out;
	}
};
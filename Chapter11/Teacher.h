#pragma once

#include "Person.h"

class Teacher : public Person
{
private:
	
	
public:
	Teacher(const std::string& name = "no name")
		: Person(name) {}
	

	void teach()
	{
		std::cout << getName() << " is teaching" << std::endl;
	}
	const friend std::ostream& operator<< (std::ostream& out, const Teacher& teacher) 
	{
		out << "Teacher name: " << teacher.getName();
		return out;
	}
};
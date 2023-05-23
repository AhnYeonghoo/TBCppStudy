#pragma once
#include <iostream>
#include <string>

class Person
{
private:
	std::string name_;
	
public:
	Person(const std::string& name) : name_(name){}
	Person() : name_("no name") {}

	void setName(const std::string& name)
	{
		this->name_ = name;
	}

	const std::string getName() const
	{
		return this->name_;
	}

	void doNothing() const
	{
		std::cout << name_ << " is doing nothing" << std::endl;
	}
};
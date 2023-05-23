#pragma once
#include <iostream>

class Resource
{
private:
	int data_[100];
	
public:
	Resource()
	{
		std::cout << "Resource constructed" << std::endl;
	}
	
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
	}
};
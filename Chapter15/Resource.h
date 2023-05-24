#pragma once
#include <iostream>

class Resource
{
private:
	int* data_ = nullptr;
	unsigned length_ = 0;
	
public:
	Resource()
	{
		std::cout << "Resource constructed" << std::endl;
	}

	Resource(unsigned length)
	{
		std::cout << "Resource length constructed" << std::endl;
		this->data_ = new int[length];
		this->length_ = length;
	}
	
	Resource(const Resource& res)
	{
		std::cout << "Resource copy constructed" << std::endl;
		
		Resource(res.length_);
		
		for (unsigned i = 0; i < length_; i++)
		{
			data_[i] = res.data_[i];
		}
	}
	
	~Resource()
	{
		std::cout << "Resource destroyed" << std::endl;
		if (data_ != nullptr) delete[] data_;
	}
	
	Resource& operator= (Resource& res)
	{
		std::cout << "Resource copy assignment" << std::endl;
		if (&res == this) return *this;
		if (this->data_ != nullptr) delete[] data_;
		
		length_ = res.length_;
		data_ = new int[length_];
		
		for (unsigned i = 0; i < length_; i++)
		{
			data_[i] = res.data_[i];
		}
		return *this;
	}

	void print()
	{
		for (unsigned i = 0; i < length_; i++)
		{
			std::cout << data_[i] << " ";
		}
		std::cout << std::endl;
	}


};
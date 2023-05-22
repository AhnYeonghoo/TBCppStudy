#pragma once
#include <iostream>
#include <assert.h>

template<typename T, unsigned int T_SIZE>
class MyArray2
{
private:
	T* data_;

public:
	MyArray2()
	{
		data_ = new T[T_SIZE];
	}

	T getLength()
	{
		return T_SIZE;
	}

	void print()
	{
		for (int i = 0; i < T_SIZE; i++)
		{
			std::cout << data_[i] << " ";
		}
		std::cout << std::endl;
	}
	
	T& operator[] (int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return data_[index];
	}

	~MyArray2()
	{
		delete[] data_;
	}
};
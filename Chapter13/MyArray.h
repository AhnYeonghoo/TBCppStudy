#pragma once
#include <assert.h>
#include <iostream>


template<typename T>
class MyArray
{
private:
	int length_;
	T* data_;
	
public:
	MyArray()
	{
		length_ = 0;
		data_ = nullptr;
	}

	MyArray(int length)
	{
		data_ = new T[length];
		length_ = length;
	}

	~MyArray()
	{
		reset();
	}

	void reset()
	{
		delete[] data_;
		data_ = nullptr;
		length_ = 0;
	}

	T& operator[] (int index)
	{
		assert(index >= 0 && index < length_);
		return data_[index];
	}
	
	int getLength();

	void print();
};


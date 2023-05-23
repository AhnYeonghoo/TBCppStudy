#pragma once

template<typename T>
class AutoPtr
{
public:
	T* ptr_ = nullptr;
	
public:
	AutoPtr(T* ptr = nullptr) : ptr_(ptr)
	{
	}

	AutoPtr(AutoPtr& p)
	{
		ptr_ = p.ptr_;
		p.ptr_ = nullptr;
	}

	AutoPtr& operator= (AutoPtr& p)
	{
		if (&p == this)
			return *this;
		delete ptr_;
		ptr_ = p.ptr_;
		p.ptr_ = nullptr;
		return *this;
	}

	~AutoPtr()
	{
		if (ptr_ != nullptr) delete ptr_;
	}

	T& operator*() const { return *ptr_; }
	T* operator->() const { return ptr_; }
	bool isNull() const { return ptr_ == nullptr; }
};
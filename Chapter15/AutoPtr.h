#pragma once

template<class T>
class AutoPtr
{
public:
	T* ptr_;
	
public:
	AutoPtr(T* ptr = nullptr) : ptr_(ptr)
	{
		std::cout << "AutoPtr default constructor" << std::endl;
	}

	AutoPtr(AutoPtr& p)
	{
		std::cout << "AutoPtr copy consturctor" << std::endl;

		// deep copy
		ptr_ = new T;
		*ptr_ = *p.ptr_;
	}

	AutoPtr& operator= (const AutoPtr& p)
	{
		std::cout << "AutoPtr copy assignment" << std::endl;
		if (&p == this)
			return *this;
		if (ptr_ != nullptr) delete ptr_;

		ptr_ = new T;
		*ptr_ = *p.ptr_;

		return *this;
	}

	AutoPtr(AutoPtr&& a)
		: ptr_(a.ptr_)
	{
		a.ptr_ = nullptr;
		std::cout << "AutoPtr move constructor" << std::endl;
	}

	AutoPtr& operator=(AutoPtr&& a)
	{
		std::cout << "AutoPtr move assigment" << std::endl;
		if (&a == this) return *this;
		if (!ptr_) delete ptr_;
		
		ptr_ = a.ptr_;
		a.ptr_ = nullptr;

		return *this;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor" << std::endl;
		if (ptr_ != nullptr) delete ptr_;
	}

	T& operator*() const { return *ptr_; }
	T* operator->() const { return ptr_; }
	bool isNull() const { return ptr_ == nullptr; }
};
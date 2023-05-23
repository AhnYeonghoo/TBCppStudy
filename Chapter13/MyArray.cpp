#include "MyArray.h"


template<typename T>
int MyArray<T>::getLength()
{
	return this->length_;
}

template<typename T>
void MyArray<T>::print()
{
	for (int i = 0; i < length_; i++)
		std::cout << data_[i] << " ";
	std::cout << std::endl;
}

template void MyArray<int>::print();
template int MyArray<int>::getLength();
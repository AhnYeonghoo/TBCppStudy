#include <iostream>
#include "AutoPtr.h"
#include "Resource.h"

using namespace std;

template<class T>
void MySwap(T& a, T& b)
{
	T temp{ std::move(a) };
	a = std::move(b);
	b = std::move(temp);
}
int main4()
{
	AutoPtr<Resource> res1(new Resource(3));
	AutoPtr<Resource> res2(new Resource(3));
	
	return 0;
}

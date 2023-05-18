#include <iostream>

using namespace std;

int main13()
{
	// 정적 메모리 할당 -> stack -> 크기가 작음
	// 동적 메모리 할당 -> heap

	int* ptr = new int(7);
	*ptr = 100;

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr;
	
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl;
	}
	else
	{
		cout << "Could not allocate memory" << endl;
	}

	int* ptr2 = new (std::nothrow) int(7);
	cout << ptr2 << endl;
	cout << *ptr2 << endl;

	delete ptr2;
	ptr2 = nullptr;

	if (ptr2 != nullptr)
	{
		cout << *ptr2 << endl;
	}
	
	int* sptr = new int(7);
	int* sptr2 = ptr;
	
	delete sptr;
	delete sptr2;
	sptr = nullptr;
	sptr2 = nullptr;

	// memory leak
	

	
	
	
	return 0;
}
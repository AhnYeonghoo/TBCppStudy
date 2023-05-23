#include <iostream>
#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

void doSomething()
{
	//Resource* res = new Resource;
	AutoPtr<Resource> res(new Resource);

	return;
}

int main()
{
	doSomething();
	{
		AutoPtr<Resource> res1(new Resource);
		AutoPtr<Resource> res2;
		
		cout << std::boolalpha;
		
		cout << res1.ptr_ << endl;
		cout << res2.ptr_ << endl;
		
		res2 = res1;
		
		cout << res1.ptr_ << endl;
		cout << res2.ptr_ << endl;
	}

	return 0;
}
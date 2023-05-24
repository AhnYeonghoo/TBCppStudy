#include "Timer.h"
#include "Resource.h"
#include "AutoPtr.h"
using namespace std;

AutoPtr<Resource> generateResource()
{
	AutoPtr<Resource> res(new Resource(1000000));
	return res;
}

int main3()
{
	streambuf* orig_buf = cout.rdbuf();
	cout.rdbuf(NULL);
	
	Timer timer;
	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	
	return 0;
}
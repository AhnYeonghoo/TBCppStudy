#include <iostream>

using namespace std;

int foo(int x, int y); // parameters -> �μ�

int main1()
{
	int x = 1, y = 2;
	
	foo(6, 7); // arguments (actual parameter) -> ����(�� �Ű�����)
	foo(x, y + 1);
	
	return 0;
}

int foo(int x, int y)
{
	return x + y;
}
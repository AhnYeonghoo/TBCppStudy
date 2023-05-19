#include <iostream>

using namespace std;

void countDown(int count)
{
	cout << count << endl;
	if (count < 1) return;
	countDown(count - 1);
}

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
		return sumTo(sumto - 1) + sumto;
}

int main12()
{
	countDown(10);
	cout << sumTo(10) << endl;
	return 0;
}
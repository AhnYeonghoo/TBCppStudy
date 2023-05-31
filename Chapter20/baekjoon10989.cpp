#include <iostream>
#include <algorithm>
using namespace std;

bool compare(short i, short j)
{
	return j > i;
}

int main10989notsolved()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	unsigned short N;
	cin >> N;
	unsigned short* arr = new unsigned short[N];
	for (unsigned short i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr + N, compare);

	for (unsigned short i = 0; i < N; i++)
	{
		cout << arr[i] << '\n';
	}

	delete arr;
	
	return 0;
}
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;

int main2()
{
	std::vector<int> container;
	for (int i = 0; i < 10; i++)
		container.push_back(i);

	std::vector<int>::const_iterator itr;
	itr = container.begin();
	while (itr != container.end())
	{
		cout << *itr << " ";
		itr++;
	}

	cout << endl;

	for (auto itr = container.begin(); itr != container.end(); itr++)
		cout << *itr << endl;
	cout << endl;

	return 0;
}
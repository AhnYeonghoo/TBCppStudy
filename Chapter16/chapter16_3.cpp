#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main3()
{
	std::vector<int> con;
	for (int i = 0; i < 10; i++)
		con.push_back(i);
	
	auto itr = std::min_element(con.begin(), con.end());
	cout << *itr << endl;

	itr = std::max_element(con.begin(), con.end());
	cout << *itr << endl;

	cout << endl;
	
	itr = find(con.begin(), con.end(), 3);
	con.insert(itr, 120);
	
	for (auto& e : con) cout << e << " ";
	cout << endl;

	std::sort(con.begin(), con.end());
	
	for (auto& e : con) cout << e << " ";
	cout << endl;

	std::reverse(con.begin(), con.end());
	for (auto& e : con) cout << e << " ";
	cout << endl;

	return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

void goodBye(const string& s)
{}

class Object {};

int main22()
{
	auto func = [](const int& i) -> void {
		cout << "Hello, World!" << endl;
	};
	
	func(123);
	{
		string name = "JackJack";
		[&]() {cout << name << endl; } ();
	}
	
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	return 0;
}
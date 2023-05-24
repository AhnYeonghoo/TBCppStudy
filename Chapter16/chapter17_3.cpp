#include <iostream>
#include <string>

using namespace std;

int main6()
{
	std::string my_str("012345678");
	my_str.reserve(1000);
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl;
	cout << my_str.empty() << endl;
	cout << my_str.length() << endl;
	cout << my_str.max_size() << endl;

	return 0;
}
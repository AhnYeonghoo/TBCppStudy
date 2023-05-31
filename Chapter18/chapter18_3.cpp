#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	std::stringstream os;

	os << "Hello, World!";
	os.str("HEllo, World");

	string str;

	str = os.str();
	cout << str << endl;
	
	return 0;
}
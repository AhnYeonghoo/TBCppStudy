#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::string str1("one");
	std::string str2;
	str2 = str1;
	str2 = "Two";
	str2.assign("Two").append("Three");
	cout << str2 << endl;
	

	return 0;
}
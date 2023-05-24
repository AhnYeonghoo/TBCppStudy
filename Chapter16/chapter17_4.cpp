#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main7()
{
	std::string my_str("abcdefg");
	cout << my_str[0] << endl;
	cout << my_str[3] << endl;

	my_str[3] = 'Z';
	cout << my_str << endl;

	cout << endl;
	
	try
	{
		//my_str[100] = 'z';
		my_str.at(100) = 'z';
	} 
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	cout << my_str.c_str() << endl;
	cout << my_str.c_str()[6] << endl;

	const char* arr = my_str.c_str();
	cout << (int)arr[6] << endl;
	cout << int(arr[7]) << endl;

	cout << endl;

	char buf[20];
	my_str.copy(buf, 5, 0);
	buf[5] = '\0';
	cout << buf << endl;


	return 0;
}
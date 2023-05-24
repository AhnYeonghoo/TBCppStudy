#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

template<typename T>
std::string to_string(T x)
{
	std::ostringstream ostream;
	ostream << x;
	return ostream.str();
}

template<typename T>
bool from_string(const std::string& str, T& x)
{
	std::istringstream isstream(str);
	return (isstream >> x) ? true : false;
}

int main5()
{
	std::string my_string("My String");
	std::string second_string(my_string, 3, 5);
	std::string third_string(10, 'A');

	const char* my_string2 = "My String";

	cout << my_string << endl;
	cout << second_string << endl;
	cout << my_string2 << endl;
	cout << third_string << endl;

	std::vector<char> vec;
	for (auto e : "Today is a good day")
		vec.push_back(e);
	
	std::string string(vec.begin(), vec.end());

	cout << string << endl;

	cout << endl;
	
	std::string my_str(std::to_string(4));
	
	my_str += std::to_string(128);

	cout << my_str << endl;

	int i = std::stoi(my_str);
	cout << i << endl;
	i = std::stof(my_str);
	cout << i << endl;
	i = std::stod(my_str);
	cout << i << endl;

	std::string my_str2 = to_string(3.1415151);
	cout << my_str2 << endl;

	double d;
	if (from_string(my_str2, d))
		cout << d << endl;
	else
		cout << "Cannot" << endl;
	return 0;
}
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int findFirstChar(const char* string, char ch)
{
	for (std::size_t index = 0; index < strlen(string); index++)
	{
		if (string[index] == ch) return index;
	}
	return -1;
}

double divide(int x, int y, bool& success)
{
	if (y == 0)
	{
		success = false;
		return 0.0;
	}
	
	success = true;
	return static_cast<double>(x) / y;
}


int main1()
{
	bool success;
	double result = divide(5, 3, success);
	
	if (!success)
	{
		std::cerr << "An error occurred" << std::endl;
	}
	else
	{
		std::cout << "Result is " << result << std::endl;
	}
	
	std::ifstream input_file("temp.txt");

	if (!input_file)
		std::cerr << "Cannot open file" << std::endl;

	cout << endl << endl;

	// try, catch, throw
	double x;
	cin >> x;
	
	try
	{
		if (x < 0.0) throw std::string("Negative input");
		cout << std::sqrt(x) << endl;
	}
	catch (std::string error_message)
	{
		cout << error_message << endl;
	}

	try
	{
		throw "My Error Message";
	}
	catch (int x)
	{
		cout << "Catch Integer" << x << endl;
	}
	catch (double x)
	{
		cout << "Catch DOuble" << x << endl;
	}
	catch (const char* error_message)
	{
		cout << "Char* " << error_message << endl;
	}

	return 0;
}

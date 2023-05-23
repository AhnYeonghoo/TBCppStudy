#include <iostream>
#include <exception>

using namespace std;

class CustomException : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Custom exception";
	}
};

int main4()
{
	try
	{
		std::string s;
		s.resize(-1);
		throw std::runtime_error("Bad thing happend");
		throw CustomException();
	}
	catch (std::length_error& error)
	{
		cout << "length_error" << endl;
		std::cerr << error.what() << std::endl;
	}
	catch (std::exception& exception)
	{
		std::cerr << typeid(exception).name() << std::endl;
		std::cerr << exception.what() << std::endl;
	}

	return 0;
}
#include <string>
#include <iostream>
#include <cstddef>
#include <locale>

using namespace std;

int main4(void)
{
	{
		char* strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "hello!");
		std::cout << strHello << std::endl;
	}
	
	{
		std::string string;
		std::wstring wstring;
		wchar_t wc;
	}
	return 0;
}
#include <iostream>

int main()
{
	using namespace std;

	char c1(65);
	char c2('A');
	
	cout << c1 << " " << c2 << " " << (int)c1 << " " <<
		int(c2) << endl;

	// c-style casting
	cout << (char)65 << endl;
	cout << (int)'A' << endl;

	// cpp style
	cout << char(65) << endl;
	cout << int('A') << endl;

	cout << static_cast<char>(65) << endl;
	cout << static_cast<char>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;
	
	//cin >> ch;
	//cout << ch << " " << static_cast<int>(ch) << endl;
	cout << int('\n') << endl;

	wchar_t wc;
	char16_t c16;
	char32_t c32;

	return 0;
}
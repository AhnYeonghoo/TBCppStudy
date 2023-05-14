#include <iostream>
#include <bitset>

int main2()
{
	using namespace std;

	int j = 3;
	int i = -1;
	int k = 123;
	char a = 'H';
	char ch = 'A';
	char16_t cht = 'AA';
	char32_t ch32t = 'AAAA';
	wchar_t wcht = 'ADSQ';
	
	signed char sc = 1;
	signed short int ssi = 123;
	signed int si = 123;
	signed long int sli = 10;
	signed long long int slli = 10;

	unsigned char uc = 1;
	unsigned short int usi = 100;
	unsigned int ui = 10;
	unsigned long int uli = 10;
	unsigned long long int ulli = 100;
	
	float f = 3.141592f;
	double d = 3.14149214;
	long double ld = 3.14141414;

	bool t = true;
	decltype(nullptr) dcpt = NULL;
	
	bool b_value = false;
	char ch_value = 'A';
	char ch_value_two = 65;
	float f_value = 3.141592f;
	double d_value = 3.141592;

	auto a_value = 3.141592;
	auto a_value2 = 3.141592f;
	
	cout << sizeof(a_value) << endl;
	cout << sizeof(a_value2) << endl;
	cout << a_value2 << endl;
	cout << a_value << endl;
	cout << f_value << endl;
	cout << d_value << endl;
	cout << ch_value_two << endl;
	cout << (int)ch_value << endl;
	cout << ch_value << endl;
	cout << ((b_value) ? 1 : 0) << endl;
	cout << b_value << endl;
	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;

	cout << "\n\n\n" << endl;
	
	cout << sizeof(bool) << endl;
	cout << sizeof(b_value) << endl;
	
	int g = 123;	// copy initialization
	int dd(123);		// direct initialization
	int b{ 123 };	// uniform initialization

	int zz = 1, ww(2), mm{ 3 };

	return 0;
	
}
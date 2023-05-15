#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// << leftshift
	// >> rightshift
	// ~, &, |, ^
	
	unsigned int a = 1;
	cout << std::bitset<4>(a) << endl;
	unsigned int b = a << 1;
	cout << std::bitset<4>(b) << endl;

	cout << a << " " << b << endl;

	cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
	cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
	cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
	cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;
	

	unsigned int a2 = 1024;
	
	cout << std::bitset<16>(a2 >> 1) << " " << (a2 >> 1) << endl;
	cout << std::bitset<16>(a2 >> 2) << " " << (a2 >> 2) << endl;
	cout << std::bitset<16>(a2 >> 3) << " " << (a2 >> 3) << endl;
	cout << std::bitset<16>(a2 >> 4) << " " << (a2 >> 4) << endl;
	
	
	return 0;
}
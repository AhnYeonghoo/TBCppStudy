#include <iostream>
#include <cstring>

using namespace std;

int main7()
{
	char my_string[] = "string";

	cout << sizeof(my_string) << endl;
	
	for (int i = 0; i < 7; i++)
	{
		cout << int(my_string[i]) << endl;
	}

	/* char my_string2[255];
	
	cin.getline(my_string2, 255);

	cout << my_string2 << endl;
	*/
	cout << int(' ') << endl;
	cout << int('\0') << endl;

	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest, 50, source);
	
	cout << source << endl;
	cout << dest << endl;

	return 0;
}
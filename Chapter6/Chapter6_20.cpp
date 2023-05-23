#include <iostream>

using namespace std;

enum Type
{
	INT,
	FLOAT,
	CHAR
};

int main20()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';
	
	void* ptr = nullptr;
	
	ptr = &i;
	ptr = &f;
	//ptr = &c;
	
	cout << ptr << endl;
	cout << &f << endl;

	Type type = FLOAT;
	
	if (type == FLOAT)
	{
		cout << *static_cast<float*>(ptr) << endl;
	}
	else if (type == INT)
	{
		cout << *static_cast<int*>(ptr) << endl;
	}
	else
	{
		cout << *static_cast<char*>(ptr) << endl;
	}

	cout << *static_cast<float*>(ptr) << endl;

	

	return 0;
}
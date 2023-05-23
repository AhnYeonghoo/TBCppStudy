#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

typedef int* pink;

void addOne(int& y) // call by reference
{
	cout << y << " " << &y << endl;
	y += 1;
}

void getSinCos(const double degress, double& sin_out, double& cos_out)
{
	static const double pi = 3.141592 / 180.0;
	const double radius = degress * pi;
	sin_out = std::sin(radius);
	cos_out = std::cos(radius);
}

void foo(int*& x)
{
	cout << x << " " << &x << endl;
}

void fooTwo(pink& x)
{
	cout << x << &x << endl;
}

void printElement(int (&arr)[4])
{
	for (int i : arr)
	{
		cout << i << " ";
	}
}

void printVector(std::vector<int>& arr)
{
	for (int element : arr)
	{
		cout << element << " ";
	}
}

int main3()
{
	int x = 0;
	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " "  << &x << endl;

	cout << endl;
	
	double sin(0.0);
	double cos(0.0);
	
	getSinCos(30.0, sin, cos);
	
	cout << sin << endl;
	cout << cos << endl;
	
	
	
	int xx = 5;
	int* ptr = &xx;
	
	foo(ptr);
	fooTwo(ptr);

	cout << ptr << " " << *ptr << endl;

	cout << "\n" << endl;
	
	int arr[]{ 1, 2, 3, 4 };

	printElement(arr);

	std::vector<int> arr2 = { 1, 2, 3, 4 };
	
	return 0;
}
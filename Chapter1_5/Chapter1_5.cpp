#include <iostream>

using namespace std;

void printHello();
int multiplyTwoNumbers(int num_a, int num_b)
{
	int sum = num_a * num_b;
	printHello();
	return sum;
}

void printHello()
{
	cout << "Hello World!" << endl;
}

int inputTwoNumbersAdd()
{
	int num_a, num_b;
	cout << "입력하세요: ";
	cin >> num_a >> num_b;
	
	return num_a + num_b;
}

int main()
{
	cout << 1 + 2 << endl;
	cout << 3 + 4 << endl;
	cout << 8 + 13 << endl;
	cout << multiplyTwoNumbers(10, 10) << endl;
	printHello();
	printHello();

	int sum = inputTwoNumbersAdd();

	cout << sum << endl;
	
	
	

	return 0;
}


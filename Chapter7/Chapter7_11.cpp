#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int> &v)
{
	for (auto& e : v)
		cout << e << " ";
	cout << endl;
}
int main11()
{
	std::vector<int> v{ 1, 2, 3 };
	

	// -> int *v = new int[3]{1, 2, 3}; -> 비슷하게 작동

	v.resize(10);

	for (auto& element : v)
	{
		cout << element << " ";
	}
	cout << endl;

	cout << v.capacity() << endl;
	cout << v.size() << endl;

	std::vector<int> stack;
	
	stack.push_back(3);
	printStack(stack);

	stack.push_back(5);
	printStack(stack);

	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);

	stack.pop_back();
	printStack(stack);
	
	return 0;
}
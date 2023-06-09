#include <iostream>
using namespace std;

template<class T, int size>
class StaticArray_BASE
{
private:
	T array_[size];
	
public:
	T* getArray() { return array_; }
	
	T& operator[](int index)
	{
		return array_[index];
	}

	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << this->array_[i] << ' ';
		}
		cout << endl;
	}

};

template<class T, int size>
class StaticArray : public StaticArray_BASE<T, size>
{

};

template<int size>
class StaticArray<char, size> : public StaticArray_BASE<char, size>
{
public:
	void print() 
	{
		for (int i = 0; i < size; i++)
		{
			cout << this->getArray()[i];
		}
		cout << endl;
	}
};



template<int size>
void print(StaticArray<char, size>& array)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i];
	}
	cout << endl;
}


int main6()
{
	StaticArray<int, 4> int4;
	int4[0] = 1;
	int4[1] = 2;
	int4[2] = 3;
	int4[3] = 4;

	int4.print();

	StaticArray<char, 14> char14;
	char14[0] = 'H';
	char14[1] = 'e';
	
	strcpy_s(char14.getArray(), 14, "Hello, World");

	char14.print();

	return 0;
}
#include <iostream>
#include <cassert>

using namespace std;


class IntList
{
private:
	int m_list_[10];

public:
	void setItem(int index, int value)
	{
		m_list_[index] = value;
	}
	
	int getItem(int index)
	{
		return m_list_[index];
	}

	int* getList()
	{
		return m_list_;
	}

	int& operator[] (const int index)
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list_[index];
	}

	const int& operator[] (const int index) const
	{
		assert(index >= 0);
		assert(index < 10);
		return m_list_[index];
	}
};

int main6()
{
	IntList my_list;
	my_list.setItem(3, 1);
	my_list[0] = 1;
	my_list[1] = 2;
	cout << my_list.getItem(3) << endl;
	cout << my_list[3] << endl;
	
	IntList* list = new IntList;
	
	(*list)[3] = 10;
	cout << (*list)[3] << endl;
	cout << list << endl;

	delete list;
	return 0;
}
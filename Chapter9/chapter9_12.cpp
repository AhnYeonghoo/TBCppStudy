#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray
{
private:
	unsigned m_length_ = 0;
	int* m_data_ = nullptr;
	
public:
	IntArray(unsigned length) : m_length_(length)
	{
		m_data_ = new int[length];
	}

	IntArray(const std::initializer_list<int>& list)
		: IntArray(list.size())
	{ 
		int count = 0;
		for (auto& element : list)
		{
			m_data_[count] = element;
			count++;
		}
	}

	friend std::ostream& operator<< (std::ostream& out, IntArray& arr)
	{
		for (unsigned i = 0; i < arr.m_length_; i++)
			out << arr.m_data_[i] << " ";
		out << endl;
		return out;
	}

	~IntArray()
	{
		delete[] this->m_data_;
	}

};

int main12()
{
	int my_arr1[5] = { 1, 2, 3, 4, 5 };
	int* my_arr2 = new int[5] {1, 2, 3, 4, 5};
	auto il = { 10, 20, 30 };
	
	IntArray int_array { 1, 2, 3, 4, 5 };
	cout << int_array << endl;

	return 0;
}
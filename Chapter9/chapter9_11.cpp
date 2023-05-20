#include <iostream>
#include <cassert>
#include <string>

using namespace std;

class MyString
{
	//private:
public:
	char* m_data_ = nullptr;
	int m_length_ = 0;
	
public:
	MyString(const char* source = "")
	{
		assert(source);
		m_length_ = std::strlen(source) + 1;
		m_data_ = new char[m_length_];

		for (int i = 0; i < m_length_; i++)
		{
			m_data_[i] = source[i];
		}
		m_data_[m_length_ - 1] = '\0';
	}

	MyString(const MyString& source)
	{
		cout << "Copy Constructor" << endl;
		m_length_ = source.m_length_;
		if (source.m_data_ != nullptr)
		{
			m_data_ = new char[m_length_];
			for (int i = 0; i < m_length_; i++)
				m_data_[i] = source.m_data_[i];
		}
		else
			m_data_ = nullptr;
	}

	MyString& operator= (const MyString& source)
	{
		cout << "Assignment operator" << endl;
		
		if (this == &source)
			return *this;

		delete[] m_data_;
		
		m_length_ = source.m_length_;

		if (source.m_data_ != nullptr)
		{
			m_data_ = new char[m_length_];
			for (int i = 0; i < m_length_; i++)
				m_data_[i] = source.m_data_[i];
		}
		else
			m_data_ = nullptr;
	}

	std::string getString()
	{
		return "Hello";
	}

	int getLength() { return m_length_; }

	~MyString()
	{
		delete[] m_data_;
	}
};

int main11()
{
	MyString hello("Hello");
	MyString str1 = hello;
	MyString str2;
	str2 = hello;
	
	cout << (int*)hello.m_data_ << endl;
	cout << hello.getString() << endl;

	{
		MyString copy = hello;
		cout << (int*)copy.m_data_ << endl;
		cout << copy.getString() << endl;
	}
	
	cout << hello.getString() << endl;
	return 0;
}
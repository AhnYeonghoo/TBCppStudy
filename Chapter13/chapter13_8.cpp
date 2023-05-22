#include <iostream>
using namespace std;

template<class T>
class A
{
private:
	T value_;
	
public:
	A(const T& value) : value_(value) {}

	template<typename TT>
	void doSomething()
	{
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
		cout << (TT)value_ << endl;
	}

	void print() const
	{
		cout << value_ << endl;
	}
};

int main()
{
	A<int> a(10);
	A<char> b('A');
	b.print();
	b.doSomething<int>();
	a.print();
	a.doSomething<double>();
	return 0;
}
#include <iostream>

using namespace std;


class Simple
{
private:
	int id_;
	
public:
	Simple(int id)
	{
		this->setId(id);
		cout << this->id_ << endl;
	}

	void setId(int id) { id_ = id; }
	int getId() { return id_; }
};

class Calc
{
private:
	int value_;

public:
	Calc(const int& value) : value_(value) { }
	Calc& add(int value) { value_ += value; return *this; }
	Calc& sub(int value) { value_ -= value; return *this;}
	Calc& mult(int value) { value_ *= value;  return *this;}

	void print()
	{
		cout << value_ << endl;
	}
};

int main7()
{
	Simple s1(1), s2(2);
	s1.setId(2);
	s2.setId(4);
	
	cout << &s1 << " " << &s2 << endl;

	cout << endl;
	
	Calc cal(10);
	cal.add(20);
	cal.sub(1);
	cal.mult(2);
	cal.print();

	Calc cal2(10);
	cal2.add(20).sub(1).mult(2).print();
	return 0;
}
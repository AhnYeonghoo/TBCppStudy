#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int id_;
	std::string name_;

public:
	Student(const std::string& name_in)
		:Student(0, name_in) {}
		
	Student(const int& id_in, const std::string& name_in)
		: id_(id_in), name_(name_in) {}

	void print()
	{
		cout << id_ << " " << name_ << endl;
	} 
};

int main5()
{
	Student st1(0, "jack jack");

	st1.print();
	return 0;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Friend : name, address, age, height, weight , ...

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << 
		height << " " << weight << endl;
}

// better
struct Friend
{
	string name;
	string address;
	int age;
	double height;
	double weight;

};

void print(Friend& fr)
{
	cout << fr.name << " " << fr.address << " " << fr.age << " " <<
		fr.height << " " << fr.weight << endl;
}


// then better

struct Friend2
{
	string name;
	string address;
	int age;
	double height;
	double weight;
	
	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
	}

};

// then then better!!

class CFriend
{

public:
	string m_name;
	string m_address;
	int age;
	double height;
	double weight;
	
	void print()
	{
		cout << m_name << " " << m_address << " " << age << " " << height << " " << weight << endl;
	}
};

int main1()
{
	Friend jj{ "jack jack", "asdad", 2, 180.0, 80.0 };
	Friend2 jj2{ "dd", "Ddd", 2, 30, 10 };
	CFriend jj3{ "dd", "ddd", 2, 3, 3 }; // instance
	
	std::vector<CFriend> my_friends;
	my_friends.resize(2);
	
	my_friends[0].print();
	my_friends[1].print();

	for (auto& element : my_friends)
	{
		element.print();
	}
	
	
	jj2.print();
	jj3.print();

	cout << jj.name << endl;

	print(jj.name, jj.address, jj.age, jj.height, jj.weight);

	cout << endl;
	
	cout << &jj3 << endl;
	

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	std::string name_;
	
public:
	Animal(std::string name) : name_(name) {}
	
	std::string getName() { return this->name_; }
	
	virtual void speak() const
	{
		cout << name_ << " ???" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(std::string name) : Animal(name) {}
	
	void speak() const
	{
		cout << name_ << " MEOW " << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(std::string name) : Animal(name) {}

	void speak() const
	{
		cout << name_ << " Woof " << endl;
	}
};

int main1()
{
	Animal* dog = new Dog("dog");
	Animal* cat = new Cat("cat");

	Cat cats[] = { Cat("cat1"),
	Cat("cat2"), Cat("cat3"),
	Cat("cat4"), Cat("cat5"), };
	
	Dog dogs[] = { Dog("dog1"), Dog("dog2") };

	for (int i = 0; i < 5; i++)
		cats[i].speak();
	
	for (int i = 0; i < 2; i++)
		dogs[i].speak();

	Animal* my_animals[] = {&cats[0], &cats[1],
							&cats[2],&cats[3] 
					,&cats[4], &dogs[0], &dogs[1]};

	for (int i = 0; i < 7; i++)
		my_animals[i]->speak();

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	std::string name_;
	
public:
	Animal(std::string name) : name_(name) {}
	
	std::string getName() { return name_; }
	virtual void speak() const = 0; // pure virtual function
};

class Cat : public Animal
{
public:
	Cat(std::string name) : Animal(name) {}
	
	virtual void speak() const
	{
		cout << "Meow" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog(std::string name) : Animal(name) {}
	virtual void speak() const 
	{
		cout << "Woof!" << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(std::string name) : Animal(name) {}

	virtual void speak() const
	{
		cout << "Moooo" << endl;
	}
};

class IErrorLog
{
public:
	virtual bool reportError(const char* errorMessage) = 0;
	virtual ~IErrorLog(){}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void doSomething(IErrorLog& log)
{
	log.reportError("Runtime error!");
}

int main7()
{
	FileErrorLog file_log;
	ConsoleErrorLog console_log;
	
	doSomething(file_log);
	doSomething(console_log);

	return 0;
}
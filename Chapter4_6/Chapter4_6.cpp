#include <iostream>
#include <string>
#include <limits>

int main()
{
	const std::string my_hello = "Hello, World";
	const char my_strs[] = "Hello, World";

	std::string my_id = "123";
	const char c = my_hello.at(0);

	std::cout << c << std::endl;
	std::cout << my_id << std::endl;
	std::cout << my_hello << std::endl;

	std::cout << "\n\n\n" << std::endl;
	
	std::string name;
	int age;

	std::cout << "your name ? : ";
	std::getline(std::cin, name);
	std::cout << "your age? : ";
	std::cin >> age;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "your name is " << name << std::endl;
	std::cout << "your age is " << age << std::endl;

	std::string a("hello, ");
	std::string b("world");
	std::string hw = a + b;
	hw += " I'm good";
	std::cout << hw << std::endl;

	hw.append("wwww");
	std::cout << hw << std::endl;


	std::cout << a.length() << std::endl;
	std::cout << a.capacity() << std::endl;
	return 0;
	
}
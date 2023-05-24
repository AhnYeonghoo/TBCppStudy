#include <iostream>
#include <utility>
#include <vector>
#include <memory>
#include "Resource.h"

using namespace std;

auto doSomething()
{
	return std::make_unique<Resource>(5);
}
int main()
{
	std::vector<string> v;
	std::string str = "Hello";
	v.push_back(str);
	
	cout << str << endl;
	cout << v[0] << endl;

	v.push_back(std::move(str));
	
	cout << str << endl;
	cout << v[0] << " " << v[1] << endl;

	cout << endl;

	std::unique_ptr<Resource> res(new Resource(100000));

	auto* ptr = new Resource(5);
	std::unique_ptr<Resource> res2(ptr);
	auto res3 = std::make_unique<Resource>(5);

	return 0; 
}
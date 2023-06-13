#pragma once
#include <string>

namespace Records
{
	const int kDefaultStartingSalary = 30000;
	
	class Employee
	{
	public:
		Employee() = default;
		Employee(const std::string& firstname, const std::string& lastname);
		
		void promote(int raise_amount = 1000);
		void demote(int demerit_amount = 1000);
		void hire();
		void fire();
		void display() const;
		
		// getter, setter
		void setFirstName(const std::string& firstname);
		const std::string& getFirstName() const;
		void setLastName(const std::string& lastname);
		const std::string& getLastName() const;

		void setEmployeeNumber(int employee_number);
		int getEmployeeNumber() const;
		
		void setSalary(int new_salary);
		int getSalary() const;
		
		bool isHired() const;
		
	private:
		std::string firstname_;
		std::string lastname_;
		int employee_number_ = -1;
		int salary_ = kDefaultStartingSalary;
		bool hired_ = false;
	};
}


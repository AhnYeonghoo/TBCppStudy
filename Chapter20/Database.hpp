#pragma once
#include <iostream>
#include <vector>
#include "Employee.hpp"

namespace Records
{
	const int kFirstEmployeeNumber = 1000;
	
	class Database
	{
	public:
		Employee& addEmployee(const std::string& firstname,
			const std::string& lastname);
		
		Employee& getEmployee(int employee_number);
		
		Employee& getEmployee(const std::string& firstname,
			const std::string& lastname);

		void displayAll() const;
		void displayCurrent() const;
		void displayFormer() const;

	private:
		std::vector<Employee> employees_;
		int next_employee_number = kFirstEmployeeNumber;
	};
}
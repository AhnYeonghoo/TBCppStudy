#include "Database.hpp"
#include <stdexcept>

using namespace std;

namespace Records
{
	Employee& Database::addEmployee(const string& firstname, const string& lastname)
	{
		Employee the_employee(firstname, lastname);
		the_employee.setEmployeeNumber(next_employee_number++);
		the_employee.hire();
		employees_.push_back(the_employee);

		return employees_[employees_.size() - 1];
	}

	Employee& Database::getEmployee(int employee_number)
	{
		for (auto& employee : employees_)
		{
			if (employee.getEmployeeNumber() == employee_number)
			{
				return employee;
			}
		}
		throw logic_error("No employee found");
	}
	
	Employee& Database::getEmployee(const string& firstname, const string& lastname)
	{
		for (auto& employee : employees_)
		{
			if (employee.getFirstName() == firstname &&
				employee.getLastName() == lastname)
			{
				return employee;
			}
		}
		throw logic_error("No employee found");
	}

	void Database::displayAll() const
	{
		for (const auto& employee : employees_)
		{
			employee.display();
		}
	}
	
	void Database::displayCurrent() const
	{
		for (const auto& employee : employees_)
		{
			if (employee.isHired())
			{
				employee.display();
			}
		}
	}
	
	void Database::displayFormer() const
	{
		for (const auto& employee : employees_)
		{
			if (!(employee.isHired()))
			{
				employee.display();
			}
		}
	}


}
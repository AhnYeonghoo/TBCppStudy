#include <iostream>
#include "Employee.hpp"

using namespace std;

namespace Records
{
	Employee::Employee(const std::string& firstname, const std::string& lastname)
		: firstname_(firstname), lastname_(lastname)
	{
	}
	
	void Employee::promote(int raise_amount)
	{
		setSalary(getSalary() + raise_amount);
	}
	
	void Employee::demote(int demerit_amount)
	{
		setSalary(getSalary() - demerit_amount);
	}

	void Employee::hire()
	{
		hired_ = true;
	}

	void Employee::fire()
	{
		hired_ = false;
	}

	void Employee::display() const
	{
		cout << "Employee: " << getLastName() << ", " << getFirstName() << endl;
		cout << "--------------------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << "Salary: $" << getSalary() << endl;
		cout << endl;
	}

	void Employee::setFirstName(const string& firstname)
	{
		this->firstname_ = firstname;
	}

	void Employee::setLastName(const string& lastname) 
	{
		this->lastname_ = lastname;
	}
	
	const string& Employee::getFirstName() const
	{
		return this->firstname_;
	}
	
	const string& Employee::getLastName() const
	{
		return this->lastname_;
	}

	void Employee::setEmployeeNumber(int employee_number)
	{
		this->employee_number_ = employee_number;
	}
	
	int Employee::getEmployeeNumber() const
	{
		return this->employee_number_;
	}

	void Employee::setSalary(int salary)
	{
		this->salary_ = salary;
	}
	
	int Employee::getSalary() const
	{
		return this->salary_;
	}
	
	bool Employee::isHired() const
	{
		return hired_;
	}



}
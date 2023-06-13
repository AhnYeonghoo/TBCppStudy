#include <exception>
#include "Database.hpp"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);

int main1()
{
	Database employeeDB;
	
	bool done = false;
	
	while (!done)
	{
		int selection = displayMenu();

		switch (selection)
		{
		case 0:
			done = true;
			break;
		case 1:
			doHire(employeeDB);
			break;
		case 2:
			doFire(employeeDB);
			break;
		case 3:
			doPromote(employeeDB);
			break;
		case 4:
			employeeDB.displayAll();
			break;
		case 5:
			employeeDB.displayCurrent();
			break;
		case 6:
			employeeDB.displayFormer();
			break;
		default:
			cerr << "Unknown command" << endl;
			break;
		}
	}
	return 0;
}

int displayMenu()
{
	int selection;
	
	cout << endl;
	cout << "Employee Database" << endl;
	cout << "-----------------" << endl;
	cout << "1) Hire a new employee" << endl;
	cout << "2) Fire an employee" << endl;
	cout << "3)Promote an employee" << endl;
	cout << "4) List all employees" << endl;
	cout << "5) List all current employees" << endl;
	cout << "6) List all former employees" << endl;
	cout << "0) Quit" << endl;
	cout << endl;
	cout << "---> " << endl;

	cin >> selection;
	return selection;
}

void doHire(Database& db)
{
	string firstname;
	string lastname;
	
	cout << "First name? " ;
	cin >> firstname;
	cout << "Last name? ";
	cin >> lastname;
	db.addEmployee(firstname, lastname);
}

void doFire(Database& db)
{
	int employee_number;
	
	cout << "Employee number? ";
	cin >> employee_number;
	
	try
	{
		Employee& emp = db.getEmployee(employee_number);
		emp.fire();
		cout << "Employee " << employee_number << " terminated" << endl;
	}
	catch (const std::logic_error& exception)
	{
		cerr << "Unable to terminate employee: " << exception.what() << endl;
	}
}

void doPromote(Database& db)
{
	int employee_number;
	int raise_amount;
	
	cout << "Employee number? ";
	cin >> employee_number;
	cout << "How much of a raise? ";
	cin >> raise_amount;

	try
	{
		Employee& emp = db.getEmployee(employee_number);
		emp.promote(raise_amount);
	}
	catch (const std::logic_error& exception)
	{
		cerr << "Unable to promote employee: " << exception.what() << endl;
	}
}

void doDemote(Database& db)
{
	int employee_number;
	int demerit_amount;
	
	cout << "Employee number? ";
	cin >> employee_number;
	cout << "How much of a demerit? ";
	cin >> demerit_amount;
	
	try
	{
		Employee& emp = db.getEmployee(employee_number);
		emp.demote(demerit_amount);
	}
	catch (const std::logic_error& exception)
	{
		cerr << "Unable to demote employee " << exception.what() << endl;
	}
}
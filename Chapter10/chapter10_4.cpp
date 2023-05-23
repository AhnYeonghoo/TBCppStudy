#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Doctor;

class Patient
{
private:
	std::string name_;
	std::vector<Doctor*> doctors_;
	
public:
	Patient(std::string name) : name_(name) {}

	void addDoctor(Doctor* new_doctor)
	{
		doctors_.push_back(new_doctor);
	}

	void meetDoctors();

	friend class Doctor;
};

class Doctor
{
private:
	std::string name_;
	std::vector<Patient*> patients_;
	
public:
	Doctor(std::string name) : name_(name) {}

	void addPatient(Patient* new_patient)
	{
		patients_.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto& ele : patients_)
		{
			cout << "Meet patients: " << ele->name_ << endl;
		}
	}

	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto& ele : doctors_)
	{
		cout << "Meet doctor: " << ele->name_ << endl;
	}
}

int main4()
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");
	
	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p2);
	
	p2->addDoctor(d1);
	d1->addPatient(p2);

	p1->meetDoctors();
	d1->meetPatients();


	
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
	return 0;
}
#pragma once
#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string name_;
	
	Teacher *teacher;
	std::vector<Student*> students;
	
public:
	Lecture(const std::string& name)
		: name_(name) {}
	
	void assignTeacher(Teacher* const teacher_input)
	{
		teacher = teacher_input;
	}

	~Lecture()
	{

	}
	
	void registerStudent(Student* const student_input)
	{
		students.push_back(student_input);
	}

	void study()
	{
		std::cout << name_ << " Study " << std::endl << std::endl;

		for (auto element : students)
			(*element).setIntel(element->getIntel() + 1);
	}

	friend std::ostream& operator<< (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name : " << lecture.name_ << std::endl;

		out << *lecture.teacher << std::endl;
		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}
};


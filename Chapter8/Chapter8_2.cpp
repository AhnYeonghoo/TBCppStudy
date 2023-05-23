#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private:
	int month_;
	int day_;
	int year_;

public:
	void print();
	void setDate(const int& month, const int& day, const int& year);
	void setMonth(const int& month);
	void setDay(const int& day);
	void setYear(const int& year);
	void copyFrom(const Date& date);

	const int& getMonth();
	const int& getDay();
	const int& getYear();

};

int main2()
{
	Date today;
	today.setDate(5, 4, 2025);
	today.print();
	return 0;
}

void Date::print()
{
	cout << year_ << " " << month_ << " " << day_ << endl;
}

void Date::setDate(const int& month, const int& day, const int& year)
{
	month_ = month;
	day_ = day;
	year_ = year;
}

void Date::setMonth(const int& month)
{
	month_ = month;
}

void Date::setDay(const int& day)
{
	day_ = day;
}

void Date::setYear(const int& year)
{
	year_ = year;
}

const int& Date::getMonth()
{
	return month_;
}

const int& Date::getDay()
{
	return day_;
}

const int& Date::getYear()
{
	return year_;
}

void Date::copyFrom(const Date& date)
{
	month_ = date.month_;
	day_ = date.day_;
	year_ = date.year_;
}
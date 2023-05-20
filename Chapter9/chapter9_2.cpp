#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double x_, y_, z_;
	
public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0) : x_(x), y_(y), z_(z) {}
	
	double getX() { return this->x_; }
	double getY() { return this->y_; }
	double getZ() { return this->z_; }

	friend std::ostream& operator<< (std::ostream& out, const Point& point)
	{
		out << point.x_ << " " << point.y_ << " "  << point.z_;
		return out;
	}
	
	friend std::istream& operator>> (std::istream& in, Point& point)
	{
		in >> point.x_ >> point.y_ >> point.z_;
		return in;
	}
};

int main2()
{
	ofstream of("out.txt");

	Point p1(10.0, 20.0, 30.0), p2(1.0, 2.0, 3.0);
	Point p3, p4;
	
	cout << p1 << endl << p2 << endl;
	of << p1 << endl << p2 << endl;

	cin >> p3 >> p4;
	cout << p3 << endl << p4 << endl;
	of.close();
	
	return 0;
}
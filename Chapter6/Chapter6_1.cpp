#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
	
};

enum StudentName
{
	JACKJACK, // =0
	DASH,	// = 1
	VIOLET, // = 2
};
int main1()
{
	int one_student_score;
	int students[5] = { 1, 2, 3, 4,5 };
	double double_array[5] = { 1.0, 2.0, 3.0, 4.0, 5.0 };

	cout << sizeof(one_student_score) << endl;
	cout << sizeof(students) << endl;

	one_student_score = 10;

	students[0] = 100;
	students[1] = 90;
	students[2] = 80;
	students[3] = 70;
	students[4] = 60;

	for (int i = 0; i < 5; i++)
	{
		cout << students[i] << endl;
	}

	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];
	
	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;
	
	cout << rect_arr[0].length << endl;
	cout << rect_arr[0].width << endl;

	cout << "\n\n" << endl;
	
	int my_array1[5] = { 1, 2, 3, 4, 5 };
	int my_array2[] = { 1, 2, 3, 4, 5 };
	int my_array3[]{ 1,2,3,4,5 };
	
	for (int i = 0; i < 5; i++)
	{
		cout << my_array1[i] << " ";
	}

	int students_scores[VIOLET];
	students_scores[0] = 1;
	students_scores[1] = 2;
	
	cout << sizeof(students_scores) << endl;

	cout << "\n\n" << endl;
	
	int num_students = 0;
	
	
	return 0;
}
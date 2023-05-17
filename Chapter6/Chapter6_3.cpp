#include <iostream>

using namespace std;

int main3()
{
	int num_students = 5;
	int score0 = 84;
	int score1 = 92;
	int score2 = 76;
	int score3 = 81;
	int score4 = 56;
	
	int total_score = score0 + score2 + score1 + score3 + score4;
	
	double avg_score = static_cast<double>(total_score) / num_students;

	// use in array

	int scores[] = { 84, 92, 76, 81, 56 };
	
	total_score = 0;	
	num_students = sizeof(scores) / sizeof(int);
	for (int i = 0; i < num_students; i++)
	{
		total_score += scores[i];
	}

	avg_score = static_cast<double>(total_score) / num_students;

	cout << avg_score << endl;
	cout << num_students << endl;

	int max_score = 0;
	
	for (int i = 0; i < num_students; i++)
	{
		max_score = max_score < scores[i] ? scores[i] : max_score;
	}

	int min_score = 111111111;
	for (int i = 0; i < num_students; i++)
	{
		min_score = min_score > scores[i] ? scores[i] : min_score;
	}
	
	cout << max_score << endl;
	cout << min_score << endl;

	return 0;
}
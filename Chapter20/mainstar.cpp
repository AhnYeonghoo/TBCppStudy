#include "marine.hpp"
#include <iostream>
using namespace std;

int main()
{
	Marine* marines[100];
	marines[0] = new Marine(2, 3);
	marines[1] = new Marine(3, 5);
	
	marines[0]->show_status();
	marines[1]->show_status();
	
	cout << "마린 1이 마린 2를 공격! " << endl;
	marines[0]->be_attacked(marines[1]->attack());
	
	marines[0]->show_status();
	marines[1]->show_status();

	delete marines[0];
	delete marines[1];
}
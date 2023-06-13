#include "marine.hpp"
using namespace std;

Marine::Marine()
{
	this->hp = 50;
	this->coord_x = this->coord_y = 0;
	this->damage = 5;
	this->is_dead = false;
	this->name = NULL;
}

Marine::Marine(int x, int y)
	: coord_x(x), coord_y(y)
{
	this->hp = 50;
	this->damage = 5;
	this->is_dead = false;
	this->name = NULL;
}

Marine::~Marine()
{
	cout << this->name << " 의 소멸자 호출 ! " << endl;
	if (name != NULL)
	{
		delete[] this->name;
	}
}

Marine::Marine(int x, int y, const char* marine_name)
{
	this->name = new char[strlen(marine_name) + 1];
	strcpy(this->name, marine_name);
	
	this->coord_x = x;
	this->coord_y = y;
	this->hp = 50;
	this->damage = 5;
	this->is_dead = false;
}

void Marine::move(int x, int y)
{
	this->coord_x = x;
	this->coord_y = y;
}

int Marine::attack()
{
	return this->damage;
}

void Marine::be_attacked(int damage_earn)
{
	this->hp -= damage_earn;
	if (this->hp <= 0)
	{
		this->is_dead = true;
	}
}

void Marine::show_status()
{
	cout << " *** Marine : " << this->name << " ***" << endl;
	cout << " Location : ( " << this->coord_x << " , "
		<< this->coord_y << " )" << endl;
	cout << " HP : " << this->hp << endl;
}



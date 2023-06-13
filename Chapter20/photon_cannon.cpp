#include "photon_cannon.hpp"
using namespace std;

PhotonCannon::PhotonCannon(const PhotonCannon& pc)
{
	cout << " 복사 생성자 호출 ! " << endl;
	this->hp = pc.hp;
	this->shield = pc.shield;
	this->x = pc.x;
	this->y = pc.y;
	this->damage = pc.damage;
	
	this->name = new char[strlen(pc.name) + 1];
	strcpy(this->name, pc.name);
}

PhotonCannon::PhotonCannon(int x, int y)
{
	cout << " 생성자 호출 !  " << endl;
	this->hp = this->shield = 100;
	this->x = x;
	this->y = y;
	this->damage = 20;
	this->name = NULL;
}

PhotonCannon::PhotonCannon(int x, int y, const char* cannon_name)
{
	this->hp = this->shield = 100;
	this->x = x;
	this->y = y;
	this->damage = 20;

	this->name = new char[strlen(cannon_name) + 1];
	strcpy(this->name, cannon_name);
}

PhotonCannon::~PhotonCannon()
{
	if (name) delete[] this->name;
}

void PhotonCannon::show_status()
{
	cout << "Photon Cannon " <<  this->name << endl;
	cout << " Location : ( " << this->x << " , " << this->y <<
		" ) " << endl;
	cout << " HP : " << this->hp << endl;
}
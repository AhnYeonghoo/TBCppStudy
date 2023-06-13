#pragma once;
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

class PhotonCannon
{
private:
	int hp, shield;
	int x, y;
	int damage;
	char* name;

public:
	PhotonCannon(int x, int y);
	PhotonCannon(const PhotonCannon& pc);
	PhotonCannon(int x, int y, const char* cannon_name);
	~PhotonCannon();

	void show_status();
};
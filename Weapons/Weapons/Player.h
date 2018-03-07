#pragma once
#include "Weapon.h"
#include <iostream>

class Player
{
public:
	Player();
	virtual ~Player();

	Weapon *primary = NULL;
	Weapon *secondary = NULL;
	Weapon *grenadePrimary = NULL;
	Weapon *grenadeSecondary = NULL;

	void attack();
	void switchWep();

	void throwGren();
	void switchGren();

};
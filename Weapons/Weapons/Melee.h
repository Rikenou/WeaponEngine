#pragma once
#include "Weapon.h"
class Melee :
	public Weapon
{
public:
	Melee();
	virtual ~Melee();

	virtual void swing() = 0;
	virtual void attack();
};


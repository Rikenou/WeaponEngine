#pragma once
#include "Weapon.h"
class Gun :
	public Weapon
{
public:
	Gun();
	virtual ~Gun();

	virtual void shoot() = 0;
	virtual void attack();
};


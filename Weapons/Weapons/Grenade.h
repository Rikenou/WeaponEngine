#pragma once
#include "Weapon.h"
class Grenade :
	public Weapon
{
public:
	Grenade();
	virtual ~Grenade();

	virtual void lob() = 0;
	virtual void attack();
};


#pragma once
#include "Melee.h"
class GravityHammer :
	public Melee
{
public:
	GravityHammer();
	virtual ~GravityHammer();

	virtual void swing();
};


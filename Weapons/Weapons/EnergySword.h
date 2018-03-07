#pragma once
#include "Melee.h"
class EnergySword :
	public Melee
{
public:
	EnergySword();
	virtual ~EnergySword();

	virtual void swing();
};


#pragma once
#include "Grenade.h"
class Plasma :
	public Grenade
{
public:
	Plasma();
	virtual ~Plasma();

	virtual void lob();
};


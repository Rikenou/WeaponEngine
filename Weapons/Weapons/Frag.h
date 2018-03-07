#pragma once
#include "Grenade.h"
class Frag :
	public Grenade
{
public:
	Frag();
	virtual ~Frag();

	virtual void lob();
};


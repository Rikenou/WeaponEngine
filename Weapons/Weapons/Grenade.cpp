#include "stdafx.h"
#include "Grenade.h"


Grenade::Grenade()
{

	wepType = 3;

}


Grenade::~Grenade()
{
}

void Grenade::attack() {

	this->lob();

}
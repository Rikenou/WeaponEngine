#include "stdafx.h"
#include "Melee.h"


Melee::Melee()
{

	wepType = 2;

}


Melee::~Melee()
{
}

void Melee::attack() {

	this->swing();

}

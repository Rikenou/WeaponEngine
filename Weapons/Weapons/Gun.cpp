#include "stdafx.h"
#include "Gun.h"


Gun::Gun()
{

	wepType = 1;

}


Gun::~Gun()
{
}

void Gun::attack() {

	this->shoot();

}
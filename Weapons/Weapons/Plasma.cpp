#include "stdafx.h"
#include "Plasma.h"
#include <iostream>

Plasma::Plasma()
{

	name = "Plasma grenade";

}


Plasma::~Plasma()
{
}

void Plasma::lob() {

	std::cout << "*Flies through the air* Fizz... Bang!!" << std::endl;

}
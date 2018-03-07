#include "stdafx.h"
#include "Frag.h"
#include <iostream>


Frag::Frag()
{

	name = "Frag grenade";

}


Frag::~Frag()
{
}

void Frag::lob() {

	std::cout << "*Flies through the air* Clink clink... Bang!!" << std::endl;

}
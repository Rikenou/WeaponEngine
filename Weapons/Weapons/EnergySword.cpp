#include "stdafx.h"
#include "EnergySword.h"
#include <iostream>


EnergySword::EnergySword()
{

	name = "Energy Sword";
}


EnergySword::~EnergySword()
{
}

void EnergySword::swing() {

	std::cout << "Swish" << std::endl;

}
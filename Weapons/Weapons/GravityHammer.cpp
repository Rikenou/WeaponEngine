#include "stdafx.h"
#include "GravityHammer.h"
#include <iostream>


GravityHammer::GravityHammer()
{

	name = "Gravity Hammer";

}


GravityHammer::~GravityHammer()
{
}

void GravityHammer::swing() {

	std::cout << "Thwack" << std::endl;

}
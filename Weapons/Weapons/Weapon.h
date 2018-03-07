#pragma once
#include <string>

class Weapon
{
public:
	Weapon();
	virtual ~Weapon();

	int wepType;
	std::string name = "Empty slot";

	virtual void attack() = 0;
};
#include "stdafx.h"
#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::attack()
{

	if (primary != NULL)
		primary->attack();
	else
		std::cout << "No weapon equipped" << std::endl;

}

void Player::switchWep()
{

	if (secondary != NULL) {

		Weapon *temp = primary;
		primary = secondary;
		secondary = temp;

	}

	else
		std::cout << "You do not have a second weapon to switch to" << std::endl;

}

void Player::throwGren()
{

	if (grenadePrimary != NULL)
		grenadePrimary->attack();
	else
		std::cout << "You do not have any grenades" << std::endl;

}

void Player::switchGren()
{

	Weapon *temp = grenadePrimary;
	grenadePrimary = grenadeSecondary;
	grenadeSecondary = temp;

}

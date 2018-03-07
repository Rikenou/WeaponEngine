// Weapons.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include "MA5B.h"
#include "BR55.h"
#include "EnergySword.h"
#include "GravityHammer.h"
#include "Frag.h"
#include "Plasma.h"
#include <string>
#include <iostream>

Player *player;
bool Exit = false;



void choosePrimWeapon() {

	int choice = 0;

	while (true) {

		int input;

		try {

			std::cout << "\nPlease choose a primary weapon, enter:\n0: Do not take one, weapons are overrated\n1: Assault Rifle\n2: Battle Rifle\n3: Energy Sword\n4: Gravity Hammer" << std::endl;
			std::cin >> input;

		}

		catch (int) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		if (input < 0 || input > 4) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		switch (input) {

		case 1:
			player->primary = new MA5B;
			break;

		case 2:
			player->primary = new BR55;
			break;

		case 3:
			player->primary = new EnergySword;
			break;

		case 4:
			player->primary = new GravityHammer;

		default:
			break;

		}

		break;

	}

}

void chooseSecWeapon() {

	int choice = 0;

	while (true) {

		int input;

		try {

			std::cout << "\nPlease choose a secondary weapon, enter:\n0: Do not take one, weapons are overrated\n1: Assault Rifle\n2: Battle Rifle\n3: Energy Sword\n4: Gravity Hammer" << std::endl;
			std::cin >> input;

		}

		catch (int) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		if (input < 0 || input > 4) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		switch (input) {

		case 1:
			player->secondary = new MA5B;
			break;

		case 2:
			player->secondary = new BR55;
			break;

		case 3:
			player->secondary = new EnergySword;
			break;

		case 4:
			player->secondary = new GravityHammer;

		default:
			break;

		}

		break;

	}

}

void choosePrimGrenade() {

	int choice = 0;

	while (true) {

		int input;

		try {

			std::cout << "\nPlease choose your primary grenade, enter:\n0: Do not take one, grenades are overrated\n1: Frag grenade\n2: Plasma Grenade" << std::endl;
			std::cin >> input;

		}

		catch (int) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		if (input < 0 || input > 2) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		switch (input) {

		case 1:
			player->grenadePrimary = new Frag;
			break;

		case 2:
			player->grenadePrimary = new Plasma;
			break;

		default:
			break;

		}

		break;

	}

}

void chooseSecGrenade() {

	int choice = 0;

	while (true) {

		int input;

		try {

			std::cout << "\nPlease choose your secondary grenade, enter:\n0: Do not take one, grenades are overrated\n1: Frag grenade\n2: Plasma Grenade" << std::endl;
			std::cin >> input;

		}

		catch (int) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		if (input < 0 || input > 2) {

			std::cout << "\nInvalid Input" << std::endl;
			continue;

		}

		switch (input) {

		case 1:
			player->grenadeSecondary = new Frag;
			break;

		case 2:
			player->grenadeSecondary = new Plasma;
			break;

		default:
			break;

		}

		break;

	}

}

void menu() {

	int input;

	std::cout << "\nYour current inventory\nHeld Weapon: " << player->primary->name << "\nSecondary Weapon: " << player->secondary->name << "\nEquipped Grenade: " << player->grenadePrimary->name << "\nUnequipped Grenade: " << player->grenadeSecondary->name << std::endl;
	system("PAUSE");

	try {

		std::cout << "\nWhat would you like to do? Enter:\n0: Exit\n1: Attack\n2: Switch weapons\n3: Throw grenade\n4: Switch grenades;" << std::endl;
		std::cin >> input;

	}

	catch (int) {

		std::cout << "\nInvalid Input" << std::endl;
		return;

	}

	if (input < 0 || input > 4) {

		std::cout << "\nInvalid Input" << std::endl;
		return;

	}

	switch (input)
	{

	case 0:
		Exit = true;
		return;

	case 1:
		std::cout << std::endl;
		player->attack();
		system("PAUSE");
		return;

	case 2:
		player->switchWep();
		return;

	case 3:
		std::cout << std::endl;
		player->throwGren();
		system("PAUSE");
		return;

	case 4:
		player->switchGren();
		return;

	default:
		return;

	}

}

int main()
{

	player = new Player;

	choosePrimWeapon();
	if(player->primary != NULL)
		chooseSecWeapon();
	choosePrimGrenade();
	if(player->grenadePrimary != NULL)
		chooseSecGrenade();

	while (!Exit) {

		menu();

	}

    return 0;
}
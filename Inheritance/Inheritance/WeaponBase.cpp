#include "WeaponBase.h"
#include <iostream>

// (I) initialise name and damage and (II) Print a message "Base class constructor"
WeaponBase::WeaponBase(std::string name, int damage) {
	this->name = name;
	this->damage = damage;

	std::cout << "WeaponBase constructor\n";
}

void WeaponBase::Attack() // Print a message "Dealing Damage to Enemies"
{
	std::cout << "Dealing damage\n";
}
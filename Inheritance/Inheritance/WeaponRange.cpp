#include "WeaponRanged.h"
#include <iostream>
void WeaponRanged::Reload() // set ammo to maxAmmo
{
	ammo = maxAmmo;
}

WeaponRanged::WeaponRanged(std::string name, int damage, int maxAmmo) : WeaponBase(name, damage) {

	this->maxAmmo = maxAmmo;
	this->ammo = 0;

	std::cout << "WeaponRanged constructor\n";
}
void WeaponRanged::Attack() {
	WeaponBase::Attack();
	ammo --;
	std::cout << "Ammo count" << ammo << std::endl;
}
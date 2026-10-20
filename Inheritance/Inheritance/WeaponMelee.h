#pragma once
#include "WeaponBase.h"

class WeaponMelee: public WeaponBase

{
public:
	//constructor
	WeaponMelee();
	//Attack
	void Attack() {
		std::cout << "WeaponMelee::Attack()\n";
	}
};


#pragma once
#include <iostream>
class WeaponBase
{
private:
	int id;
protected:
	int damage;
	std::string name;
public:
	// (I) initialise name and damage and (II) Print a message "Base class constructor"
	WeaponBase(std::string name, int damage);
	void Attack(); // Print a message "Dealing Damage to Enemies"
	~WeaponBase() {
		std::cout << "WeaponBase Destructor\n";
	}
};


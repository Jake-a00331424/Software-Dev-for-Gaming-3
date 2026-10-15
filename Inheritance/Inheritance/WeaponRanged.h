
#pragma once
#include <iostream>
#include "WeaponBase.h"

class WeaponRanged :public WeaponBase
{
private:
    int ammo;
    int maxAmmo;

protected:
    void Reload(); // set ammo to maxAmmo

public:
    WeaponRanged(std::string name, int damage, int maxAmmo); // initialise maxAmmo and set ammo = maxAmmo

    void Attack();

    ~WeaponRanged() {
        std::cout << "WeaponRange Destructor\n";
    }
};

#include <iostream>
#include <vector>
#include "weaponRanged.h"
//#include "weaponMelee.h"
#include "weaponBase.h"


void PointersExample() {
    /* Example with pointers */
    std::cout << "Pointers \n";
    int a = 5;
    int b = 6;
    int* p = nullptr; //pointers can be assigned to null
    p = &a; //pointer is assigned to a
    p = &b; // pointer is reassigned to b
    std::cout << "Address of p: " << &p << "\tValues stored: " << *p << std::endl;
    //Address of p : 000000B664CFF228  Values stored : 6

    std::cout << "Address of a: " << &a << "\tValues stored: " << a << std::endl;
    //Address of a : 000000B664CFF1E4  Values stored : 5

    std::cout << "Address of b: " << &b << "\tValues stored: " << b << std::endl;
    //Address of b : 000000B664CFF204  Values stored : 6
}

void ReferencesExample() {
    ///* Example with references */
    std::cout << "\n\nReferences \n";
    int a = 5;
    int& r_a = a; //r_a and a share the same memory address
    std::cout << r_a << std::endl; // r_a = a = 5

    int b = 6;
    //r_a = &b; //this is not possible with references

    r_a = b;  // this will change the value of both a and r_a
    std::cout << a << std::endl; // r_a = a = 6

    std::cout << "Address of r_a: " << &r_a << "\tValues stored: " << r_a << std::endl; //same as a
    //Address of r_a : 000000B664CFF1E4        Values stored : 6

    std::cout << "Address of   a: " << &a << "\tValues stored: " << a << std::endl; //same as &r_a
    //Address of   a : 000000B664CFF1E4        Values stored : 6

    std::cout << "Address of   b: " << &b << "\tValues stored: " << b << std::endl;
    //Address of   b : 000000B664CFF224        Values stored : 6
}

int main() {
    //PointersExample();
    //ReferencesExample();

    //Polymorphism starts here
    WeaponRanged pistolChild{ "Pistol", 55, 17 }; // definition of the child object
    std::cout << "WeaponRanged object sees " << pistolChild.getObjectType() << std::endl;

    WeaponRanged* p_pistolChild = &pistolChild; // this is a pointer to the address of the child object
    std::cout << "WeaponRanged* pointer sees: " << p_pistolChild->getObjectType() << std::endl;

    // Doing the same with a reference also works
    WeaponRanged& r_pistolChild = pistolChild; // this holds a reference to the child object
    std::cout << "WeaponRanged& reference sees: " << r_pistolChild.getObjectType() << std::endl;

    //base part of the object
    WeaponBase* p_Weapon = &pistolChild;
    std::cout << "WeaponBase* pointer to WeaponRanged sees: " << p_Weapon->getObjectType() << std::endl;

    pistolChild.Reload();
    p_Weapon.Reload();
}


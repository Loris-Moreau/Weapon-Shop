#include <iostream>

#include "Weapon.h"
#include "Character.h"
#include "Merchant.h"

using namespace std;

enum WeaponTypes
{
    Dagger, Sword, GreatSword, Staff, MorningStar, Rapier
};

Weapon sword;

int main()
{
    //Weapon(Name, Description, Type, Weight, Damages, Price, Durability);

    dagger = Weapon("Dagger", "Covert", Dagger, 1, 3, 4, 0.4);
    sword = Weapon("Sword", "Strurdy", Sword, 6, 5, 10, 0.8);
    greatSword = Weapon("Great Sword", "Heavy", GreatSword, 10, 9, 15, 1.0);
    staff = Weapon("Sword", "Blunt Stick", Staff, 2, 2, 6, 1.0);
    morningStar = Weapon("Sword", "Deadly", MorningStar, 5, 4, 10, 1.0);
    rapier = Weapon("Sword", "Swift", Rapier, 5, 4, 10, 1.0);

}

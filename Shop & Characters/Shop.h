#pragma once
#include <iostream>
#include <string>
#include <vector>

#include"Weapon.h"

using namespace std;

class Shop
 {
    public:
        void AddWeapon(const Weapon& weapon) 
        {
            _weapons.push_back(weapon);
        }

        void DisplayWeapons() const 
        {
            cout << "Available weapons:\n";
            for (const Weapon& weapon : _weapons) 
            {
                cout << "Name: " << weapon.GetName() << ", Damage: " << weapon.GetDamage() << ", Price: " << weapon.GetPrice() << endl;
            }
        }

        const Weapon& GetWeaponByName(const string& name) const 
        {
            for (const Weapon& weapon : _weapons) 
            {
                if (weapon.GetName() == name) 
                {
                    return weapon;
                }
            }

            throw runtime_error("Weapon not found.");
        }

    private:
        vector<Weapon> _weapons;
};

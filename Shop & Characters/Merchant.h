#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Weapon.h"
#include "Character.h"

using namespace std;

class Merchant 
{
public:
    Merchant(const string& name, const string& shopName, const string& description, const string& catchphrase, int money, const vector<Weapon>& weapons)
        : _name(name), _shopName(shopName), _description(description), _catchphrase(catchphrase), _money(money), _weapons(weapons) 
    {

    }

    void DisplayShopInventory() const 
    {
        cout << "Welcome to " << _shopName << "! I am "<< _name <<" and here are the weapons available for sale :" << endl;

        for (const Weapon& weapon : _weapons) 
        {
            cout << "- Name : " << weapon.GetName() << ", Type : " << weapon.GetType() << ", Description : " << weapon.GetDescription() << ", Weight : " << weapon.GetWeight()
                << ", Damage : " << weapon.GetDamage() << ", Buying Cost : " << weapon.GetPrice() << ", Durability : " << weapon.GetDurability() << endl;
        }
    }

    // Function to add a weapon to the merchant's inventory
    void AddWeapon(const Weapon& weapon)
    {
        weapon.push_back(weapon);
    }

    void BuyWeapon(Character& character, const string& weaponName, double durabilityModifier = 1.0) 
    {
        Weapon* weaponToBuy = nullptr;

        for (Weapon& weapon : _weapons) 
        {
            if (weapon.GetName() == weaponName) 
            {
                int buyingCost = weapon.GetPrice() / (1 - weapon.GetDurability() * durabilityModifier);

                if (character.GetMoney() >= buyingCost) 
                {
                    character.SetWeapon(new Weapon(weapon));
                    character.SetMoney(character.GetMoney() - buyingCost);
                    _money += buyingCost;
                    cout << character.GetFirstName() << " bought " << weapon.GetName() << " for " << buyingCost << " coins from " << _name << "'s shop." << endl;
                    return;
                }
                else 
                {
                    cout << "Not enough money to buy " << weapon.GetName() << " from " << _name << "'s shop." << endl;
                    return;
                }
            }
        }
        cout << weaponName << " is not available in " << _name << "'s shop." << endl;
    }

    void SellWeapon(Character& character, const string& weaponName, double durabilityModifier = 1.0) 
    {
        Weapon* weaponToSell = character.GetWeapon();

        if (weaponToSell && weaponToSell->GetName() == weaponName)
        {
            int sellingCost = weaponToSell->GetPrice() * (1 + weaponToSell->GetDurability() * durabilityModifier);

            character.SetWeapon(nullptr);
            character.SetMoney(character.GetMoney() + sellingCost);

            _money -= sellingCost;
            cout << character.GetFirstName() << " sold " << weaponToSell->GetName() << " for " << sellingCost << " coins to " << _name << "'s shop." << endl;
        }
        else 
        {
            cout << character.GetFirstName() << " does not have " << weaponName << " to sell." << endl;
        }
    }

private:
    string _name;
    string _shopName;
    string _description;
    string _catchphrase;
    int _money;
    vector<Weapon> _weapons;
};
#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Weapon.h"

using namespace std;

class Character 
{
public:
    Character(const string& firstName, const string& lastName, const string& catchphrase, int money, int lifePoints, const string& race, const string& characterClass)
        : _firstName(firstName), _lastName(lastName), _catchphrase(catchphrase), _money(money), _lifePoints(lifePoints), _race(race), _characterClass(characterClass), _weapon(nullptr)
    {

    }

    void Introduce() const {
        cout << "Name : " << _firstName << " " << _lastName << endl;
        cout << "Catchphrase : " << _catchphrase << endl;
        cout << "Race : " << _race << endl;
        cout << "Class : " << _characterClass << endl;
        cout << "Money : " << _money << " coins" << endl;
        cout << "Life Points : " << _lifePoints << endl;

        if (_weapon) 
        {
            cout << "Weapon : " << _weapon->GetName() << " (Durability : " << _weapon->GetDurability() << ")" << endl;
        }
        else 
        {
            cout << "Weapon : None" << endl;
        }
    }

    void BuyWeapon(Weapon& weapon, double durabilityModifier = 1.0) 
    {
        int buyingPrice = weapon.GetPrice() / (1 - weapon.GetDurability() * durabilityModifier);

        if (_money >= buyingPrice) 
        {
            _money -= buyingPrice;

            weapon.ReduceDurability(0.1);
            _weapon = &weapon;

            cout << "Bought weapon : " << weapon.GetName() << " for " << buyingPrice << " coins." << endl;
        }
        else 
        {
            cout << "Not enough money to buy weapon : " << weapon.GetName() << endl;
        }
    }

    void SellWeapon(Weapon& weapon, double durabilityModifier = 1.0) 
    {
        int sellingPrice = weapon.GetPrice() * (1 + weapon.GetDurability() * durabilityModifier);

        _money += sellingPrice;
        _weapon = nullptr;

        cout << "Sold weapon : " << weapon.GetName() << " for " << sellingPrice << " coins." << endl;
    }

    void UseWeapon(Character& target) 
    {
        if (_weapon) 
        {
            int damage = _weapon->GetDamage();
            target.ReceiveDamage(damage);
            _weapon->ReduceDurability(0.2);

            cout << _firstName << " used " << _weapon->GetName() << " to deal " << damage << " damage to " << target.GetFirstName() << ". " << _weapon->GetName() 
                << " durability reduced to " << _weapon->GetDurability() << endl;
        }
        else 
        {
            cout << "No weapon equipped to use." << endl;
        }
    }

    void ReceiveDamage(int damage) 
    {
        _lifePoints -= damage;

        if (_lifePoints < 0) 
        {
            _lifePoints = 0;
        }
    }

    void Loot(Character& defeatedCharacter) 
    {
        _money += defeatedCharacter.GetMoney();
        Weapon* weapon = defeatedCharacter.GetWeapon();

        if (weapon) 
        {
            _weapon = weapon;
            defeatedCharacter.SetWeapon(nullptr);

            cout << _firstName << " looted " << weapon->GetName() << " and " << defeatedCharacter.GetMoney() << " coins from " << defeatedCharacter.GetFirstName() << "." << endl;
        }
        else 
        {
            cout << "No weapon to loot from " << defeatedCharacter.GetFirstName() << "." << endl;
        }
    }

    const string& GetFirstName() const 
    {
        return _firstName;
    }

    const string& GetLastName() const 
    {
        return _lastName;
    }

    const string& GetRace() const 
    {
        return _race;
    }

    const string& GetCharacterClass() const 
    {
        return _characterClass;
    }

    int GetMoney() const 
    {
        return _money;
    }

    void SetMoney(int money) 
    {
        _money = money;
    }

    int GetLifePoints() const 
    {
        return _lifePoints;
    }

    Weapon* GetWeapon() const 
    {
        return _weapon;
    }

    void SetWeapon(Weapon* weapon) 
    {
        _weapon = weapon;
    }

private:
    string _firstName;
    string _lastName;
    string _catchphrase;
    int _money;
    int _lifePoints;
    Weapon* _weapon;
    string _race = "Demi";
    string _characterClass;
};
#include <iostream>
#include <string>
#include <vector>

#include "Weapon.h"
#include "Merchant.h"
#include "Character.h"

using namespace std;

int main()
{
    // Create Weapon objects
    Weapon bow("Bow", "A ranged weapon", WeaponType::Bow, 5, 10, 50, 0.8);
    Weapon sword("Sword", "A melee weapon", WeaponType::Sword, 10, 15, 100, 0.9);

    // Create Merchant object
    //Merchant(const string& name, const string& shopName, const string& description, const string& catchphrase, int money, const vector<Weapon>& weapons)
    Merchant merchant("Bob", "Jim's Dump ", "The only shop in the continent ", "Come buy from Tom ! ", 1000, Sword);
    merchant.AddWeapon(bow);
    merchant.AddWeapon(sword);

    // Create Character objects
    //Character(const string & firstName, const string & lastName, const string & catchphrase, int money, int lifePoints, const string & race, const string & characterClass)
    Character player("John", "Doe", "I am the best!", 500, 100, "Human", "Warrior");
    Character enemy("Tim", "Tom", "You are no match for me!",100, 75, "Orc", "Zealot");

    // Introduce Character & merchant
    player.Introduce();
    merchant.DisplayShopInventory();

    // Buy a weapon from Merchant
    player.BuyWeapon(sword, 0.85);

    // Sell weapon to Merchant
    player.SellWeapon(bow, 0.75);

    // Use weapon on enemy
    player.UseWeapon(enemy);

    // Loot defeated enemy
    player.Loot(enemy);

    // Introduce updated Character and enemy
    player.Introduce();
    enemy.Introduce();

    return 0;
}

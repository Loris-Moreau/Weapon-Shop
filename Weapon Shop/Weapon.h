#pragma once
#include <string>

using std::string;

class Weapon
{
public:
	Weapon(string wName, string wDescription, string wType, int wWeight, int wDamages, int wPrice, float wDurability);

private:
	string weaponName;
	string weaponDescription;
	string WeaponType;
	float weaponWeight;
	int weaponDamages;
	float weaponPrice;
	int weaponDurability;
};


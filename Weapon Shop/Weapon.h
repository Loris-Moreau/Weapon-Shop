#pragma once
#include <string>

using std::string;

class Weapon
{
public:
	Weapon(const char wName, const char wDescription, const char  wType, int wWeight, int wDamages, int wPrice, float wDurability);

private:
	const char weaponName;
	const char weaponDescription;
	const char WeaponType;
	float weaponWeight;
	int weaponDamages;
	float weaponPrice;
	int weaponDurability;
};


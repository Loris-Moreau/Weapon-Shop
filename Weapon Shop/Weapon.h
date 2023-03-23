#pragma once
#include <string>

using std::string;

class Weapon
{
public:
	Weapon(string wName, string wDescription, string wType, int wWeight, int wDamages, int wPrice, float wDurability);

private:
	string Name;
	string Description;
	string WeaponType;
	float Weight;
	int Damages;
	float Price;
	int Durability;
};


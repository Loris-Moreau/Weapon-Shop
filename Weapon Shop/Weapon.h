#pragma once
#include <string>

using std::string;

class Weapon
{
public:
	Weapon(string wName, string wDescription, string wType, float wWeight, int wDamages, int wPrice, float wDurability);
	~Weapon();

	enum WeaponTypes
	{
		Basic,
		Dagger,
		Sword,
		GreatSword,
		Staff,
		MorningStar,
		Rapier
	};

	string weaponToStr(WeaponTypes weaponTypes)
	{
		switch (weaponTypes)
		{
		case WeaponTypes::Basic:
			return "Rusty Sword";
		case WeaponTypes::Dagger:
			return "Dagger";
		case WeaponTypes::Sword:
			return "Sword";
		case WeaponTypes::GreatSword:
			return "GreatSword";
		case WeaponTypes::Staff:
			return "Staff";
		case WeaponTypes::MorningStar:
			return "MorningStar";
		case WeaponTypes::Rapier:
			return "Rapier";
		default:
			return"Rusty Sword";
		}
	}

private:
	string weaponName;
	string weaponDescription;
	string WeaponType;

	float weaponWeight;

	int weaponDamages;

	int weaponPrice;

	float weaponDurability;
};


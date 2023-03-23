#include "Weapon.h"

Weapon::Weapon(const char wName, const char wDescription, const char wType, int wWeight, int wDamages, int wPrice, float wDurability)
	:weaponName(wName), weaponDescription(wDescription), WeaponType(wType), weaponWeight(wWeight), weaponDamages(wDamages), weaponPrice(wPrice), weaponDurability(wDurability)
{

}

#include "Character.h"

#include <iostream>

Character::Character(string cFName, string cLName, string cCatchPhrase, int cMoney, int cLP, string cRace, string cClass)
{
	firstName = cFName;
	lastName = cLName; 
	charaCatchPhrase = cCatchPhrase; 
	charaMoney = cMoney; 
	LifePoints = cLP; 
	charaRace = cRace; 
	charaClass = cClass;

	charaWeapon = Weapon::WeaponTypes::Basic;
}


Character::~Character(){}

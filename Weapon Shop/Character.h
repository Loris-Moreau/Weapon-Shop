#pragma once

#include "Weapon.h"

using namespace std;

class Character
{
public:
	Character(string cFName, string cLName, string cCatchPhrase, int cMoney, int cLP, string cRace, string cClass);
	~Character();

private:
	string firstName;
	string lastName;

	string charaCatchPhrase;

	int charaMoney;

	int LifePoints;

	Weapon::WeaponTypes charaWeapon;

	string charaRace;
	//races : Elf, Orc, Human, Demi
	string charaClass;
	// classes : Archer, Warrior, Priest, Paladin, Zealot

};
#pragma once
#include <string>

using std::string;

class Character
{
public:
	Character(string cFName, string cLName, string cCatchPhrase, int cMoney, int cLP, string cWeapon, string cRace, string cClass);

private:
	string firstName;
	string lastName;
	string charaCatchPhrase;
	int charaMoney;
	int LifePoints;
	string charaWeapon;
	string charaRace;
	string charaClass;
};


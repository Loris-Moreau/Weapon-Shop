#pragma once
#include <string>

using namespace std;

class Merchant
{
public:
	Merchant(string nameP, string shopNameP, string descriptionP, string catchPhraseP, int moneyP, string inventory);

private:
	string merchantname;
	string shopName;
	string merchantDescription;
	string merchantCatchPhrase;
	int merchantMoney;
	string merchantInventory; //maybe make this enum
};


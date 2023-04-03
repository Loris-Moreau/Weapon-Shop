#include "Merchant.h"

Merchant::Merchant(string nameP, string shopNameP, string descriptionP, string catchPhraseP, int moneyP, string inventory)
	:merchantname(nameP), shopName(shopNameP), merchantDescription(descriptionP), merchantCatchPhrase(catchPhraseP), merchantMoney(moneyP), merchantInventory(inventory)
{

}

Merchant::~Merchant(){}
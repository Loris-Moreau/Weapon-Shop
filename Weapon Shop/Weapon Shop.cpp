#include <iostream>

#include "Weapon.h"
#include "Character.h"
#include "Merchant.h"

using namespace std;

int main()
{
    //Weapon(Name, Description, Type, Weight, Damages, Price, Durability);
    Weapon dagger("Dagger", "Covert", "Dagger", 1, 3, 4, 0.4);

    //Character(string cFName, string cLName, string cCatchPhrase, int cMoney, int cLP, string cRace, string cClass);
    Character John("John", "Doe", "Hello there", 25, 20, "Demi", "Zealot");
}

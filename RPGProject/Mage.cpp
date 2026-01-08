#include "Mage.h"

Mage::Mage(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
}

string Mage::attack()
{
    return "I will crush you with the power of my arcane missiles!";
}
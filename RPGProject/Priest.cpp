#include "Priest.h"

Priest::Priest(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
}

string Priest::attack()
{
    return "I will assault you with Holy Wrath!";
}
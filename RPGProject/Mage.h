#ifndef MAGE_H
#define MAGE_H

#include "Player.h"

class Mage : public Player
{
public:
    Mage(string name, Race race, int hitPoints, int magicPoints);
    string attack() override;
};

#endif
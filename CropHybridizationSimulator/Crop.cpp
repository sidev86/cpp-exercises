#include "Crop.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

Crop::Crop(int height, int yield, int droughtResistance) : height(height), yield(yield), droughtResistance(droughtResistance)
{
}
int Crop::getHeight() const
{
    return height;
}
int Crop::getYield() const
{
    return yield;
}
int Crop::getDroughtResistance() const
{
    return droughtResistance;
}
int Crop::getScore() const
{
    return (height * 2) + (yield * 3) + (droughtResistance * 4);
}

bool Crop::operator==(const Crop &other) const
{
    // cout << "this score: " << this->getScore() << ", other score: " << other.getScore() << endl;
    return getScore() == other.getScore();
}
bool Crop::operator!=(Crop &other) const
{
    return !(*this == other);
}
bool Crop::operator<(Crop &other) const
{
    return this->getScore() < other.getScore();
}
bool Crop::operator>(Crop &other) const
{
    return this->getScore() > other.getScore();
}
bool Crop::operator<=(Crop &other) const
{
    return this->getScore() <= other.getScore();
}
bool Crop::operator>=(Crop &other) const
{
    return this->getScore() >= other.getScore();
}
Crop Crop::operator+(Crop &other) const
{
    srand(time(nullptr));
    int varHeight = (height + other.height) / 2 + (rand() % 2 * 2 - 1);
    int varYield = (yield + other.yield) / 2 + (rand() % 2 * 2 - 1);
    int varResistance = (droughtResistance + other.droughtResistance) / 2 + (rand() % 2 * 2 - 1);
    return Crop(varHeight, varYield, varResistance);
}
void Crop::operator=(Crop &other)
{
    height = other.height;
    yield = other.yield;
    droughtResistance = other.droughtResistance;
}

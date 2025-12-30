#include "Exhibit.h"

Exhibit::Exhibit(const string name, const int roomNumber, const double displaySize)
{
    this->name = name;
    this->roomNumber = roomNumber;
    this->displaySize = displaySize;
}

string Exhibit::getName()
{
    return name;
}

int Exhibit::getRoomNumber()
{
    return roomNumber;
}

double Exhibit::getDisplaySize()
{
    return displaySize;
}
#include "Animal.h"

Animal::Animal(const string &name, const double &weight)
{
    this->name = name;
    this->weight = weight;
}

string Animal::getName() const
{
    return name;
}

double Animal::getWeight() const
{
    return weight;
}

void Animal::setName(const string &name)
{
    this->name = name;
}

void Animal::setWeight(const double &weight)
{
    this->weight = weight;
}

string Animal::makeNoise() const
{
    return "unknown";
}
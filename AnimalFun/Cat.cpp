#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat(string name, double weight) : Animal(name, weight)
{
}

string Cat::makeNoise() const
{
    return "Meow!";
}

string Cat::eat() const
{
    return "Eating kitty food";
}

void Cat::chaseMouse() const
{
    cout << "Here squitty squitty!" << endl;
}
#include "IceCreamSundae.h"
#include <iostream>

using namespace std;

IceCreamSundae::IceCreamSundae(const string &flavor)
{
    this->flavor = flavor;
}

void IceCreamSundae::addTopping(const string &topping)
{
    toppings.push_back(topping);
}

string IceCreamSundae::getFlavor() const
{
    return flavor;
}

vector<string> IceCreamSundae::getToppings() const
{
    return toppings;
}

void IceCreamSundae::printSundae() const
{
    cout << "The Sundae flavor is " << this->getFlavor() << "\nThe toppings are:" << endl;
    if (toppings.empty())
    {
        cout << "None" << endl;
    }
    for (string topping : toppings)
    {
        cout << "- " << topping << endl;
    }
}
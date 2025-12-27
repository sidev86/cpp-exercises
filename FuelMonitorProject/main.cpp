#include "FuelLevelCritical.h"

#include <iostream>

using namespace std;

void useFuel(int &fuelLevel, int percentage);

int main()
{
    int fuelLevel = 100;

    try
    {
        useFuel(fuelLevel, 95);
        cout << "Your fuel level now is " << fuelLevel << "%" << endl;
    }
    catch (const FuelLevelCritical &err)
    {
        cout << err.what() << endl;
    }
    return 0;
}

void useFuel(int &fuelLevel, int percentage)
{
    if (fuelLevel - percentage > 10)
    {
        fuelLevel -= percentage;
    }
    else
    {
        throw FuelLevelCritical();
    }
}

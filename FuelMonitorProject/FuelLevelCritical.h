#ifndef FUEL_LEVEL_CRITICAL_H
#define FUEL_LEVEL_CRITICAL_H
#include <stdexcept>

using namespace std;

class FuelLevelCritical : public runtime_error
{
public:
    FuelLevelCritical() : runtime_error("Your tank is almost empty!")
    {
    }
};

#endif
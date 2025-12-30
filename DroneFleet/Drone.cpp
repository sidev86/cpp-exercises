#include "Drone.h"

Drone::Drone(const string modelName, const double batteryLife)
{
    this->modelName = modelName;
    this->batteryLife = batteryLife;
}

string Drone::getModelName()
{
    return modelName;
}

double Drone::getBatteryLife()
{
    return batteryLife;
}
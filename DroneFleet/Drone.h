#ifndef DRONE_H
#define DRONE_H

#include <string>

using namespace std;

class Drone
{
private:
    string modelName;
    double batteryLife;

public:
    Drone(const string modelName, const double batteryLife);
    string getModelName();
    double getBatteryLife();
};

#endif
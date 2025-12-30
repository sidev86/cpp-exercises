#include "Drone.h"
#include <iostream>

using namespace std;
int main()
{
    int numOfDrones;

    cout << "How many drones are in the fleet? ";
    cin >> numOfDrones;
    cin.get();
    Drone **drones = new Drone *[numOfDrones];

    for (int i = 0; i < numOfDrones; i++)
    {
        string model;
        double batteryLife;
        cout << "Insert the drone model: ";
        getline(cin, model);
        cout << "Insert the battery life: ";
        cin >> batteryLife;
        cin.get();
        drones[i] = new Drone(model, batteryLife);
    }

    cout << "\n\nThe Drones on fleet are:" << endl;
    for (int i = 0; i < numOfDrones; i++)
    {
        cout << "Model: " << drones[i]->getModelName() << "\nBattery life: " << drones[i]->getBatteryLife() << endl;
    }

    for (int i = 0; i < numOfDrones; i++)
    {
        delete drones[i];
        drones[i] = nullptr;
    }

    delete[] drones;
    drones = nullptr;

    return 0;
}
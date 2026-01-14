#include "Car.h"
#include <iostream>
#include <memory>

using namespace std;
int main()
{
    unique_ptr<Car> car = make_unique<Car>("Blue", 4);

    cout << "****CAR INFORMAATIONS****" << endl;
    cout << "Color: " << car->getColor() << endl;
    cout << "Number of doors: " << car->getNumDoors() << endl;
    return 0;
}
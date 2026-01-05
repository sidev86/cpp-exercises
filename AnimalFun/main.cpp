#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>

int main()
{

    Animal *dog = new Dog("Pongo", 23.8, "Dalmata");

    cout << "Dog Name: " << dog->getName() << endl;
    cout << "Dog Weight: " << dog->getWeight() << endl;
    cout << "Dog Noise: " << dog->makeNoise() << endl;
    cout << dog->eat() << endl;

    delete dog;
    dog = nullptr;
    return 0;
}
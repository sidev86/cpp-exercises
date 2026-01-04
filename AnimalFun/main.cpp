#include "Animal.h"
#include "Dog.h"
#include <iostream>
#include <string>

int main()
{
    Animal *animal = new Animal("Fred", 16.4);
    Dog *dog = new Dog("Pongo", 23.8, "Dalmata");
    cout << "Animal Name: " << animal->getName() << endl;
    cout << "Animal Weight: " << animal->getWeight() << endl;
    cout << "Animal Noise: " << animal->makeNoise() << endl;

    cout << "Dog Name: " << dog->getName() << endl;
    cout << "Dog Weight: " << dog->getWeight() << endl;
    cout << "Dog Noise: " << dog->makeNoise() << endl;
    dog->digHole();
    dog->chaseCat();

    delete dog;
    dog = nullptr;
    return 0;
}
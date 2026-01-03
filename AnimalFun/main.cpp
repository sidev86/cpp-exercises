#include "Animal.h"
#include <iostream>
#include <string>

int main()
{
    Animal *dog = new Animal("Doggy", 16.4);

    cout << "Name of the animal: " << dog->getName() << endl;
    cout << "Weight: " << dog->getWeight() << endl;
    cout << "His sound is: " << dog->makeNoise() << endl;

    delete dog;
    dog = nullptr;
    return 0;
}
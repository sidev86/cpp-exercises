#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <string>

int main()
{

    Animal *dog = new Dog("Pongo", 23.8, "Dalmata");
    Animal *cat = new Cat("Silvestro", 6.5);

    cout << "Dog Name: " << dog->getName() << endl;
    cout << "Dog Weight: " << dog->getWeight() << endl;
    cout << "Dog Noise: " << dog->makeNoise() << endl;
    cout << dog->eat() << endl;

    cout << "\n\nCat Name: " << cat->getName() << endl;
    cout << "Cat Weight: " << cat->getWeight() << endl;
    cout << "Cat Noise: " << cat->makeNoise() << endl;
    Cat *realcat = dynamic_cast<Cat *>(cat);
    realcat->chaseMouse();

    delete dog;
    dog = nullptr;

    delete cat;
    cat = nullptr;
    // delete realcat;
    // realcat = nullptr;
    return 0;
}
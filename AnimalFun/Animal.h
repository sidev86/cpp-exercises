#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

using namespace std;
class Animal
{
private:
    string name;
    double weight;

public:
    Animal(string name, double weight);
    virtual ~Animal();
    string getName() const;
    double getWeight() const;
    void setName(string name);
    void setWeight(double weight);
    virtual string makeNoise() const = 0;
    virtual string eat() const = 0;
};

#endif
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
    Animal(const string &name, const double &weight);
    string getName() const;
    double getWeight() const;
    void setName(const string &name);
    void setWeight(const double &weight);
    string makeNoise() const;
};

#endif
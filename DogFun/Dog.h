#ifndef DOG_H
#define DOG_H

#include <string>

using namespace std;
class Dog
{
private:
    string breed;

public:
    Dog(const string &breed);
    string getBreed() const;
};

#endif
#include "Dog.h"
#include <stdexcept>

using namespace std;

Dog::Dog(const string &breed)
{
    if (breed != "Poodle")
    {
        this->breed = breed;
    }
    else
    {
        throw runtime_error("Why not poodle dogs? Fuck this program!");
    }
}

string Dog::getBreed() const
{
    return breed;
}
#include "Dog.h"
#include <iostream>

using namespace std;

int main()
{
    try
    {
        Dog dog1("German Shepherd");
        Dog dog2("Siberian husky");
        // Dog dog3("Poodle");

        cout << dog1.getBreed() << endl;
        cout << dog2.getBreed() << endl;
        // cout << dog3.getBreed() << endl;
    }
    catch (const runtime_error &err)
    {
        cerr << err.what() << endl;
    }

    return 0;
}
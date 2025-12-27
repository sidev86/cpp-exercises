#include "AngryCatException.h"
#include <iostream>

using namespace std;

void feedKitty(int numTreats);

int main()
{
    int treats;
    cout << "How many treats you want to give to kitty? ";
    cin >> treats;
    try
    {

        feedKitty(treats);
    }
    catch (const AngryCatException &err)
    {
        cerr << err.what() << endl;
    }

    return 0;
}

void feedKitty(int numTreats)
{
    if (numTreats < 3)
    {
        throw AngryCatException();
    }

    else if (numTreats > 10)
    {
        throw AngryCatException("Too many treats for kitty!");
    }

    cout << "Kitty is happy with " << numTreats << " treats." << endl;
}
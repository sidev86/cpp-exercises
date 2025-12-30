#include "Exhibit.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int EXHIBIT_COUNT = 3;
    Exhibit *exhibitPtrs[3];

    exhibitPtrs[0] = new Exhibit("La venere", 24, 350.7);
    exhibitPtrs[1] = new Exhibit("Il grido", 22, 436.2);
    exhibitPtrs[2] = new Exhibit("Cazzi amari", 18, 388.5);

    for (int i = 0; i < EXHIBIT_COUNT; i++)
    {
        cout << left
             << "Title: " << setw(15) << exhibitPtrs[i]->getName()
             << "Room: " << setw(10) << exhibitPtrs[i]->getRoomNumber()
             << "Display Size: " << setw(10) << exhibitPtrs[i]->getDisplaySize()
             << endl;
    }

    for (int i = 0; i < EXHIBIT_COUNT; i++)
    {
        delete exhibitPtrs[i];
        exhibitPtrs[i] = nullptr;
    }

    return 0;
}
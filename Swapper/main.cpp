#include "Swapper.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Swapper<int> intSwapper(5, 67);
    Swapper<string> strSwapper("Paolo", "Mariano");

    cout << "\nBEFORE SWAPPING...." << endl;
    cout << intSwapper.getFirst() << ", " << intSwapper.getSecond() << endl;
    cout << strSwapper.getFirst() << ", " << strSwapper.getSecond() << endl;

    intSwapper.swap();
    strSwapper.swap();

    cout << "\nAFTER SWAPPING...." << endl;
    cout << intSwapper.getFirst() << ", " << intSwapper.getSecond() << endl;
    cout << strSwapper.getFirst() << ", " << strSwapper.getSecond() << endl;

    cout << "\nSMALLER VALUES" << endl;
    cout << intSwapper.getFirst() << ", " << intSwapper.getSecond() << " -> " << intSwapper.getSmaller() << endl;
    cout << strSwapper.getFirst() << ", " << strSwapper.getSecond() << " -> " << strSwapper.getSmaller() << endl;

    return 0;
}
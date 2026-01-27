#include <iostream>
#include "ArrayList.h"

using namespace std;

int main()
{
    ArrayList myList;

    for(int i = 0; i < 15; i++)
    {
        myList.add(i * 10);
    }

    myList.printList();

    cout << "Size is: " << myList.size() << "\n" << endl;

    myList.add(240, 15);
    myList.printList();
    cout << "Size after adding an element is: " << myList.size() << "\n" << endl;

    myList.set(420, 8);
    myList.printList();

    myList.add(1000);
}
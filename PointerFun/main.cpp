#include <iostream>

using namespace std;

int main()
{

    double myDouble = 3.14;
    double *doublePtr;

    doublePtr = &myDouble;

    cout << "The address of the pointer variable is " << doublePtr << endl;
    cout << "The content of the pointer variable is " << *doublePtr << endl;

    return 0;
}
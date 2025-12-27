#include <iostream>

using namespace std;

// non-const pointer to non-const data
void noConst()
{
    cout << "In noConst" << endl;
    int *intPtr = new int(100);

    cout << "\tOriginal value: " << *intPtr << endl;
    *intPtr = 200;

    cout << "\tChanged data: " << *intPtr << endl;
    delete intPtr;

    intPtr = new int(150);
    cout << "\tNew int entirely: " << *intPtr << endl;
    delete intPtr;
}

// const pointer to non-const data
void cp2ncd()
{
    cout << "In cp2ncd" << endl;
    int *const intPtr = new int(80);

    cout << "\tOriginal value: " << *intPtr << endl;
    *intPtr = 90;
    cout << "\tChanged data: " << *intPtr << endl;

    delete intPtr;

    // intPtr = new int(60); -> cannot do it because pointer is const
}

// non-const pointer to const data
void ncp2cd()
{
    cout << "In ncp2cd" << endl;

    const int *intPtr = new int(28);

    cout << "\tOriginal value: " << *intPtr << endl;
    //*intPtr = 90; -> cannot change value because data is const
    delete intPtr;

    intPtr = new int(30);

    cout << "\tNew int entirely: " << *intPtr << endl;
}

// const pointer to const data
void cp2cd()
{
    cout << "In cp2cd" << endl;

    const int *const intPtr = new int(44);
    cout << "\tOriginal value: " << *intPtr << endl;
    //*intPtr = 33; -> cannot change value because data is const

    delete intPtr;

    // intPtr = new int(55); -> cannot do it because pointer is const
}

void noChange(const double *const doublePtr)
{
    cout << "In noChange" << endl;

    cout << "\tOriginal value: " << *doublePtr << endl;
}

int main()
{
    double *doublePtr = new double(3.14);
    noConst();
    cp2ncd();
    ncp2cd();
    cp2cd();
    noChange(doublePtr);
    return 0;
}
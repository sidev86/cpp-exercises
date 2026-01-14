#include <iostream>
#include <memory>
#include <utility>

using namespace std;

int main()
{
    const int ARRAY_SIZE = 5;
    // standard C++ 11 smrt pointer declaration
    // unique_ptr<double> myDubPtr(new double);

    // standard C++ 14 smrt pointer declaration
    unique_ptr<double> myDubPtr = make_unique<double>();

    auto myArray = make_unique<int[]>(ARRAY_SIZE);

    *myDubPtr = 3.14;

    cout << "Pointer value: " << *myDubPtr << endl;

    unique_ptr<double> otherPtr = std::move(myDubPtr);
    cout << "otherPtr: " << *otherPtr << endl;

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        myArray[i] = i * 2;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    return 0;
}
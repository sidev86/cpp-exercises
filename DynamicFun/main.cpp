#include <iostream>

using namespace std;

int main()
{
    bool *boolVal = new bool;

    *boolVal = true;

    cout << "boolVal content is " << boolalpha << *boolVal << endl;

    delete boolVal;
    boolVal = nullptr;

    return 0;
}
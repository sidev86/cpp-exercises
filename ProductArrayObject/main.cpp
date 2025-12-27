#include <iostream>
#include <array>

using namespace std;
int productArray(array<int, 6> myArray)
{
    int product = 1;
    for (auto num : myArray)
    {
        product *= num;
    }
    return product;
}

int main()
{
    array<int, 6> myArray = {1, 2, 3, 4, 5, 6};

    cout << "The product of the elements in the array is " << productArray(myArray) << endl;
    return 0;
}
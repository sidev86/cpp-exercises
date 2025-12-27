#include <iostream>
#include <array>

using namespace std;
// int productArray(array<int, 6> myArray)
// {
//     int product = 1;
//     for (auto num : myArray)
//     {
//         product *= num;
//     }
//     return product;
// }

void productArray(array<int, 6> myArray, int &result)
{
    result = 1;
    for (auto num : myArray)
    {
        result *= num;
    }
}

int main()
{
    array<int, 6> myArray = {1, 2, 3, 4, 5, 6};
    int product = 1;

    productArray(myArray, product);
    cout << "The product of the elements in the array is " << product << endl;
    return 0;
}
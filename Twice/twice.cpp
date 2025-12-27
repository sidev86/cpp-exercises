#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 10> arr;

    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i * 2;
    }

    for (int num : arr)
    {
        cout << num << endl;
    }
}
#include <iostream>

using namespace std;

int main()
{
    int ARRAY_SIZE;
    cout << "Enter the array size: ";
    cin >> ARRAY_SIZE;

    int *nums = new int[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        nums[i] = i * 3;
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << nums[i] << endl;
    }

    delete[] nums;
    nums = nullptr;

    return 0;
}
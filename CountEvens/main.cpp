#include <iostream>

using namespace std;

int countEvens(int arr[], int size)
{
    int evens = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evens++;
        }
    }
    return evens;
}
int main()
{
    const int ARRAY_SIZE = 9;
    int nums[ARRAY_SIZE] = {2, 65, 44, 12, 33, 62, 28, 9, 58};

    cout << "The number of evens in this array are " << countEvens(nums, ARRAY_SIZE) << endl;
    return 0;
}
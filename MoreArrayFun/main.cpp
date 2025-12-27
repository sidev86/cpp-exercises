#include <iostream>

using namespace std;
int main()
{
    const int ARRAY_SIZE = 10;
    int myNums[ARRAY_SIZE];

    for (int i = 0; i < 10; i++)
    {
        myNums[i] = i + 1;
    }

    for (auto num : myNums)
    {
        cout << num << endl;
    }

    return 0;
}
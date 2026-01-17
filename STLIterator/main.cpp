#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6};

    cout << "Original vector: ";
    for (int n : nums)
    {
        cout << n << " ";
    }
    cout << endl;

    for (auto it = nums.begin(); it != nums.end();)
    {
        if (*it % 2 == 0)
        {
            it = nums.erase(it);
        }
        else
        {
            it++;
        }
    }

    cout << "After removing even numbers: ";
    for (int n : nums)
    {
        cout << n << " ";
    }

    // **** Utilizzo improprio di iterazione e modifica di un container ****
    // for (int n : nums)
    // {
    //     if (n % 2 == 0)
    //     {
    //         nums.erase(remove(nums.begin(), nums.end(), n), nums.end());
    //     }
    // }

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(const vector<int> &vec);

int main()
{
    vector<int> numbers{1, 2, 3, 2, 4, 2, 5, 2};

    cout << "Initial vector: ";
    printVector(numbers);

    // step 1: use remove
    // remove puts all the elements found to the end of the container
    auto newEnd = remove(numbers.begin(), numbers.end(), 2);

    // step 2: erase the elements found
    numbers.erase(newEnd, numbers.end());

    cout << "Vector after removing: ";
    printVector(numbers);
    return 0;
}

void printVector(const vector<int> &vec)
{
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;
}
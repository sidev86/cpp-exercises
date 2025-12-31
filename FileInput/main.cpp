#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int inputNum;
    int sum = 0;
    vector<int> nums;
    ifstream infile("input.txt");

    if (!infile)
    {
        cerr << "Could note open file." << endl;
    }

    while (infile >> inputNum)
    {
        nums.push_back(inputNum);
        sum += inputNum;
    }

    for (auto num : nums)
    {
        cout << num << endl;
    }

    cout << "The sum of the numbers in the file is " << sum << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{

    vector<int> myNums;

    try
    {
        myNums.resize(myNums.max_size() - 1);
    }
    catch (const length_error &e)
    {
        cerr << "Error on resizing: " << e.what() << '\n';
    }

    return 0;
}

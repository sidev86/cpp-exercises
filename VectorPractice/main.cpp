#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> myVec(5);

    myVec[0] = "Renee";
    myVec[1] = "Bastien";
    myVec[2] = "Spank";
    myVec[3] = "Rose";
    myVec[4] = "Catherine";

    myVec.insert(myVec.begin() + 2, "John Baugh");
    myVec.pop_back();

    for (string name : myVec)
    {
        cout << name << endl;
    }
    return 0;
}
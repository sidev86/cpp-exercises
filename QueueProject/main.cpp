#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main()
{
    queue<string> myNames;

    myNames.push("John");
    myNames.push("Bob");
    myNames.push("Sam");
    myNames.push("Ali");
    myNames.push("Karen");

    while (!myNames.empty())
    {
        cout << myNames.front() << endl;
        myNames.pop();
    }

    return 0;
}
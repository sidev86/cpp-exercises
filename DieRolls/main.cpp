#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Rolling the dice...." << endl;
    int val;
    srand(time(nullptr));

    for (int i = 0; i < 6; i++)
    {
        val = rand() % 6 + 1;
        cout << "You got: " << val << endl;
    }

    return 0;
}
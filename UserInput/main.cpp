#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullName;
    string location;
    int initialScore;
    cout << "Please insert your full name: " << endl;
    getline(cin, fullName);
    cout << "Insert your location: " << endl;
    getline(cin, location);
    cout << "Set your initial score: " << endl;
    cin >> initialScore;

    cout << "Hello, " << fullName << "\nWe heard you are from " << location << "\nYour original score is " << initialScore << " but with five points added, your score is " << initialScore + 5 << endl;

    return 0;
}
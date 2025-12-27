#include <iostream>
#include <string>

using namespace std;

int main()
{

    string fullName;
    string secretAlias;
    int age;
    int agentLevel;
    string favoriteGadget;
    cout << "** SECRET AGENT ID GENEATOR **" << endl;
    cout << "Please enter the full name: " << endl;
    getline(cin, fullName);
    cout << "Insert the secret alias: " << endl;
    getline(cin, secretAlias);
    cout << "Insert the age: " << endl;
    cin >> age;
    cout << "Insert the agent level: " << endl;
    cin >> agentLevel;
    cout << "Insert the agent favorite gadget: " << endl;
    cin.get();
    getline(cin, favoriteGadget);

    cout << "YOUR SECRET AGENT ID CARD" << endl;
    cout << "--------------------------------" << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Secret Alias: " << secretAlias << endl;
    cout << "Age: " << age << endl;
    cout << "Age Level: " << agentLevel << endl;
    cout << "Favorite Gadget: " << favoriteGadget << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, string> contacts;

    contacts["Justin Timberlake"] = "1234-567-888";
    contacts["Bob Burnquist"] = "555-444-332";
    contacts["Martin Stig Anderssen"] = "111-223-445";

    for (auto element : contacts)
    {
        cout << element.first << " = " << element.second << endl;
    }

    return 0;
}

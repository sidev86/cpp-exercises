#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> shoppingList;
    string item;

    cout << "****  SHOPPING LIST  ****" << endl;
    cout << "Type an item and then press enter to add to your shopping list" << endl;
    cout << "(NOTE: Type 'done' to terminate items insertion)\n\n";

    while (item != "done")
    {
        cout << "Insert an item to add to your shopping list: ";
        getline(cin, item);
        if (item != "done")
        {
            shoppingList.push_back(item);
        }
    }

    cout << "\n\n Your Shopping List\n\n";
    for (auto item : shoppingList)
    {
        cout << "- " << item << endl;
    }
    return 0;
}
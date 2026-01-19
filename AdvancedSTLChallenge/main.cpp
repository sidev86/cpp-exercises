#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

void printVector(const vector<string> &vec);

int main()
{
    vector<string> items;

    string item1 = "screwdriver";
    items.push_back(item1);
    string item2 = "hammer";
    items.push_back(item2);
    items.emplace_back("chainsaw");
    items.emplace_back("pin");
    items.emplace_back("brush");
    items.emplace_back("nails");
    items.emplace_back("can");

    cout << "*** Initial list of items *** " << endl;
    printVector(items);
    // removing items that has word of less than 4 letters
    for (auto it = items.begin(); it != items.end();)
    {
        if (it->length() < 4)
        {
            it = items.erase(it);
        }
        else
        {
            it++;
        }
    }

    cout << "***List of items after removing (items < 4 letters)***" << endl;
    printVector(items);
    string elementToFind = "hammer";
    auto newEnd = remove(items.begin(), items.end(), elementToFind);

    items.erase(newEnd, items.end());

    map<string, int> orderedItemsWordLength;
    unordered_map<string, int> unorderedItemsWordLength;

    for (string item : items)
    {
        orderedItemsWordLength[item] = item.length();
        unorderedItemsWordLength[item] = item.length();
    }

    cout << "=== Ordered Map Items List ===" << endl;

    for (const auto &pair : orderedItemsWordLength)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\nLooking up for element 'glue'..." << endl;

    auto it1 = orderedItemsWordLength.find("glue");

    if (it1 != orderedItemsWordLength.end())
    {
        cout << "Element found. Value => " << it1->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << "\n=== Unordered Map Items List ===" << endl;

    for (const auto &pair : unorderedItemsWordLength)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "\nLooking up for element 'screwdriver'..." << endl;

    auto it2 = unorderedItemsWordLength.find("screwdriver");

    if (it2 != unorderedItemsWordLength.end())
    {
        cout << "Element found. Value => " << it2->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}

void printVector(const vector<string> &vec)
{
    for (string item : vec)
    {
        cout << item << endl;
    }
    cout << endl;
}

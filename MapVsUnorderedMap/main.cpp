#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

int main()
{
    map<string, int> orderedMap;

    cout << "=== std::map ===" << endl;
    cout << "Put some data in ordered map (keys are ordered)" << endl;
    orderedMap["banana"] = 3;
    orderedMap["apple"] = 5;
    orderedMap["cherry"] = 4;

    cout << "\nPrinting ordered map content..." << endl;
    for (const auto &pair : orderedMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Looking up element with key 'apple'..." << endl;

    auto it1 = orderedMap.find("apple");

    if (it1 != orderedMap.end())
    {
        cout << "Element found. Value => " << it1->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << "\n\n=== std::unordered_map ===" << endl;
    unordered_map<string, int> unorderedMap;

    cout << "Put some data in unordered map (keys not ordered)" << endl;
    unorderedMap["banana"] = 3;
    unorderedMap["apple"] = 5;
    unorderedMap["cherry"] = 4;

    cout << "\nPrinting unordered map content..." << endl;
    for (const auto &pair : unorderedMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    cout << "Looking up element with key 'apple'..." << endl;

    auto it2 = unorderedMap.find("apple");

    if (it2 != unorderedMap.end())
    {
        cout << "Element found. Value => " << it2->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
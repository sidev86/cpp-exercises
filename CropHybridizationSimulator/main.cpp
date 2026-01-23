#include "Crop.h"
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    vector<unique_ptr<Crop>> crops;

    // unique_ptr<Crop> crop = make_unique<Crop>(5, 10, 400);

    crops.push_back(make_unique<Crop>(5, 10, 400));
    crops.push_back(make_unique<Crop>(4, 15, 250));
    crops.push_back(make_unique<Crop>(7, 12, 340));
    crops.push_back(make_unique<Crop>(5, 10, 400));

    for (auto &crop : crops)
    {
        cout << crop->getHeight() << ", score -> " << crop->getScore() << endl;
    }

    cout << "crops[0] == crops[3]?  " << boolalpha << (*crops[0] == *crops[3]) << endl;

    Crop cropNew = *crops[0] + *crops[1];

    cout << "Hybridizing two crops...." << endl;
    cout << "Created New Crop!" << endl;

    cout << "Height: " << cropNew.getHeight() << endl;
    cout << "Yield: " << cropNew.getYield() << endl;
    cout << "Drought resistance: " << cropNew.getDroughtResistance() << endl;

    return 0;
}

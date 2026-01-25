#include "Crop.h"
#include <iostream>
#include <utility>
#include <vector>
#include <memory>

using namespace std;

void printCrop(const Crop& crop);

int main()
{
    vector<unique_ptr<Crop>> crops;

    // unique_ptr<Crop> crop = make_unique<Crop>(5, 10, 400);

    crops.push_back(make_unique<Crop>(5, 10, 400));
    crops.push_back(make_unique<Crop>(4, 15, 250));
    crops.push_back(make_unique<Crop>(7, 12, 340));
    crops.push_back(make_unique<Crop>(5, 10, 400));

    
    cout << "Crop 1: " << endl;
    printCrop(*crops[0]);
    cout << "Crop 2: " << endl;
    printCrop(*crops[1]);
    cout << "Crop 3: " << endl;
    printCrop(*crops[2]);
    cout << "Crop 4: " << endl;
    printCrop(*crops[3]);


    cout << "Crop 1 == Crop 4?  " << boolalpha << (*crops[0] == *crops[3]) << endl;
    cout << "Crop 1 > Crop 2?  " << boolalpha << (*crops[0] > *crops[1]) << endl;
    

    Crop cropHybrid = *crops[0] + *crops[1];

    cout << "Hybridizing two crops...." << endl;
    cout << "Created New Crop!" << endl;
    printCrop(cropHybrid);

    *crops[0] = *crops[2];
    cout << "Crop 1: " << endl;
    printCrop(*crops[0]);
  

    return 0;
}

void printCrop(const Crop& crop)
{
    cout << "Height: " << crop.getHeight();
    cout << ",  Yield: " << crop.getYield();
    cout << ",  Drought resistance: " << crop.getDroughtResistance();
    cout << ",  Score: " << crop.getScore() << endl;
}

#ifndef EXHIBIT_H
#define EXHIBIT_H

#include <string>

using namespace std;

class Exhibit
{
private:
    string name;
    int roomNumber;
    double displaySize;

public:
    Exhibit(const string name, const int roomNumber, const double displaySize);
    string getName();
    int getRoomNumber();
    double getDisplaySize();
};

#endif
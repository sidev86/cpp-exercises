#include <iostream>
#include "Rectangle.h"
#include "RectangleHelper.h"

using namespace std;

void changeData(Rectangle &rect);
void printData(Rectangle &rect);

int main()
{
    Rectangle r1(10, 25);
    RectangleHelper helper;

    printData(r1);
    cout << "r1 area: " << r1.area() << "\n"
         << endl;

    changeData(r1);

    printData(r1);
    cout << "Now r1 area: " << r1.area() << "\n"
         << endl;

    helper.modifyRectangle(r1);
    printData(r1);

    cout << "After helper changes, r1 area: " << r1.area() << "\n"
         << endl;
    return 0;
}

void changeData(Rectangle &rect)
{
    rect.length = 100;
    rect.width = 100;
}

void printData(Rectangle &rect)
{
    cout << "Length => " << rect.length << endl;
    cout << "Width => " << rect.width << endl;
}
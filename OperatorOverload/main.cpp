#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{

    Rectangle rect1(10, 20);
    Rectangle rect2(50, 100);
    Rectangle rect3(10, 20);
    Rectangle rect4(40, 60);
    Rectangle resultRect;

    resultRect = rect1 + rect2;

    cout << "rect1 == rect3? " << boolalpha << (rect1 == rect3) << endl;
    cout << "rect1 != rect2? " << boolalpha << (rect1 != rect2) << endl;
    cout << "resultRect: " << resultRect.getLength() << " * " << resultRect.getWidth() << " = " << resultRect.area() << endl;

    cout << "rect1 area < rect2 area? " << boolalpha << (rect1 < rect2) << endl;
    cout << "rect2 area < rect4 area? " << boolalpha << (rect2 < rect4) << endl;

    return 0;
}
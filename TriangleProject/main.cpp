#include "Triangle.h"
#include <iostream>

using namespace std;

void printTriangleInformations(const Triangle &triangle);

int main()
{
    Triangle t1;
    Triangle t2(4, 8, 10);
    Triangle t3(2, 4, 8);

    t2.setSideA(5);

    printTriangleInformations(t1);
    printTriangleInformations(t2);
    printTriangleInformations(t3);
    return 0;
}

void printTriangleInformations(const Triangle &triangle)
{
    cout << "----TRIANGLE----" << endl;
    cout << "Sides Lengths:\nSide A -> " << triangle.getSideA()
         << "\nSide B -> " << triangle.getSideB()
         << "\nSide C -> " << triangle.getSideC() << endl;
    if (!triangle.isValid())
    {
        cout << "This triangle is invalid" << endl;
    }
    else
    {
        cout << "The perimeter of the triangle is " << triangle.perimeter() << endl;
        cout << "The area of the triangle is " << triangle.area() << endl;
    }
}

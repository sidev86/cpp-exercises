#include "Triangle.h"
#include <cmath>
#include <iostream>

using namespace std;

Triangle::Triangle()
{
    sideA = 1;
    sideB = 1;
    sideC = 1;
}

Triangle::Triangle(double sideA, double sideB, double sideC)
{
    this->sideA = sideA;
    this->sideB = sideB;
    this->sideC = sideC;
}

double Triangle::getSideA() const
{
    return sideA;
}
double Triangle::getSideB() const
{
    return sideB;
}
double Triangle::getSideC() const
{
    return sideC;
}

void Triangle::setSideA(double sideA)
{
    this->sideA = sideA;
}
void Triangle::setSideB(double sideB)
{
    this->sideB = sideB;
}
void Triangle::setSideC(double sideC)
{
    this->sideC = sideC;
}

bool Triangle::isValid() const
{
    return sideA + sideB > sideC;
}

double Triangle::perimeter() const
{
    return sideA + sideB + sideC;
}

double Triangle::area() const
{
    if (!isValid())
    {
        cout << "Cannot commpute area. Invalid Triangle!" << endl;
    }
    double const s = perimeter() / 2;
    return sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
}
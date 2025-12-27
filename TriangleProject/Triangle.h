#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
    double sideA;
    double sideB;
    double sideC;

public:
    Triangle();
    Triangle(double sideA, double sideB, double sideC);
    double getSideA() const;
    double getSideB() const;
    double getSideC() const;
    void setSideA(double sideA);
    void setSideB(double sideB);
    void setSideC(double sideC);
    bool isValid() const;
    double perimeter() const;
    double area() const;
};

#endif
#include "Rectangle.h"

Rectangle::Rectangle()
{
    width = 100;
    length = 100;
}

Rectangle::Rectangle(double length, double width)
{
    this->width = width;
    this->length = length;
}
double Rectangle::getLength() const
{
    return length;
}
double Rectangle::getWidth() const
{
    return width;
}
void Rectangle::setLength(double length)
{
    this->length = length;
}
void Rectangle::setWidth(double width)
{
    this->width = width;
}
double Rectangle::area() const
{
    return width * length;
}
double Rectangle::perimeter() const
{
    return 2 * (width + length);
}
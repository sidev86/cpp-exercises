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

bool Rectangle::operator==(const Rectangle &other) const
{
    return length == other.length && width == other.width;
}
bool Rectangle::operator!=(const Rectangle &other) const
{
    return !(*this == other);
}

bool Rectangle::operator<(const Rectangle &other) const
{
    return (*this).area() < other.area();
}
Rectangle Rectangle::operator+(const Rectangle &other) const
{
    return Rectangle(length + other.length, width + other.width);
}
void Rectangle::operator=(const Rectangle &other)
{
    width = other.width;
    length = other.length;
}
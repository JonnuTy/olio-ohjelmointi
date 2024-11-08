#include "rectangle.h"

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

void Rectangle::setHeight(double newHeight)
{
    height = newHeight;
}

double Rectangle::getArea()
{
    double area = width * height;
    return area;
}

double Rectangle::getCircum()
{
    double circum = 2 * (width + height);
    return circum;
}

Rectangle::Rectangle(double w, double h) {
    width = w;
    height = h;
}


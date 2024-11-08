#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(double, double);
    double getArea();
    double getCircum();
    void setWidth(double newWidth);
    void setHeight(double newHeight);
};

#endif // RECTANGLE_H

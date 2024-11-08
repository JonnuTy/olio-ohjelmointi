#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    Car *objCar1=new Car("Volkswagen","Passat",2011);

    objCar1->printData();

    delete objCar1;
    objCar1=nullptr;

    Rectangle *objRectangle1=new Rectangle(2,3);

    cout<<objRectangle1->getArea()<<" "<<objRectangle1->getCircum()<<endl;

    delete objRectangle1;
    objRectangle1=nullptr;

    Student* objStudent1 = new Student("Jaakko", 1234, 8.7);

    cout<<objStudent1->getName()<<" "<<objStudent1->getStudentNumber()<<", "<<objStudent1->getAverage()<<endl;

    delete objStudent1;
    objStudent1=nullptr;

    return 0;
}

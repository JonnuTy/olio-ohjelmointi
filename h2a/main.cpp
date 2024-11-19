#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar1("Volkswagen","Passat",2011);

    objCar1.printData();

    Rectangle *objRectangle1=new Rectangle(2,3);

    cout<<objRectangle1->getArea()<<" "<<objRectangle1->getCircum()<<endl;

    delete objRectangle1;
    objRectangle1=nullptr;

    shared_ptr<Student> objStudent2 = make_shared<Student>("Jaakko", 1234, 8.7);

    cout<<objStudent2->getName()<<" "<<objStudent2->getStudentNumber()<<", "<<objStudent2->getAverage()<<endl;

    return 0;
}

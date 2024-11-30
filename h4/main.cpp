#include "car.h"

#include <iostream>

using namespace std;

int main()
{
    Car objCar1("Corolla","Toyota");
    objCar1.setEngine();
    objCar1.setWheels();
    objCar1.printDetails();

    return 0;
}

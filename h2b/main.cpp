#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar1("Seat", "Toledo", 2004);
    Car objCar2("Audi", "A4", 2012);
    Car objCar3("Honda", "Accord", 2008);

    carList.push_back(objCar1);
    carList.push_back(objCar2);
    carList.push_back(objCar3);

    carList[1].printData();

    for(int x=0; x<=2; x++) {
        carList[x].printData();
    }

    return 0;
}
